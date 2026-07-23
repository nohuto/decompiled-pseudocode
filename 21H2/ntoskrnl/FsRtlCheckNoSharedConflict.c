/*
 * XREFs of FsRtlCheckNoSharedConflict @ 0x14036CA30
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x14023B430 (FsRtlFastCheckLockForWrite.c)
 * Callees:
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140364180 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlSplay @ 0x1403644C0 (RtlSplay.c)
 *     FsRtlFindFirstOverlapInNode @ 0x1404EF934 (FsRtlFindFirstOverlapInNode.c)
 */

bool __fastcall FsRtlCheckNoSharedConflict(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 FirstOverlappingSharedNode; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  Links = 0LL;
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(*(_QWORD *)(a1 + 8), a2, a3, &Links, 0LL);
  if ( Links )
    *(_QWORD *)(a1 + 8) = RtlSplay(Links);
  if ( !FirstOverlappingSharedNode )
    return 1;
  if ( *(_BYTE *)(FirstOverlappingSharedNode - 24 + 8) )
    return FsRtlFindFirstOverlapInNode(FirstOverlappingSharedNode - 24, a2, a3) == 0;
  return 0;
}
