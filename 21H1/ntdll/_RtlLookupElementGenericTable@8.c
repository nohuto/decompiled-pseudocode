/*
 * XREFs of _RtlLookupElementGenericTable@8 @ 0x4B2A7EE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLookupElementGenericTableFull@16 @ 0x4B2A7F10 (_RtlLookupElementGenericTableFull@16.c)
 */

PVOID __cdecl RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PVOID NodeOrParent; // [esp+0h] [ebp-8h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [esp+4h] [ebp-4h] BYREF

  return RtlLookupElementGenericTableFull(Table, Buffer, &NodeOrParent, &SearchResult);
}
