/*
 * XREFs of FsRtlPrivateCheckForExclusiveLockAccess @ 0x14021F198
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021F280 (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x14021DCF4 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x14021E8B8 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 *     FsRtlFindFirstOverlapInNode @ 0x140541A84 (FsRtlFindFirstOverlapInNode.c)
 */

char __fastcall FsRtlPrivateCheckForExclusiveLockAccess(__int64 a1, unsigned __int64 *a2)
{
  RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 FirstOverlappingSharedNode; // rax
  PRTL_SPLAY_LINKS v9; // rax
  _QWORD *FirstOverlappingExclusiveNode; // rax
  __int64 v11; // rax
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  Links = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v5, a2, a2 + 5, &Links, 0LL);
    if ( FirstOverlappingSharedNode )
    {
      v11 = *(_BYTE *)(FirstOverlappingSharedNode - 16)
          ? FsRtlFindFirstOverlapInNode(FirstOverlappingSharedNode - 24, a2, a2 + 5)
          : *(_QWORD *)(FirstOverlappingSharedNode - 24);
      if ( v11 && (a2[1] || *(_QWORD *)(v11 + 16)) )
        return 0;
    }
    v4 = Links;
    if ( Links )
    {
      v9 = RtlSplay(Links);
      v4 = 0LL;
      *(_QWORD *)(a1 + 8) = v9;
      Links = 0LL;
    }
  }
  v6 = *(_QWORD **)(a1 + 16);
  if ( v6 )
  {
    FirstOverlappingExclusiveNode = FsRtlFindFirstOverlappingExclusiveNode(v6, a2, a2 + 5, &Links, 0LL);
    if ( !FirstOverlappingExclusiveNode || !a2[1] && !FirstOverlappingExclusiveNode[4] )
    {
      v4 = Links;
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  if ( v4 )
    *(_QWORD *)(a1 + 16) = RtlSplay(v4);
  return 1;
}
