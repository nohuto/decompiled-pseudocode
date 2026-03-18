/*
 * XREFs of KeSetEvent @ 0x140286AD0
 * Callers:
 *     MiProcessWorkingSets @ 0x1402036D0 (MiProcessWorkingSets.c)
 *     KiDecrementProcessStackCount @ 0x1402051D8 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     MiFinishVadDeletion @ 0x1402209B0 (MiFinishVadDeletion.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x14022EE90 (CcFreeVirtualAddress.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeExcessSegments @ 0x14024AB40 (MiFreeExcessSegments.c)
 *     MiQueuePageAccessLog @ 0x14024C08C (MiQueuePageAccessLog.c)
 *     MiInsertUnusedSubsection @ 0x14024C2B0 (MiInsertUnusedSubsection.c)
 *     ExReferenceCallBackBlock @ 0x14024C9E0 (ExReferenceCallBackBlock.c)
 *     PfFileInfoNotify @ 0x14025C410 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x14025D0D0 (PfSnReferenceProcessTrace.c)
 *     MiIssueHardFaultIo @ 0x14025DE24 (MiIssueHardFaultIo.c)
 *     MiDecrementControlAreaCount @ 0x14026064C (MiDecrementControlAreaCount.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     WmipUnreferenceRegEntry @ 0x1402729C4 (WmipUnreferenceRegEntry.c)
 *     ExpWakePushLock @ 0x140274A10 (ExpWakePushLock.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140275F20 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiInsertProtectedStandbyPage @ 0x140278FC0 (MiInsertProtectedStandbyPage.c)
 *     EtwpSwitchBuffer @ 0x14027E018 (EtwpSwitchBuffer.c)
 *     KiReadyThread @ 0x1402813E0 (KiReadyThread.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     AlpcpSignalAndWait @ 0x1402967C0 (AlpcpSignalAndWait.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1402A98F0 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiDecreaseAvailablePages @ 0x1402B6F90 (MiDecreaseAvailablePages.c)
 *     ExpQueueWorkItem @ 0x1402B7B10 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1402B84F0 (ExpWorkerThread.c)
 *     CcFlushCachePriv @ 0x1402BEDA0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x1402C45FC (CcDereferencePartition.c)
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 *     CcWorkerThread @ 0x1402C6C30 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C8154 (CcPostWorkQueueAsyncRead.c)
 *     PopFxProcessWork @ 0x1402C962C (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1402C9EE4 (PopFxCompleteComponentActivation.c)
 *     IoAcquireRemoveLockEx @ 0x1402CA580 (IoAcquireRemoveLockEx.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402CE458 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402CE730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmFpFree @ 0x1402D03CC (SmFpFree.c)
 *     SmIoRequestComplete @ 0x1402D0478 (SmIoRequestComplete.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402D0D38 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     PnpUnlockDeviceActionQueue @ 0x1402DA3D4 (PnpUnlockDeviceActionQueue.c)
 *     MiReduceZeroingThreads @ 0x1402DDCA4 (MiReduceZeroingThreads.c)
 *     PopQueueTargetDpc @ 0x1402E3C10 (PopQueueTargetDpc.c)
 *     AlpcpSignal @ 0x1402EF81C (AlpcpSignal.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F1DF8 (MiStoreUpdateMemoryConditions.c)
 *     MiWorkingSetManager @ 0x1402F3750 (MiWorkingSetManager.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403031C0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x1403036C0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperSendCommand @ 0x140304B08 (SmKmStoreHelperSendCommand.c)
 *     PfSnRemoveProcessTrace @ 0x140305000 (PfSnRemoveProcessTrace.c)
 *     PfpReturnAccessBuffer @ 0x140305230 (PfpReturnAccessBuffer.c)
 *     MiFlushAllHintedStorePages @ 0x14031056C (MiFlushAllHintedStorePages.c)
 *     MiWakeModifiedPageWriter @ 0x140310698 (MiWakeModifiedPageWriter.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140310B10 (MiTrimUnusedPageFileRegionsApc.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140311254 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1403112E0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x140317010 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x140317258 (MiWakePageZeroing.c)
 *     MiWakeZeroingThreads @ 0x140317500 (MiWakeZeroingThreads.c)
 *     CcPurgeAndClearCacheSection @ 0x1403203EC (CcPurgeAndClearCacheSection.c)
 *     ExpUnblockPushLock @ 0x140325748 (ExpUnblockPushLock.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140326E30 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x140328200 (ExfReleaseRundownProtection.c)
 *     KiRequestProcessInSwap @ 0x140328610 (KiRequestProcessInSwap.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140328FB0 (KiBalanceSetManagerDeferredRoutine.c)
 *     IoReleaseRemoveLockEx @ 0x14033A470 (IoReleaseRemoveLockEx.c)
 *     ExNotifyWithProcessing @ 0x14033CEE8 (ExNotifyWithProcessing.c)
 *     MiReclaimSystemVa @ 0x14033E98C (MiReclaimSystemVa.c)
 *     PfpEventHandleFullBuffer @ 0x1403435D0 (PfpEventHandleFullBuffer.c)
 *     SmKmGenericCompletion @ 0x14034A510 (SmKmGenericCompletion.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14034AE18 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14034D698 (ExpPartitionCreateThreadIfNecessary.c)
 *     SepRmCallLsa @ 0x14034F640 (SepRmCallLsa.c)
 *     CcNotifyWriteBehindInternal @ 0x1403501D0 (CcNotifyWriteBehindInternal.c)
 *     MiStoreSetEvictPageFile @ 0x140353A3C (MiStoreSetEvictPageFile.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140355A50 (LZNT1DecompressChunkWorkItem.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140358140 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x140359180 (CmpLazyFlushDpcRoutine.c)
 *     ExpEnumerateCallback @ 0x140359550 (ExpEnumerateCallback.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14035D780 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     CcDeleteBcbs @ 0x14035F7D0 (CcDeleteBcbs.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14035FF70 (ExpWorkQueueManagerReaperTimer.c)
 *     MiIrpCompletionApcRoutine @ 0x140360E50 (MiIrpCompletionApcRoutine.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036B120 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x14036BBE4 (PoFxPrepareDevice.c)
 *     PopRequestPowerIrp @ 0x14036CAE0 (PopRequestPowerIrp.c)
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 *     VfPoolDelayFreeIfPossible @ 0x140370560 (VfPoolDelayFreeIfPossible.c)
 *     PopQueueDirectedDripsWork @ 0x140378508 (PopQueueDirectedDripsWork.c)
 *     PopRequestCompletion @ 0x1403789D0 (PopRequestCompletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140379E70 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUnregisterPowerSettingCallback @ 0x14037E99C (PopUnregisterPowerSettingCallback.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037ED74 (PnpRemoveDeviceActionRequests.c)
 *     PopFxComponentWork @ 0x14037F310 (PopFxComponentWork.c)
 *     MiFlushAllPagesWorker @ 0x140380308 (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x140381DE0 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140385268 (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140385EB8 (PopCompleteNotifyTransitionCommon.c)
 *     MiMarkSessionDeletePending @ 0x140387498 (MiMarkSessionDeletePending.c)
 *     PoFxNotifySurprisePowerOn @ 0x140389120 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x14038A3B0 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x14038AF20 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038B138 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038B2B4 (PfpScenCtxWaiterTimedOut.c)
 *     PnpUnlockMountableDevice @ 0x1403914E8 (PnpUnlockMountableDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140397120 (PopFxAllocatePowerIrp.c)
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14039D7DC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14039D990 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxReleasePowerIrp @ 0x1403A1F84 (PopFxReleasePowerIrp.c)
 *     MiAddZeroingThreads @ 0x1403A2810 (MiAddZeroingThreads.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2ED4 (MiQueueWorkingSetRequest.c)
 *     PopUserPresentSet @ 0x1403A3284 (PopUserPresentSet.c)
 *     PopBatteryWakeDpc @ 0x1403A4E00 (PopBatteryWakeDpc.c)
 *     MiZeroPageCalibrate @ 0x1403A7530 (MiZeroPageCalibrate.c)
 *     MiZeroNodePages @ 0x1403A7930 (MiZeroNodePages.c)
 *     ExCompareExchangeCallBack @ 0x1403AB8EC (ExCompareExchangeCallBack.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B2188 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B2A94 (MiUpdateAvailableEvents.c)
 *     KeBalanceSetManager @ 0x1403B5C40 (KeBalanceSetManager.c)
 *     WheaLogInternalEvent @ 0x1403B78B0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403B7B84 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BCC54 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403BE290 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x1403C0454 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x1403C6654 (PopPropogateCoolingChange.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1403CCAB0 (PopPepStartDeviceUnregisterActivity.c)
 *     HalpProcessSecondarySignalList @ 0x1404CC350 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x1404CC4F0 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404CC594 (HalpReleaseSecondaryIcEntryShared.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E3960 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1404E51D0 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1404E6B60 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x1404EBD68 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1404EC230 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1404FB65C (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1404FB6CC (IopFreeReserveIrp.c)
 *     PnprQuiesce @ 0x14050A2B8 (PnprQuiesce.c)
 *     KeRetryOutswapProcess @ 0x14050E458 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140513BE4 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140513D9C (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x14051BE90 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051C4BC (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x14051C800 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x14051C83C (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x14051C914 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14051C950 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x140520818 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x140524D8C (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x14052516C (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x1405261A4 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140527084 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x140528280 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140533BBC (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140533DD8 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1405346F0 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1405360B4 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x140537C90 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140537DA4 (MiFreeOverlappedFlushEntry.c)
 *     MiFinishHoldingDirtyFaults @ 0x140539634 (MiFinishHoldingDirtyFaults.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053AC64 (MiCopyImageExtentContents.c)
 *     MiAttemptPageFileReductionApc @ 0x14053D600 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14053E120 (MiFinishPageFileExtension.c)
 *     MiPageNotZero @ 0x140549CA0 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x140554B20 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140554B54 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x14055C478 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x14055D6F0 (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055F4D0 (NtSignalAndWaitForSingleObject.c)
 *     PopDeviceIdleCompletion @ 0x140563AC0 (PopDeviceIdleCompletion.c)
 *     PopFxClearDeviceConstraints @ 0x140564914 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x140564FA8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1405650AC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x140565290 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1405653A0 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x140565430 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x140565510 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x140566550 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x140566900 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x140566EEC (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x140566F20 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x140568280 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140568390 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x140569DA0 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x14056E9D0 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x14057892C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1405789D0 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140578A64 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405937D4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059A4A0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14059A580 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x1405A0A60 (EtwSendTraceBuffer.c)
 *     EtwpLoggerDpc @ 0x1405A5270 (EtwpLoggerDpc.c)
 *     EtwpThreadRundownApc @ 0x1405A63A0 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405A93C8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405A9B08 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405A9B70 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1405A9BD0 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1405ADB80 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1405ADBD0 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x1405B0530 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1405B6620 (WheapProcessWorkQueueItem.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpPostNotify @ 0x1405E5388 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1405ED780 (CmpSignalDeferredPosts.c)
 *     MiPfExecuteReadList @ 0x140609ED4 (MiPfExecuteReadList.c)
 *     PfGetCompletedTrace @ 0x14061D6F4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14061D984 (PfTTraceListAdd.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406220E0 (ExpWnfNotifyNameSubscribers.c)
 *     RtlDecompressFragmentLZNT1 @ 0x14062F4D0 (RtlDecompressFragmentLZNT1.c)
 *     RtlDecompressBufferLZNT1 @ 0x140630A80 (RtlDecompressBufferLZNT1.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     EtwpQueueNotification @ 0x1406371FC (EtwpQueueNotification.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     PiUEventDereferenceEventEntry @ 0x1406477AC (PiUEventDereferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x140648C30 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x1406497B8 (PnpCompleteDeviceEvent.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14065ADD0 (PspEvaluateAndNotifyEmptyJob.c)
 *     SPCallServerHandleQueryPolicy @ 0x14066E740 (SPCallServerHandleQueryPolicy.c)
 *     NtSetEvent @ 0x140673250 (NtSetEvent.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x14069C1A0 (EtwpRealtimeInjectEtwBuffer.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     CmNotifyRunDown @ 0x1406B0DF0 (CmNotifyRunDown.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C6C5C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406C6F20 (EtwpStopLoggerInstance.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406CA5F4 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406CBA68 (EtwpRealtimeDisconnectAllConsumers.c)
 *     PfSnEndTrace @ 0x1406CDD38 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x1406CF2A4 (PfTReplaceCurrentBuffer.c)
 *     MiInSwapStoreWorker @ 0x1406D0750 (MiInSwapStoreWorker.c)
 *     IopTrackLink @ 0x1406D3810 (IopTrackLink.c)
 *     NtNotifyChangeSession @ 0x1406E48A0 (NtNotifyChangeSession.c)
 *     CmpPostApc @ 0x1406ED5F0 (CmpPostApc.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406EEB60 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ExpWnfNotifySubscription @ 0x1406FB028 (ExpWnfNotifySubscription.c)
 *     AlpcpTrackPortReferences @ 0x140706E58 (AlpcpTrackPortReferences.c)
 *     CmpWakeWriteQueueWaiters @ 0x140709AC8 (CmpWakeWriteQueueWaiters.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x14070B0C0 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpDisassociateConsumer @ 0x1407102C8 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140711570 (PfSnTracingStateExWorkerRoutine.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140713820 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140733394 (PopFxUnregisterDeviceOrWait.c)
 *     WmipQueueNotification @ 0x14073FC14 (WmipQueueNotification.c)
 *     WmipAddDataSource @ 0x140740EF8 (WmipAddDataSource.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14074D560 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopDestroyActiveConnectBlock @ 0x14074F280 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x140752960 (HalGetAdapterV2.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 *     ArbArbiterHandler @ 0x14075EC00 (ArbArbiterHandler.c)
 *     PopCompleteAction @ 0x140761894 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140762570 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PfGenerateTrace @ 0x1407642B4 (PfGenerateTrace.c)
 *     MiDereferenceSessionFinal @ 0x140765340 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140765954 (PopFinalizeWakeInfo.c)
 *     HalpGetDynamicDevicePointer @ 0x140765EF4 (HalpGetDynamicDevicePointer.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 *     IopLoadUnloadDriver @ 0x14076E010 (IopLoadUnloadDriver.c)
 *     WmipReleaseCollectionEnabled @ 0x14076F604 (WmipReleaseCollectionEnabled.c)
 *     MmSetSessionObjectIoEvent @ 0x14077B524 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14077B6F4 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x14077C770 (PopUserPresentSetWorker.c)
 *     CmpInitializeSystemHivesLoad @ 0x140782BA4 (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     MUIRegistrySystemRoutine @ 0x140789A10 (MUIRegistrySystemRoutine.c)
 *     PfTLoggingWorker @ 0x14078E8F0 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     EtwInitialize @ 0x14079A310 (EtwInitialize.c)
 *     PopFxUnregisterDevice @ 0x1407A01FC (PopFxUnregisterDevice.c)
 *     MmStoreRegister @ 0x1407A23D0 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x1407A3030 (MiInsertPageFileInList.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A9798 (ArbBuildAssignmentOrdering.c)
 *     PopFanWorker @ 0x1407ADE30 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407ADF30 (PopThermalWorker.c)
 *     ExpPartitionCreatePool @ 0x1407AFF48 (ExpPartitionCreatePool.c)
 *     HalGetAdapterV3 @ 0x1407B1070 (HalGetAdapterV3.c)
 *     CmpWaitForHiveMount @ 0x1407B1B44 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407B24A0 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407B8DF0 (CmpMachineHiveLoadedWorkItem.c)
 *     WheapEtwEnableCallback @ 0x1407C0950 (WheapEtwEnableCallback.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140861290 (HalpDynamicDeviceInterfaceNotification.c)
 *     CmpPostApcRunDown @ 0x140866B40 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x14086EF88 (CmThawRegistry.c)
 *     DbgkpCloseObject @ 0x140881740 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140882428 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140882720 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140882A20 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140882E60 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140883954 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1408854E0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x140889000 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x14088E3A0 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x14088F040 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140890E20 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14089884C (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14089E3EC (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1408B1510 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1408BA23C (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408DCDBC (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1408DD600 (PfpParametersWatcher.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E21D0 (PopFxUpdateVetoMaskWork.c)
 *     PopBatteryReadTag @ 0x1408EA16C (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x140901F7C (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140902330 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140902E40 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x140902EEC (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409070F0 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x14090AD10 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14090AE38 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14090B0B8 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x140916290 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x140929CDC (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x140929E74 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x14093ECB8 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093F530 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1409417B0 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x1409528E4 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14095A1F0 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WdtpBarkWorkerThread @ 0x14097CA30 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x14097CFA0 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x14098C3C8 (EmpReleasePagingReference.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PopTransitionToSleep @ 0x140992920 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x1409930F0 (PopEndMirroring.c)
 *     ExpSetSwappingKernelApc @ 0x140994910 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x140994C50 (PopFlushVolumeWorker.c)
 *     PopHandleWakeSources @ 0x1409950C0 (PopHandleWakeSources.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1409958D0 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x1409975D8 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1409AA98C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409ABDF0 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1409AD100 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409AF6A0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1409AF730 (PopBuildDeviceNotifyListWatchdog.c)
 *     KdpTimeSlipWork @ 0x1409B5FB0 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x1409CE900 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D2DD4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x1409E26E0 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409EF4C0 (AnFwpFadeAnimationTimer.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     MiInitializePagedPoolEvents @ 0x140A47300 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
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
