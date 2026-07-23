/*
 * XREFs of _RtlGetElementGenericTableAvl@8 @ 0x4B35E290
 * Callers:
 *     <none>
 * Callees:
 *     _RealPredecessor@4 @ 0x4B2A71B7 (_RealPredecessor@4.c)
 *     _RealSuccessor@4 @ 0x4B2AB895 (_RealSuccessor@4.c)
 */

PVOID __cdecl RtlGetElementGenericTableAvl(PRTL_AVL_TABLE Table, ULONG I)
{
  unsigned int WhichOrderedElement; // edx
  _DWORD *OrderedPointer; // ecx
  PVOID result; // eax
  int v5; // edx
  ULONG i; // ebx
  unsigned int v7; // eax
  ULONG v8; // ebx
  int v9; // edx

  WhichOrderedElement = Table->WhichOrderedElement;
  if ( I == -1 || I + 1 > Table->NumberGenericTableElements )
    return 0;
  OrderedPointer = Table->OrderedPointer;
  if ( !OrderedPointer )
  {
    for ( OrderedPointer = &Table->BalancedRoot.RightChild->Parent;
          OrderedPointer[1];
          OrderedPointer = (_DWORD *)OrderedPointer[1] )
    {
      ;
    }
    WhichOrderedElement = 0;
    Table->OrderedPointer = OrderedPointer;
    Table->WhichOrderedElement = 0;
  }
  if ( I == WhichOrderedElement )
    return OrderedPointer + 4;
  if ( I >= WhichOrderedElement )
  {
    v7 = Table->NumberGenericTableElements - I;
    v8 = I - WhichOrderedElement;
    if ( I - WhichOrderedElement > v7 )
    {
      for ( OrderedPointer = &Table->BalancedRoot.RightChild->Parent;
            OrderedPointer[2];
            OrderedPointer = (_DWORD *)OrderedPointer[2] )
      {
        ;
      }
      if ( v7 != 1 )
      {
        do
          OrderedPointer = RealPredecessor(OrderedPointer);
        while ( v9 != 1 );
      }
    }
    else
    {
      for ( ; v8; --v8 )
        OrderedPointer = RealSuccessor(OrderedPointer);
    }
  }
  else if ( I < WhichOrderedElement >> 1 )
  {
    for ( OrderedPointer = &Table->BalancedRoot.RightChild->Parent;
          OrderedPointer[1];
          OrderedPointer = (_DWORD *)OrderedPointer[1] )
    {
      ;
    }
    for ( i = I; i; --i )
      OrderedPointer = RealSuccessor(OrderedPointer);
  }
  else if ( WhichOrderedElement != I )
  {
    do
      OrderedPointer = RealPredecessor(OrderedPointer);
    while ( v5 != 1 );
  }
  Table->OrderedPointer = OrderedPointer;
  result = OrderedPointer + 4;
  Table->WhichOrderedElement = I;
  return result;
}
