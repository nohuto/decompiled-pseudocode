/*
 * XREFs of _RtlDelete@4 @ 0x4B2A7FC0
 * Callers:
 *     _RtlDeleteElementGenericTable@8 @ 0x4B2A7E60 (_RtlDeleteElementGenericTable@8.c)
 *     _PfxRemovePrefix@8 @ 0x4B345310 (_PfxRemovePrefix@8.c)
 *     _RtlpTpIoDllLoaded@4 @ 0x4B385807 (_RtlpTpIoDllLoaded@4.c)
 * Callees:
 *     _SwapSplayLinks@8 @ 0x4B2E7836 (_SwapSplayLinks@8.c)
 *     _RtlSubtreePredecessor@4 @ 0x4B2E7900 (_RtlSubtreePredecessor@4.c)
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *LeftChild; // ecx
  _RTL_SPLAY_LINKS *v2; // ecx
  PRTL_SPLAY_LINKS result; // eax
  PRTL_SPLAY_LINKS v4; // eax
  _RTL_SPLAY_LINKS *Parent; // eax
  _RTL_SPLAY_LINKS *v6; // [esp-4h] [ebp-8h]

  LeftChild = Links->LeftChild;
  if ( LeftChild )
  {
    if ( Links->RightChild )
    {
      v4 = RtlSubtreePredecessor(Links);
      SwapSplayLinks(v4, Links);
      LeftChild = Links->LeftChild;
    }
    if ( LeftChild )
      goto LABEL_8;
  }
  LeftChild = Links->RightChild;
  if ( LeftChild )
  {
LABEL_8:
    if ( Links->Parent == Links )
    {
      LeftChild->Parent = LeftChild;
      return LeftChild;
    }
    else
    {
      *((_DWORD *)&Links->Parent->LeftChild + (Links->Parent->LeftChild != Links)) = LeftChild;
      Parent = Links->Parent;
      LeftChild->Parent = Links->Parent;
      return RtlSplay(Parent);
    }
  }
  else
  {
    v2 = Links->Parent;
    result = 0;
    if ( Links->Parent != Links )
    {
      v6 = Links->Parent;
      LOBYTE(result) = v2->LeftChild != Links;
      *((_DWORD *)&v2->LeftChild + (_DWORD)result) = 0;
      return RtlSplay(v6);
    }
  }
  return result;
}
