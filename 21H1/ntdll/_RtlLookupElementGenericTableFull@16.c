/*
 * XREFs of _RtlLookupElementGenericTableFull@16 @ 0x4B2A7F10
 * Callers:
 *     _RtlLookupElementGenericTable@8 @ 0x4B2A7EE0 (_RtlLookupElementGenericTable@8.c)
 * Callees:
 *     FindNodeOrParent @ 0x4B2A7F4E (FindNodeOrParent.c)
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v4; // eax

  v4 = FindNodeOrParent(NodeOrParent);
  *SearchResult = v4;
  if ( v4 != TableFoundNode )
    return 0;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 24;
}
