/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1403FF030
 * Callers:
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     MiInsertInPageBlock @ 0x1402295B4 (MiInsertInPageBlock.c)
 *     MmDeleteKernelStack @ 0x140239560 (MmDeleteKernelStack.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiQueuePageAccessLog @ 0x14024C08C (MiQueuePageAccessLog.c)
 *     PfFileInfoNotify @ 0x14025C410 (PfFileInfoNotify.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     PfFbLogEntryReserve @ 0x14026C2A8 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14026C384 (PfFbLogEntryComplete.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402826A0 (ExpWorkerFactoryCheckCreate.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x14028A9F0 (RtlpHpVsContextFree.c)
 *     IopFreeIrp @ 0x140290A60 (IopFreeIrp.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     CcFreeWorkQueueEntry @ 0x1402C458C (CcFreeWorkQueueEntry.c)
 *     MiStoreFreeWriteSupport @ 0x1402CDB00 (MiStoreFreeWriteSupport.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x1402D0518 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     PfFbBufferListInsertInFree @ 0x140305114 (PfFbBufferListInsertInFree.c)
 *     PfpReturnAccessBuffer @ 0x140305230 (PfpReturnAccessBuffer.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14030552C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     MiDecayPfnFullyInitialized @ 0x14033A13C (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x14033A264 (MiDeleteParentDecayNode.c)
 *     PfTFullEventListAdd @ 0x14034361C (PfTFullEventListAdd.c)
 *     MiClearPageFileHash @ 0x1403597D4 (MiClearPageFileHash.c)
 *     VfPoolDelayFreeIfPossible @ 0x140370560 (VfPoolDelayFreeIfPossible.c)
 *     KeFreeInterrupt @ 0x1403748EC (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x1403752FC (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140379E70 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfFbBufferListAllocate @ 0x1403C2154 (PfFbBufferListAllocate.c)
 *     HalpInitializeGhesRecovery @ 0x1403C29AC (HalpInitializeGhesRecovery.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C2F9C (HalpDmaReleaseBufferMappings.c)
 *     HalpErrorDeferredHandler @ 0x1404CAD90 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CB000 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404CB218 (HalpPmemErrorDeferredRecovery.c)
 *     CmpFreeCallbackContext @ 0x1404E7720 (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x1404EE030 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x140554B54 (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x140559BC0 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x140559E34 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x14055A154 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055ABC0 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x140580A2C (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A08C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x1405A16DC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1770 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1405A1C64 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x1405A8558 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1405A884C (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405A9B08 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405A9C00 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1405A9E5C (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AAD54 (EtwpTraceLastBranchRecord.c)
 *     RtlpGetRegistryHandle @ 0x1405E1A94 (RtlpGetRegistryHandle.c)
 *     CmpBounceContextCleanup @ 0x1405E9380 (CmpBounceContextCleanup.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     CmpCleanupPathInfo @ 0x1405EE950 (CmpCleanupPathInfo.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     IopFreeMiniCompletionPacket @ 0x1405F7C10 (IopFreeMiniCompletionPacket.c)
 *     IopCreateFile @ 0x140615C80 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140616CA0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140616D60 (FsRtlFreeExtraCreateParameter.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140635260 (IoCreateStreamFileObjectEx2.c)
 *     ObDeleteCapturedInsertInfo @ 0x140652520 (ObDeleteCapturedInsertInfo.c)
 *     CmpFreeKeyControlBlock @ 0x140652CD0 (CmpFreeKeyControlBlock.c)
 *     ObpFreeObjectNameBuffer @ 0x1406689A8 (ObpFreeObjectNameBuffer.c)
 *     ObpFreeObject @ 0x140673440 (ObpFreeObject.c)
 *     IopAllocRealFileObject @ 0x140678970 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     NtQueryKey @ 0x140695470 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 *     WdipSemFastFree @ 0x1407765B4 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x1408DAFC4 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1408DB370 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408DB784 (ObpRefillWorkItemFreeList.c)
 *     VmAccessFault @ 0x14092B360 (VmAccessFault.c)
 *     EtwpInitializeStackTracing @ 0x1409321BC (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x140932320 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x14093E704 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140944B20 (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140990090 (PopInvokeStateHandlerTargetProcessor.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1409D2278 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1409D2474 (ViGrowPoolAllocation.c)
 *     WheapInitializeEventing @ 0x140A5A5A4 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140A63948 (MiInitializeDecayPfns.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A89D84 (HalpDmaAllocateReservedMappingArray.c)
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
