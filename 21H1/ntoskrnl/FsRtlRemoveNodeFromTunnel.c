/*
 * XREFs of FsRtlRemoveNodeFromTunnel @ 0x1402F38CC
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406B9AE0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlPruneTunnelCache @ 0x1406BA044 (FsRtlPruneTunnelCache.c)
 * Callees:
 *     RtlDelete @ 0x1402E4D80 (RtlDelete.c)
 *     FsRtlFreeTunnelNode @ 0x1402F3A2C (FsRtlFreeTunnelNode.c)
 *     RtlDeleteNoSplay @ 0x1402F3A80 (RtlDeleteNoSplay.c)
 */

__int64 __fastcall FsRtlRemoveNodeFromTunnel(__int64 a1, _RTL_SPLAY_LINKS *a2, __int64 a3, _BYTE *a4)
{
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // rdx

  if ( a4 && *a4 )
  {
    *(_QWORD *)(a1 + 56) = RtlDelete(a2);
    *a4 = 0;
  }
  else
  {
    RtlDeleteNoSplay(a2, (PRTL_SPLAY_LINKS *)(a1 + 56));
  }
  Parent = a2[1].Parent;
  if ( Parent->LeftChild != &a2[1] || (LeftChild = a2[1].LeftChild, LeftChild->Parent != &a2[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --*(_WORD *)(a1 + 80);
  return FsRtlFreeTunnelNode(a2);
}
