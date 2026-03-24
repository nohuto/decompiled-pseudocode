/*
 * XREFs of KeWaitForSingleObject @ 0x140345770
 * Callers:
 *     AlpcpSignalAndWait @ 0x140205180 (AlpcpSignalAndWait.c)
 *     PpmCheckPeriodicStart @ 0x14022B3C0 (PpmCheckPeriodicStart.c)
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     MiZeroLargePages @ 0x140232520 (MiZeroLargePages.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     PoFxActivateComponent @ 0x1402627E0 (PoFxActivateComponent.c)
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     PopFxProcessWorkPool @ 0x140263914 (PopFxProcessWorkPool.c)
 *     WmipFindRegEntryByProviderId @ 0x140265020 (WmipFindRegEntryByProviderId.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140267690 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRetryNonPagedAllocation @ 0x140274C3C (MiRetryNonPagedAllocation.c)
 *     KiSchedulerApc @ 0x140279C00 (KiSchedulerApc.c)
 *     PopExecuteOnTargetProcessors @ 0x14027B7DC (PopExecuteOnTargetProcessors.c)
 *     PopSetWatchdog @ 0x140280568 (PopSetWatchdog.c)
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     FsRtlpWaitForIoAtEof @ 0x140290A2C (FsRtlpWaitForIoAtEof.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14029CD40 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x14029CE28 (ExpUnblockPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1402A2790 (ExfWaitForRundownProtectionRelease.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402A8B94 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402A9744 (LdrpGetFromMUIMemCache.c)
 *     MiIssueSynchronousFlush @ 0x1402AF5C0 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x1402B6BF8 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402B87C0 (CcWaitForUninitializeCacheMap.c)
 *     IoSynchronousCallDriver @ 0x1402BECC0 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x1402BFD18 (MiZeroPageWrite.c)
 *     WmipReceiveNotifications @ 0x1402C05CC (WmipReceiveNotifications.c)
 *     PnpLockDeviceActionQueue @ 0x1402C6FF0 (PnpLockDeviceActionQueue.c)
 *     CmpDoFileRead @ 0x1402C781C (CmpDoFileRead.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1402CBBB0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1402CC1B8 (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1402D2870 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402D3D2C (MiQueueSyncModifiedWriterApc.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D74F0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1402D86E8 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402E017C (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperWorker @ 0x1402E0320 (SmKmStoreHelperWorker.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1402E2C64 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     IopWaitForLockAlertable @ 0x1402F0BA0 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402F2EC0 (ExfAcquirePushLockSharedEx.c)
 *     CcWriteBehind @ 0x1402F6160 (CcWriteBehind.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14032A230 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     ExpWaitForResource @ 0x1403423D0 (ExpWaitForResource.c)
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14035A558 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035AA5C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14035AE74 (SmKmStoreHelperCleanup.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14035B928 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     IopCompleteUnloadOrDelete @ 0x140360FD0 (IopCompleteUnloadOrDelete.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1403613A0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     CcSetValidData @ 0x140361EF4 (CcSetValidData.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14036FC28 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x14036FCD0 (PopFxActivateDevice.c)
 *     WmipFindRegEntryByDevice @ 0x140370FE4 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1403710A4 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x140371194 (WmipDeregisterRegEntry.c)
 *     PpmTryAcquireLock @ 0x14037DDF8 (PpmTryAcquireLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037F45C (LdrpSetAlternateResourceModuleHandle.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14037FB98 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037FD70 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14038148C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     ExUnregisterCallback @ 0x140381970 (ExUnregisterCallback.c)
 *     PopWakeDeviceList @ 0x140382FD4 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403831B4 (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x140388DC8 (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x14038B808 (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x14038C3E0 (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038DB58 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038DD70 (PopIgnoreBatteryStatusChange.c)
 *     PnpLockMountableDevice @ 0x140393DBC (PnpLockMountableDevice.c)
 *     IopLoadDriverImage @ 0x140399E78 (IopLoadDriverImage.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14039AE40 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x14039FE70 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1403A056C (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5B54 (MiQueueWorkingSetRequest.c)
 *     WmiQueryTraceProviderCount @ 0x1403AF480 (WmiQueryTraceProviderCount.c)
 *     MiZeroPageCalibrate @ 0x1403AFE24 (MiZeroPageCalibrate.c)
 *     MiZeroLargePageThread @ 0x1403B3D10 (MiZeroLargePageThread.c)
 *     KeSwapProcessOrStack @ 0x1403B4090 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B93A0 (CcQueueLazyWriteScanThread.c)
 *     WheaLogInternalEvent @ 0x1403BAD50 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403BB024 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x1403BDB20 (MiModifiedPageWriter.c)
 *     PopFxActivateComponent @ 0x1403BF058 (PopFxActivateComponent.c)
 *     CmpLazyWriteWorker @ 0x1403C00A0 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x1403C1000 (MiStoreEvictThread.c)
 *     WmipBuildTraceDeviceList @ 0x1403C5E70 (WmipBuildTraceDeviceList.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C87F0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorkerControl @ 0x1403CBFB0 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x1403CEA90 (PnpSerializeBoot.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F1280 (IopWaitForSynchronousIoEvent.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404D0830 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcDeleteSectionsForPartition @ 0x1404EBE84 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0CF0 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x1404F10BC (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1404F16D4 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1405000D0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140500370 (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x14050F718 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x14051049C (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140518FA4 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x140520E78 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14052196C (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x140521DC4 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140521E00 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x140525F20 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CCF4 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14053908C (MiPfCompleteCoalescedIo.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E2DC (MiCheckHoldFaultForHotPatch.c)
 *     MiIssuePageExtendRequest @ 0x140543944 (MiIssuePageExtendRequest.c)
 *     MiWaitForFreePagesToZero @ 0x14054FF8C (MiWaitForFreePagesToZero.c)
 *     MiApplyCommitDelay @ 0x140550230 (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x14055C0A4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C4B0 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x14056209C (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564970 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B358 (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x140583CF0 (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x14059EDEC (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059F764 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1405A0044 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405AB88C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AEA5C (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1405B3130 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1405B33A0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1405BBBD0 (WheapProcessWorkQueueItem.c)
 *     sub_1405BF1D0 @ 0x1405BF1D0 (sub_1405BF1D0.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405FCB60 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     IopGetFileInformation @ 0x140620A14 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140620B50 (IoVolumeDeviceToDosName.c)
 *     PiDrvDbLoadNode @ 0x140629F74 (PiDrvDbLoadNode.c)
 *     WmipDeleteMethod @ 0x140639520 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x140639618 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1406396EC (WmipForwardWmiIrp.c)
 *     PiControlGetSetDeviceStatus @ 0x140639930 (PiControlGetSetDeviceStatus.c)
 *     WmipPrepareForWnodeAD @ 0x14063E070 (WmipPrepareForWnodeAD.c)
 *     WmipIsQuerySetGuid @ 0x14063EA18 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x14063EA80 (WmipEnableCollectOrEvent.c)
 *     WmipFindGEByGuid @ 0x14063F1D0 (WmipFindGEByGuid.c)
 *     WmipOpenBlock @ 0x14063F2B8 (WmipOpenBlock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLogger @ 0x1406456F0 (EtwpLogger.c)
 *     PspUserThreadStartup @ 0x140646E40 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     PnpDisableWatchdog @ 0x1406774E0 (PnpDisableWatchdog.c)
 *     IopGetSetObjectId @ 0x1406813B8 (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x14068231C (AlpcpWaitForPortReferences.c)
 *     RtlDecompressBufferLZNT1 @ 0x140683F40 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406840B0 (RtlDecompressFragmentLZNT1.c)
 *     FsRtlSetFileSize @ 0x140689B90 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140689CB0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140689E50 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14068A050 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeSession @ 0x140694DB0 (NtNotifyChangeSession.c)
 *     IopSynchronousApiServiceTail @ 0x140698FCC (IopSynchronousApiServiceTail.c)
 *     NtGetMUIRegistryInfo @ 0x14069C770 (NtGetMUIRegistryInfo.c)
 *     IopCancelIrpsInThreadList @ 0x14069DCC8 (IopCancelIrpsInThreadList.c)
 *     WmipEnumerateMofResources @ 0x1406A8830 (WmipEnumerateMofResources.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406B2330 (FsRtlIssueDeviceIoControl.c)
 *     EtwpSynchronizeWithLogger @ 0x1406B8D9C (EtwpSynchronizeWithLogger.c)
 *     FsRtlQueryCachedVdl @ 0x1406BE1C0 (FsRtlQueryCachedVdl.c)
 *     EtwpStartTrace @ 0x1406C1AB4 (EtwpStartTrace.c)
 *     WmipDisableCollectOrEvent @ 0x1406C1CE0 (WmipDisableCollectOrEvent.c)
 *     FsRtlBalanceReads @ 0x1406C2D20 (FsRtlBalanceReads.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 *     MiReadImageHeaders @ 0x1406D195C (MiReadImageHeaders.c)
 *     FsRtlGetFileSize @ 0x1406D4860 (FsRtlGetFileSize.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     EtwpDisableTraceProviders @ 0x1406E0F28 (EtwpDisableTraceProviders.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     PnpDeviceEventWorker @ 0x1406E78D0 (PnpDeviceEventWorker.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     ObWaitForSingleObject @ 0x1406F08B0 (ObWaitForSingleObject.c)
 *     CmpParseKey @ 0x1406F8C10 (CmpParseKey.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140703760 (IopDeleteFile.c)
 *     SmStoreCompressionStop @ 0x14070F040 (SmStoreCompressionStop.c)
 *     MiInSwapStore @ 0x1407103DC (MiInSwapStore.c)
 *     CmpFileFlushAndPurge @ 0x14071DC38 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14071DDD8 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14071DFF0 (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x140722250 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407223C0 (IoVolumeDeviceNameToGuidPath.c)
 *     PiQueueDeviceRequest @ 0x14072F218 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F3E8 (PnpQueueQueryAndRemoveEvent.c)
 *     IopGetVolumeId @ 0x140733450 (IopGetVolumeId.c)
 *     PiIrpQueryRemoveDevice @ 0x1407342EC (PiIrpQueryRemoveDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736750 (PopFxUnregisterDeviceOrWait.c)
 *     PnpStartDeviceNode @ 0x14073DF04 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14073E3F8 (IopUncacheInterfaceInformation.c)
 *     PipProcessDevNodeTree @ 0x140741204 (PipProcessDevNodeTree.c)
 *     PnpAllocateResources @ 0x14074FCE8 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140750A80 (IopFilterResourceRequirementsCall.c)
 *     IopLegacyResourceAllocation @ 0x140753474 (IopLegacyResourceAllocation.c)
 *     WmipDeregisterDevice @ 0x140754E84 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x140754F30 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140755008 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x140755174 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14075524C (WmipUpdateDeviceStackSize.c)
 *     WmipAddDataSource @ 0x1407568A8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140757078 (WmipDetermineInstanceBaseIndex.c)
 *     WmipPrepareWnodeSI @ 0x140757604 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x140757ACC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140757D80 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140758114 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipFindISinGEbyName @ 0x140758368 (WmipFindISinGEbyName.c)
 *     IoDisconnectInterrupt @ 0x140761A10 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140762650 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x140764810 (HalGetAdapterV2.c)
 *     PnpQueryInterface @ 0x140765D84 (PnpQueryInterface.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     WmipDSCleanup @ 0x14076CC30 (WmipDSCleanup.c)
 *     WmipRegistrationWorker @ 0x14076CDB0 (WmipRegistrationWorker.c)
 *     IoReportTargetDeviceChange @ 0x14076D6F0 (IoReportTargetDeviceChange.c)
 *     PnpCallDriverEntry @ 0x1407703C4 (PnpCallDriverEntry.c)
 *     ArbArbiterHandler @ 0x140771590 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x140772680 (PoUnregisterPowerSettingCallback.c)
 *     NtInitiatePowerAction @ 0x140774FB0 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140775D28 (PopPowerAggregatorNotifySuspendResume.c)
 *     EmPowerPagingEnabled @ 0x1407769C8 (EmPowerPagingEnabled.c)
 *     PopFxNotifySxTransitionState @ 0x140776B24 (PopFxNotifySxTransitionState.c)
 *     PopResizeHiberFile @ 0x140776CC8 (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x140777354 (ExSwapinWorkerThreads.c)
 *     PopGetWakeSource @ 0x1407787B8 (PopGetWakeSource.c)
 *     HalpGetDynamicDevicePointer @ 0x140778ED4 (HalpGetDynamicDevicePointer.c)
 *     PopInitSystemSleeperThread @ 0x1407799D8 (PopInitSystemSleeperThread.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B820 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077C0D0 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14077D1D4 (IopLoadFileSystemDriver.c)
 *     WmipSendEnableDisableRequest @ 0x14077E000 (WmipSendEnableDisableRequest.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 *     IopCreateArcName @ 0x140780318 (IopCreateArcName.c)
 *     WmipSetTraceNotify @ 0x140780D58 (WmipSetTraceNotify.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14078CD7C (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14078D2A4 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D6B4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x14078DA78 (PopAcquireTransitionLock.c)
 *     PopSanityCheckHiberFile @ 0x14078E278 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14078E694 (PopClearHiberFileSignature.c)
 *     CmCompleteRegistryInitialization @ 0x1407900CC (CmCompleteRegistryInitialization.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140797FD0 (EtwpUpdateGlobalGroupMasks.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A2578 (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407AC698 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AC6C4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     SepRmCommandServerThread @ 0x1407AD230 (SepRmCommandServerThread.c)
 *     IopAllocateBootResources @ 0x1407B4640 (IopAllocateBootResources.c)
 *     PopFxUnregisterDevice @ 0x1407B4F70 (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x1407B52D0 (PopPepUnregisterDevice.c)
 *     MiZeroPageFileFirstPage @ 0x1407B7608 (MiZeroPageFileFirstPage.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407B9990 (PopDirectedDripsWorkerRoutine.c)
 *     WmipAddMofResource @ 0x1407BE31C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1407BE558 (WmipFindMRByNames.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407BEAD0 (EtwpCrimsonProvEnableCallback.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1634 (WmipSendWmiIrpToTraceDeviceList.c)
 *     HalGetAdapterV3 @ 0x1407C33B0 (HalGetAdapterV3.c)
 *     WmipUpdateDataSource @ 0x1407C3FC8 (WmipUpdateDataSource.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4720 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x1407C4FC0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C5120 (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407C6AC8 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407C7918 (FsRtlpRegisterUncProvider.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9C40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x1407D35D0 (WheapEtwEnableCallback.c)
 *     IoWMISetNotificationCallback @ 0x1407D3C80 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x1407D4D50 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x1407D5360 (FsRtlWaitForSmssEvent.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140863EEC (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140863FD0 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1408648C0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpCallWakeAlarmDriver @ 0x140866260 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140866340 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140866A7C (HalpQueryPccInterface.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A0A0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087263C (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140884240 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140885518 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140886450 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140888354 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088ACFC (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14088B770 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14088C280 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D800 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x14089108C (IopCancelAlertedRequest.c)
 *     IopHardErrorThread @ 0x140891660 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x1408920C0 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140892CF0 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140893620 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140893EE0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089A928 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14089B0C4 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14089B94C (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14089E440 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089FD98 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A14EC (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408AB378 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x1408B3160 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x1408B4460 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1408B4610 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1408B9854 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1408E03BC (PfTCleanup.c)
 *     PopDeactiveThermalRequest @ 0x1408E2BE8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1408E2DC8 (PopDisableCoolingExtension.c)
 *     PopReadPagesFromHiberFile @ 0x1408E6EEC (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1408E77D0 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1408E7D80 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1408ED620 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408F1730 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x140906584 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x140909DA8 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x14090ADF8 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14090B2EC (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14090D090 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x14090D1D0 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14090E224 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14090F334 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F488 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090F8D8 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409196B0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessResizeRequest @ 0x140929F3C (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x14092A038 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A508 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B5F4 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14092BE64 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14092BF18 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14092BFDC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14092C73C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092C7D8 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CE74 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x140930D30 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140931C28 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1409323EC (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x140932644 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1409327DC (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x140932DBC (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x1409335D0 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x1409338F4 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x140934218 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140934444 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x14093755C (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938560 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x14093CE54 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14093CEB0 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x14093ED08 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x14094163C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1409427D0 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x140948720 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x140956058 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140959B20 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x14095ADD0 (NtStartProfile.c)
 *     NtStopProfile @ 0x14095B040 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x14095B240 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095B600 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x14095D290 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14095D350 (WheaAttemptPhysicalPageOffline.c)
 *     sub_14096203C @ 0x14096203C (sub_14096203C.c)
 *     sub_140963810 @ 0x140963810 (sub_140963810.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14097FF54 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x14098033C (VhdiVerifyBootDisk.c)
 *     PopCaptureTimeOnProcZero @ 0x140990688 (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x1409908C4 (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PopTransitionToSleep @ 0x1409950D0 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140996250 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x1409971B8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140997CEC (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x1409AADD8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB134 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1409AD7FC (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AEC60 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409AFF70 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409B0F60 (PopGracefulShutdown.c)
 *     VfDriverLock @ 0x1409C25B8 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x1409C5A18 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1510 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x1409D5B24 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1409D5EA0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409E0340 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x1409E5300 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x1409F21B4 (AnFwFadeCompletion.c)
 *     IopAssignBootDriveLetter @ 0x140A61AA8 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8F9DC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A955E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A957E8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A95BC4 (SbpWaitForVmbus.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140230BD0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiSelectNextThread @ 0x14025708C (KiSelectNextThread.c)
 *     KiFastExitThreadWait @ 0x140278248 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402783B4 (KiCheckForThreadDispatch.c)
 *     KeAbPostReleaseEx @ 0x14028DE10 (KeAbPostReleaseEx.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     KeAbPreWait @ 0x1402F30C0 (KeAbPreWait.c)
 *     KiCommitThreadWait @ 0x140345FB0 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x140390140 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390F20 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
  $AC3BF0C7EA58B0FE9399BAAA5443B647 *v14; // r15
  unsigned int v15; // r14d
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *v18; // r13
  volatile __int64 WaitStatus; // rsi
  __int64 ThreadTimerDelay; // rdx
  int v21; // r10d
  unsigned __int64 v22; // rax
  PVOID *v23; // rcx
  __int64 v24; // r13
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
  __int64 v68; // rax
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
  __int64 v104; // [rsp+40h] [rbp-51h]
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
  v104 = 0LL;
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
      KiDeliverApc(0, 0, 0LL);
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
      v68 = KeAbPreAcquire((ULONG_PTR)Object);
      LODWORD(v9) = QuadPart;
      v24 = v68;
      v21 = Timeouta;
      v104 = v68;
    }
    else
    {
      v24 = v104;
    }
    if ( v24 )
    {
      KeAbPreWait(v24);
      LODWORD(v9) = QuadPart;
      v21 = Timeouta;
    }
    LODWORD(WaitStatus) = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, v21, v9, (__int64)&v112);
    if ( v24 )
    {
      v69 = KeAbPreAcquire((ULONG_PTR)Object);
      if ( (WaitStatus & 0xFFFFFF7F) != 0 )
      {
        KeAbPostReleaseEx((ULONG_PTR)Object, v69);
        v104 = 0LL;
      }
      else
      {
        *(_BYTE *)(v69 + 26) |= 1u;
        v104 = v69;
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
    KiFastExitThreadWait((__int64)v18, (__int64)CurrentThread, v13, v9);
    RtlRaiseStatus(0xC0000191);
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
        KiCheckForThreadDispatch((__int64)v18, (unsigned __int8)v26);
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
        KiSelectNextThread(v18, (__int64)&v111);
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
    LOBYTE(ThreadTimerDelay) = 1;
    KiCheckForThreadDispatch((__int64)v18, ThreadTimerDelay);
    KiDeliverApc(0, 0, 0LL);
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
    v75 = KeAbPreAcquire(AbWaitObject);
    if ( v75 )
      *(_BYTE *)(v75 + 26) |= 1u;
  }
  v26 = CurrentThread->WaitIrql;
  v43.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v43.Flags & 0x38) == 0 )
    goto LABEL_34;
  if ( (v43.Flags & 0x18) == 0 )
  {
    LOBYTE(v41) = 1;
    KiCheckForThreadDispatch((__int64)v18, v41);
    KiDeliverApc(0, 0, 0LL);
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
    KiSelectNextThread(v18, (__int64)&v110);
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
