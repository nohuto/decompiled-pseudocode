/*
 * XREFs of _RtlGetElementGenericTable@8 @ 0x4B35E0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlGetElementGenericTable(PRTL_GENERIC_TABLE Table, ULONG I)
{
  ULONG v2; // edx
  ULONG WhichOrderedElement; // esi
  PLIST_ENTRY OrderedPointer; // ecx
  ULONG NumberGenericTableElements; // eax
  ULONG i; // esi
  ULONG v8; // ebx
  unsigned int v9; // eax

  v2 = I + 1;
  WhichOrderedElement = Table->WhichOrderedElement;
  OrderedPointer = Table->OrderedPointer;
  if ( I == -1 )
    return 0;
  NumberGenericTableElements = Table->NumberGenericTableElements;
  if ( v2 > NumberGenericTableElements )
    return 0;
  if ( v2 != WhichOrderedElement )
  {
    if ( v2 >= WhichOrderedElement )
    {
      v8 = v2 - WhichOrderedElement;
      v9 = NumberGenericTableElements - I;
      if ( v2 - WhichOrderedElement > v9 )
      {
        for ( OrderedPointer = &Table->InsertOrderList; v9; --v9 )
          OrderedPointer = OrderedPointer->Blink;
      }
      else
      {
        for ( ; v8; --v8 )
          OrderedPointer = OrderedPointer->Flink;
      }
    }
    else if ( v2 <= WhichOrderedElement >> 1 )
    {
      OrderedPointer = &Table->InsertOrderList;
      do
      {
        OrderedPointer = OrderedPointer->Flink;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      for ( i = WhichOrderedElement - v2; i; --i )
        OrderedPointer = OrderedPointer->Blink;
    }
    Table->OrderedPointer = OrderedPointer;
    Table->WhichOrderedElement = I + 1;
  }
  return &OrderedPointer[1].Blink;
}
