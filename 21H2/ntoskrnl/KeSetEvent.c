/*
 * XREFs of KeSetEvent @ 0x14034E2F0
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140210140 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x140212980 (ExfReleaseRundownProtection.c)
 *     KiRequestProcessInSwap @ 0x140213540 (KiRequestProcessInSwap.c)
 *     ExpUnblockPushLock @ 0x140214048 (ExpUnblockPushLock.c)
 *     IoReleaseRemoveLockEx @ 0x140229AD0 (IoReleaseRemoveLockEx.c)
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     MiIssueHardFaultIo @ 0x14022DB84 (MiIssueHardFaultIo.c)
 *     ExNotifyWithProcessing @ 0x14022E9B8 (ExNotifyWithProcessing.c)
 *     MiReclaimSystemVa @ 0x140232338 (MiReclaimSystemVa.c)
 *     PfpEventHandleFullBuffer @ 0x140235FE0 (PfpEventHandleFullBuffer.c)
 *     MiReduceZeroingThreads @ 0x140239A80 (MiReduceZeroingThreads.c)
 *     SmKmGenericCompletion @ 0x14023BF40 (SmKmGenericCompletion.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14023DFDC (ExpPartitionCreateThreadIfNecessary.c)
 *     SepRmCallLsa @ 0x14023FE60 (SepRmCallLsa.c)
 *     CcNotifyWriteBehindInternal @ 0x1402405C0 (CcNotifyWriteBehindInternal.c)
 *     MiStoreSetEvictPageFile @ 0x14024373C (MiStoreSetEvictPageFile.c)
 *     PnpUnlockDeviceActionQueue @ 0x14024568C (PnpUnlockDeviceActionQueue.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140245890 (LZNT1DecompressChunkWorkItem.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1402484C0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x140249710 (CmpLazyFlushDpcRoutine.c)
 *     ExpEnumerateCallback @ 0x140249AE0 (ExpEnumerateCallback.c)
 *     CcPrepareMdlWrite @ 0x14024ACC0 (CcPrepareMdlWrite.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14024E3A0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     CcDeleteBcbs @ 0x140250A10 (CcDeleteBcbs.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1402513F0 (ExpWorkQueueManagerReaperTimer.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140251D30 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiIrpCompletionApcRoutine @ 0x140252160 (MiIrpCompletionApcRoutine.c)
 *     WmipUnreferenceRegEntry @ 0x140253174 (WmipUnreferenceRegEntry.c)
 *     EtwpSwitchBuffer @ 0x140253E34 (EtwpSwitchBuffer.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiStoreUpdateMemoryConditions @ 0x14025F284 (MiStoreUpdateMemoryConditions.c)
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 *     PopQueueTargetDpc @ 0x1402698B0 (PopQueueTargetDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14026EA80 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PfpReturnAccessBuffer @ 0x140272DA8 (PfpReturnAccessBuffer.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     MiQueuePageAccessLog @ 0x14027D59C (MiQueuePageAccessLog.c)
 *     IoAcquireRemoveLockEx @ 0x140281C90 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x140281D14 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1402825D4 (PopFxCompleteComponentActivation.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402865B4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140288840 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140289170 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14028AA90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x14028BB04 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     PfSnRemoveProcessTrace @ 0x140290C9C (PfSnRemoveProcessTrace.c)
 *     SmKmStoreHelperSendCommand @ 0x140291574 (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperWorker @ 0x140291670 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140292A20 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14029F2D0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14029F2F8 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029F7FC (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiWakeModifiedPageWriter @ 0x1402A0A84 (MiWakeModifiedPageWriter.c)
 *     MiFlushAllHintedStorePages @ 0x1402A0AE0 (MiFlushAllHintedStorePages.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402A4660 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x1402A9AC0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1402AA060 (AlpcpSignal.c)
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x1402AC380 (KiDecrementProcessStackCount.c)
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402BB090 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1402BBD50 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     ExpQueueWorkItem @ 0x1402E5CF0 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1402E66D0 (ExpWorkerThread.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     KiReadyThread @ 0x1402ECE90 (KiReadyThread.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F9EE4 (CcPurgeAndClearCacheSection.c)
 *     ExpWakePushLock @ 0x1402FC2F0 (ExpWakePushLock.c)
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     MiDecrementControlAreaCount @ 0x140302938 (MiDecrementControlAreaCount.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403033B4 (CcPostWorkQueueAsyncRead.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x140309C30 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x140309E78 (MiWakePageZeroing.c)
 *     MiWakeZeroingThreads @ 0x14030A120 (MiWakeZeroingThreads.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     MiFreeExcessSegments @ 0x14031FAA0 (MiFreeExcessSegments.c)
 *     MiFinishVadDeletion @ 0x140321B10 (MiFinishVadDeletion.c)
 *     MiDecreaseAvailablePages @ 0x1403240D0 (MiDecreaseAvailablePages.c)
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x140329010 (PfSnReferenceProcessTrace.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x14032B740 (CcFreeVirtualAddress.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1403341C0 (MiInsertProtectedStandbyPage.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036D8E0 (PnpDiagnosticCompletionRoutine.c)
 *     PopRequestPowerIrp @ 0x14036DED0 (PopRequestPowerIrp.c)
 *     PoFxPrepareDevice @ 0x14036F4B0 (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x14036FE80 (PopFxActivateDevice.c)
 *     PopQueueDirectedDripsWork @ 0x14037A0F8 (PopQueueDirectedDripsWork.c)
 *     PopRequestCompletion @ 0x14037A450 (PopRequestCompletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037B940 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14037E640 (VfPoolDelayFreeIfPossible.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037EB2C (PnpRemoveDeviceActionRequests.c)
 *     PopUnregisterPowerSettingCallback @ 0x140380A5C (PopUnregisterPowerSettingCallback.c)
 *     PopFxComponentWork @ 0x140381290 (PopFxComponentWork.c)
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 *     MiFlushAllPagesWorker @ 0x1403848EC (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x1403849F0 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140387CBC (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140388908 (PopCompleteNotifyTransitionCommon.c)
 *     MiMarkSessionDeletePending @ 0x140389F00 (MiMarkSessionDeletePending.c)
 *     PoFxNotifySurprisePowerOn @ 0x14038BC60 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x14038CEC0 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x14038DA90 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038DCA8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038DDC0 (PfpScenCtxWaiterTimedOut.c)
 *     PnpUnlockMountableDevice @ 0x140393F68 (PnpUnlockMountableDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140399B60 (PopFxAllocatePowerIrp.c)
 *     PopIrpWorker @ 0x14039FFC0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1403A06BC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403A0870 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxReleasePowerIrp @ 0x1403A4E64 (PopFxReleasePowerIrp.c)
 *     MiAddZeroingThreads @ 0x1403A56F0 (MiAddZeroingThreads.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5CA4 (MiQueueWorkingSetRequest.c)
 *     PopUserPresentSet @ 0x1403A6054 (PopUserPresentSet.c)
 *     PopBatteryWakeDpc @ 0x1403A7C10 (PopBatteryWakeDpc.c)
 *     ExCompareExchangeCallBack @ 0x1403A8BFC (ExCompareExchangeCallBack.c)
 *     MiZeroPageCalibrate @ 0x1403AFF94 (MiZeroPageCalibrate.c)
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B62E8 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B6BB4 (MiUpdateAvailableEvents.c)
 *     KeBalanceSetManager @ 0x1403B9250 (KeBalanceSetManager.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403BB194 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BFD54 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403C1430 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x1403C3848 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x1403C9E24 (PopPropogateCoolingChange.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1403D0220 (PopPepStartDeviceUnregisterActivity.c)
 *     IopCopyCompleteReadRequest @ 0x1403F1900 (IopCopyCompleteReadRequest.c)
 *     HalpProcessSecondarySignalList @ 0x1404D14C0 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x1404D1660 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404D1704 (HalpReleaseSecondaryIcEntryShared.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E8CC0 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1404EA530 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1404EBEC0 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x1404F1118 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1404F15E0 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140500A34 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x140500AA4 (IopFreeReserveIrp.c)
 *     PnprQuiesce @ 0x14050F958 (PnprQuiesce.c)
 *     KeRetryOutswapProcess @ 0x140513B08 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140519294 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14051944C (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140521580 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140521BAC (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140521EF0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x140521F2C (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x140522004 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140522040 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x140525F08 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x14052A47C (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x14052A85C (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x14052B8B4 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C5A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C794 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x14052D990 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1405392CC (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1405394E8 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x140539E00 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x14053B7C4 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x14053D3A0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14053D4B4 (MiFreeOverlappedFlushEntry.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053ED44 (MiFinishHoldingDirtyFaults.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540374 (MiCopyImageExtentContents.c)
 *     MiAttemptPageFileReductionApc @ 0x140542D10 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140543830 (MiFinishPageFileExtension.c)
 *     MiPageNotZero @ 0x14054F3B0 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x14055A200 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x14055A234 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x140562DD0 (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564BB0 (NtSignalAndWaitForSingleObject.c)
 *     PopDeviceIdleCompletion @ 0x1405691B0 (PopDeviceIdleCompletion.c)
 *     PopFxClearDeviceConstraints @ 0x14056A004 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x14056A698 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x14056A79C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x14056A960 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x14056AA70 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x14056AB00 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x14056ABE0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x14056BBD0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14056BF80 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056C56C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x14056C5A0 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14056D900 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14056DA10 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x14056F420 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x140574050 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x14057DFAC (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14057E050 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14057E0E4 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140598ED4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059FBA0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14059FC80 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x1405A6160 (EtwSendTraceBuffer.c)
 *     EtwpLoggerDpc @ 0x1405AA970 (EtwpLoggerDpc.c)
 *     EtwpThreadRundownApc @ 0x1405ABA80 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405AEB58 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AF298 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AF300 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1405AF360 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1405B3310 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1405B3360 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x1405B5CC0 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1405BBE00 (WheapProcessWorkQueueItem.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     IopTrackLink @ 0x1405DBA34 (IopTrackLink.c)
 *     RtlDecompressBufferLZNT1 @ 0x1405DDD80 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1405DDEF0 (RtlDecompressFragmentLZNT1.c)
 *     NtSetEvent @ 0x1405DE240 (NtSetEvent.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1405E04CC (CmpSignalUnloadEventArrayForHive.c)
 *     NtNotifyChangeSession @ 0x1405F4300 (NtNotifyChangeSession.c)
 *     CmpPostApc @ 0x1405FBC50 (CmpPostApc.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1405FCD50 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ExpWnfNotifySubscription @ 0x140609C14 (ExpWnfNotifySubscription.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14060CBA0 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140614D3C (EtwpRealtimeDisconnectAllConsumers.c)
 *     AlpcpTrackPortReferences @ 0x140617618 (AlpcpTrackPortReferences.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     CmpWakeWriteQueueWaiters @ 0x14061ACF8 (CmpWakeWriteQueueWaiters.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x14061C420 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpStopLoggerInstance @ 0x14061F054 (EtwpStopLoggerInstance.c)
 *     EtwpDisassociateConsumer @ 0x1406213C0 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140622930 (PfSnTracingStateExWorkerRoutine.c)
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x14063AC3C (EtwpRealtimeInjectEtwBuffer.c)
 *     CmNotifyRunDown @ 0x140641570 (CmNotifyRunDown.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     PfTReplaceCurrentBuffer @ 0x140679A24 (PfTReplaceCurrentBuffer.c)
 *     PfGetCompletedTrace @ 0x14067C10C (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14067C39C (PfTTraceListAdd.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 *     PfSnEndTrace @ 0x1406A6A68 (PfSnEndTrace.c)
 *     EtwpQueueNotification @ 0x1406BB52C (EtwpQueueNotification.c)
 *     MiInSwapStoreWorker @ 0x1406BEB20 (MiInSwapStoreWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 *     CmpPostNotify @ 0x1406DC820 (CmpPostNotify.c)
 *     sub_1406ECCA0 @ 0x1406ECCA0 (sub_1406ECCA0.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F46D0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PiUEventDereferenceEventEntry @ 0x1406FD6BC (PiUEventDereferenceEventEntry.c)
 *     PnpCompleteDeviceEvent @ 0x1406FE838 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x1406FECB0 (PnpDeviceEventWorker.c)
 *     MiPfExecuteReadList @ 0x1407004E4 (MiPfExecuteReadList.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725F80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736910 (PopFxUnregisterDeviceOrWait.c)
 *     WmipQueueNotification @ 0x140755814 (WmipQueueNotification.c)
 *     WmipAddDataSource @ 0x140756A68 (WmipAddDataSource.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140760990 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopDestroyActiveConnectBlock @ 0x140762810 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x1407649D0 (HalGetAdapterV2.c)
 *     PiUEventHandleVetoEvent @ 0x14076E8D8 (PiUEventHandleVetoEvent.c)
 *     ArbArbiterHandler @ 0x140771750 (ArbArbiterHandler.c)
 *     PopCompleteAction @ 0x140773F34 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140774CE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PfGenerateTrace @ 0x140776A34 (PfGenerateTrace.c)
 *     MiDereferenceSessionFinal @ 0x1407784E0 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140778AF4 (PopFinalizeWakeInfo.c)
 *     HalpGetDynamicDevicePointer @ 0x140779094 (HalpGetDynamicDevicePointer.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B9E0 (IopInvalidateVolumesForDevice.c)
 *     IopLoadUnloadDriver @ 0x1407809E0 (IopLoadUnloadDriver.c)
 *     WmipReleaseCollectionEnabled @ 0x140781B54 (WmipReleaseCollectionEnabled.c)
 *     MmSetSessionObjectIoEvent @ 0x14078DAC4 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14078DC94 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x14078ED00 (PopUserPresentSetWorker.c)
 *     MUIRegistrySystemRoutine @ 0x140790490 (MUIRegistrySystemRoutine.c)
 *     CmpInitializeSystemHivesLoad @ 0x140790B44 (CmpInitializeSystemHivesLoad.c)
 *     EtwInitialize @ 0x140798F94 (EtwInitialize.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A2778 (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     PfTLoggingWorker @ 0x1407AD160 (PfTLoggingWorker.c)
 *     PopFxUnregisterDevice @ 0x1407B46BC (PopFxUnregisterDevice.c)
 *     MmStoreRegister @ 0x1407B6890 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x1407B74F0 (MiInsertPageFileInList.c)
 *     PopFanWorker @ 0x1407C0690 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407C0790 (PopThermalWorker.c)
 *     ExpPartitionCreatePool @ 0x1407C27A8 (ExpPartitionCreatePool.c)
 *     HalGetAdapterV3 @ 0x1407C38D0 (HalGetAdapterV3.c)
 *     CmpWaitForHiveMount @ 0x1407C43A4 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4C40 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407CBAE0 (CmpMachineHiveLoadedWorkItem.c)
 *     WheapEtwEnableCallback @ 0x1407D3740 (WheapEtwEnableCallback.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140864A20 (HalpDynamicDeviceInterfaceNotification.c)
 *     CmpPostApcRunDown @ 0x14086A2F0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140872490 (CmThawRegistry.c)
 *     DbgkpCloseObject @ 0x140884990 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140885678 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140885970 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140885C70 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x1408860B0 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140886BA4 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140888730 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14088C250 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x140891620 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x140892220 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140894040 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14089BAAC (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A164C (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1408B4770 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1408BD8BC (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1408E0D60 (PfpParametersWatcher.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5970 (PopFxUpdateVetoMaskWork.c)
 *     PopBatteryReadTag @ 0x1408ED6DC (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x1409054EC (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14090585C (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140906360 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x14090640C (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090A620 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x14090E25C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14090E384 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14090E604 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1409197E0 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x14092D434 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14092D5CC (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140942418 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942C90 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140944F10 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x140956044 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14095DA10 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WdtpBarkWorkerThread @ 0x140980100 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x140980670 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x1409911C8 (EmpReleasePagingReference.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PopTransitionToSleep @ 0x1409960D0 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 *     ExpSetSwappingKernelApc @ 0x140998C60 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x140998FA0 (PopFlushVolumeWorker.c)
 *     PopHandleWakeSources @ 0x140999410 (PopHandleWakeSources.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140999C20 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x14099BB98 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1409AE72C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AFB90 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1409B0CE8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1409B0EA0 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B3440 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1409B34D0 (PopBuildDeviceNotifyListWatchdog.c)
 *     KdpTimeSlipWork @ 0x1409B9FB0 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x1409D2910 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D6DE4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x1409E66F0 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F34C0 (AnFwpFadeAnimationTimer.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     MiInitializePagedPoolEvents @ 0x140A4FB3C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
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
