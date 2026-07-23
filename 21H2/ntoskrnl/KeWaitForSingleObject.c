/*
 * XREFs of KeWaitForSingleObject @ 0x1403504C0
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     FsRtlpWaitForIoAtEof @ 0x14020E99C (FsRtlpWaitForIoAtEof.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140213F60 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140214048 (ExpUnblockPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x14021FBD0 (ExfWaitForRundownProtectionRelease.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140226CD4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140227884 (LdrpGetFromMUIMemCache.c)
 *     MiIssueSynchronousFlush @ 0x14022D920 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x140234DD8 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402369D0 (CcWaitForUninitializeCacheMap.c)
 *     IoSynchronousCallDriver @ 0x14023D110 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x14023E168 (MiZeroPageWrite.c)
 *     WmipReceiveNotifications @ 0x14023EA1C (WmipReceiveNotifications.c)
 *     PnpLockDeviceActionQueue @ 0x140245730 (PnpLockDeviceActionQueue.c)
 *     CmpDoFileRead @ 0x140245F5C (CmpDoFileRead.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140246174 (SmKmStoreDeleteWhenEmpty.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14024A300 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140250C60 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140251F9C (MiQueueSyncModifiedWriterApc.c)
 *     WmipFindRegEntryByProviderId @ 0x1402530B0 (WmipFindRegEntryByProviderId.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140255630 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRetryNonPagedAllocation @ 0x140262BDC (MiRetryNonPagedAllocation.c)
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     PopExecuteOnTargetProcessors @ 0x14026977C (PopExecuteOnTargetProcessors.c)
 *     PopSetWatchdog @ 0x14026E7A8 (PopSetWatchdog.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PoFxActivateComponent @ 0x140283CB0 (PoFxActivateComponent.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     PopFxProcessWorkPool @ 0x140284DE8 (PopFxProcessWorkPool.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140288840 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140289A38 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402914CC (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperWorker @ 0x140291670 (SmKmStoreHelperWorker.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140293FB4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14029F2F8 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029F7FC (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14029FC14 (SmKmStoreHelperCleanup.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1402A06C8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402A5C00 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     IopCompleteUnloadOrDelete @ 0x1402A6030 (IopCompleteUnloadOrDelete.c)
 *     AlpcpSignalAndWait @ 0x1402A9AC0 (AlpcpSignalAndWait.c)
 *     PpmCheckPeriodicStart @ 0x1402CFC70 (PpmCheckPeriodicStart.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     CcSetValidData @ 0x1402F75BC (CcSetValidData.c)
 *     IopWaitForLockAlertable @ 0x1402FB8F0 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     CcWriteBehind @ 0x140300EB0 (CcWriteBehind.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140334F80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     ExpWaitForResource @ 0x14034D120 (ExpWaitForResource.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14036FDD8 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x14036FE80 (PopFxActivateDevice.c)
 *     WmipFindRegEntryByDevice @ 0x140370B34 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140370BF4 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x140370CE4 (WmipDeregisterRegEntry.c)
 *     PpmTryAcquireLock @ 0x14037D948 (PpmTryAcquireLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EFAC (LdrpSetAlternateResourceModuleHandle.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14037F6E8 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F8C0 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380FDC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     ExUnregisterCallback @ 0x1403814C0 (ExUnregisterCallback.c)
 *     PopWakeDeviceList @ 0x140383184 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140383364 (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x140388F18 (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x14038B958 (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x14038C530 (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038DCA8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038DEC0 (PopIgnoreBatteryStatusChange.c)
 *     PnpLockMountableDevice @ 0x140393F0C (PnpLockMountableDevice.c)
 *     IopLoadDriverImage @ 0x140399FC8 (IopLoadDriverImage.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14039AF90 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x14039FFC0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1403A06BC (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5CA4 (MiQueueWorkingSetRequest.c)
 *     WmiQueryTraceProviderCount @ 0x1403AF5F0 (WmiQueryTraceProviderCount.c)
 *     MiZeroPageCalibrate @ 0x1403AFF94 (MiZeroPageCalibrate.c)
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 *     KeSwapProcessOrStack @ 0x1403B4200 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B9510 (CcQueueLazyWriteScanThread.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403BB194 (WheapAddErrorSource.c)
 *     PopFxActivateComponent @ 0x1403BEC70 (PopFxActivateComponent.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x1403C04D0 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x1403C1430 (MiStoreEvictThread.c)
 *     WmipBuildTraceDeviceList @ 0x1403C6010 (WmipBuildTraceDeviceList.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C8990 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorkerControl @ 0x1403CC120 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x1403CEC00 (PnpSerializeBoot.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F11B0 (IopWaitForSynchronousIoEvent.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404D0A70 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcDeleteSectionsForPartition @ 0x1404EC0C4 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0C70 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x1404F103C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1404F1654 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x140500050 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1405002F0 (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x14050F958 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1405106DC (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1405191E4 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x1405210B8 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140521BAC (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x140522004 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140522040 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CF34 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1405392CC (MiPfCompleteCoalescedIo.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E51C (MiCheckHoldFaultForHotPatch.c)
 *     MiIssuePageExtendRequest @ 0x140543B84 (MiIssuePageExtendRequest.c)
 *     MiWaitForFreePagesToZero @ 0x1405501CC (MiWaitForFreePagesToZero.c)
 *     MiApplyCommitDelay @ 0x140550470 (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x14055C2E4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C6F0 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x1405622DC (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564BB0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B598 (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x140583F20 (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x14059F01C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059F994 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1405A0274 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405ABABC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AEC8C (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1405B3360 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1405B35D0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1405BBE00 (WheapProcessWorkQueueItem.c)
 *     sub_1405BF400 @ 0x1405BF400 (sub_1405BF400.c)
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x1405DC3FC (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x1405DD35C (AlpcpWaitForPortReferences.c)
 *     RtlDecompressBufferLZNT1 @ 0x1405DDD80 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1405DDEF0 (RtlDecompressFragmentLZNT1.c)
 *     FsRtlSetFileSize @ 0x1405E9020 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1405E9140 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1405E92E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeSession @ 0x1405F4300 (NtNotifyChangeSession.c)
 *     IopSynchronousApiServiceTail @ 0x1405F7CBC (IopSynchronousApiServiceTail.c)
 *     NtGetMUIRegistryInfo @ 0x1405FB840 (NtGetMUIRegistryInfo.c)
 *     IopCancelIrpsInThreadList @ 0x1405FCD98 (IopCancelIrpsInThreadList.c)
 *     WmipEnumerateMofResources @ 0x1406067B0 (WmipEnumerateMofResources.c)
 *     FsRtlIssueDeviceIoControl @ 0x140611370 (FsRtlIssueDeviceIoControl.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     FsRtlQueryCachedVdl @ 0x14061D420 (FsRtlQueryCachedVdl.c)
 *     EtwpStartTrace @ 0x1406207BC (EtwpStartTrace.c)
 *     WmipDisableCollectOrEvent @ 0x140620920 (WmipDisableCollectOrEvent.c)
 *     FsRtlBalanceReads @ 0x1406219D0 (FsRtlBalanceReads.c)
 *     WmipDeleteMethod @ 0x14062E330 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 *     PiControlGetSetDeviceStatus @ 0x14062E740 (PiControlGetSetDeviceStatus.c)
 *     WmipPrepareForWnodeAD @ 0x140632E80 (WmipPrepareForWnodeAD.c)
 *     WmipIsQuerySetGuid @ 0x140633828 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x140633890 (WmipEnableCollectOrEvent.c)
 *     WmipFindGEByGuid @ 0x140633FE0 (WmipFindGEByGuid.c)
 *     WmipOpenBlock @ 0x1406340C8 (WmipOpenBlock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     PspUserThreadStartup @ 0x14063BC30 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     PnpDisableWatchdog @ 0x14066AC20 (PnpDisableWatchdog.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14068A684 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14068A7C0 (IoVolumeDeviceToDosName.c)
 *     PiDrvDbLoadNode @ 0x140694044 (PiDrvDbLoadNode.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     MiReadImageHeaders @ 0x1406A8C3C (MiReadImageHeaders.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpDisableTraceProviders @ 0x1406B8208 (EtwpDisableTraceProviders.c)
 *     SmStoreCompressionStop @ 0x1406BD690 (SmStoreCompressionStop.c)
 *     MiInSwapStore @ 0x1406BEA2C (MiInSwapStore.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1406EC2C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1406ECCA0 @ 0x1406ECCA0 (sub_1406ECCA0.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406F1C28 (EtwpAcquireLoggerContextByLoggerName.c)
 *     IoVolumeDeviceToGuidPath @ 0x1406F9B50 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406F9CC0 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1406FA368 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     PnpDeviceEventWorker @ 0x1406FECB0 (PnpDeviceEventWorker.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 *     ObWaitForSingleObject @ 0x140707C90 (ObWaitForSingleObject.c)
 *     CmpParseKey @ 0x14070FFF0 (CmpParseKey.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 *     PiQueueDeviceRequest @ 0x14072F3E4 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F5B4 (PnpQueueQueryAndRemoveEvent.c)
 *     IopGetVolumeId @ 0x140733610 (IopGetVolumeId.c)
 *     PiIrpQueryRemoveDevice @ 0x1407344AC (PiIrpQueryRemoveDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736910 (PopFxUnregisterDeviceOrWait.c)
 *     PnpStartDeviceNode @ 0x14073E0C4 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14073E5B8 (IopUncacheInterfaceInformation.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PnpAllocateResources @ 0x14074FEA8 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140750C40 (IopFilterResourceRequirementsCall.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     WmipDeregisterDevice @ 0x140755044 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x1407550F0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x1407551C8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x140755334 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14075540C (WmipUpdateDeviceStackSize.c)
 *     WmipAddDataSource @ 0x140756A68 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140757238 (WmipDetermineInstanceBaseIndex.c)
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x140757C8C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140757F40 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407582D4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipFindISinGEbyName @ 0x140758528 (WmipFindISinGEbyName.c)
 *     IoDisconnectInterrupt @ 0x140761BD0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140762810 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x1407649D0 (HalGetAdapterV2.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     WmipDSCleanup @ 0x14076CDF0 (WmipDSCleanup.c)
 *     WmipRegistrationWorker @ 0x14076CF70 (WmipRegistrationWorker.c)
 *     IoReportTargetDeviceChange @ 0x14076D8B0 (IoReportTargetDeviceChange.c)
 *     PnpCallDriverEntry @ 0x140770584 (PnpCallDriverEntry.c)
 *     ArbArbiterHandler @ 0x140771750 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x140772840 (PoUnregisterPowerSettingCallback.c)
 *     NtInitiatePowerAction @ 0x140775170 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140775EE8 (PopPowerAggregatorNotifySuspendResume.c)
 *     EmPowerPagingEnabled @ 0x140776B88 (EmPowerPagingEnabled.c)
 *     PopFxNotifySxTransitionState @ 0x140776CE4 (PopFxNotifySxTransitionState.c)
 *     PopResizeHiberFile @ 0x140776E88 (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x140777514 (ExSwapinWorkerThreads.c)
 *     PopGetWakeSource @ 0x140778978 (PopGetWakeSource.c)
 *     HalpGetDynamicDevicePointer @ 0x140779094 (HalpGetDynamicDevicePointer.c)
 *     PopInitSystemSleeperThread @ 0x140779B98 (PopInitSystemSleeperThread.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B9E0 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14077D394 (IopLoadFileSystemDriver.c)
 *     WmipSendEnableDisableRequest @ 0x14077E1C0 (WmipSendEnableDisableRequest.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     IopCreateArcName @ 0x1407804D8 (IopCreateArcName.c)
 *     WmipSetTraceNotify @ 0x140780F18 (WmipSetTraceNotify.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14078CF3C (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14078D464 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D874 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x14078DC38 (PopAcquireTransitionLock.c)
 *     PopSanityCheckHiberFile @ 0x14078E438 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14078E854 (PopClearHiberFileSignature.c)
 *     CmCompleteRegistryInitialization @ 0x14079167C (CmCompleteRegistryInitialization.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407981D0 (EtwpUpdateGlobalGroupMasks.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A2778 (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407AC898 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AC8C4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 *     PopFxUnregisterDevice @ 0x1407B46BC (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x1407B4A1C (PopPepUnregisterDevice.c)
 *     IopAllocateBootResources @ 0x1407B5F60 (IopAllocateBootResources.c)
 *     MiZeroPageFileFirstPage @ 0x1407B7B28 (MiZeroPageFileFirstPage.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407B9E60 (EtwpCrimsonProvEnableCallback.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407BA120 (PopDirectedDripsWorkerRoutine.c)
 *     WmipAddMofResource @ 0x1407BEAAC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1407BECE8 (WmipFindMRByNames.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1B54 (WmipSendWmiIrpToTraceDeviceList.c)
 *     HalGetAdapterV3 @ 0x1407C38D0 (HalGetAdapterV3.c)
 *     WmipUpdateDataSource @ 0x1407C44E8 (WmipUpdateDataSource.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4C40 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x1407C54E0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C5640 (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407C6DE8 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407C7C38 (FsRtlpRegisterUncProvider.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9F60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x1407D3740 (WheapEtwEnableCallback.c)
 *     IoWMISetNotificationCallback @ 0x1407D3DF0 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x1407D4EC0 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x1407D54D0 (FsRtlWaitForSmssEvent.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140864044 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140864128 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140864A20 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpCallWakeAlarmDriver @ 0x1408663C0 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408664A0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140866BDC (HalpQueryPccInterface.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A200 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087279C (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1408843A0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140885678 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x1408865B0 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1408884B4 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088AE5C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14088B8D0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14088C3E0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D960 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x1408911EC (IopCancelAlertedRequest.c)
 *     IopHardErrorThread @ 0x1408917C0 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x140892220 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140892E50 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140893780 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140894040 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089AA88 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14089B224 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14089BAAC (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14089E5A0 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089FEF8 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A164C (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408AB4D8 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x1408B32C0 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x1408B45C0 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1408B4770 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1408B99B4 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 *     PopDeactiveThermalRequest @ 0x1408E2D48 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1408E2F28 (PopDisableCoolingExtension.c)
 *     PopReadPagesFromHiberFile @ 0x1408E704C (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1408E7930 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1408E7EE0 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1408ED780 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408F1890 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409066E4 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x140909F08 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x14090AF58 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14090B44C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14090D1F0 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x14090D330 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14090E384 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14090F494 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F5E8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090FA38 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140919810 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessResizeRequest @ 0x14092A09C (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x14092A198 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A668 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B754 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14092BFC4 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14092C078 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14092C13C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14092C89C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092C938 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CFD4 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x140930E90 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140931D88 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14093254C (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1409327A4 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14093293C (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x140932F50 (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x1409337A0 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x140933AC4 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x1409343E8 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140934614 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x14093772C (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x14093D024 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14093D080 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x14093EED8 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x14094180C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1409429A0 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x1409488F0 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x140956228 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x14095AFA0 (NtStartProfile.c)
 *     NtStopProfile @ 0x14095B210 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x14095B410 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095B7D0 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x14095D470 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14095D530 (WheaAttemptPhysicalPageOffline.c)
 *     sub_14096221C @ 0x14096221C (sub_14096221C.c)
 *     sub_1409639F0 @ 0x1409639F0 (sub_1409639F0.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140980134 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x14098051C (VhdiVerifyBootDisk.c)
 *     PopCaptureTimeOnProcZero @ 0x140991688 (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x1409918C4 (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PopTransitionToSleep @ 0x1409960D0 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x1409981B8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140998CEC (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AC064 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1409AE72C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AFB90 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409B0EA0 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 *     VfDriverLock @ 0x1409C35B8 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x1409C6A18 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D2510 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x1409D6B24 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1409D6EA0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409E1340 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x1409E6300 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x1409F31B4 (AnFwFadeCompletion.c)
 *     IopAssignBootDriveLetter @ 0x140A62AA8 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A95C98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A965E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A967E8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A96BC4 (SbpWaitForVmbus.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KiFastExitThreadWait @ 0x1402661E8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r10
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int8 WaitIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  unsigned __int8 v13; // r12
  $97202178496CA35ABF26341004BDBFC1 *v14; // r15
  unsigned int v15; // r14d
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *v18; // r13
  volatile __int64 WaitStatus; // rsi
  __int64 ThreadTimerDelay; // rdx
  int v21; // r10d
  unsigned __int64 v22; // rax
  PVOID *v23; // rcx
  _RTL_BALANCED_NODE *v24; // r13
  unsigned __int8 v25; // r10
  unsigned __int64 v26; // rdi
  _KWAIT_STATUS_REGISTER v27; // al
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rsi
  _DWORD *v34; // rcx
  volatile unsigned __int8 DpcRoutineActive; // cl
  int v36; // eax
  char v37; // al
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v39; // rcx
  struct _KPRCB *v40; // rcx
  __int64 v41; // rdx
  ULONG_PTR AbWaitObject; // rcx
  _KWAIT_STATUS_REGISTER v43; // al
  struct _KPRCB *v44; // rbx
  _DWORD *v45; // rcx
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  _DWORD *v54; // rcx
  int v55; // eax
  int v56; // eax
  unsigned __int8 v57; // cl
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  int v60; // eax
  _DWORD *SchedulerAssist; // r9
  int v62; // eax
  int v63; // eax
  int v64; // eax
  struct _KPRCB *v65; // rcx
  _DWORD *v66; // rdx
  bool v67; // zf
  _RTL_BALANCED_NODE *v68; // rax
  ULONG_PTR v69; // rax
  int v70; // edi
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  int v76; // eax
  _DWORD *v77; // rcx
  int v78; // eax
  _DWORD *v79; // rcx
  int v80; // eax
  int v81; // eax
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rdx
  struct _KPRCB *v84; // rbx
  _DWORD *v85; // rcx
  int v86; // eax
  _DWORD *v87; // rcx
  int v88; // eax
  _DWORD *v89; // rcx
  int v90; // eax
  struct _KPRCB *v91; // rcx
  _DWORD *v92; // rdx
  int v93; // eax
  struct _KPRCB *v94; // rcx
  _DWORD *v95; // rdx
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r9
  _DWORD *v98; // r8
  int v99; // eax
  signed __int32 v100[8]; // [rsp+0h] [rbp-91h] BYREF
  unsigned __int8 v101; // [rsp+30h] [rbp-61h]
  unsigned __int8 v102; // [rsp+31h] [rbp-60h]
  LONGLONG QuadPart; // [rsp+38h] [rbp-59h]
  PRTL_BALANCED_NODE Node; // [rsp+40h] [rbp-51h]
  int v105; // [rsp+48h] [rbp-49h] BYREF
  int v106; // [rsp+4Ch] [rbp-45h] BYREF
  int v107; // [rsp+50h] [rbp-41h] BYREF
  int v108; // [rsp+54h] [rbp-3Dh] BYREF
  int v109; // [rsp+58h] [rbp-39h] BYREF
  __int64 v110; // [rsp+60h] [rbp-31h] BYREF
  __int64 v111; // [rsp+68h] [rbp-29h] BYREF
  __int64 v112; // [rsp+70h] [rbp-21h] BYREF
  __int128 v113; // [rsp+78h] [rbp-19h]
  __int64 v114; // [rsp+88h] [rbp-9h]
  __int64 v115; // [rsp+90h] [rbp-1h]
  unsigned __int8 v117; // [rsp+F8h] [rbp+67h]
  KPROCESSOR_MODE v118; // [rsp+100h] [rbp+6Fh]
  int Timeouta; // [rsp+110h] [rbp+7Fh]

  v118 = WaitMode;
  v117 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v112 = 0LL;
  QuadPart = 0LL;
  v101 = 0;
  Node = 0LL;
  v115 = 0LL;
  v102 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v102 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitMode = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = WaitMode;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v8 = 0xFFFFF78000000008uLL;
  v9 = 1LL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      Timeouta = 1;
    }
    else
    {
      Timeouta = 2;
      v9 = MEMORY[0xFFFFF78000000008]
         - MEMORY[0xFFFFF780000003B0]
         - (Timeout->QuadPart
          + CurrentThread->RelativeTimerBias);
      QuadPart = v9;
    }
  }
  else
  {
    Timeouta = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v118;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v105 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v62 = v12[6];
          v12[6] = v62 + 1;
          if ( v62 == -1 )
LABEL_136:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v48 = CurrentPrcb->SchedulerAssist;
        if ( v48 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v63 = v48[6] - 1;
            v48[6] = v63;
            if ( !v63 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v105, v8, WaitMode, v9);
        while ( CurrentThread->ThreadLock );
        v49 = CurrentPrcb->SchedulerAssist;
        if ( v49 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v64 = v49[6];
            v49[6] = v64 + 1;
            if ( v64 == -1 )
              goto LABEL_136;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || WaitIrql || CurrentThread->SpecialApcDisable )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = (v66[5] & 0xFFFF0003) == 0;
          v66[5] &= 0xFFFF0003;
          if ( v67 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v57 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 <= 0xFu )
      {
        v9 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        *(_QWORD *)&WaitMode = *(unsigned int *)(v9 + 20);
        v8 = WaitMode | ~((unsigned __int8)(1LL << (v57 + 1)) - 1) & 4u;
        *(_DWORD *)(v9 + 20) = v8;
      }
      CurrentThread->WaitIrql = 0;
    }
    v13 = v102;
    v14 = &CurrentThread->320;
    if ( Alertable )
    {
      *(_QWORD *)&WaitMode = v118;
      if ( CurrentThread->Alerted[v118] )
      {
        CurrentThread->Alerted[v118] = 0;
        v70 = 257;
        goto LABEL_114;
      }
      if ( v118 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_113:
        v70 = 192;
LABEL_114:
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
        LODWORD(WaitStatus) = v70;
        return WaitStatus;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v70 = 257;
        goto LABEL_114;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v118 )
    {
      goto LABEL_113;
    }
    v15 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v117;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v60 = v17[6] - 1;
        v17[6] = v60;
        if ( !v60 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    v18 = KeGetCurrentPrcb();
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v17, WaitMode, v9) )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
    }
    ThreadTimerDelay = *((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      if ( (int)ThreadTimerDelay <= 0 )
      {
        *(_QWORD *)&WaitMode = v101;
        goto LABEL_19;
      }
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = ThreadTimerDelay - 1;
      }
      goto LABEL_32;
    }
    v30 = *((unsigned __int8 *)Object + 48);
    WaitMode = (v30 & 2) != 0;
    v101 = WaitMode;
    if ( (int)ThreadTimerDelay > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == v18->DpcRoutineActive )
    {
      break;
    }
LABEL_19:
    v9 = QuadPart;
    v21 = Timeouta;
    v22 = QuadPart;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v29 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v22 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v22 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_21;
      if ( !QuadPart )
        goto LABEL_31;
      v29 = MEMORY[0xFFFFF78000000014];
    }
    if ( v29 > v22 )
    {
LABEL_31:
      LODWORD(WaitStatus) = 258;
      goto LABEL_32;
    }
LABEL_21:
    v23 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v23 != (char *)Object + 8 )
      goto LABEL_201;
    v14->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v23;
    *v23 = v14;
    *((_QWORD *)Object + 2) = v14;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    if ( WaitMode )
    {
      v68 = (_RTL_BALANCED_NODE *)KeAbPreAcquire((ULONG_PTR)Object, 0LL);
      LODWORD(v9) = QuadPart;
      v24 = v68;
      v21 = Timeouta;
      Node = v68;
    }
    else
    {
      v24 = Node;
    }
    if ( v24 )
    {
      KeAbPreWait((__int64)v24);
      LODWORD(v9) = QuadPart;
      v21 = Timeouta;
    }
    LODWORD(WaitStatus) = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, v21, v9, (__int64)&v112);
    if ( v24 )
    {
      v69 = KeAbPreAcquire((ULONG_PTR)Object, v24);
      if ( (WaitStatus & 0xFFFFFF7F) != 0 )
      {
        KeAbPostReleaseEx((ULONG_PTR)Object, v69);
        Node = 0LL;
      }
      else
      {
        *(_BYTE *)(v69 + 26) |= 1u;
        Node = (PRTL_BALANCED_NODE)v69;
      }
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( (_DWORD)WaitStatus != 256 )
      return WaitStatus;
    v102 = 0;
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
    {
      v9 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitMode = *(unsigned int *)(v9 + 20);
      v8 = WaitMode | ~((unsigned __int8)(1LL << (v25 + 1)) - 1) & 4u;
      *(_DWORD *)(v9 + 20) = v8;
    }
    CurrentThread->WaitIrql = v25;
  }
  v31 = *((_DWORD *)Object + 1);
  if ( v31 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    KiFastExitThreadWait((__int64)v18, (__int64)CurrentThread, v13);
    RtlRaiseStatus(-1073741423);
  }
  v32 = v31 - 1;
  *((_DWORD *)Object + 1) = v32;
  if ( v32 )
  {
LABEL_32:
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v100, 0);
    if ( CurrentThread->ThreadLock )
    {
      v50 = KeGetCurrentPrcb();
      v108 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v52 = v51[6];
          v51[6] = v52 + 1;
          if ( v52 == -1 )
LABEL_106:
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v53 = v50->SchedulerAssist;
        if ( v53 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v56 = v53[6] - 1;
            v53[6] = v56;
            if ( !v56 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        do
          KeYieldProcessorEx(&v108, ThreadTimerDelay, WaitMode, v9);
        while ( CurrentThread->ThreadLock );
        v54 = v50->SchedulerAssist;
        if ( v54 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v55 = v54[6];
            v54[6] = v55 + 1;
            if ( v55 == -1 )
              goto LABEL_106;
          }
        }
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
    }
    v26 = CurrentThread->WaitIrql;
    v27.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    if ( (v27.Flags & 0x38) == 0 )
    {
LABEL_34:
      if ( v13 )
      {
        KiCheckForThreadDispatch((__int64)v18, v26);
      }
      else
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v96 = KeGetCurrentIrql();
            if ( v96 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v96 >= 2u )
            {
              v97 = KeGetCurrentPrcb();
              v98 = v97->SchedulerAssist;
              v99 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
              v67 = (v99 & v98[5]) == 0;
              v98[5] &= v99;
              if ( v67 )
                KiRemoveSystemWorkPriorityKick(v97);
            }
          }
        }
        __writecr8(v26);
      }
      return WaitStatus;
    }
    if ( (v27.Flags & 0x18) != 0 )
    {
      if ( (v27.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      v111 = 0LL;
      v84 = KeGetCurrentPrcb();
      v109 = 0;
      v85 = v84->SchedulerAssist;
      if ( v85 )
      {
        if ( v84->NestingLevel <= 1u )
        {
          v86 = v85[6];
          v85[6] = v86 + 1;
          if ( v86 == -1 )
LABEL_207:
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
      {
        v87 = v84->SchedulerAssist;
        if ( v87 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v88 = v87[6] - 1;
            v87[6] = v88;
            if ( !v88 )
              KiRemoveSystemWorkPriorityKick(v84);
          }
        }
        do
          KeYieldProcessorEx(&v109, ThreadTimerDelay, WaitMode, v9);
        while ( v18->PrcbLock );
        v89 = v84->SchedulerAssist;
        if ( v89 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v90 = v89[6];
            v89[6] = v90 + 1;
            if ( v90 == -1 )
              goto LABEL_207;
          }
        }
      }
      if ( !v18->NextThread )
        KiSelectNextThread((__int64)v18, (__int64)&v111);
      _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
      v91 = KeGetCurrentPrcb();
      v92 = v91->SchedulerAssist;
      if ( v92 )
      {
        if ( v91->NestingLevel <= 1u )
        {
          v93 = v92[6] - 1;
          v92[6] = v93;
          if ( !v93 )
            KiRemoveSystemWorkPriorityKick(v91);
        }
      }
      KiProcessDeferredReadyList((__int64)v18, (__int64)&v111, v26);
      return WaitStatus;
    }
    KiCheckForThreadDispatch((__int64)v18, 1u);
    KiDeliverApc(0, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v94 = KeGetCurrentPrcb();
        v95 = v94->SchedulerAssist;
        v67 = (v95[5] & 0xFFFF0001) == 0;
        v95[5] &= 0xFFFF0001;
        if ( v67 )
          KiRemoveSystemWorkPriorityKick(v94);
      }
    }
LABEL_127:
    __writecr8(0LL);
    return WaitStatus;
  }
  CurrentThread->WaitStatus = 0LL;
  v33 = KeGetCurrentPrcb();
  v106 = 0;
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v71 = v34[6];
      v34[6] = v71 + 1;
      if ( v71 == -1 )
LABEL_165:
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v58 = v33->SchedulerAssist;
    if ( v58 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v72 = v58[6] - 1;
        v58[6] = v72;
        if ( !v72 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    do
      KeYieldProcessorEx(&v106, ThreadTimerDelay, WaitMode, v9);
    while ( CurrentThread->ThreadLock );
    v59 = v33->SchedulerAssist;
    if ( v59 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v73 = v59[6];
        v59[6] = v73 + 1;
        if ( v73 == -1 )
          goto LABEL_165;
      }
    }
  }
  if ( *((_BYTE *)Object + 49) )
    --CurrentThread->KernelApcDisable;
  if ( v18->CurrentThread == CurrentThread )
    DpcRoutineActive = v18->DpcRoutineActive;
  else
    DpcRoutineActive = 0;
  v114 = 0LL;
  v36 = *(_DWORD *)Object;
  v113 = 0LL;
  LODWORD(v113) = v36;
  BYTE2(v113) = DpcRoutineActive;
  *(_DWORD *)Object = v113;
  v37 = *((_BYTE *)Object + 48);
  *((_QWORD *)Object + 5) = CurrentThread;
  if ( (v37 & 1) != 0 )
  {
    *((_BYTE *)Object + 48) = v37 & 0xFE;
    CurrentThread->WaitStatus |= 0x80uLL;
    v37 = *((_BYTE *)Object + 48);
  }
  if ( (v37 & 2) != 0 )
    CurrentThread->AbWaitObject = Object;
  else
    CurrentThread->AbWaitObject = 0LL;
  Blink = CurrentThread->MutantListHead.Blink;
  v39 = (struct _LIST_ENTRY *)((char *)Object + 24);
  if ( Blink->Flink != &CurrentThread->MutantListHead )
LABEL_201:
    __fastfail(3u);
  v39->Flink = &CurrentThread->MutantListHead;
  *((_QWORD *)Object + 4) = Blink;
  Blink->Flink = v39;
  CurrentThread->MutantListHead.Blink = v39;
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  v40 = KeGetCurrentPrcb();
  v41 = (__int64)v40->SchedulerAssist;
  if ( v41 )
  {
    if ( v40->NestingLevel <= 1u )
    {
      v74 = *(_DWORD *)(v41 + 24) - 1;
      *(_DWORD *)(v41 + 24) = v74;
      if ( !v74 )
        KiRemoveSystemWorkPriorityKick(v40);
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v75 = KeAbPreAcquire(AbWaitObject, 0LL);
    if ( v75 )
      *(_BYTE *)(v75 + 26) |= 1u;
  }
  v26 = CurrentThread->WaitIrql;
  v43.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v43.Flags & 0x38) == 0 )
    goto LABEL_34;
  if ( (v43.Flags & 0x18) == 0 )
  {
    KiCheckForThreadDispatch((__int64)v18, 1u);
    KiDeliverApc(0, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v67 = (v83[5] & 0xFFFF0001) == 0;
        v83[5] &= 0xFFFF0001;
        if ( v67 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
    goto LABEL_127;
  }
  if ( (v43.Flags & 8) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
  v110 = 0LL;
  v44 = KeGetCurrentPrcb();
  v107 = 0;
  v45 = v44->SchedulerAssist;
  if ( v45 )
  {
    if ( v44->NestingLevel <= 1u )
    {
      v76 = v45[6];
      v45[6] = v76 + 1;
      if ( v76 == -1 )
LABEL_181:
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
  {
    v77 = v44->SchedulerAssist;
    if ( v77 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v78 = v77[6] - 1;
        v77[6] = v78;
        if ( !v78 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    do
      KeYieldProcessorEx(&v107, v41, WaitMode, v9);
    while ( v18->PrcbLock );
    v79 = v44->SchedulerAssist;
    if ( v79 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v80 = v79[6];
        v79[6] = v80 + 1;
        if ( v80 == -1 )
          goto LABEL_181;
      }
    }
  }
  if ( !v18->NextThread )
    KiSelectNextThread((__int64)v18, (__int64)&v110);
  _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
  v46 = KeGetCurrentPrcb();
  v47 = v46->SchedulerAssist;
  if ( v47 )
  {
    if ( v46->NestingLevel <= 1u )
    {
      v81 = v47[6] - 1;
      v47[6] = v81;
      if ( !v81 )
        KiRemoveSystemWorkPriorityKick(v46);
    }
  }
  KiProcessDeferredReadyList((__int64)v18, (__int64)&v110, v26);
  return WaitStatus;
}
