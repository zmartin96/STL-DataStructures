/*
->Container: linked list, vectors, queues, stacks
->Iterator: points to a node in the container
(implements sequential access memory)
*/
#include <iostream>
#include <list>     // Include the list header (doubly linked)
using namespace std;

bool isMult20(int& value)
{
	if (value % 20 == 0) return 1;
	else return 0;
}

int main()
{
	//the STL is templated
	list<int> myList; //container
	list<int>::iterator iter; //iterator

	// Add values to the list
	for (int x = 0; x < 100; x += 10)
		myList.push_back(x);

	// Display the values
	for (iter = myList.begin(); iter != myList.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	// Now reverse the order of the elements
	myList.reverse();

	// Display the values again
	for (iter = myList.begin(); iter != myList.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	myList.remove_if(isMult20);
	//cout<<myList.max_size();
	for (iter = myList.begin(); iter != myList.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	return 0;
}