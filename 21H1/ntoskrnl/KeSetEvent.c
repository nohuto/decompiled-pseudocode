/*
 * XREFs of KeSetEvent @ 0x14024A230
 * Callers:
 *     PopQueueTargetDpc @ 0x140205060 (PopQueueTargetDpc.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140216DE0 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiDecreaseAvailablePages @ 0x140224310 (MiDecreaseAvailablePages.c)
 *     ExpQueueWorkItem @ 0x140224E90 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x140225870 (ExpWorkerThread.c)
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     CcCanIWrite @ 0x14022E140 (CcCanIWrite.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x1402317CC (CcDereferencePartition.c)
 *     CcDeleteSharedCacheMap @ 0x14023372C (CcDeleteSharedCacheMap.c)
 *     CcWorkerThread @ 0x140233E00 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140235324 (CcPostWorkQueueAsyncRead.c)
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1402370B4 (PopFxCompleteComponentActivation.c)
 *     IoAcquireRemoveLockEx @ 0x140237750 (IoAcquireRemoveLockEx.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14023B628 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023B900 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmFpFree @ 0x14023D59C (SmFpFree.c)
 *     SmIoRequestComplete @ 0x14023D648 (SmIoRequestComplete.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14023DF08 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWorkingSetManager @ 0x140240450 (MiWorkingSetManager.c)
 *     EtwpSwitchBuffer @ 0x140241288 (EtwpSwitchBuffer.c)
 *     KiReadyThread @ 0x140244C00 (KiReadyThread.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     AlpcpSignalAndWait @ 0x140259F40 (AlpcpSignalAndWait.c)
 *     MiProcessWorkingSets @ 0x14025C5F0 (MiProcessWorkingSets.c)
 *     KiDecrementProcessStackCount @ 0x14025E0F8 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x140287EE0 (CcFreeVirtualAddress.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeExcessSegments @ 0x1402A3B70 (MiFreeExcessSegments.c)
 *     MiQueuePageAccessLog @ 0x1402A50BC (MiQueuePageAccessLog.c)
 *     MiInsertUnusedSubsection @ 0x1402A52E0 (MiInsertUnusedSubsection.c)
 *     ExReferenceCallBackBlock @ 0x1402A5A10 (ExReferenceCallBackBlock.c)
 *     PfFileInfoNotify @ 0x1402B5440 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1402B6100 (PfSnReferenceProcessTrace.c)
 *     MiIssueHardFaultIo @ 0x1402B6E54 (MiIssueHardFaultIo.c)
 *     MiDecrementControlAreaCount @ 0x1402B967C (MiDecrementControlAreaCount.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     PfSnRemoveProcessTrace @ 0x1402C2D48 (PfSnRemoveProcessTrace.c)
 *     PfpReturnAccessBuffer @ 0x1402C2F78 (PfpReturnAccessBuffer.c)
 *     SmKmStoreHelperSendCommand @ 0x1402C8F5C (SmKmStoreHelperSendCommand.c)
 *     CcPurgeAndClearCacheSection @ 0x1402CDFA8 (CcPurgeAndClearCacheSection.c)
 *     MiFlushAllHintedStorePages @ 0x1402D0518 (MiFlushAllHintedStorePages.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0644 (MiWakeModifiedPageWriter.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1402D22F0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1402D7930 (LZNT1DecompressChunkWorkItem.c)
 *     MiInsertProtectedStandbyPage @ 0x1402D9CF0 (MiInsertProtectedStandbyPage.c)
 *     WmipUnreferenceRegEntry @ 0x1402DF324 (WmipUnreferenceRegEntry.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExpUnblockPushLock @ 0x1402EBE18 (ExpUnblockPushLock.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1402ED500 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x1402EE8D0 (ExfReleaseRundownProtection.c)
 *     KiRequestProcessInSwap @ 0x1402EF450 (KiRequestProcessInSwap.c)
 *     IoReleaseRemoveLockEx @ 0x1402FD130 (IoReleaseRemoveLockEx.c)
 *     ExNotifyWithProcessing @ 0x1403005E8 (ExNotifyWithProcessing.c)
 *     MiReclaimSystemVa @ 0x140301E44 (MiReclaimSystemVa.c)
 *     PfpEventHandleFullBuffer @ 0x140305B20 (PfpEventHandleFullBuffer.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140309030 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140309210 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14030C454 (MmStoreFlushOutstandingEvictions.c)
 *     SmKmGenericCompletion @ 0x14030D220 (SmKmGenericCompletion.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14030D938 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x140310008 (ExpPartitionCreateThreadIfNecessary.c)
 *     SepRmCallLsa @ 0x140311E50 (SepRmCallLsa.c)
 *     CcNotifyWriteBehindInternal @ 0x140312440 (CcNotifyWriteBehindInternal.c)
 *     MiStoreSetEvictPageFile @ 0x140315BBC (MiStoreSetEvictPageFile.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x14031A690 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x14031B5B0 (CmpLazyFlushDpcRoutine.c)
 *     ExpEnumerateCallback @ 0x14031B980 (ExpEnumerateCallback.c)
 *     CcPrepareMdlWrite @ 0x14031CA60 (CcPrepareMdlWrite.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14031FCD0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     CcDeleteBcbs @ 0x140321E20 (CcDeleteBcbs.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x140322660 (ExpWorkQueueManagerReaperTimer.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140322F60 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiIrpCompletionApcRoutine @ 0x140323380 (MiIrpCompletionApcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140323E90 (KiBalanceSetManagerDeferredRoutine.c)
 *     MiReduceZeroingThreads @ 0x140327AC0 (MiReduceZeroingThreads.c)
 *     AlpcpSignal @ 0x14033495C (AlpcpSignal.c)
 *     MiStoreUpdateMemoryConditions @ 0x140336F38 (MiStoreUpdateMemoryConditions.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x140346350 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x140346598 (MiWakePageZeroing.c)
 *     MiWakeZeroingThreads @ 0x140346840 (MiWakeZeroingThreads.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     ExpWakePushLock @ 0x14035A6B0 (ExpWakePushLock.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14035C0D0 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PnpUnlockDeviceActionQueue @ 0x14035FF08 (PnpUnlockDeviceActionQueue.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036A760 (PnpDiagnosticCompletionRoutine.c)
 *     PoFxPrepareDevice @ 0x14036AC30 (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x14036B650 (PopFxActivateDevice.c)
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 *     PopRequestPowerIrp @ 0x14036CE40 (PopRequestPowerIrp.c)
 *     VfPoolDelayFreeIfPossible @ 0x14036F930 (VfPoolDelayFreeIfPossible.c)
 *     PopQueueDirectedDripsWork @ 0x1403776F8 (PopQueueDirectedDripsWork.c)
 *     PopRequestCompletion @ 0x140377BC0 (PopRequestCompletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1403790B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUnregisterPowerSettingCallback @ 0x14037DEDC (PopUnregisterPowerSettingCallback.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037E2B4 (PnpRemoveDeviceActionRequests.c)
 *     PopFxComponentWork @ 0x14037E920 (PopFxComponentWork.c)
 *     MiFlushAllPagesWorker @ 0x14037F430 (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x1403815A0 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x1403842FC (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140384F48 (PopCompleteNotifyTransitionCommon.c)
 *     MiMarkSessionDeletePending @ 0x140386528 (MiMarkSessionDeletePending.c)
 *     PoFxNotifySurprisePowerOn @ 0x1403881B0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x140389340 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x140389EB0 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038A0C8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038A244 (PfpScenCtxWaiterTimedOut.c)
 *     PnpUnlockMountableDevice @ 0x140390978 (PnpUnlockMountableDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140396510 (PopFxAllocatePowerIrp.c)
 *     PopIrpWorker @ 0x14039C950 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14039D04C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14039D200 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxReleasePowerIrp @ 0x1403A17F4 (PopFxReleasePowerIrp.c)
 *     MiAddZeroingThreads @ 0x1403A2080 (MiAddZeroingThreads.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2744 (MiQueueWorkingSetRequest.c)
 *     PopUserPresentSet @ 0x1403A2AF4 (PopUserPresentSet.c)
 *     PopBatteryWakeDpc @ 0x1403A4680 (PopBatteryWakeDpc.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403AC508 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403ACE14 (MiUpdateAvailableEvents.c)
 *     MiZeroPageCalibrate @ 0x1403AD950 (MiZeroPageCalibrate.c)
 *     MiZeroNodePages @ 0x1403ADD50 (MiZeroNodePages.c)
 *     ExCompareExchangeCallBack @ 0x1403AF60C (ExCompareExchangeCallBack.c)
 *     KeBalanceSetManager @ 0x1403B4E10 (KeBalanceSetManager.c)
 *     WheaLogInternalEvent @ 0x1403B6A80 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403B6D54 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BB934 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403BD300 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x1403BF4C4 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x1403C56E4 (PopPropogateCoolingChange.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1403CBC90 (PopPepStartDeviceUnregisterActivity.c)
 *     HalpProcessSecondarySignalList @ 0x1404CBEA0 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x1404CC040 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404CC0E4 (HalpReleaseSecondaryIcEntryShared.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E33B0 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1404E4C20 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1404E65B0 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x1404EB738 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1404EBC00 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1404FB00C (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1404FB07C (IopFreeReserveIrp.c)
 *     PnprQuiesce @ 0x140509C68 (PnprQuiesce.c)
 *     KeRetryOutswapProcess @ 0x14050DE08 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140513594 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14051374C (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x14051B840 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051BE6C (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x14051C1B0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x14051C1EC (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x14051C2C4 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14051C300 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x1405201C8 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x14052473C (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x140524B1C (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x140525B54 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526848 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140526A34 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x140527C30 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14053356C (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140533788 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1405340A0 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x140535A64 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x140537640 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140537754 (MiFreeOverlappedFlushEntry.c)
 *     MiFinishHoldingDirtyFaults @ 0x140538FE4 (MiFinishHoldingDirtyFaults.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053A614 (MiCopyImageExtentContents.c)
 *     MiAttemptPageFileReductionApc @ 0x14053CFB0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14053DAD0 (MiFinishPageFileExtension.c)
 *     MiPageNotZero @ 0x140549650 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x1405544D0 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140554504 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x14055D0A0 (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055EE80 (NtSignalAndWaitForSingleObject.c)
 *     PopDeviceIdleCompletion @ 0x140563470 (PopDeviceIdleCompletion.c)
 *     PopFxClearDeviceConstraints @ 0x1405642C4 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x140564958 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140564A5C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x140564C40 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x140564D50 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x140564DE0 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x140564EC0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x140565F00 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1405662B0 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056689C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x1405668D0 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x140567C30 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140567D40 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x140569750 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x14056E380 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x1405782DC (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140578380 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140578414 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405930E4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140599DB0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140599E90 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x1405A0370 (EtwSendTraceBuffer.c)
 *     EtwpLoggerDpc @ 0x1405A4B80 (EtwpLoggerDpc.c)
 *     EtwpThreadRundownApc @ 0x1405A5CB0 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405A8CD8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405A9418 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405A9480 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1405A94E0 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1405AD460 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1405AD4B0 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x1405AFE10 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1405B5F00 (WheapProcessWorkQueueItem.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     SPCallServerHandleQueryPolicy @ 0x1405F66A0 (SPCallServerHandleQueryPolicy.c)
 *     NtSetEvent @ 0x1405FB170 (NtSetEvent.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     CmpPostNotify @ 0x14061A9A8 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     MiPfExecuteReadList @ 0x14063F024 (MiPfExecuteReadList.c)
 *     PfSnEndTrace @ 0x1406536D8 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x140654C44 (PfTReplaceCurrentBuffer.c)
 *     MiInSwapStoreWorker @ 0x1406560F0 (MiInSwapStoreWorker.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14065DDF0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PfGetCompletedTrace @ 0x140662E14 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1406630A4 (PfTTraceListAdd.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140667800 (ExpWnfNotifyNameSubscribers.c)
 *     EtwpSynchronizeWithLogger @ 0x1406777EC (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140678BF8 (EtwpStopLoggerInstance.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14067B578 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpQueueNotification @ 0x14067FA78 (EtwpQueueNotification.c)
 *     PiUEventDereferenceEventEntry @ 0x140683D9C (PiUEventDereferenceEventEntry.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     IopTrackLink @ 0x1406B5190 (IopTrackLink.c)
 *     RtlDecompressBufferLZNT1 @ 0x1406B7560 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406B76D0 (RtlDecompressFragmentLZNT1.c)
 *     NtNotifyChangeSession @ 0x1406C4F30 (NtNotifyChangeSession.c)
 *     CmpPostApc @ 0x1406CC2F0 (CmpPostApc.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406CD860 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ExpWnfNotifySubscription @ 0x1406D76DC (ExpWnfNotifySubscription.c)
 *     AlpcpTrackPortReferences @ 0x1406E3498 (AlpcpTrackPortReferences.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406E5DA8 (CmpWakeWriteQueueWaiters.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406E7190 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpDisassociateConsumer @ 0x1406EC7A8 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406EDBE0 (PfSnTracingStateExWorkerRoutine.c)
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140704368 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140704A9C (EtwpRealtimeInjectEtwBuffer.c)
 *     CmNotifyRunDown @ 0x140706CB0 (CmNotifyRunDown.c)
 *     PnpDeviceEventWorker @ 0x14070A0D0 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x14070ADAC (PnpCompleteDeviceEvent.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140711970 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736CE8 (PopFxUnregisterDeviceOrWait.c)
 *     WmipQueueNotification @ 0x14073E094 (WmipQueueNotification.c)
 *     WmipAddDataSource @ 0x14073F378 (WmipAddDataSource.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140749140 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopDestroyActiveConnectBlock @ 0x14074AE60 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x14074E2D0 (HalGetAdapterV2.c)
 *     PiUEventHandleVetoEvent @ 0x140759F40 (PiUEventHandleVetoEvent.c)
 *     ArbArbiterHandler @ 0x14075C7B0 (ArbArbiterHandler.c)
 *     PopCompleteAction @ 0x14075FFB4 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140760C90 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PfGenerateTrace @ 0x1407629D4 (PfGenerateTrace.c)
 *     MiDereferenceSessionFinal @ 0x140763920 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140763F34 (PopFinalizeWakeInfo.c)
 *     HalpGetDynamicDevicePointer @ 0x1407644D4 (HalpGetDynamicDevicePointer.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 *     IopLoadUnloadDriver @ 0x14076B870 (IopLoadUnloadDriver.c)
 *     WmipReleaseCollectionEnabled @ 0x14076CE64 (WmipReleaseCollectionEnabled.c)
 *     MmSetSessionObjectIoEvent @ 0x140779114 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x1407792E4 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x14077A360 (PopUserPresentSetWorker.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     EtwInitialize @ 0x1407867D8 (EtwInitialize.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407885C4 (CmpInitializeSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x140789A48 (ArbBuildAssignmentOrdering.c)
 *     PfTLoggingWorker @ 0x14078CA20 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     MUIRegistrySystemRoutine @ 0x140793C90 (MUIRegistrySystemRoutine.c)
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
 *     MmStoreRegister @ 0x14079E3F0 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14079F050 (MiInsertPageFileInList.c)
 *     PopFanWorker @ 0x1407AACD0 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407AADD0 (PopThermalWorker.c)
 *     ExpPartitionCreatePool @ 0x1407ACDE8 (ExpPartitionCreatePool.c)
 *     HalGetAdapterV3 @ 0x1407ADF10 (HalGetAdapterV3.c)
 *     CmpWaitForHiveMount @ 0x1407AE9E4 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407AF3CC (IopAcquireReleaseConnectLockInternal.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407B5C80 (CmpMachineHiveLoadedWorkItem.c)
 *     WheapEtwEnableCallback @ 0x1407BD7E0 (WheapEtwEnableCallback.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x14085FF40 (HalpDynamicDeviceInterfaceNotification.c)
 *     CmpPostApcRunDown @ 0x140865820 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
 *     DbgkpCloseObject @ 0x140880420 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140881108 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140881400 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140881700 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140881B40 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140882634 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1408841C0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x140887CE0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x14088D080 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x14088DD20 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x14088FB00 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14089752C (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14089D0CC (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1408B01F0 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1408B8F1C (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408DBA4C (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1408DC290 (PfpParametersWatcher.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E0F50 (PopFxUpdateVetoMaskWork.c)
 *     PopBatteryReadTag @ 0x1408E8EEC (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x140900C8C (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140901040 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140901FE0 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1409020A4 (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x140905E40 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x140909A60 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x140909B88 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x140909E08 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x140915020 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x140928A2C (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x140928BC4 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x14093DA38 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093E2B0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140940530 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x140951544 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1409546C0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140958E50 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WdtpBarkWorkerThread @ 0x14097B690 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x14097BC00 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x14098C1D8 (EmpReleasePagingReference.c)
 *     PopTransitionToSleep @ 0x14098C540 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140991AB0 (PopEndMirroring.c)
 *     ExpSetSwappingKernelApc @ 0x1409932D0 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x140993610 (PopFlushVolumeWorker.c)
 *     PopHandleWakeSources @ 0x140993A80 (PopHandleWakeSources.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140994290 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x140996208 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1409A9B2C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AAF90 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1409AC2A0 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409AE840 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1409AE8D0 (PopBuildDeviceNotifyListWatchdog.c)
 *     KdpTimeSlipWork @ 0x1409B5FB0 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x1409CE8F0 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D2D74 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x1409E2680 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409EF4C0 (AnFwpFadeAnimationTimer.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     MiInitializePagedPoolEvents @ 0x140A41AA4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  _DWORD *SchedulerAssist; // r9
  BOOLEAN v4; // di
  KPRIORITY v5; // r15d
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // r8
  LONG SignalState; // esi
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v13; // rax
  __int64 v14; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // r8
  unsigned __int8 v22; // cl
  __int64 CurrentThread; // r9
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  char v26; // al
  int v27; // r10d
  struct _LIST_ENTRY *v28; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v30; // rdx
  __int64 v31; // r9
  _DWORD *v32; // r9
  unsigned __int8 v33; // cl
  __int64 v34; // r9
  _QWORD *v35; // r9
  __int64 v36; // rcx
  char v37; // al
  int v38; // r10d
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  __int64 v41; // r9
  _DWORD *v42; // r9
  struct _KPRCB *v43; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v44; // [rsp+38h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-48h]
  __int64 v46; // [rsp+40h] [rbp-48h]
  int v47; // [rsp+90h] [rbp+8h]
  __int64 v48; // [rsp+90h] [rbp+8h]
  __int64 v49; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v50; // [rsp+A8h] [rbp+20h]
  _QWORD *v51; // [rsp+A8h] [rbp+20h]

  v4 = Wait;
  v5 = Increment;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v47 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v47 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&Increment = (-1LL << (CurrentIrql + 1)) & 4;
      *(_QWORD *)&Wait = (unsigned int)Increment | SchedulerAssist[5];
      SchedulerAssist[5] = Wait;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(&Event->Header.Lock, *(__int64 *)&Increment, Wait, (__int64)SchedulerAssist);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_11;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v47 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v13 = Flink->Flink;
          v14 = (__int64)Flink;
          v50 = Flink;
          Flink = v13;
          Blink = v50->Blink;
          if ( v13->Blink != v50 || Blink->Flink != (struct _LIST_ENTRY *)v14 )
            goto LABEL_8;
          Blink->Flink = v13;
          v13->Blink = Blink;
          v17 = *(_BYTE *)(v14 + 16);
          if ( v17 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
            {
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
            }
          }
          else
          {
            if ( v17 == 2 )
            {
              *(_BYTE *)(v14 + 17) = 5;
              v48 = *(_QWORD *)(v14 + 24);
              *(_QWORD *)v14 = 0LL;
              v22 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
              {
                v32 = KeGetCurrentPrcb()->SchedulerAssist;
                v9 = (unsigned int)(-1LL << (v22 + 1)) & 4 | v32[5];
                v14 = (__int64)v50;
                v32[5] = v9;
              }
              v44 = KeGetCurrentPrcb();
              CurrentThread = (__int64)v44->CurrentThread;
              v45 = CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(CurrentThread, v14);
                EtwTraceEnqueueWork(v31, v30, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v48, v14, v9, CurrentThread);
              v24 = (_QWORD *)(v48 + 8);
              v25 = v48;
              if ( (_QWORD *)*v24 == v24
                || *(_DWORD *)(v48 + 40) >= *(_DWORD *)(v48 + 44)
                || *(_QWORD *)(v45 + 232) == v48 && *(_BYTE *)(v45 + 643) == 15 )
              {
LABEL_38:
                v27 = *(_DWORD *)(v25 + 4);
                v9 = v25 + 24;
                *(_DWORD *)(v25 + 4) = v27 + 1;
                v28 = *(struct _LIST_ENTRY **)(v25 + 32);
                if ( v28->Flink != (struct _LIST_ENTRY *)(v25 + 24) )
                  goto LABEL_8;
                v50->Flink = (struct _LIST_ENTRY *)v9;
                v50->Blink = v28;
                v28->Flink = v50;
                *(_QWORD *)(v25 + 32) = v50;
                if ( !v27 && (_QWORD *)*v24 != v24 )
                {
                  KiWakeOtherQueueWaiters((__int64)v44, v25, v9, (__int64)v28);
                  v25 = v48;
                }
              }
              else
              {
                v26 = KiWakeQueueWaiter((__int64)v44, v48, (__int64)v50);
                v25 = v48;
                if ( !v26 )
                {
                  v24 = (_QWORD *)(v48 + 8);
                  goto LABEL_38;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
              goto LABEL_62;
            }
            KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
          }
LABEL_62:
          if ( Flink == p_WaitListHead )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_10:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
LABEL_11:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, v4 != 0 ? 3 : 0, 1, v5, CurrentIrql);
      return SignalState;
    }
    while ( 1 )
    {
      v19 = (__int64)Flink;
      Flink = Flink->Flink;
      v51 = (_QWORD *)v19;
      v20 = *(_BYTE *)(v19 + 16);
      if ( v20 == 1 )
      {
        v21 = *(unsigned __int16 *)(v19 + 18);
      }
      else
      {
        if ( v20 == 2 )
        {
          *(_BYTE *)(v19 + 17) = 5;
          v49 = *(_QWORD *)(v19 + 24);
          *(_QWORD *)v19 = 0LL;
          v33 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
          {
            v42 = KeGetCurrentPrcb()->SchedulerAssist;
            v9 = (unsigned int)(-1LL << (v33 + 1)) & 4 | v42[5];
            v42[5] = v9;
          }
          v43 = KeGetCurrentPrcb();
          v34 = (__int64)v43->CurrentThread;
          v46 = v34;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v39 = KeIsThreadRunning(v34, v19);
            EtwTraceEnqueueWork(v41, v40, v39);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v49, v19, v9, v34);
          v35 = (_QWORD *)(v49 + 8);
          v36 = v49;
          if ( (_QWORD *)*v35 == v35
            || *(_DWORD *)(v49 + 40) >= *(_DWORD *)(v49 + 44)
            || *(_QWORD *)(v46 + 232) == v49 && *(_BYTE *)(v46 + 643) == 15 )
          {
LABEL_55:
            v38 = *(_DWORD *)(v36 + 4);
            *(_DWORD *)(v36 + 4) = v38 + 1;
            v9 = *(_QWORD *)(v36 + 32);
            if ( *(_QWORD *)v9 != v36 + 24 )
LABEL_8:
              __fastfail(3u);
            *v51 = v36 + 24;
            v51[1] = v9;
            *(_QWORD *)v9 = v51;
            *(_QWORD *)(v36 + 32) = v51;
            if ( !v38 && (_QWORD *)*v35 != v35 )
            {
              KiWakeOtherQueueWaiters((__int64)v43, v36, v9, (__int64)v35);
              v36 = v49;
            }
          }
          else
          {
            v37 = KiWakeQueueWaiter((__int64)v43, v49, (__int64)v51);
            v36 = v49;
            if ( !v37 )
            {
              v35 = (_QWORD *)(v49 + 8);
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v36, 0xFFFFFF7F);
          goto LABEL_22;
        }
        v21 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v19, v21, 0LL);
LABEL_22:
      if ( Flink == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
