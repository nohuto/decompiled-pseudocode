/*
 * XREFs of KeSetEvent @ 0x1402AFD30
 * Callers:
 *     PfpReturnAccessBuffer @ 0x1402009E4 (PfpReturnAccessBuffer.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1402035C0 (LZNT1DecompressChunkWorkItem.c)
 *     SepRmCallLsa @ 0x140203950 (SepRmCallLsa.c)
 *     KiInswapAndReadyThread @ 0x140211410 (KiInswapAndReadyThread.c)
 *     KiRequestProcessInSwap @ 0x14021162C (KiRequestProcessInSwap.c)
 *     MiInsertUnusedSubsection @ 0x140220AAC (MiInsertUnusedSubsection.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140221D90 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x140224430 (ExfReleaseRundownProtection.c)
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     ExNotifyWithProcessing @ 0x140232788 (ExNotifyWithProcessing.c)
 *     IoReleaseRemoveLockEx @ 0x1402332A0 (IoReleaseRemoveLockEx.c)
 *     MiQueuePageAccessLog @ 0x140233AA0 (MiQueuePageAccessLog.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140237230 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x140237628 (SmKmStoreHelperSendCommand.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140237720 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcPurgeAndClearCacheSection @ 0x14023C1EC (CcPurgeAndClearCacheSection.c)
 *     PfpEventHandleFullBuffer @ 0x140240250 (PfpEventHandleFullBuffer.c)
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     CcCompleteAsyncReadWorker @ 0x140242F10 (CcCompleteAsyncReadWorker.c)
 *     MiAddZeroingThreads @ 0x14024576C (MiAddZeroingThreads.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402470D0 (KiBalanceSetManagerDeferredRoutine.c)
 *     SmKmGenericCompletion @ 0x140248550 (SmKmGenericCompletion.c)
 *     NtSignalAndWaitForSingleObject @ 0x14024F140 (NtSignalAndWaitForSingleObject.c)
 *     PopQueueDirectedDripsWork @ 0x1402501A0 (PopQueueDirectedDripsWork.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     SmKmStoreHelperWorker @ 0x140253900 (SmKmStoreHelperWorker.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140253C70 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     PnpUnlockDeviceActionQueue @ 0x140253DD4 (PnpUnlockDeviceActionQueue.c)
 *     CmpLazyFlushDpcRoutine @ 0x140253FC0 (CmpLazyFlushDpcRoutine.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140256C68 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiReclaimSystemVa @ 0x140256F0C (MiReclaimSystemVa.c)
 *     MiWakeModifiedPageWriter @ 0x14025C460 (MiWakeModifiedPageWriter.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14025D6A0 (ExpWorkQueueManagerReaperTimer.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140260BE0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     MiDecreaseAvailablePages @ 0x140264D88 (MiDecreaseAvailablePages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402664E8 (MiStoreUpdateMemoryConditions.c)
 *     MiReduceZeroingThreads @ 0x140266CA8 (MiReduceZeroingThreads.c)
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 *     MiWakeZeroingThreads @ 0x140267A5C (MiWakeZeroingThreads.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiDecrementControlAreaCount @ 0x140270204 (MiDecrementControlAreaCount.c)
 *     CcCachemapUninitWorkerThread @ 0x140275000 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1402766A0 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     MiIssueHardFaultIo @ 0x14027AEA0 (MiIssueHardFaultIo.c)
 *     ExReferenceCallBackBlock @ 0x140281870 (ExReferenceCallBackBlock.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     MiFreeExcessSegments @ 0x1402878F0 (MiFreeExcessSegments.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     CcUnpinFileDataEx @ 0x14028A370 (CcUnpinFileDataEx.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     PopQueueTargetDpc @ 0x140293BA0 (PopQueueTargetDpc.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402CB2D0 (MiUnlinkNodeLargePageHelper.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1402CD7F0 (PfSnReferenceProcessTrace.c)
 *     KiDecrementProcessStackCount @ 0x1402D0CE0 (KiDecrementProcessStackCount.c)
 *     PoFxPrepareDevice @ 0x1402D2238 (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x1402D2864 (PopFxActivateDevice.c)
 *     VfPoolDelayFreeIfPossible @ 0x1402DB890 (VfPoolDelayFreeIfPossible.c)
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 *     WmipUnreferenceRegEntry @ 0x1402E0164 (WmipUnreferenceRegEntry.c)
 *     EtwpSwitchBuffer @ 0x1402E1704 (EtwpSwitchBuffer.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402EF2BC (ExpPartitionCreateThreadIfNecessary.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F5AEC (CcPostWorkQueueAsyncRead.c)
 *     AlpcpSignalAndWait @ 0x1402F63D0 (AlpcpSignalAndWait.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MiProcessWorkingSets @ 0x14030BBF0 (MiProcessWorkingSets.c)
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1403265B0 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     CcFreeVirtualAddress @ 0x140329430 (CcFreeVirtualAddress.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     MiIncreaseAvailablePages @ 0x140338BF0 (MiIncreaseAvailablePages.c)
 *     ExpWorkerThread @ 0x14033CBF0 (ExpWorkerThread.c)
 *     ExQueueWorkItemFromIo @ 0x140345DA0 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     PopFxCompleteComponentActivation @ 0x140355774 (PopFxCompleteComponentActivation.c)
 *     ExpWakePushLock @ 0x140359F70 (ExpWakePushLock.c)
 *     AlpcpSignal @ 0x14035AA74 (AlpcpSignal.c)
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 *     PfSnRemoveProcessTrace @ 0x14035F9D4 (PfSnRemoveProcessTrace.c)
 *     PopUserPresentSet @ 0x140368ED4 (PopUserPresentSet.c)
 *     ExpUnblockPushLock @ 0x140369634 (ExpUnblockPushLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14036A48C (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14036A8F0 (PopPowerRequestCallbackWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140373D18 (MmStoreFlushOutstandingEvictions.c)
 *     MiHandleForceTrimWorkingSets @ 0x140373F80 (MiHandleForceTrimWorkingSets.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140376DF0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1403773B0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     MiFlushAllHintedStorePages @ 0x1403773D8 (MiFlushAllHintedStorePages.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14037A04C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14037A5F0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x14037ADB8 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14037C034 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14037D2EC (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiQueueWorkingSetRequest @ 0x1403867F4 (MiQueueWorkingSetRequest.c)
 *     MiStoreSetEvictPageFile @ 0x1403868E8 (MiStoreSetEvictPageFile.c)
 *     ExpEnumerateCallback @ 0x140386C60 (ExpEnumerateCallback.c)
 *     CcDeleteBcbs @ 0x140388FC8 (CcDeleteBcbs.c)
 *     CcNotifyWriteBehindInternal @ 0x140389160 (CcNotifyWriteBehindInternal.c)
 *     PopUnregisterPowerSettingCallback @ 0x140389874 (PopUnregisterPowerSettingCallback.c)
 *     MiFlushAllPagesWorker @ 0x14038A914 (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x14038DF70 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140393EC0 (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403945DC (PopCompleteNotifyTransitionCommon.c)
 *     PoFxNotifySurprisePowerOn @ 0x140397A80 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x1403980F0 (PoFxPowerControl.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140399104 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140399288 (PfpScenCtxWaiterTimedOut.c)
 *     PnpUnlockMountableDevice @ 0x1403A01B0 (PnpUnlockMountableDevice.c)
 *     PopRequestPowerIrp @ 0x1403A3C90 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x1403A46E4 (PopFxAllocatePowerIrp.c)
 *     PopRequestCompletion @ 0x1403A4B90 (PopRequestCompletion.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403A6D44 (PnpRemoveDeviceActionRequests.c)
 *     PopIrpWorker @ 0x1403B1270 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1403B17EC (PopPepUpdateConstraints.c)
 *     PopFxReleasePowerIrp @ 0x1403B4E2C (PopFxReleasePowerIrp.c)
 *     PopFxComponentWork @ 0x1403B6010 (PopFxComponentWork.c)
 *     PopBatteryWakeDpc @ 0x1403B6C90 (PopBatteryWakeDpc.c)
 *     WheapAddErrorSource @ 0x1403C0774 (WheapAddErrorSource.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403C31D4 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403C3E64 (MiUpdateAvailableEvents.c)
 *     CcAsyncReadWorker @ 0x1403C4AE0 (CcAsyncReadWorker.c)
 *     ExCompareExchangeCallBack @ 0x1403C7678 (ExCompareExchangeCallBack.c)
 *     KeBalanceSetManager @ 0x1403C81D0 (KeBalanceSetManager.c)
 *     MiStoreEvictThread @ 0x1403CDBF0 (MiStoreEvictThread.c)
 *     MiSyncCommitSignals @ 0x1403CF698 (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403D0750 (CcInitializeAsyncReadForNodeHelper.c)
 *     PnpCompleteSystemStartProcess @ 0x1403D2178 (PnpCompleteSystemStartProcess.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 *     MiZeroPageCalibrate @ 0x1403D3EE0 (MiZeroPageCalibrate.c)
 *     MiZeroBootLargePages @ 0x1403D9D88 (MiZeroBootLargePages.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403DB6F0 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1403DF5C0 (PopPepStartDeviceUnregisterActivity.c)
 *     IopCopyCompleteReadRequest @ 0x140418160 (IopCopyCompleteReadRequest.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     PspGetSetContextSpecialApc @ 0x140429670 (PspGetSetContextSpecialApc.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404593D2 (HalpReleaseSecondaryIcEntryShared.c)
 *     FsFilterFreeCompletionStack @ 0x140459A82 (FsFilterFreeCompletionStack.c)
 *     KiProcessDisconnectList @ 0x14045B728 (KiProcessDisconnectList.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14045E3C0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140460CEC (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140460D60 (EtwpCovSampCaptureQueueDpc.c)
 *     ExReleaseRundownProtectionEx @ 0x140461950 (ExReleaseRundownProtectionEx.c)
 *     HalpProcessSecondarySignalList @ 0x14051D870 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x14051DA10 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140538890 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcRemoveExternalCache @ 0x140539BC4 (CcRemoveExternalCache.c)
 *     CcPostDeferredWrites @ 0x14053A100 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x14053C3E4 (CcForEachPrivateVolumeCacheMap.c)
 *     CcNotifyWriteBehindVolume @ 0x14053D2E4 (CcNotifyWriteBehindVolume.c)
 *     CcQuickLazyWriteScanForVolume @ 0x14053D730 (CcQuickLazyWriteScanForVolume.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x14053E700 (CcAsyncReadWorkerThread.c)
 *     FsRtlStackOverflowRead @ 0x140542F50 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140556A04 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x140556A74 (IopFreeReserveIrp.c)
 *     IopCompleteIoRingEntry @ 0x140559E1C (IopCompleteIoRingEntry.c)
 *     PnprQuiesce @ 0x140563058 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140564940 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x14056C540 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x14056ECDC (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14056EE94 (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140575C90 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140576200 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140576540 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x14057657C (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1405765B0 (KiSynchronizePassiveInterruptExecution.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140579150 (KiDeferredBugcheckRecoveryWorker.c)
 *     MiDecrementVadsBeingDeleted @ 0x14057FFF4 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140580FA4 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x140581A70 (MiZeroPageFile.c)
 *     MiProcessingPageExtendComplete @ 0x14058BA24 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x14058BE04 (MiQueueControlAreaDelete.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140594698 (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140594898 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x14059519C (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x140596A58 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x140597ED0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140598054 (MiFreeOverlappedFlushEntry.c)
 *     MiReadFromMemoryPagefile @ 0x14059A410 (MiReadFromMemoryPagefile.c)
 *     MiAttemptPageFileReductionApc @ 0x14059B0B0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14059C580 (MiFinishPageFileExtension.c)
 *     MiIrpCompletionApcRoutine @ 0x14059C980 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14059D070 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishHoldingDirtyFaults @ 0x1405A3738 (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x1405ADB14 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x1405BA5F0 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x1405BA624 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x1405BF468 (MiReturnCrossPartitionCharges.c)
 *     PopPropogateCoolingChange @ 0x1405C9A5C (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x1405CA230 (PopDeviceIdleCompletion.c)
 *     PoFxAddComponentRelation @ 0x1405CA2E0 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CA8F0 (PoFxRemoveComponentRelation.c)
 *     PopFxClearDeviceConstraints @ 0x1405CB6D8 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x1405CBC30 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1405CBD34 (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x1405CBF00 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1405CBFFC (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x1405CC080 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1405CC160 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x1405CD100 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1405CD400 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1405CD938 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x1405CD96C (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x1405CE6B0 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1405CE7C0 (PopFxUpdateProcessorIdleState.c)
 *     PopBatteryIrpComplete @ 0x1405D47C0 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x1405DDCE4 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1405DDD88 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405DDE24 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405F6B54 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405FD170 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1405FD250 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     DifKeSetEventWrapper @ 0x1406156A0 (DifKeSetEventWrapper.c)
 *     EtwpLoggerDpc @ 0x14062CDF0 (EtwpLoggerDpc.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x1406330C0 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140635DB8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1406364F0 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x14063A040 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x14063A090 (ExRegisterBootDevice.c)
 *     WheapProcessWorkQueueItem @ 0x140644030 (WheapProcessWorkQueueItem.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     IopWriteFile @ 0x140658DCC (IopWriteFile.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x140662070 (FsRtlpOplockWaitCompleteRoutine.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140683DF0 (PspEvaluateAndNotifyEmptyJob.c)
 *     CmpWakeWriteQueueWaiters @ 0x140689034 (CmpWakeWriteQueueWaiters.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 *     NtSetEvent @ 0x14069E0C0 (NtSetEvent.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406A4C10 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     NtNotifyChangeSession @ 0x1406A91F0 (NtNotifyChangeSession.c)
 *     MmSetSessionObjectIoEvent @ 0x1406A958C (MmSetSessionObjectIoEvent.c)
 *     CmpPostApc @ 0x1406CEBA0 (CmpPostApc.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406D1E4C (EtwpRealtimeDisconnectAllConsumers.c)
 *     IopTrackLink @ 0x1406D3128 (IopTrackLink.c)
 *     AlpcpTrackPortReferences @ 0x1406DA0CC (AlpcpTrackPortReferences.c)
 *     WmipQueueNotification @ 0x1406DAB4C (WmipQueueNotification.c)
 *     IopLoadUnloadDriver @ 0x1406DE800 (IopLoadUnloadDriver.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406E19B0 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpDisassociateConsumer @ 0x1406E9D2C (EtwpDisassociateConsumer.c)
 *     MiInSwapStoreWorker @ 0x1406EBDB0 (MiInSwapStoreWorker.c)
 *     EtwpSynchronizeWithLogger @ 0x1406EC9F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406EDB48 (EtwpStopLoggerInstance.c)
 *     MiPfExecuteReadList @ 0x1406F4E78 (MiPfExecuteReadList.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmpPostNotify @ 0x14071C288 (CmpPostNotify.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     PopSystemIdleWorker @ 0x140752F30 (PopSystemIdleWorker.c)
 *     WmipAddDataSource @ 0x14075D1B4 (WmipAddDataSource.c)
 *     PiUEventDereferenceEventEntry @ 0x14078AE7C (PiUEventDereferenceEventEntry.c)
 *     EtwpQueueNotification @ 0x140790EEC (EtwpQueueNotification.c)
 *     ExpWnfNotifySubscription @ 0x1407927AC (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407938B0 (ExpWnfNotifyNameSubscribers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140798F44 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14079A984 (EtwpRealtimeUpdateConsumers.c)
 *     CmNotifyRunDown @ 0x14079FD44 (CmNotifyRunDown.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     PnpDeviceEventWorker @ 0x1407D5E30 (PnpDeviceEventWorker.c)
 *     RtlDecompressBufferLZNT1 @ 0x1407D6FA0 (RtlDecompressBufferLZNT1.c)
 *     PnpCompleteDeviceEvent @ 0x1407D78A0 (PnpCompleteDeviceEvent.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1407D80F0 (RtlDecompressFragmentLZNT1.c)
 *     PfSnEndTrace @ 0x1407D9428 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x1407DA854 (PfTReplaceCurrentBuffer.c)
 *     PfGetCompletedTrace @ 0x1407DB830 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1407DBAC0 (PfTTraceListAdd.c)
 *     PopUserPresentSetWorker @ 0x1407F32E0 (PopUserPresentSetWorker.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1407F3CF0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1407F8B10 (PfSnTracingStateExWorkerRoutine.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1407FA9D0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     PiUEventHandleVetoEvent @ 0x1407FBA68 (PiUEventHandleVetoEvent.c)
 *     PopCompleteAction @ 0x1407FD778 (PopCompleteAction.c)
 *     HalpGetDynamicDevicePointer @ 0x14080637C (HalpGetDynamicDevicePointer.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140806FC0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     IopInvalidateVolumesForDevice @ 0x14080AB40 (IopInvalidateVolumesForDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14080D7EC (PopFxUnregisterDeviceOrWait.c)
 *     WmipReleaseCollectionEnabled @ 0x1408119C4 (WmipReleaseCollectionEnabled.c)
 *     IopDestroyActiveConnectBlock @ 0x1408176BC (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14081788C (IopAcquireReleaseConnectLockInternal.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14081BF60 (SshpSessionManagerFlushControlEventBuffer.c)
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 *     PopFxUnregisterDevice @ 0x14082310C (PopFxUnregisterDevice.c)
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 *     MUIRegistrySystemRoutine @ 0x14082FB00 (MUIRegistrySystemRoutine.c)
 *     CmpInitializeSystemHivesLoad @ 0x1408337BC (CmpInitializeSystemHivesLoad.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x14083AAB8 (ArbBuildAssignmentOrdering.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     HalGetAdapterV2 @ 0x140845A60 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x140845F30 (HalGetAdapterV3.c)
 *     MmStoreRegister @ 0x14084A7D0 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14084B418 (MiInsertPageFileInList.c)
 *     PopThermalWorker @ 0x140850980 (PopThermalWorker.c)
 *     ExpPartitionCreatePool @ 0x140851DAC (ExpPartitionCreatePool.c)
 *     ArbArbiterHandler @ 0x140852700 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x140853BB8 (CmpWaitForHiveMount.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140855C60 (MiHotAddBootDeferredDescriptors.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F60 (WheapProcessWaitingETWEvents.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140881870 (IopAcquireReleaseDispatcherLock.c)
 *     PfTLoggingWorker @ 0x140882180 (PfTLoggingWorker.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140908CD0 (HalpDynamicDeviceInterfaceNotification.c)
 *     CmpPostApcRunDown @ 0x140910210 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 *     DbgkpCloseObject @ 0x1409276D0 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x1409283F4 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1409286EC (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1409289DC (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140928E80 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140929940 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14092B4E0 (DbgkpLkmdSnapThreadApc.c)
 *     IopConnectLinkTrackingPort @ 0x140934110 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x140935044 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x1409404FC (PnpShutdownDevices.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14095A67C (IopWarmEjectDevice.c)
 *     PfGenerateTrace @ 0x140988074 (PfGenerateTrace.c)
 *     PfTCleanup @ 0x1409882B4 (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x140989150 (PfpParametersWatcher.c)
 *     PopFxUpdateVetoMaskWork @ 0x14098E120 (PopFxUpdateVetoMaskWork.c)
 *     PopBatteryReadTag @ 0x140994FAC (PopBatteryReadTag.c)
 *     PopFanWorker @ 0x140999A80 (PopFanWorker.c)
 *     TtmiCloseEventQueue @ 0x1409AB08C (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AB3EC (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1409ABEA0 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1409ABFB0 (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409AFA60 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x1409B44C8 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1409B45F0 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x1409B4870 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1409BEB80 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x1409D77F8 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1409D7990 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1409EEA10 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409EF190 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1409F12F0 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x140A01F78 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140A091D0 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WdtpBarkWorkerThread @ 0x140A31BC0 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x140A344D0 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x140A47F30 (EmpReleasePagingReference.c)
 *     PopTransitionToSleep @ 0x140A48630 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 *     ExpSetSwappingKernelApc @ 0x140A516C0 (ExpSetSwappingKernelApc.c)
 *     PopHandleWakeSources @ 0x140A51888 (PopHandleWakeSources.c)
 *     PopFlushVolumeWorker @ 0x140A51F50 (PopFlushVolumeWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140A52C2C (PfpScenCtxPrefetchStateSet.c)
 *     HalpPiix4Detect @ 0x140A53294 (HalpPiix4Detect.c)
 *     PfpScenCtxScenarioSet @ 0x140A540E0 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x140A67C74 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A69140 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x140A69FD8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140A6A1B0 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140A6BCF0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140A6BD80 (PopBuildDeviceNotifyListWatchdog.c)
 *     KdpTimeSlipWork @ 0x140A6F010 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140A8D530 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140A914C4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140A9E930 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AACB80 (AnFwpFadeAnimationTimer.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     MiInitializePagedPoolEvents @ 0x140B078E4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v6; // r13d
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // esi
  LIST_ENTRY *p_WaitListHead; // r14
  bool v11; // zf
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *v14; // r10
  void **p_Flink; // rcx
  _DWORD *SchedulerAssist; // r9
  char v18; // al
  struct _LIST_ENTRY *v19; // r10
  char v20; // al
  __int64 v21; // r8
  unsigned __int8 v22; // cl
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _LIST_ENTRY *v24; // rcx
  char v25; // al
  int Flink_high; // r10d
  struct _LIST_ENTRY *v27; // r9
  _DWORD *v28; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned __int8 v32; // cl
  struct _LIST_ENTRY **v33; // rdx
  struct _LIST_ENTRY *v34; // rcx
  char v35; // al
  int v36; // r10d
  struct _LIST_ENTRY *v37; // r9
  _DWORD *v38; // r9
  unsigned __int8 v39; // al
  __int64 v40; // r9
  __int64 v41; // r10
  struct _KPRCB *v42; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v43; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _KTHREAD *v45; // [rsp+40h] [rbp-48h]
  struct _LIST_ENTRY *Blink; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v47; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v48; // [rsp+A8h] [rbp+20h]
  struct _LIST_ENTRY *v49; // [rsp+A8h] [rbp+20h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v6 = 1;
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
    v11 = v6 == 0;
    Flink = Event->Header.WaitListHead.Flink;
    if ( v11 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v13 = Flink->Flink;
          v14 = Flink;
          v48 = Flink;
          Flink = v13;
          p_Flink = (void **)&v14->Blink->Flink;
          if ( v13->Blink != v14 || *p_Flink != v14 )
            goto LABEL_8;
          *p_Flink = v13;
          v13->Blink = (struct _LIST_ENTRY *)p_Flink;
          v18 = (char)v14[1].Flink;
          switch ( v18 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, WORD1(v14[1].Flink), 0LL) )
              {
                v11 = Event->Header.SignalState-- == 1;
                if ( v11 )
                  goto LABEL_11;
              }
              break;
            case 2:
              BYTE1(v14[1].Flink) = 5;
              Blink = v14[1].Blink;
              v14->Flink = 0LL;
              v22 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
              {
                v28 = KeGetCurrentPrcb()->SchedulerAssist;
                v28[5] |= (-1 << (v22 + 1)) & 4;
              }
              v43 = KeGetCurrentPrcb();
              CurrentThread = v43->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v43->CurrentThread);
                EtwTraceEnqueueWork(v30, v31, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(Blink);
              p_Blink = &Blink->Blink;
              v24 = Blink;
              if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
                || LODWORD(Blink[2].Blink) >= HIDWORD(Blink[2].Blink)
                || (struct _LIST_ENTRY *)CurrentThread->Queue == Blink && CurrentThread->WaitReason == 15 )
              {
LABEL_42:
                Flink_high = HIDWORD(v24->Flink);
                HIDWORD(v24->Flink) = Flink_high + 1;
                v27 = v24[2].Flink;
                if ( v27->Flink != (struct _LIST_ENTRY *)&v24[1].Blink )
                  goto LABEL_8;
                v48->Flink = (struct _LIST_ENTRY *)((char *)v24 + 24);
                v48->Blink = v27;
                v27->Flink = v48;
                v24[2].Flink = v48;
                if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
                {
                  KiWakeOtherQueueWaiters(v43, v24);
                  v24 = Blink;
                }
              }
              else
              {
                v25 = KiWakeQueueWaiter(v43, Blink, v48);
                v24 = Blink;
                if ( !v25 )
                {
                  p_Blink = &Blink->Blink;
                  goto LABEL_42;
                }
                v48->Flink = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v24, 0xFFFFFF7F);
              v11 = Event->Header.SignalState-- == 1;
              if ( v11 )
                goto LABEL_11;
              break;
            case 4:
              BYTE1(v14[1].Flink) = 5;
              Event->Header.SignalState = 0;
              KeInsertQueueDpc((PRKDPC)v14[1].Blink, Event, v14);
              break;
            default:
              KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
              break;
          }
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
      v19 = Flink;
      v49 = Flink;
      Flink = Flink->Flink;
      v20 = (char)v19[1].Flink;
      switch ( v20 )
      {
        case 1:
          v21 = WORD1(v19[1].Flink);
          break;
        case 2:
          BYTE1(v19[1].Flink) = 5;
          v47 = v19[1].Blink;
          v19->Flink = 0LL;
          v32 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
          {
            v38 = KeGetCurrentPrcb()->SchedulerAssist;
            v38[5] |= (-1 << (v32 + 1)) & 4;
          }
          v42 = KeGetCurrentPrcb();
          v45 = v42->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v39 = KeIsThreadRunning(v42->CurrentThread);
            EtwTraceEnqueueWork(v40, v41, v39);
          }
          KiAcquireKobjectLockSafe(v47);
          v33 = &v47->Blink;
          v34 = v47;
          if ( *v33 == (struct _LIST_ENTRY *)v33
            || LODWORD(v47[2].Blink) >= HIDWORD(v47[2].Blink)
            || (struct _LIST_ENTRY *)v45->Queue == v47 && v45->WaitReason == 15 )
          {
LABEL_60:
            v36 = HIDWORD(v34->Flink);
            HIDWORD(v34->Flink) = v36 + 1;
            v37 = v34[2].Flink;
            if ( v37->Flink != (struct _LIST_ENTRY *)&v34[1].Blink )
LABEL_8:
              __fastfail(3u);
            v49->Flink = (struct _LIST_ENTRY *)((char *)v34 + 24);
            v49->Blink = v37;
            v37->Flink = v49;
            v34[2].Flink = v49;
            if ( !v36 && *v33 != (struct _LIST_ENTRY *)v33 )
            {
              KiWakeOtherQueueWaiters(v42, v34);
              v34 = v47;
            }
          }
          else
          {
            v35 = KiWakeQueueWaiter(v42, v47, v49);
            v34 = v47;
            if ( !v35 )
            {
              v33 = &v47->Blink;
              goto LABEL_60;
            }
            v49->Flink = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v34, 0xFFFFFF7F);
          goto LABEL_27;
        case 4:
          BYTE1(v19[1].Flink) = 5;
          Event->Header.SignalState = 0;
          KeInsertQueueDpc((PRKDPC)v19[1].Blink, Event, v19);
          goto LABEL_27;
        default:
          v21 = 256LL;
          break;
      }
      KiTryUnwaitThread(CurrentPrcb, v19, v21, 0LL);
LABEL_27:
      if ( Flink == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
