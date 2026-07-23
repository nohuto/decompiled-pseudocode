/*
 * XREFs of _RtlInsertElementGenericTableFull@24 @ 0x4B2A7DA0
 * Callers:
 *     _RtlInsertElementGenericTable@16 @ 0x4B2A7D60 (_RtlInsertElementGenericTable@16.c)
 * Callees:
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

PVOID __cdecl RtlInsertElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  int v6; // eax
  _RTL_SPLAY_LINKS *v7; // esi
  _LIST_ENTRY *v8; // eax
  _LIST_ENTRY *Blink; // edx
  size_t v11; // [esp-4h] [ebp-10h]

  if ( SearchResult == TableFoundNode )
  {
    v7 = (_RTL_SPLAY_LINKS *)NodeOrParent;
LABEL_8:
    Table->TableRoot = RtlSplay(v7);
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v7[2];
  }
  if ( BufferSize + 24 >= BufferSize )
  {
    v6 = ((int (__thiscall *)(PRTL_GENERIC_ALLOCATE_ROUTINE, PRTL_GENERIC_TABLE, CLONG))Table->AllocateRoutine)(
           Table->AllocateRoutine,
           Table,
           BufferSize + 24);
    v7 = (_RTL_SPLAY_LINKS *)v6;
    if ( v6 )
    {
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 8) = 0;
      v8 = (_LIST_ENTRY *)(v6 + 12);
      v7->Parent = v7;
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v8->Flink = &Table->InsertOrderList;
      v7[1].LeftChild = (_RTL_SPLAY_LINKS *)Blink;
      Blink->Flink = v8;
      Table->InsertOrderList.Blink = v8;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_DWORD *)NodeOrParent + 1) = v7;
        else
          *((_DWORD *)NodeOrParent + 2) = v7;
        v7->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v7;
      }
      LODWORD(v11) = BufferSize;
      memcpy(&v7[2], Buffer, v11);
      goto LABEL_8;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0;
}
