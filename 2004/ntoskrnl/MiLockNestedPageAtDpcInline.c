/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x14033B220
 * Callers:
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiDeleteBatch @ 0x1402415C0 (MiDeleteBatch.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiReplacePageOfProtoPool @ 0x1402F4350 (MiReplacePageOfProtoPool.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402F4B78 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     MiHandleCollidedFault @ 0x140312448 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiInitializeTransitionPfn @ 0x14031CA0C (MiInitializeTransitionPfn.c)
 *     MiTradeActivePage @ 0x14032D448 (MiTradeActivePage.c)
 *     MiReplacePageTablePage @ 0x14034221C (MiReplacePageTablePage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140355280 (MiSwapStackPageNoDpc.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140356754 (MiUnlockNestedProtoPoolPage.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiGetBaseResidentPage @ 0x1403F0A84 (MiGetBaseResidentPage.c)
 *     MiStackTheftFreezeProcessors @ 0x140530E5C (MiStackTheftFreezeProcessors.c)
 *     MiClearDriverHotPatchPtes @ 0x140538F58 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140539FE0 (MmMapHotPatchTablePage.c)
 *     MiSplitDirectMapPage @ 0x14053CC6C (MiSplitDirectMapPage.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x14055E2D0 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140A48284 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A5547C (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
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
