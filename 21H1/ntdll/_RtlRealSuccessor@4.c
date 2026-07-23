/*
 * XREFs of _RtlRealSuccessor@4 @ 0x4B35E030
 * Callers:
 *     _RtlEnumerateGenericTableWithoutSplaying@8 @ 0x4B2AB9A0 (_RtlEnumerateGenericTableWithoutSplaying@8.c)
 *     _RtlEnumerateGenericTable@8 @ 0x4B35E0A0 (_RtlEnumerateGenericTable@8.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v1; // edx
  PRTL_SPLAY_LINKS result; // eax
  _RTL_SPLAY_LINKS *i; // ecx

  v1 = Links;
  result = Links->RightChild;
  if ( result )
  {
    while ( result->LeftChild )
      result = result->LeftChild;
  }
  else
  {
    for ( i = Links->Parent; i->RightChild == v1; i = i->Parent )
      v1 = i;
    return v1 == i->LeftChild ? i : 0;
  }
  return result;
}
