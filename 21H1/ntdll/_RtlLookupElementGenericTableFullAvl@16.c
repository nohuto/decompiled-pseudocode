/*
 * XREFs of _RtlLookupElementGenericTableFullAvl@16 @ 0x4B2A7050
 * Callers:
 *     _RtlLookupElementGenericTableAvl@8 @ 0x4B2A7020 (_RtlLookupElementGenericTableAvl@8.c)
 * Callees:
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v4; // eax

  v4 = FindNodeOrParent(NodeOrParent);
  *SearchResult = v4;
  if ( v4 == TableFoundNode )
    return (char *)*NodeOrParent + 16;
  else
    return 0;
}
