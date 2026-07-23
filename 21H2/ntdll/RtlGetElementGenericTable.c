/*
 * XREFs of RtlGetElementGenericTable @ 0x18007F130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlGetElementGenericTable(PRTL_GENERIC_TABLE Table, ULONG I)
{
  ULONG WhichOrderedElement; // r10d
  ULONG v3; // r11d
  PLIST_ENTRY OrderedPointer; // r8
  ULONG v5; // r9d
  ULONG NumberGenericTableElements; // eax
  ULONG v7; // edx
  unsigned int v8; // eax
  ULONG i; // r10d

  WhichOrderedElement = Table->WhichOrderedElement;
  v3 = I + 1;
  OrderedPointer = Table->OrderedPointer;
  v5 = I + 1;
  if ( I == -1 )
    return 0LL;
  NumberGenericTableElements = Table->NumberGenericTableElements;
  if ( v3 > NumberGenericTableElements )
    return 0LL;
  if ( v3 != WhichOrderedElement )
  {
    if ( v3 < WhichOrderedElement )
    {
      if ( v3 <= WhichOrderedElement >> 1 )
      {
        OrderedPointer = &Table->InsertOrderList;
        do
        {
          OrderedPointer = OrderedPointer->Flink;
          --v5;
        }
        while ( v5 );
      }
      else
      {
        for ( i = WhichOrderedElement - v3; i; --i )
          OrderedPointer = OrderedPointer->Blink;
      }
    }
    else
    {
      v7 = v3 - WhichOrderedElement;
      v8 = NumberGenericTableElements - v3 + 1;
      if ( v3 - WhichOrderedElement > v8 )
      {
        for ( OrderedPointer = &Table->InsertOrderList; v8; --v8 )
          OrderedPointer = OrderedPointer->Blink;
      }
      else
      {
        for ( ; v7; --v7 )
          OrderedPointer = OrderedPointer->Flink;
      }
    }
    Table->OrderedPointer = OrderedPointer;
    Table->WhichOrderedElement = v3;
  }
  return &OrderedPointer[1];
}
