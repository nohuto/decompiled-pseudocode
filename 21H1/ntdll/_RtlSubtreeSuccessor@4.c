/*
 * XREFs of _RtlSubtreeSuccessor@4 @ 0x4B35E070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSubtreeSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // eax

  result = Links->RightChild;
  if ( result )
  {
    while ( result->LeftChild )
      result = result->LeftChild;
  }
  return result;
}
