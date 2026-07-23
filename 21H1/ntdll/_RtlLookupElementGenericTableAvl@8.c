/*
 * XREFs of _RtlLookupElementGenericTableAvl@8 @ 0x4B2A7020
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLookupElementGenericTableFullAvl@16 @ 0x4B2A7050 (_RtlLookupElementGenericTableFullAvl@16.c)
 */

PVOID __cdecl RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  PVOID NodeOrParent; // [esp+0h] [ebp-8h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [esp+4h] [ebp-4h] BYREF

  return RtlLookupElementGenericTableFullAvl(Table, Buffer, &NodeOrParent, &SearchResult);
}
