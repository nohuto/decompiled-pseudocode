/*
 * XREFs of KeSetEvent @ 0x1403435A0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140205180 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x140205730 (AlpcpSignal.c)
 *     KiDetachProcess @ 0x140207600 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x140207A80 (KiDecrementProcessStackCount.c)
 *     MiProcessWorkingSets @ 0x140207BA0 (MiProcessWorkingSets.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216790 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140217450 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     PpmReleaseLock @ 0x14022AB00 (PpmReleaseLock.c)
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x14022DA70 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402363C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     ExpQueueWorkItem @ 0x1402414A0 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x140241E80 (ExpWorkerThread.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     KiReadyThread @ 0x140248640 (KiReadyThread.c)
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     ExReferenceCallBackBlock @ 0x14025A950 (ExReferenceCallBackBlock.c)
 *     MiQueuePageAccessLog @ 0x14025C02C (MiQueuePageAccessLog.c)
 *     IoAcquireRemoveLockEx @ 0x1402607C0 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x140260844 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140261104 (PopFxCompleteComponentActivation.c)
 *     MiInsertUnusedSubsection @ 0x140263D60 (MiInsertUnusedSubsection.c)
 *     WmipUnreferenceRegEntry @ 0x1402650E4 (WmipUnreferenceRegEntry.c)
 *     EtwpSwitchBuffer @ 0x140265E94 (EtwpSwitchBuffer.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402712E4 (MiStoreUpdateMemoryConditions.c)
 *     MiWorkingSetManager @ 0x140272C60 (MiWorkingSetManager.c)
 *     PopQueueTargetDpc @ 0x14027B910 (PopQueueTargetDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140280840 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1402921D0 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x14029AFF0 (ExfReleaseRundownProtection.c)
 *     KiRequestProcessInSwap @ 0x14029BB70 (KiRequestProcessInSwap.c)
 *     ExpUnblockPushLock @ 0x14029CE28 (ExpUnblockPushLock.c)
 *     IoReleaseRemoveLockEx @ 0x1402AB990 (IoReleaseRemoveLockEx.c)
 *     MiIssueHardFaultIo @ 0x1402AF824 (MiIssueHardFaultIo.c)
 *     ExNotifyWithProcessing @ 0x1402B0658 (ExNotifyWithProcessing.c)
 *     MiReclaimSystemVa @ 0x1402B4188 (MiReclaimSystemVa.c)
 *     PfpEventHandleFullBuffer @ 0x1402B7E00 (PfpEventHandleFullBuffer.c)
 *     MiReduceZeroingThreads @ 0x1402BB870 (MiReduceZeroingThreads.c)
 *     SmKmGenericCompletion @ 0x1402BD890 (SmKmGenericCompletion.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402BFB8C (ExpPartitionCreateThreadIfNecessary.c)
 *     SepRmCallLsa @ 0x1402C19C0 (SepRmCallLsa.c)
 *     CcNotifyWriteBehindInternal @ 0x1402C2120 (CcNotifyWriteBehindInternal.c)
 *     MiStoreSetEvictPageFile @ 0x1402C51BC (MiStoreSetEvictPageFile.c)
 *     PnpUnlockDeviceActionQueue @ 0x1402C6F4C (PnpUnlockDeviceActionQueue.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1402C7150 (LZNT1DecompressChunkWorkItem.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1402C9BD0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x1402CAE20 (CmpLazyFlushDpcRoutine.c)
 *     ExpEnumerateCallback @ 0x1402CB390 (ExpEnumerateCallback.c)
 *     CcPrepareMdlWrite @ 0x1402CC660 (CcPrepareMdlWrite.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1402D0020 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     CcDeleteBcbs @ 0x1402D2640 (CcDeleteBcbs.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1402D2E50 (ExpWorkQueueManagerReaperTimer.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402D3AC0 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiIrpCompletionApcRoutine @ 0x1402D3EF0 (MiIrpCompletionApcRoutine.c)
 *     PfpReturnAccessBuffer @ 0x1402D40D0 (PfpReturnAccessBuffer.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402D5268 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D74F0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402D7E20 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402D9740 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D99DC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x1402DA7B4 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x1402DA854 (SmFpFree.c)
 *     PfSnRemoveProcessTrace @ 0x1402DF94C (PfSnRemoveProcessTrace.c)
 *     SmKmStoreHelperSendCommand @ 0x1402E0224 (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperWorker @ 0x1402E0320 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402E16D0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcPurgeAndClearCacheSection @ 0x1402EF194 (CcPurgeAndClearCacheSection.c)
 *     ExpWakePushLock @ 0x1402F15A0 (ExpWakePushLock.c)
 *     CcWorkerThread @ 0x1402F31F0 (CcWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x1402F3DDC (CcDeleteSharedCacheMap.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x1402F6D2C (CcDereferencePartition.c)
 *     MiDecrementControlAreaCount @ 0x1402F7BE8 (MiDecrementControlAreaCount.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F8664 (CcPostWorkQueueAsyncRead.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1402FEEE0 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x1402FF128 (MiWakePageZeroing.c)
 *     MiWakeZeroingThreads @ 0x1402FF3D0 (MiWakeZeroingThreads.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     MiFreeExcessSegments @ 0x140314D50 (MiFreeExcessSegments.c)
 *     MiFinishVadDeletion @ 0x140316DC0 (MiFinishVadDeletion.c)
 *     MiDecreaseAvailablePages @ 0x140319380 (MiDecreaseAvailablePages.c)
 *     PfFileInfoNotify @ 0x14031D600 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x14031E2C0 (PfSnReferenceProcessTrace.c)
 *     CcPinFileData @ 0x14031F630 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1403209F0 (CcFreeVirtualAddress.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140329470 (MiInsertProtectedStandbyPage.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14035A530 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14035A558 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035AA5C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiWakeModifiedPageWriter @ 0x14035BB54 (MiWakeModifiedPageWriter.c)
 *     MiFlushAllHintedStorePages @ 0x14035BBB0 (MiFlushAllHintedStorePages.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x14035F730 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140360770 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036D730 (PnpDiagnosticCompletionRoutine.c)
 *     PopRequestPowerIrp @ 0x14036DD20 (PopRequestPowerIrp.c)
 *     PoFxPrepareDevice @ 0x14036F300 (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x14036FCD0 (PopFxActivateDevice.c)
 *     PnpDeviceActionWorker @ 0x1403700A0 (PnpDeviceActionWorker.c)
 *     PopQueueDirectedDripsWork @ 0x14037A5A8 (PopQueueDirectedDripsWork.c)
 *     PopRequestCompletion @ 0x14037A900 (PopRequestCompletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037BDF0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14037EAF0 (VfPoolDelayFreeIfPossible.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037EFDC (PnpRemoveDeviceActionRequests.c)
 *     PopUnregisterPowerSettingCallback @ 0x140380F0C (PopUnregisterPowerSettingCallback.c)
 *     PopFxComponentWork @ 0x140381740 (PopFxComponentWork.c)
 *     MiFlushAllPagesWorker @ 0x14038479C (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x1403848A0 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140387B6C (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403887B8 (PopCompleteNotifyTransitionCommon.c)
 *     MiMarkSessionDeletePending @ 0x140389DB0 (MiMarkSessionDeletePending.c)
 *     PoFxNotifySurprisePowerOn @ 0x14038BB10 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x14038CD70 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x14038D940 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038DB58 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038DC70 (PfpScenCtxWaiterTimedOut.c)
 *     PnpUnlockMountableDevice @ 0x140393E18 (PnpUnlockMountableDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140399A10 (PopFxAllocatePowerIrp.c)
 *     PopIrpWorker @ 0x14039FE70 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1403A056C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403A0720 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxReleasePowerIrp @ 0x1403A4D14 (PopFxReleasePowerIrp.c)
 *     MiAddZeroingThreads @ 0x1403A55A0 (MiAddZeroingThreads.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5B54 (MiQueueWorkingSetRequest.c)
 *     PopUserPresentSet @ 0x1403A5F04 (PopUserPresentSet.c)
 *     PopBatteryWakeDpc @ 0x1403A7AC0 (PopBatteryWakeDpc.c)
 *     ExCompareExchangeCallBack @ 0x1403A7E6C (ExCompareExchangeCallBack.c)
 *     MiZeroPageCalibrate @ 0x1403AFE24 (MiZeroPageCalibrate.c)
 *     MiZeroNodePages @ 0x1403B0220 (MiZeroNodePages.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B6178 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B6A44 (MiUpdateAvailableEvents.c)
 *     KeBalanceSetManager @ 0x1403B90E0 (KeBalanceSetManager.c)
 *     WheaLogInternalEvent @ 0x1403BAD50 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403BB024 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x1403BDB20 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BF928 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403C1000 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x1403C3418 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x1403C9C84 (PopPropogateCoolingChange.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1403D00B0 (PopPepStartDeviceUnregisterActivity.c)
 *     IopCopyCompleteReadRequest @ 0x1403F1A30 (IopCopyCompleteReadRequest.c)
 *     HalpProcessSecondarySignalList @ 0x1404D1280 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x1404D1420 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404D14C4 (HalpReleaseSecondaryIcEntryShared.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E8A80 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1404EA2F0 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1404EBC80 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x1404F1198 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1404F1660 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140500AB4 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x140500B24 (IopFreeReserveIrp.c)
 *     PnprQuiesce @ 0x14050F718 (PnprQuiesce.c)
 *     KeRetryOutswapProcess @ 0x1405138C8 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140519054 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14051920C (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140521340 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14052196C (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140521CB0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x140521CEC (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x140521DC4 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140521E00 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x140525CC8 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x14052A23C (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x14052A61C (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x14052B674 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C368 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C554 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x14052D750 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x1405355C8 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14053908C (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1405392A8 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x140539BC0 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x14053B584 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x14053D160 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14053D274 (MiFreeOverlappedFlushEntry.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053EB04 (MiFinishHoldingDirtyFaults.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
 *     MiAttemptPageFileReductionApc @ 0x140542AD0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1405435F0 (MiFinishPageFileExtension.c)
 *     MiPageNotZero @ 0x14054F170 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x140559FC0 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140559FF4 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x140562B90 (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564970 (NtSignalAndWaitForSingleObject.c)
 *     PopDeviceIdleCompletion @ 0x140568F70 (PopDeviceIdleCompletion.c)
 *     PopFxClearDeviceConstraints @ 0x140569DC4 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x14056A458 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x14056A55C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x14056A720 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x14056A830 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x14056A8C0 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x14056A9A0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x14056B990 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14056BD40 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056C32C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x14056C360 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14056D6C0 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14056D7D0 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x14056F1E0 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x140573E10 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x14057DD6C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14057DE10 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14057DEA4 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140598CA4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059F970 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14059FA50 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x1405A5F30 (EtwSendTraceBuffer.c)
 *     EtwpLoggerDpc @ 0x1405AA740 (EtwpLoggerDpc.c)
 *     EtwpThreadRundownApc @ 0x1405AB850 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405AE928 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AF068 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AF0D0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1405AF130 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1405B30E0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1405B3130 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x1405B5A90 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1405BBBD0 (WheapProcessWorkQueueItem.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E55B0 (AlpcpCompleteDispatchMessage.c)
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604FA0 (PspEvaluateAndNotifyEmptyJob.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14061088C (ExpWnfNotifyNameSubscribers.c)
 *     EtwpLogger @ 0x1406456F0 (EtwpLogger.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140645E50 (EtwpRealtimeInjectEtwBuffer.c)
 *     CmNotifyRunDown @ 0x14064C750 (CmNotifyRunDown.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     IopTrackLink @ 0x1406809F0 (IopTrackLink.c)
 *     RtlDecompressBufferLZNT1 @ 0x140683F40 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406840B0 (RtlDecompressFragmentLZNT1.c)
 *     NtSetEvent @ 0x140684400 (NtSetEvent.c)
 *     NtNotifyChangeSession @ 0x140694DB0 (NtNotifyChangeSession.c)
 *     CmpPostApc @ 0x14069CB80 (CmpPostApc.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x14069DC80 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ExpWnfNotifySubscription @ 0x1406AB524 (ExpWnfNotifySubscription.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406AE300 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpFreeLoggerContext @ 0x1406B51BC (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406B5824 (EtwpRealtimeDisconnectAllConsumers.c)
 *     AlpcpTrackPortReferences @ 0x1406B8108 (AlpcpTrackPortReferences.c)
 *     EtwpSynchronizeWithLogger @ 0x1406B8D9C (EtwpSynchronizeWithLogger.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406BBC78 (CmpWakeWriteQueueWaiters.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406BD210 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpStopLoggerInstance @ 0x1406C0144 (EtwpStopLoggerInstance.c)
 *     EtwpDisassociateConsumer @ 0x1406C2700 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406C3D50 (PfSnTracingStateExWorkerRoutine.c)
 *     PfTReplaceCurrentBuffer @ 0x1406CB134 (PfTReplaceCurrentBuffer.c)
 *     PfGetCompletedTrace @ 0x1406CD47C (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1406CD70C (PfTTraceListAdd.c)
 *     PfSnEndTrace @ 0x1406CF788 (PfSnEndTrace.c)
 *     EtwpQueueNotification @ 0x1406E424C (EtwpQueueNotification.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     PiUEventDereferenceEventEntry @ 0x1406E62DC (PiUEventDereferenceEventEntry.c)
 *     PnpCompleteDeviceEvent @ 0x1406E7458 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x1406E78D0 (PnpDeviceEventWorker.c)
 *     MiPfExecuteReadList @ 0x1406E9104 (MiPfExecuteReadList.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 *     MiInSwapStoreWorker @ 0x1407104D0 (MiInSwapStoreWorker.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14071CD98 (CmpSignalUnloadEventArrayForHive.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725DB0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736750 (PopFxUnregisterDeviceOrWait.c)
 *     WmipQueueNotification @ 0x140755654 (WmipQueueNotification.c)
 *     WmipAddDataSource @ 0x1407568A8 (WmipAddDataSource.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1407607D0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopDestroyActiveConnectBlock @ 0x140762650 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x140764810 (HalGetAdapterV2.c)
 *     PiUEventHandleVetoEvent @ 0x14076E718 (PiUEventHandleVetoEvent.c)
 *     ArbArbiterHandler @ 0x140771590 (ArbArbiterHandler.c)
 *     PopCompleteAction @ 0x140773D74 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140774B20 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PfGenerateTrace @ 0x140776874 (PfGenerateTrace.c)
 *     MiDereferenceSessionFinal @ 0x140778320 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140778934 (PopFinalizeWakeInfo.c)
 *     HalpGetDynamicDevicePointer @ 0x140778ED4 (HalpGetDynamicDevicePointer.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B820 (IopInvalidateVolumesForDevice.c)
 *     IopLoadUnloadDriver @ 0x140780820 (IopLoadUnloadDriver.c)
 *     WmipReleaseCollectionEnabled @ 0x140781994 (WmipReleaseCollectionEnabled.c)
 *     MmSetSessionObjectIoEvent @ 0x14078D904 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14078DAD4 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x14078EB40 (PopUserPresentSetWorker.c)
 *     CmpInitializeSystemHivesLoad @ 0x14078F594 (CmpInitializeSystemHivesLoad.c)
 *     MUIRegistrySystemRoutine @ 0x1407946F0 (MUIRegistrySystemRoutine.c)
 *     EtwInitialize @ 0x140798D94 (EtwInitialize.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A2578 (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     PfTLoggingWorker @ 0x1407ACF60 (PfTLoggingWorker.c)
 *     PopFxUnregisterDevice @ 0x1407B4F70 (PopFxUnregisterDevice.c)
 *     MmStoreRegister @ 0x1407B637C (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x1407B6FD0 (MiInsertPageFileInList.c)
 *     PopFanWorker @ 0x1407C0170 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407C0270 (PopThermalWorker.c)
 *     ExpPartitionCreatePool @ 0x1407C2288 (ExpPartitionCreatePool.c)
 *     HalGetAdapterV3 @ 0x1407C33B0 (HalGetAdapterV3.c)
 *     CmpWaitForHiveMount @ 0x1407C3E84 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4720 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407CB970 (CmpMachineHiveLoadedWorkItem.c)
 *     WheapEtwEnableCallback @ 0x1407D35D0 (WheapEtwEnableCallback.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1408648C0 (HalpDynamicDeviceInterfaceNotification.c)
 *     CmpPostApcRunDown @ 0x14086A190 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140872330 (CmThawRegistry.c)
 *     DbgkpCloseObject @ 0x140884830 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140885518 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140885810 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140885B10 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140885F50 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140886A44 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1408885D0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14088C0F0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x1408914C0 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x1408920C0 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140893EE0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14089B94C (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A14EC (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1408B4610 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1408BD75C (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408E03BC (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1408E0C00 (PfpParametersWatcher.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5810 (PopFxUpdateVetoMaskWork.c)
 *     PopBatteryReadTag @ 0x1408ED57C (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x14090538C (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409056FC (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140906200 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1409062AC (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090A4C0 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x14090E0FC (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14090E224 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14090E4A4 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x140919680 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x14092D2D4 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14092D46C (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140942248 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942AC0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140944D40 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x140955E74 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1409593D0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14095D830 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WdtpBarkWorkerThread @ 0x14097FF20 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x140980490 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x14098F708 (EmpReleasePagingReference.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PopTransitionToSleep @ 0x1409950D0 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140996250 (PopEndMirroring.c)
 *     ExpSetSwappingKernelApc @ 0x140997C60 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x140997FA0 (PopFlushVolumeWorker.c)
 *     PopHandleWakeSources @ 0x140998410 (PopHandleWakeSources.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140998C20 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x14099AB98 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1409AD7FC (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AEC60 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1409AFF70 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409B0F60 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B2510 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1409B25A0 (PopBuildDeviceNotifyListWatchdog.c)
 *     KdpTimeSlipWork @ 0x1409B8FB0 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x1409D1910 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D5DE4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x1409E56F0 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F24C0 (AnFwpFadeAnimationTimer.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     MiInitializePagedPoolEvents @ 0x140A4EB3C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140243310 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x140342820 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513054 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
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
  __int64 v24; // r9
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  int v28; // r10d
  struct _LIST_ENTRY *v29; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v31; // rdx
  __int64 v32; // r9
  _DWORD *v33; // r9
  unsigned __int8 v34; // cl
  __int64 v35; // r9
  _QWORD *v36; // r9
  __int64 v37; // rcx
  char v38; // al
  int v39; // r10d
  unsigned __int8 v40; // al
  __int64 v41; // rdx
  __int64 v42; // r9
  _DWORD *v43; // r9
  struct _KPRCB *v44; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v45; // [rsp+38h] [rbp-50h]
  __int64 v46; // [rsp+40h] [rbp-48h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  int v48; // [rsp+90h] [rbp+8h]
  __int64 v49; // [rsp+90h] [rbp+8h]
  __int64 v50; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v51; // [rsp+A8h] [rbp+20h]
  _QWORD *v52; // [rsp+A8h] [rbp+20h]

  v4 = Wait;
  v5 = Increment;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v48 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v48 = 1;
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
    if ( !v48 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v13 = Flink->Flink;
          v14 = (__int64)Flink;
          v51 = Flink;
          Flink = v13;
          Blink = v51->Blink;
          if ( v13->Blink != v51 || Blink->Flink != (struct _LIST_ENTRY *)v14 )
            goto LABEL_8;
          Blink->Flink = v13;
          v13->Blink = Blink;
          v17 = *(_BYTE *)(v14 + 16);
          if ( v17 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
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
              v49 = *(_QWORD *)(v14 + 24);
              *(_QWORD *)v14 = 0LL;
              v22 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
              {
                v33 = KeGetCurrentPrcb()->SchedulerAssist;
                v9 = (unsigned int)(-1LL << (v22 + 1)) & 4 | v33[5];
                v14 = (__int64)v51;
                v33[5] = v9;
              }
              v45 = KeGetCurrentPrcb();
              CurrentThread = (__int64)v45->CurrentThread;
              v46 = CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(CurrentThread);
                EtwTraceEnqueueWork(v32, v31, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v49, v14, v9, CurrentThread);
              v25 = (_QWORD *)(v49 + 8);
              v26 = v49;
              if ( (_QWORD *)*v25 == v25
                || *(_DWORD *)(v49 + 40) >= *(_DWORD *)(v49 + 44)
                || *(_QWORD *)(v46 + 232) == v49 && *(_BYTE *)(v46 + 643) == 15 )
              {
LABEL_38:
                v28 = *(_DWORD *)(v26 + 4);
                v9 = v26 + 24;
                *(_DWORD *)(v26 + 4) = v28 + 1;
                v29 = *(struct _LIST_ENTRY **)(v26 + 32);
                if ( v29->Flink != (struct _LIST_ENTRY *)(v26 + 24) )
                  goto LABEL_8;
                v51->Flink = (struct _LIST_ENTRY *)v9;
                v51->Blink = v29;
                v29->Flink = v51;
                *(_QWORD *)(v26 + 32) = v51;
                if ( !v28 && (_QWORD *)*v25 != v25 )
                {
                  KiWakeOtherQueueWaiters((__int64)v45, v26);
                  v26 = v49;
                }
              }
              else
              {
                v27 = KiWakeQueueWaiter((__int64)v45, v49, (__int64)v51, v24);
                v26 = v49;
                if ( !v27 )
                {
                  v25 = (_QWORD *)(v49 + 8);
                  goto LABEL_38;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
              goto LABEL_62;
            }
            KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
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
      v52 = (_QWORD *)v19;
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
          v50 = *(_QWORD *)(v19 + 24);
          *(_QWORD *)v19 = 0LL;
          v34 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
          {
            v43 = KeGetCurrentPrcb()->SchedulerAssist;
            v9 = (unsigned int)(-1LL << (v34 + 1)) & 4 | v43[5];
            v43[5] = v9;
          }
          v44 = KeGetCurrentPrcb();
          v35 = (__int64)v44->CurrentThread;
          v47 = v35;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v40 = KeIsThreadRunning(v35);
            EtwTraceEnqueueWork(v42, v41, v40);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v50, v19, v9, v35);
          v36 = (_QWORD *)(v50 + 8);
          v37 = v50;
          if ( (_QWORD *)*v36 == v36
            || *(_DWORD *)(v50 + 40) >= *(_DWORD *)(v50 + 44)
            || *(_QWORD *)(v47 + 232) == v50 && *(_BYTE *)(v47 + 643) == 15 )
          {
LABEL_55:
            v39 = *(_DWORD *)(v37 + 4);
            *(_DWORD *)(v37 + 4) = v39 + 1;
            v9 = *(_QWORD *)(v37 + 32);
            if ( *(_QWORD *)v9 != v37 + 24 )
LABEL_8:
              __fastfail(3u);
            *v52 = v37 + 24;
            v52[1] = v9;
            *(_QWORD *)v9 = v52;
            *(_QWORD *)(v37 + 32) = v52;
            if ( !v39 && (_QWORD *)*v36 != v36 )
            {
              KiWakeOtherQueueWaiters((__int64)v44, v37);
              v37 = v50;
            }
          }
          else
          {
            v38 = KiWakeQueueWaiter((__int64)v44, v50, (__int64)v52, v50 + 8);
            v37 = v50;
            if ( !v38 )
            {
              v36 = (_QWORD *)(v50 + 8);
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v37, 0xFFFFFF7F);
          goto LABEL_22;
        }
        v21 = 256LL;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, v19, v21, 0LL);
LABEL_22:
      if ( Flink == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
