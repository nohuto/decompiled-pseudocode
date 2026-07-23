/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140405300
 * Callers:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     ExFreeToPagedLookasideList @ 0x14020A4F0 (ExFreeToPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     RtlpHpVsContextFree @ 0x140215910 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     IopFreeIrp @ 0x140218F70 (IopFreeIrp.c)
 *     MiQueuePageAccessLog @ 0x14023356C (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x140244008 (PfpReturnAccessBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x140244110 (PfFbBufferListInsertInFree.c)
 *     PfFbLogEntryReserve @ 0x14024496C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140244A48 (PfFbLogEntryComplete.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140256770 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x1402582B8 (MiStoreFreeWriteSupport.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14025BFF8 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14028C9B0 (ExpWorkerFactoryCheckCreate.c)
 *     CcFreeWorkQueueEntry @ 0x14029EB6C (CcFreeWorkQueueEntry.c)
 *     PfFileInfoNotify @ 0x1402A0D50 (PfFileInfoNotify.c)
 *     MmDeleteKernelStack @ 0x1402ADF80 (MmDeleteKernelStack.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertInPageBlock @ 0x1402CA838 (MiInsertInPageBlock.c)
 *     MiDeleteParentDecayNode @ 0x14030F9AC (MiDeleteParentDecayNode.c)
 *     PfTFullEventListAdd @ 0x140314A4C (PfTFullEventListAdd.c)
 *     MiClearPageFileHash @ 0x14032A0D4 (MiClearPageFileHash.c)
 *     MiDecayPfnFullyInitialized @ 0x140351A08 (MiDecayPfnFullyInitialized.c)
 *     VfPoolDelayFreeIfPossible @ 0x1403724B0 (VfPoolDelayFreeIfPossible.c)
 *     KeFreeInterrupt @ 0x14037687C (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14037728C (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037BBA0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfFbBufferListAllocate @ 0x1403C48C4 (PfFbBufferListAllocate.c)
 *     HalpInitializeGhesRecovery @ 0x1403C511C (HalpInitializeGhesRecovery.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C64BC (HalpDmaReleaseBufferMappings.c)
 *     HalpErrorDeferredHandler @ 0x1404CE2F0 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CE560 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404CE778 (HalpPmemErrorDeferredRecovery.c)
 *     CmpFreeCallbackContext @ 0x1404EACCC (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x1404F1890 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x140558524 (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x14055D590 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x14055D804 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x14055DB24 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055E590 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x14058438C (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A4364 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x1405A517C (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A5210 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1405A5704 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x1405AC0B8 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1405AC3AC (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AD668 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AD760 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1405AD9BC (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AE8B4 (EtwpTraceLastBranchRecord.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405D9BF0 (IoCreateStreamFileObjectEx2.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     IopFreeMiniCompletionPacket @ 0x1405EB920 (IopFreeMiniCompletionPacket.c)
 *     AlpcpUnlockBlob @ 0x1405EEEC0 (AlpcpUnlockBlob.c)
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1405FD390 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1405FD450 (FsRtlFreeExtraCreateParameter.c)
 *     ObpFreeObjectNameBuffer @ 0x1405FDCC8 (ObpFreeObjectNameBuffer.c)
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     ObpFreeObject @ 0x140611220 (ObpFreeObject.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140618FF0 (NtQueryKey.c)
 *     CmpCleanupPathInfo @ 0x14061BCA0 (CmpCleanupPathInfo.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
 *     RtlpGetRegistryHandle @ 0x14066D824 (RtlpGetRegistryHandle.c)
 *     CmpBounceContextCleanup @ 0x140677B30 (CmpBounceContextCleanup.c)
 *     CmpFreeKeyControlBlock @ 0x1406A38E0 (CmpFreeKeyControlBlock.c)
 *     ObDeleteCapturedInsertInfo @ 0x140700E80 (ObDeleteCapturedInsertInfo.c)
 *     WdipSemFastFree @ 0x140784BB4 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x1408E0E04 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1408E11B0 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408E15C4 (ObpRefillWorkItemFreeList.c)
 *     VmAccessFault @ 0x140931190 (VmAccessFault.c)
 *     EtwpInitializeStackTracing @ 0x140937FEC (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x140938150 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x1409444C4 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x14094A8E0 (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140996050 (PopInvokeStateHandlerTargetProcessor.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1409D8298 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1409D8494 (ViGrowPoolAllocation.c)
 *     WheapInitializeEventing @ 0x140A61904 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140A6AC18 (MiInitializeDecayPfns.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8FA94 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  _SLIST_HEADER v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v5.Alignment + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return Region;
}
