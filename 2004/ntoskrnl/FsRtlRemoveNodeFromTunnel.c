/*
 * XREFs of FsRtlRemoveNodeFromTunnel @ 0x1403304CC
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406DADF0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlPruneTunnelCache @ 0x1406DB354 (FsRtlPruneTunnelCache.c)
 * Callees:
 *     RtlDelete @ 0x1402D8030 (RtlDelete.c)
 *     FsRtlFreeTunnelNode @ 0x14033062C (FsRtlFreeTunnelNode.c)
 *     RtlDeleteNoSplay @ 0x140330680 (RtlDeleteNoSplay.c)
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
