/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x14026AF90
 * Callers:
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiDeleteBatch @ 0x140238450 (MiDeleteBatch.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiReplacePageOfProtoPool @ 0x140268F5C (MiReplacePageOfProtoPool.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140269EA8 (MiRewriteTrimPteAsDemandZero.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiInitializeTransitionPfn @ 0x14026E22C (MiInitializeTransitionPfn.c)
 *     MiHandleCollidedFault @ 0x14028BEFC (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiTradeActivePage @ 0x1402B65F0 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1402C6830 (MiSwapStackPageNoDpc.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1402C817C (MiUnlockNestedProtoPoolPage.c)
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 *     MiObtainProtoReference @ 0x14031A00C (MiObtainProtoReference.c)
 *     MiReplacePageTablePage @ 0x140363DF0 (MiReplacePageTablePage.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     MiGetBaseResidentPage @ 0x1403F6734 (MiGetBaseResidentPage.c)
 *     MiStackTheftFreezeProcessors @ 0x14053632C (MiStackTheftFreezeProcessors.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E428 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14053F4B0 (MmMapHotPatchTablePage.c)
 *     MiSplitDirectMapPage @ 0x14054213C (MiSplitDirectMapPage.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x140563770 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
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
