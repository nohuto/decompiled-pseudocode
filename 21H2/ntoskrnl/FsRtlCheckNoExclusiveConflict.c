/*
 * XREFs of FsRtlCheckNoExclusiveConflict @ 0x14036BE48
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x14023B430 (FsRtlFastCheckLockForWrite.c)
 *     FsRtlFastCheckLockForRead @ 0x140363D70 (FsRtlFastCheckLockForRead.c)
 * Callees:
 *     RtlRealSuccessor @ 0x14021D2F0 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x14022C01C (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     RtlSplay @ 0x1403644C0 (RtlSplay.c)
 */

char __fastcall FsRtlCheckNoExclusiveConflict(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  char v10; // bl
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbp
  PRTL_SPLAY_LINKS Links; // [rsp+60h] [rbp+8h] BYREF

  Links = 0LL;
  v10 = 1;
  FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                      *(_QWORD **)(a1 + 16),
                                                      a2,
                                                      a3,
                                                      &Links,
                                                      0LL);
  if ( FirstOverlappingExclusiveNode )
  {
    v13 = *a3;
    v14 = a6;
    v15 = a5;
    while ( (_RTL_SPLAY_LINKS *)v13 >= FirstOverlappingExclusiveNode[1].Parent )
    {
      if ( (_RTL_SPLAY_LINKS *)*a2 <= FirstOverlappingExclusiveNode[2].RightChild
        && (FirstOverlappingExclusiveNode[2].Parent != (_RTL_SPLAY_LINKS *)v15
         || FirstOverlappingExclusiveNode[2].LeftChild != (_RTL_SPLAY_LINKS *)v14
         || HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) != a4) )
      {
        v10 = 0;
        break;
      }
      FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
      if ( !FirstOverlappingExclusiveNode )
        break;
    }
  }
  if ( Links )
    *(_QWORD *)(a1 + 16) = RtlSplay(Links);
  return v10;
}
