/*
 * XREFs of _RtlInsertElementGenericTable@16 @ 0x4B2A7D60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInsertElementGenericTableFull@24 @ 0x4B2A7DA0 (_RtlInsertElementGenericTableFull@24.c)
 *     FindNodeOrParent @ 0x4B2A7F4E (FindNodeOrParent.c)
 */

PVOID __cdecl RtlInsertElementGenericTable(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT v4; // eax
  PVOID NodeOrParent; // [esp+0h] [ebp-4h] BYREF

  v4 = FindNodeOrParent(&NodeOrParent);
  return RtlInsertElementGenericTableFull(Table, Buffer, BufferSize, NewElement, NodeOrParent, v4);
}
