/*
 * XREFs of _RtlSubtreePredecessor@4 @ 0x4B2E7900
 * Callers:
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _RtlDeleteNoSplay@8 @ 0x4B2E77B0 (_RtlDeleteNoSplay@8.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSubtreePredecessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // eax

  result = Links->LeftChild;
  if ( !result )
    return 0;
  while ( result->RightChild )
    result = result->RightChild;
  return result;
}
