/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x1402FE700
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiDeleteBatch @ 0x14029A5F0 (MiDeleteBatch.c)
 *     MiTradeActivePage @ 0x1402F16A8 (MiTradeActivePage.c)
 *     MiReplacePageTablePage @ 0x1403047BC (MiReplacePageTablePage.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403177D0 (MiSwapStackPageNoDpc.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140318B64 (MiUnlockNestedProtoPoolPage.c)
 *     MiHandleCollidedFault @ 0x140341780 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiInitializeTransitionPfn @ 0x14034BD4C (MiInitializeTransitionPfn.c)
 *     MiReplacePageOfProtoPool @ 0x14035032C (MiReplacePageOfProtoPool.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140350B54 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiGetBaseResidentPage @ 0x1403EF724 (MiGetBaseResidentPage.c)
 *     MiStackTheftFreezeProcessors @ 0x14053080C (MiStackTheftFreezeProcessors.c)
 *     MiClearDriverHotPatchPtes @ 0x140538908 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140539990 (MmMapHotPatchTablePage.c)
 *     MiSplitDirectMapPage @ 0x14053C61C (MiSplitDirectMapPage.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x14055DC80 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140A42A24 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A4F77C (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v6, a2, a3, a4);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
