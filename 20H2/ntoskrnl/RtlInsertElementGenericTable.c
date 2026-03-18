/*
 * XREFs of RtlInsertElementGenericTable @ 0x1402F8880
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFull @ 0x1402F88F0 (RtlInsertElementGenericTableFull.c)
 *     FindNodeOrParent_0 @ 0x1402F9ACC (FindNodeOrParent_0.c)
 */

PVOID __stdcall RtlInsertElementGenericTable(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent[0] = 0LL;
  SearchResult = (unsigned int)FindNodeOrParent_0(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFull(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
