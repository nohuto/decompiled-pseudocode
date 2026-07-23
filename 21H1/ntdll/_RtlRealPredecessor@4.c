/*
 * XREFs of _RtlRealPredecessor@4 @ 0x4B35DFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlRealPredecessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v1; // edx
  PRTL_SPLAY_LINKS result; // eax
  _RTL_SPLAY_LINKS *i; // ecx

  v1 = Links;
  result = Links->LeftChild;
  if ( result )
  {
    while ( result->RightChild )
      result = result->RightChild;
  }
  else
  {
    for ( i = Links->Parent; i->LeftChild == v1; i = i->Parent )
      v1 = i;
    return v1 == i->RightChild ? i : 0;
  }
  return result;
}
