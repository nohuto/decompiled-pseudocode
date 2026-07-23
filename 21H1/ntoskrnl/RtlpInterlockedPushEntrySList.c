/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1403FDDA0
 * Callers:
 *     CcFreeWorkQueueEntry @ 0x14023175C (CcFreeWorkQueueEntry.c)
 *     MiStoreFreeWriteSupport @ 0x14023ACD0 (MiStoreFreeWriteSupport.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14023D6E8 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140245EC0 (ExpWorkerFactoryCheckCreate.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x14024E150 (RtlpHpVsContextFree.c)
 *     IopFreeIrp @ 0x1402541E0 (IopFreeIrp.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     MiInsertInPageBlock @ 0x140282604 (MiInsertInPageBlock.c)
 *     MmDeleteKernelStack @ 0x1402925B0 (MmDeleteKernelStack.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiQueuePageAccessLog @ 0x1402A50BC (MiQueuePageAccessLog.c)
 *     PfFileInfoNotify @ 0x1402B5440 (PfFileInfoNotify.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     PfFbBufferListInsertInFree @ 0x1402C2E5C (PfFbBufferListInsertInFree.c)
 *     PfpReturnAccessBuffer @ 0x1402C2F78 (PfpReturnAccessBuffer.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402C327C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfFbLogEntryReserve @ 0x1402D5C48 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1402D5D24 (PfFbLogEntryComplete.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     MiDecayPfnFullyInitialized @ 0x1402FCDFC (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1402FCF24 (MiDeleteParentDecayNode.c)
 *     PfTFullEventListAdd @ 0x140305B6C (PfTFullEventListAdd.c)
 *     MiClearPageFileHash @ 0x14031BC04 (MiClearPageFileHash.c)
 *     VfPoolDelayFreeIfPossible @ 0x14036F930 (VfPoolDelayFreeIfPossible.c)
 *     KeFreeInterrupt @ 0x140373ADC (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x1403744EC (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1403790B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfFbBufferListAllocate @ 0x1403C1294 (PfFbBufferListAllocate.c)
 *     HalpInitializeGhesRecovery @ 0x1403C1AEC (HalpInitializeGhesRecovery.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C2B2C (HalpDmaReleaseBufferMappings.c)
 *     HalpErrorDeferredHandler @ 0x1404CA8E0 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CAB50 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404CAD68 (HalpPmemErrorDeferredRecovery.c)
 *     CmpFreeCallbackContext @ 0x1404E70E4 (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x140554504 (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x140559570 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x1405597E4 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x140559B04 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055A570 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x1405802AC (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A01D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x1405A0FEC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1080 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1405A1574 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x1405A7E68 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1405A815C (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405A9418 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405A9510 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1405A976C (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AA664 (EtwpTraceLastBranchRecord.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     NtQueryKey @ 0x1405EBF30 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     ObpFreeObject @ 0x1405FB360 (ObpFreeObject.c)
 *     IopAllocRealFileObject @ 0x140600890 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     AlpcpUnlockBlob @ 0x14060CF00 (AlpcpUnlockBlob.c)
 *     ObpFreeObjectNameBuffer @ 0x1406136C8 (ObpFreeObjectNameBuffer.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 *     CmpBounceContextCleanup @ 0x14061E9A0 (CmpBounceContextCleanup.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     CmpCleanupPathInfo @ 0x140623F70 (CmpCleanupPathInfo.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     IopFreeMiniCompletionPacket @ 0x14062CC50 (IopFreeMiniCompletionPacket.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     CmpFreeKeyControlBlock @ 0x140659940 (CmpFreeKeyControlBlock.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066E250 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066E310 (FsRtlFreeExtraCreateParameter.c)
 *     ObDeleteCapturedInsertInfo @ 0x14068DEB0 (ObDeleteCapturedInsertInfo.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140702350 (IoCreateStreamFileObjectEx2.c)
 *     WdipSemFastFree @ 0x1407741A4 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x1408D9C54 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1408DA000 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408DA414 (ObpRefillWorkItemFreeList.c)
 *     VmAccessFault @ 0x14092A0B0 (VmAccessFault.c)
 *     EtwpInitializeStackTracing @ 0x140930F0C (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x140931070 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x14093D484 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1409438AC (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x14098F340 (PopInvokeStateHandlerTargetProcessor.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1409D2218 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1409D2414 (ViGrowPoolAllocation.c)
 *     WheapInitializeEventing @ 0x140A5B504 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140A60758 (MiInitializeDecayPfns.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8A7F4 (HalpDmaAllocateReservedMappingArray.c)
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
