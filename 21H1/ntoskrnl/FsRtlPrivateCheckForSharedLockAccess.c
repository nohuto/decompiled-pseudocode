/*
 * XREFs of FsRtlPrivateCheckForSharedLockAccess @ 0x1402E4A80
 * Callers:
 *     FsRtlPrivateLock @ 0x1402E3940 (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F3874 (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1402E29B8 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     RtlSplay @ 0x1402E4B90 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x1402F3830 (RtlRealSuccessor.c)
 */

char __fastcall FsRtlPrivateCheckForSharedLockAccess(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  char v5; // bl
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // r9
  _RTL_SPLAY_LINKS *v8; // rsi
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  Links = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v5 = 1;
  if ( v3 )
  {
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        v3,
                                                        (unsigned __int64 *)a2,
                                                        (unsigned __int64 *)(a2 + 40),
                                                        &Links,
                                                        0LL);
    if ( FirstOverlappingExclusiveNode )
    {
      v8 = *(_RTL_SPLAY_LINKS **)(a2 + 40);
      while ( FirstOverlappingExclusiveNode[1].Parent <= v8 )
      {
        if ( (FirstOverlappingExclusiveNode[2].Parent != *(_RTL_SPLAY_LINKS **)(a2 + 24)
           || FirstOverlappingExclusiveNode[2].LeftChild != *(_RTL_SPLAY_LINKS **)(a2 + 32)
           || HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) != *(_DWORD *)(a2 + 20))
          && (*(_QWORD *)(a2 + 8) || FirstOverlappingExclusiveNode[1].LeftChild) )
        {
          v5 = 0;
          break;
        }
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        if ( !FirstOverlappingExclusiveNode )
          break;
      }
    }
    if ( Links )
      *(_QWORD *)(a1 + 16) = RtlSplay(Links);
  }
  return v5;
}
