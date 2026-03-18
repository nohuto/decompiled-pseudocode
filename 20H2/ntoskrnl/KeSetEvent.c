/*
 * XREFs of KeSetEvent @ 0x140219280
 * Callers:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x1402084C0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x140208A70 (AlpcpSignal.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     MiDecreaseAvailablePages @ 0x140231720 (MiDecreaseAvailablePages.c)
 *     MiQueuePageAccessLog @ 0x14023356C (MiQueuePageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140233690 (ExReferenceCallBackBlock.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     WmipUnreferenceRegEntry @ 0x14023FFF4 (WmipUnreferenceRegEntry.c)
 *     ExpWakePushLock @ 0x140242B70 (ExpWakePushLock.c)
 *     PfpReturnAccessBuffer @ 0x140244008 (PfpReturnAccessBuffer.c)
 *     IoAcquireRemoveLockEx @ 0x140246210 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x140246294 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140246B54 (PopFxCompleteComponentActivation.c)
 *     CcDeleteSharedCacheMap @ 0x140247C98 (CcDeleteSharedCacheMap.c)
 *     CcPostWorkQueueAsyncRead @ 0x140248F44 (CcPostWorkQueueAsyncRead.c)
 *     CcWorkerThread @ 0x140249690 (CcWorkerThread.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140254D40 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140255670 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140256F90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x140258004 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x1402580A4 (SmFpFree.c)
 *     PfSnRemoveProcessTrace @ 0x14025C49C (PfSnRemoveProcessTrace.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025C8B0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 *     EtwpSwitchBuffer @ 0x1402670E0 (EtwpSwitchBuffer.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x140268DA0 (KiDecrementProcessStackCount.c)
 *     MiProcessWorkingSets @ 0x140268EC0 (MiProcessWorkingSets.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     KiReadyThread @ 0x14028D5F0 (KiReadyThread.c)
 *     ExpQueueWorkItem @ 0x14028DAE0 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x14028E4C0 (ExpWorkerThread.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcCanIWrite @ 0x14029A7B0 (CcCanIWrite.c)
 *     MiFreeExcessSegments @ 0x14029C0C0 (MiFreeExcessSegments.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     CcUninitializeCacheMap @ 0x14029E760 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x14029EBDC (CcDereferencePartition.c)
 *     PfFileInfoNotify @ 0x1402A0D50 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1402A1A10 (PfSnReferenceProcessTrace.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1402A4140 (CcFreeVirtualAddress.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402ACBC0 (MiInsertProtectedStandbyPage.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiIssueHardFaultIo @ 0x1402D0F14 (MiIssueHardFaultIo.c)
 *     MiDecrementControlAreaCount @ 0x1402D2688 (MiDecrementControlAreaCount.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402D4AEC (ExpPartitionCreateThreadIfNecessary.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1402F2250 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x1402F2498 (MiWakePageZeroing.c)
 *     MiWakeZeroingThreads @ 0x1402F2740 (MiWakeZeroingThreads.c)
 *     ExpUnblockPushLock @ 0x1402F39D8 (ExpUnblockPushLock.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1402F6550 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x1402FB230 (ExfReleaseRundownProtection.c)
 *     KiRequestProcessInSwap @ 0x1402FF1B0 (KiRequestProcessInSwap.c)
 *     MiInsertUnusedSubsection @ 0x140300AC0 (MiInsertUnusedSubsection.c)
 *     IoReleaseRemoveLockEx @ 0x14030C8D0 (IoReleaseRemoveLockEx.c)
 *     ExNotifyWithProcessing @ 0x14030FBC8 (ExNotifyWithProcessing.c)
 *     PfpEventHandleFullBuffer @ 0x140314A00 (PfpEventHandleFullBuffer.c)
 *     CcPurgeAndClearCacheSection @ 0x140316714 (CcPurgeAndClearCacheSection.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14031ABD8 (MmStoreFlushOutstandingEvictions.c)
 *     SmKmGenericCompletion @ 0x14031B7F0 (SmKmGenericCompletion.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14031BDD8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SepRmCallLsa @ 0x140320260 (SepRmCallLsa.c)
 *     CcNotifyWriteBehindInternal @ 0x1403208E0 (CcNotifyWriteBehindInternal.c)
 *     MiStoreSetEvictPageFile @ 0x1403245AC (MiStoreSetEvictPageFile.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140326710 (LZNT1DecompressChunkWorkItem.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140328840 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x140329930 (CmpLazyFlushDpcRoutine.c)
 *     ExpEnumerateCallback @ 0x140329E50 (ExpEnumerateCallback.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     MiReclaimSystemVa @ 0x14032DB68 (MiReclaimSystemVa.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14032E340 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     CcDeleteBcbs @ 0x140330540 (CcDeleteBcbs.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x140330E00 (ExpWorkQueueManagerReaperTimer.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140331780 (MiTrimUnusedPageFileRegionsApc.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140331B30 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     MiIrpCompletionApcRoutine @ 0x140331C50 (MiIrpCompletionApcRoutine.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403322B0 (MiStoreUpdateMemoryConditions.c)
 *     MiFlushAllHintedStorePages @ 0x14033B114 (MiFlushAllHintedStorePages.c)
 *     MiWakeModifiedPageWriter @ 0x14033B240 (MiWakeModifiedPageWriter.c)
 *     MiReduceZeroingThreads @ 0x14033DC54 (MiReduceZeroingThreads.c)
 *     PopQueueTargetDpc @ 0x14033E800 (PopQueueTargetDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14033FAF8 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     SmKmStoreHelperSendCommand @ 0x14035823C (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperWorker @ 0x140358340 (SmKmStoreHelperWorker.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140359CC0 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x14035AC90 (KiBalanceSetManagerDeferredRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x140362BAC (PnpUnlockDeviceActionQueue.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036D100 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x14036DBC4 (PoFxPrepareDevice.c)
 *     PnpDeviceActionWorker @ 0x14036EB50 (PnpDeviceActionWorker.c)
 *     PopRequestPowerIrp @ 0x14036F6E0 (PopRequestPowerIrp.c)
 *     VfPoolDelayFreeIfPossible @ 0x1403724B0 (VfPoolDelayFreeIfPossible.c)
 *     PopQueueDirectedDripsWork @ 0x14037A3A8 (PopQueueDirectedDripsWork.c)
 *     PopRequestCompletion @ 0x14037A700 (PopRequestCompletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037BBA0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUnregisterPowerSettingCallback @ 0x1403806CC (PopUnregisterPowerSettingCallback.c)
 *     PnpRemoveDeviceActionRequests @ 0x140380AA4 (PnpRemoveDeviceActionRequests.c)
 *     PopFxComponentWork @ 0x140381040 (PopFxComponentWork.c)
 *     MiFlushAllPagesWorker @ 0x140381B50 (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x140383AC0 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140387414 (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140388058 (PopCompleteNotifyTransitionCommon.c)
 *     MiMarkSessionDeletePending @ 0x140389658 (MiMarkSessionDeletePending.c)
 *     PoFxNotifySurprisePowerOn @ 0x14038B3C0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x14038C650 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x14038D220 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038D438 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038D550 (PfpScenCtxWaiterTimedOut.c)
 *     PnpUnlockMountableDevice @ 0x1403939A8 (PnpUnlockMountableDevice.c)
 *     PopFxAllocatePowerIrp @ 0x1403995A0 (PopFxAllocatePowerIrp.c)
 *     PopIrpWorker @ 0x14039C4D0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14039CBCC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14039CD80 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxReleasePowerIrp @ 0x1403A4454 (PopFxReleasePowerIrp.c)
 *     MiAddZeroingThreads @ 0x1403A4CE0 (MiAddZeroingThreads.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5294 (MiQueueWorkingSetRequest.c)
 *     PopUserPresentSet @ 0x1403A5644 (PopUserPresentSet.c)
 *     PopBatteryWakeDpc @ 0x1403A7200 (PopBatteryWakeDpc.c)
 *     MiZeroPageCalibrate @ 0x1403A9F18 (MiZeroPageCalibrate.c)
 *     MiZeroNodePages @ 0x1403AA320 (MiZeroNodePages.c)
 *     ExCompareExchangeCallBack @ 0x1403ADEBC (ExCompareExchangeCallBack.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B4AF8 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B5404 (MiUpdateAvailableEvents.c)
 *     KeBalanceSetManager @ 0x1403B86E0 (KeBalanceSetManager.c)
 *     WheaLogInternalEvent @ 0x1403BA350 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403BA624 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x1403BE5C0 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BF0D4 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403C07B0 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x1403C2BC8 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x1403C90E4 (PopPropogateCoolingChange.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1403CF740 (PopPepStartDeviceUnregisterActivity.c)
 *     IopCopyCompleteReadRequest @ 0x1403F0C80 (IopCopyCompleteReadRequest.c)
 *     HalpProcessSecondarySignalList @ 0x1404CF8B0 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x1404CFA50 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404CFAF4 (HalpReleaseSecondaryIcEntryShared.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E6EF0 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1404E8760 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1404EA0F0 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x1404EF5F8 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1404EFAC0 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1404FEF30 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1404FEFA0 (IopFreeReserveIrp.c)
 *     PnprQuiesce @ 0x14050DBE8 (PnprQuiesce.c)
 *     KeRetryOutswapProcess @ 0x140511D88 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140517514 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1405176CC (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x14051F860 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051FE8C (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1405201D0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x14052020C (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x1405202E4 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140520320 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x1405241E8 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x14052875C (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x140528B3C (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x140529B74 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052A868 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052AA54 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x14052BC50 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x140533AC8 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14053758C (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1405377A8 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1405380C0 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x140539A84 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x14053B660 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14053B774 (MiFreeOverlappedFlushEntry.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053D004 (MiFinishHoldingDirtyFaults.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053E278 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053E634 (MiCopyImageExtentContents.c)
 *     MiAttemptPageFileReductionApc @ 0x140540FD0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140541AF0 (MiFinishPageFileExtension.c)
 *     MiPageNotZero @ 0x14054D670 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x1405584F0 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140558524 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x1405610C0 (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x140562EA0 (NtSignalAndWaitForSingleObject.c)
 *     PopDeviceIdleCompletion @ 0x1405674A0 (PopDeviceIdleCompletion.c)
 *     PopFxClearDeviceConstraints @ 0x1405682F4 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x140568988 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140568A8C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x140568C90 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x140568DA0 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x140568E30 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x140568F10 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x140569F80 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14056A330 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056A91C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x14056A950 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14056BCB0 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14056BDC0 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x14056D7D0 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x140572400 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x14057C35C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14057C400 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14057C494 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140597274 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059DF40 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14059E020 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x1405A4500 (EtwSendTraceBuffer.c)
 *     EtwpLoggerDpc @ 0x1405A8D10 (EtwpLoggerDpc.c)
 *     EtwpThreadRundownApc @ 0x1405A9E40 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405ACF28 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AD668 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AD6D0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1405AD730 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1405B16E0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1405B1730 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x1405B4090 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1405BA180 (WheapProcessWorkQueueItem.c)
 *     NtCopyFileChunk @ 0x1405CBD40 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     IopWriteFile @ 0x1405CCA7C (IopWriteFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405ECB50 (AlpcpCompleteDispatchMessage.c)
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14062F0C4 (PspEvaluateAndNotifyEmptyJob.c)
 *     PiUEventDereferenceEventEntry @ 0x140648D9C (PiUEventDereferenceEventEntry.c)
 *     PnpCompleteDeviceEvent @ 0x140649F64 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x14064A080 (PnpDeviceEventWorker.c)
 *     PfTReplaceCurrentBuffer @ 0x14064C284 (PfTReplaceCurrentBuffer.c)
 *     PfGetCompletedTrace @ 0x14064E334 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14064E5C4 (PfTTraceListAdd.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140653290 (ExpWnfNotifyNameSubscribers.c)
 *     MiPfExecuteReadList @ 0x140658A14 (MiPfExecuteReadList.c)
 *     PfSnEndTrace @ 0x14065AA98 (PfSnEndTrace.c)
 *     CmNotifyRunDown @ 0x1406836AC (CmNotifyRunDown.c)
 *     SPCallServerHandleQueryPolicy @ 0x140688AF0 (SPCallServerHandleQueryPolicy.c)
 *     IopTrackLink @ 0x14069FC10 (IopTrackLink.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     RtlDecompressBufferLZNT1 @ 0x1406A7DD0 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406A7F40 (RtlDecompressFragmentLZNT1.c)
 *     NtSetEvent @ 0x1406B0500 (NtSetEvent.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     NtNotifyChangeSession @ 0x1406BB800 (NtNotifyChangeSession.c)
 *     CmpPostApc @ 0x1406BDA00 (CmpPostApc.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406C2A80 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     ExpWnfNotifySubscription @ 0x1406CDA60 (ExpWnfNotifySubscription.c)
 *     AlpcpTrackPortReferences @ 0x1406D99B8 (AlpcpTrackPortReferences.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406DC018 (CmpWakeWriteQueueWaiters.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406DD3C0 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpDisassociateConsumer @ 0x1406E24F0 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406E40B0 (PfSnTracingStateExWorkerRoutine.c)
 *     MiInSwapStoreWorker @ 0x1406F0DB0 (MiInSwapStoreWorker.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     EtwpSynchronizeWithLogger @ 0x14071269C (EtwpSynchronizeWithLogger.c)
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140712D4C (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpStopLoggerInstance @ 0x140712DC0 (EtwpStopLoggerInstance.c)
 *     EtwpLogger @ 0x140715350 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140715958 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1407175D0 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpQueueNotification @ 0x14071A734 (EtwpQueueNotification.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140721510 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140742824 (PopFxUnregisterDeviceOrWait.c)
 *     WmipQueueNotification @ 0x14074E7F4 (WmipQueueNotification.c)
 *     WmipAddDataSource @ 0x14074FAD8 (WmipAddDataSource.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14075C140 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopDestroyActiveConnectBlock @ 0x14075DE60 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x140761540 (HalGetAdapterV2.c)
 *     PiUEventHandleVetoEvent @ 0x14076A438 (PiUEventHandleVetoEvent.c)
 *     ArbArbiterHandler @ 0x14076D270 (ArbArbiterHandler.c)
 *     PopCompleteAction @ 0x14076FEA4 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140770B80 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PfGenerateTrace @ 0x1407728C4 (PfGenerateTrace.c)
 *     MiDereferenceSessionFinal @ 0x140774370 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140774984 (PopFinalizeWakeInfo.c)
 *     HalpGetDynamicDevicePointer @ 0x140774F24 (HalpGetDynamicDevicePointer.c)
 *     IopInvalidateVolumesForDevice @ 0x140777870 (IopInvalidateVolumesForDevice.c)
 *     IopLoadUnloadDriver @ 0x14077CA40 (IopLoadUnloadDriver.c)
 *     WmipReleaseCollectionEnabled @ 0x14077DBB4 (WmipReleaseCollectionEnabled.c)
 *     MmSetSessionObjectIoEvent @ 0x140789B24 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x140789CF4 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x14078AD70 (PopUserPresentSetWorker.c)
 *     CmpInitializeSystemHivesLoad @ 0x14078FEA4 (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x140798058 (ArbBuildAssignmentOrdering.c)
 *     PfTLoggingWorker @ 0x14079B030 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     MUIRegistrySystemRoutine @ 0x1407A2D70 (MUIRegistrySystemRoutine.c)
 *     EtwInitialize @ 0x1407A9640 (EtwInitialize.c)
 *     PopFxUnregisterDevice @ 0x1407AF52C (PopFxUnregisterDevice.c)
 *     MmStoreRegister @ 0x1407B1700 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x1407B2360 (MiInsertPageFileInList.c)
 *     PopFanWorker @ 0x1407BBD70 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407BBE70 (PopThermalWorker.c)
 *     ExpPartitionCreatePool @ 0x1407BDE88 (ExpPartitionCreatePool.c)
 *     HalGetAdapterV3 @ 0x1407BEFB0 (HalGetAdapterV3.c)
 *     CmpWaitForHiveMount @ 0x1407BFA84 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C03E8 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407C7680 (CmpMachineHiveLoadedWorkItem.c)
 *     WheapEtwEnableCallback @ 0x1407CF1E0 (WheapEtwEnableCallback.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140866CB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     CmpPostApcRunDown @ 0x14086C560 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140874AE0 (CmThawRegistry.c)
 *     DbgkpCloseObject @ 0x140887290 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140887F78 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140888270 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140888570 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x1408889B0 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x1408894A4 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14088B030 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14088EB50 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x140893EF0 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x140894B00 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140896910 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14089E37C (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A3F1C (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1408B7130 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1408BFF9C (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408E2BFC (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1408E3440 (PfpParametersWatcher.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E8010 (PopFxUpdateVetoMaskWork.c)
 *     PopBatteryReadTag @ 0x1408EFD7C (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x140907BDC (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140907F4C (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140908A50 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x140908AFC (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090CD10 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x14091094C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x140910A74 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x140910CF4 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x14091BEC0 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x14092FB04 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14092FC9C (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140944A78 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409452F0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140947570 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x1409586A4 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14095FFB0 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WdtpBarkWorkerThread @ 0x140982800 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x140982D70 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x1409931C8 (EmpReleasePagingReference.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PopTransitionToSleep @ 0x140998990 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140999250 (PopEndMirroring.c)
 *     ExpSetSwappingKernelApc @ 0x14099AA70 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x14099ADB0 (PopFlushVolumeWorker.c)
 *     PopHandleWakeSources @ 0x14099B220 (PopHandleWakeSources.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14099BA30 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x14099D618 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1409B08FC (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409B1D60 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1409B2EB8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1409B3070 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B5610 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1409B56A0 (PopBuildDeviceNotifyListWatchdog.c)
 *     KdpTimeSlipWork @ 0x1409BBFB0 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x1409D4920 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D8DF4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x1409E8700 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F54C0 (AnFwpFadeAnimationTimer.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     MiInitializePagedPoolEvents @ 0x140A4D59C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  LONG SignalState; // esi
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v11; // rax
  __int64 v12; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  char v15; // al
  bool v16; // zf
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // r8
  unsigned __int8 v20; // cl
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  int v24; // r10d
  struct _LIST_ENTRY *v25; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v27; // rdx
  __int64 v28; // r9
  _DWORD *v29; // r9
  unsigned __int8 v30; // cl
  _QWORD *v31; // r9
  __int64 v32; // rcx
  char v33; // al
  int v34; // r10d
  _QWORD *v35; // r8
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  __int64 v38; // r9
  _DWORD *v39; // r9
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v41; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v42; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _KTHREAD *v44; // [rsp+40h] [rbp-48h]
  int v45; // [rsp+90h] [rbp+8h]
  __int64 v46; // [rsp+90h] [rbp+8h]
  __int64 v47; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v48; // [rsp+A8h] [rbp+20h]
  _QWORD *v49; // [rsp+A8h] [rbp+20h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v45 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v45 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(Event);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_11;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v45 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v11 = Flink->Flink;
          v12 = (__int64)Flink;
          v48 = Flink;
          Flink = v11;
          Blink = v48->Blink;
          if ( v11->Blink != v48 || Blink->Flink != (struct _LIST_ENTRY *)v12 )
            goto LABEL_8;
          Blink->Flink = v11;
          v11->Blink = Blink;
          v15 = *(_BYTE *)(v12 + 16);
          if ( v15 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
            {
              v16 = Event->Header.SignalState-- == 1;
              if ( v16 )
                goto LABEL_11;
            }
          }
          else
          {
            if ( v15 == 2 )
            {
              *(_BYTE *)(v12 + 17) = 5;
              v46 = *(_QWORD *)(v12 + 24);
              *(_QWORD *)v12 = 0LL;
              v20 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
              {
                v29 = KeGetCurrentPrcb()->SchedulerAssist;
                v29[5] |= (-1LL << (v20 + 1)) & 4;
              }
              v42 = KeGetCurrentPrcb();
              CurrentThread = v42->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v42->CurrentThread);
                EtwTraceEnqueueWork(v28, v27, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v46);
              v21 = (_QWORD *)(v46 + 8);
              v22 = v46;
              if ( (_QWORD *)*v21 == v21
                || *(_DWORD *)(v46 + 40) >= *(_DWORD *)(v46 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v46 && CurrentThread->WaitReason == 15 )
              {
LABEL_38:
                v24 = *(_DWORD *)(v22 + 4);
                *(_DWORD *)(v22 + 4) = v24 + 1;
                v25 = *(struct _LIST_ENTRY **)(v22 + 32);
                if ( v25->Flink != (struct _LIST_ENTRY *)(v22 + 24) )
                  goto LABEL_8;
                v48->Flink = (struct _LIST_ENTRY *)(v22 + 24);
                v48->Blink = v25;
                v25->Flink = v48;
                *(_QWORD *)(v22 + 32) = v48;
                if ( !v24 && (_QWORD *)*v21 != v21 )
                {
                  KiWakeOtherQueueWaiters(v42, v22);
                  v22 = v46;
                }
              }
              else
              {
                v23 = KiWakeQueueWaiter(v42, v46, v48);
                v22 = v46;
                if ( !v23 )
                {
                  v21 = (_QWORD *)(v46 + 8);
                  goto LABEL_38;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
              v16 = Event->Header.SignalState-- == 1;
              if ( v16 )
                goto LABEL_11;
              goto LABEL_62;
            }
            KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
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
      KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
      return SignalState;
    }
    while ( 1 )
    {
      v17 = (__int64)Flink;
      Flink = Flink->Flink;
      v49 = (_QWORD *)v17;
      v18 = *(_BYTE *)(v17 + 16);
      if ( v18 == 1 )
      {
        v19 = *(unsigned __int16 *)(v17 + 18);
      }
      else
      {
        if ( v18 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          v47 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)v17 = 0LL;
          v30 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
          {
            v39 = KeGetCurrentPrcb()->SchedulerAssist;
            v39[5] |= (-1LL << (v30 + 1)) & 4;
          }
          v41 = KeGetCurrentPrcb();
          v44 = v41->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v36 = KeIsThreadRunning(v41->CurrentThread);
            EtwTraceEnqueueWork(v38, v37, v36);
          }
          KiAcquireKobjectLockSafe(v47);
          v31 = (_QWORD *)(v47 + 8);
          v32 = v47;
          if ( (_QWORD *)*v31 == v31
            || *(_DWORD *)(v47 + 40) >= *(_DWORD *)(v47 + 44)
            || v44->Queue == (_DISPATCHER_HEADER *volatile)v47 && v44->WaitReason == 15 )
          {
LABEL_55:
            v34 = *(_DWORD *)(v32 + 4);
            *(_DWORD *)(v32 + 4) = v34 + 1;
            v35 = *(_QWORD **)(v32 + 32);
            if ( *v35 != v32 + 24 )
LABEL_8:
              __fastfail(3u);
            *v49 = v32 + 24;
            v49[1] = v35;
            *v35 = v49;
            *(_QWORD *)(v32 + 32) = v49;
            if ( !v34 && (_QWORD *)*v31 != v31 )
            {
              KiWakeOtherQueueWaiters(v41, v32);
              v32 = v47;
            }
          }
          else
          {
            v33 = KiWakeQueueWaiter(v41, v47, v49);
            v32 = v47;
            if ( !v33 )
            {
              v31 = (_QWORD *)(v47 + 8);
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v32, 0xFFFFFF7F);
          goto LABEL_22;
        }
        v19 = 256LL;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, v17, v19, 0LL);
LABEL_22:
      if ( Flink == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
