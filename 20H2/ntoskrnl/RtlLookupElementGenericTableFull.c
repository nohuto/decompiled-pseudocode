/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x14058A280
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1402F9610 (RtlSplay.c)
 *     FindNodeOrParent_0 @ 0x1402F9ACC (FindNodeOrParent_0.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT NodeOrParent_0; // eax

  NodeOrParent_0 = (unsigned int)FindNodeOrParent_0((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = NodeOrParent_0;
  if ( NodeOrParent_0 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
