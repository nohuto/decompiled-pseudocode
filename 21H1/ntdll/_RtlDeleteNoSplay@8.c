/*
 * XREFs of _RtlDeleteNoSplay@8 @ 0x4B2E77B0
 * Callers:
 *     <none>
 * Callees:
 *     _SwapSplayLinks@8 @ 0x4B2E7836 (_SwapSplayLinks@8.c)
 *     _RtlSubtreePredecessor@4 @ 0x4B2E7900 (_RtlSubtreePredecessor@4.c)
 */

void __cdecl RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // ecx
  _RTL_SPLAY_LINKS *v3; // eax

  if ( Links->LeftChild && Links->RightChild )
  {
    v3 = RtlSubtreePredecessor(Links);
    if ( Links->Parent == Links )
      *Root = v3;
    SwapSplayLinks(v3, Links);
  }
  LeftChild = Links->LeftChild;
  if ( LeftChild || (LeftChild = Links->RightChild) != 0 )
  {
    if ( Links->Parent == Links )
    {
      LeftChild->Parent = LeftChild;
      *Root = LeftChild;
    }
    else
    {
      *((_DWORD *)&Links->Parent->LeftChild + (Links->Parent->LeftChild != Links)) = LeftChild;
      LeftChild->Parent = Links->Parent;
    }
  }
  else if ( Links->Parent == Links )
  {
    *Root = 0;
  }
  else
  {
    *((_DWORD *)&Links->Parent->LeftChild + (Links->Parent->LeftChild != Links)) = 0;
  }
}
