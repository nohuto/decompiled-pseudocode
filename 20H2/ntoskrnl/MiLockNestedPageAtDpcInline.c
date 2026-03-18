/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x14030DC80
 * Callers:
 *     MiHandleCollidedFault @ 0x140201AA8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiDeleteBatch @ 0x1402C6C70 (MiDeleteBatch.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiReplacePageTablePage @ 0x140313100 (MiReplacePageTablePage.c)
 *     MiTradeActivePage @ 0x140313B60 (MiTradeActivePage.c)
 *     MiReplacePageOfProtoPool @ 0x1403191F4 (MiReplacePageOfProtoPool.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140325F40 (MiSwapStackPageNoDpc.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140326FA4 (MiUnlockNestedProtoPoolPage.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346EE4 (MiRewriteTrimPteAsDemandZero.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiInitializeTransitionPfn @ 0x14035090C (MiInitializeTransitionPfn.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiGetBaseResidentPage @ 0x1403F4F98 (MiGetBaseResidentPage.c)
 *     MiStackTheftFreezeProcessors @ 0x14053482C (MiStackTheftFreezeProcessors.c)
 *     MiClearDriverHotPatchPtes @ 0x14053C928 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14053D9B0 (MmMapHotPatchTablePage.c)
 *     MiSplitDirectMapPage @ 0x14054063C (MiSplitDirectMapPage.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x140561CA0 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140A4E514 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A55AFC (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
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
