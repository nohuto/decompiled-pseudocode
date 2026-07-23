/*
 * XREFs of ExReleasePushLockEx @ 0x140220F40
 * Callers:
 *     ObpUnlockDirectory @ 0x14020AEB8 (ObpUnlockDirectory.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14020AF80 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140220050 (FsRtlLookupPerStreamContextInternal.c)
 *     NtTraceEvent @ 0x140244D40 (NtTraceEvent.c)
 *     CcPostWorkQueueAsyncRead @ 0x140248F44 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140249148 (CcShouldSpinAsyncReadWorkerThread.c)
 *     EtwpUnlockBufferList @ 0x140267518 (EtwpUnlockBufferList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140298304 (CcReleaseBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x1402A04D4 (CcAllocateInitializeBcb.c)
 *     CcGetVirtualAddress @ 0x1402A4660 (CcGetVirtualAddress.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402F5E60 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1403052B0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerStreamContext @ 0x14030A6E0 (FsRtlInsertPerStreamContext.c)
 *     CcGetVirtualAddressIfMapped @ 0x14030BD80 (CcGetVirtualAddressIfMapped.c)
 *     FsRtlRemovePerFileObjectContext @ 0x14030DF20 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileContext @ 0x14031DB70 (FsRtlInsertPerFileContext.c)
 *     FsRtlLookupPerFileContext @ 0x1403234B0 (FsRtlLookupPerFileContext.c)
 *     CcCompleteAsyncReadWorker @ 0x14032ADE0 (CcCompleteAsyncReadWorker.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PnpDeviceActionWorker @ 0x14036EB50 (PnpDeviceActionWorker.c)
 *     IopCleanupNotifications @ 0x14037C2F0 (IopCleanupNotifications.c)
 *     CcGetNumberOfMappedPages @ 0x140394700 (CcGetNumberOfMappedPages.c)
 *     ExpUnlockCallbackListExclusive @ 0x1403A5DAC (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x1403B6310 (CcAsyncReadWorker.c)
 *     CcAsyncReadWorkerThread @ 0x1404EAA30 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerFileContext @ 0x1404EF860 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1404EF960 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x14050CCA8 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x140568DA0 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     CmSetCallbackObjectContext @ 0x1405D2A50 (CmSetCallbackObjectContext.c)
 *     VrpUnloadDifferencingHive @ 0x1405D32D8 (VrpUnloadDifferencingHive.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405D34A0 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405D3704 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405D3B6C (CmpFreeCallbackObjectContexts.c)
 *     ObMakeTemporaryObject @ 0x1405D6DB0 (ObMakeTemporaryObject.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1405D8390 (FsRtlTeardownPerStreamContexts.c)
 *     CmpUnlockHiveList @ 0x1405DADAC (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x1405DADCC (UnlockShutdown.c)
 *     ObpDecrementHandleCount @ 0x1405E04F8 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1405E06C0 (ObpDeleteNameCheck.c)
 *     ObpCallPreOperationCallbacks @ 0x1405F0DA0 (ObpCallPreOperationCallbacks.c)
 *     EtwpRegisterUMGuid @ 0x1405F3400 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405F46F0 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405F5298 (EtwpRundownNotifications.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405F5510 (ObSetSecurityDescriptorInfo.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     ObpFreeObject @ 0x140611220 (ObpFreeObject.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140613BB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1406146F0 (CmpCallbackFillObjectContext.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpOKToFollowLink @ 0x14061C0A0 (CmpOKToFollowLink.c)
 *     DelistKeyBodyFromKCB @ 0x14061C990 (DelistKeyBodyFromKCB.c)
 *     ObQueryDeviceMapInformation @ 0x14063A950 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x14063ADE4 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x14063AFA0 (ObpReferenceDeviceMap.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14063D690 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14063DA00 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14063E984 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14063F0B4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063F27C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x14063F95C (PiDmObjectIsEnumerable.c)
 *     PiDqQuerySerializeActionQueue @ 0x140645C2C (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x1406461E8 (PiDqIrpQueryCreate.c)
 *     PiDqDispatch @ 0x140646700 (PiDqDispatch.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ObDereferenceDeviceMap @ 0x14065EC78 (ObDereferenceDeviceMap.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     CmpUnlockHashEntry @ 0x140670E48 (CmpUnlockHashEntry.c)
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockNameHashEntry @ 0x140672BE0 (CmpUnlockNameHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140672C20 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpUnlockTwoKcbs @ 0x140676600 (CmpUnlockTwoKcbs.c)
 *     CmEnumerateValueKey @ 0x140677BB0 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 *     NtQuerySymbolicLinkObject @ 0x1406B1BE0 (NtQuerySymbolicLinkObject.c)
 *     CmpGetCallbackObjectContext @ 0x1406B5144 (CmpGetCallbackObjectContext.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406BB4A4 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406BB51C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406BB720 (ObpDeleteSymbolicLinkName.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406BC6D0 (FsRtlTeardownPerFileContexts.c)
 *     ExpWatchProductTypeWork @ 0x1406BF270 (ExpWatchProductTypeWork.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1406C239C (CmpInsertCallbackInListByAltitude.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406C87C4 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406CB63C (ObpRemoveNamespaceFromTable.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406CD440 (ObSetCurrentProcessDeviceMap.c)
 *     EtwpFreeGuidEntry @ 0x1406D4F8C (EtwpFreeGuidEntry.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406D5410 (PiDmObjectGetCachedObjectReference.c)
 *     ObCheckActiveHandles @ 0x1406D5A5C (ObCheckActiveHandles.c)
 *     CmpGetLastHive @ 0x1406D8514 (CmpGetLastHive.c)
 *     PiDqIrpQueryGetResult @ 0x1406D8984 (PiDqIrpQueryGetResult.c)
 *     ObpCreateSymbolicLinkName @ 0x1406DA1E4 (ObpCreateSymbolicLinkName.c)
 *     ObpSetDeviceMap @ 0x1406DD7AC (ObpSetDeviceMap.c)
 *     EtwpTrackProviderBinary @ 0x1406DFDD8 (EtwpTrackProviderBinary.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406F3B70 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406F3C34 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipTimeoutCheckRoutine @ 0x1406F3CC0 (WdipTimeoutCheckRoutine.c)
 *     PopUmpoProcessMessage @ 0x1406FA358 (PopUmpoProcessMessage.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x140700CD8 (CmpGetNextHive.c)
 *     CmpGetNextActiveHive @ 0x140701140 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1407011E0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140701B08 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140702950 (CmpUnlockHashEntryByKcb.c)
 *     CmpFreeKeyByCell @ 0x140704760 (CmpFreeKeyByCell.c)
 *     CmUnlockHiveSecurity @ 0x140704938 (CmUnlockHiveSecurity.c)
 *     CmpAssignSecurityToKcb @ 0x140704AE4 (CmpAssignSecurityToKcb.c)
 *     EtwpRealtimeConnect @ 0x1407121C8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1407125F8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x140712DC0 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140715958 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140717CA4 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1407181E8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x14071A098 (EtwpAddGuidEntry.c)
 *     EtwpQueueNotification @ 0x14071A734 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x14071AC74 (EtwpReceiveNotification.c)
 *     NtOpenPrivateNamespace @ 0x14071B1A0 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x14071B370 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14071BA98 (ObpRegisterPrivateNamespace.c)
 *     PopReleaseUmpoPushLock @ 0x14071DDE4 (PopReleaseUmpoPushLock.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140725A10 (CmpCopyMergeOfLayeredKeyNode.c)
 *     EtwpGetTraceGuidInfo @ 0x14072A6B0 (EtwpGetTraceGuidInfo.c)
 *     NtMakePermanentObject @ 0x14072D860 (NtMakePermanentObject.c)
 *     PiDmListRemoveObject @ 0x14072D924 (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x14072EB74 (PiDmListRemoveList.c)
 *     PiDmObjectReleaseLock @ 0x1407440C8 (PiDmObjectReleaseLock.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1407449AC (PiDmListAddObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407458B4 (PiDmObjectProcessPropertyChange.c)
 *     EtwUnregister @ 0x14075BB40 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x14075E530 (EtwpRegisterProvider.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14075EA90 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14075EE34 (PiDqQueryApplyObjectEvent.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140761310 (CmpUnlockTwoSecurityCaches.c)
 *     ExpGetNextCallback @ 0x140768F90 (ExpGetNextCallback.c)
 *     PiDmListAddList @ 0x14076A704 (PiDmListAddList.c)
 *     ObRevokeHandles @ 0x1407758EC (ObRevokeHandles.c)
 *     CmpEnumerateCallback @ 0x140778FD0 (CmpEnumerateCallback.c)
 *     WdipSemReserveInstanceTableEntry @ 0x1407847F8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140784940 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x140785570 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407856C0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x1407857FC (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x140785ACC (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140785B90 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140785CE8 (WdipSemEnableContextProvider.c)
 *     ObCreateObjectTypeEx @ 0x14078B3D0 (ObCreateObjectTypeEx.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x14078FBC0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmpStartSiloKeyLockTracker @ 0x14079B6B8 (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     WdipSemInitialize @ 0x1407A98B4 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     WdipSemAllocatePool @ 0x1407BBC88 (WdipSemAllocatePool.c)
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1407BEDE0 (CmpGlobalLockKeyForWrite.c)
 *     ObRegisterCallbacks @ 0x1407C65B0 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1407C6784 (ObpInsertCallbackByAltitude.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407C7680 (CmpMachineHiveLoadedWorkItem.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407CA110 (ObIsDosDeviceLocallyMapped.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D1280 (EtwpTracingProvEnableCallback.c)
 *     CmUnRegisterCallback @ 0x14086BFE0 (CmUnRegisterCallback.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086C470 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpSyncNextBackupHive @ 0x140873C24 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x140874AE0 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140874FA4 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x1408750C8 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x1408751D0 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408782D0 (CmpUnlockHashEntryByIndex.c)
 *     CmDumpKey @ 0x14087E390 (CmDumpKey.c)
 *     IoRegisterContainerNotification @ 0x140897470 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x1408976B0 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A5BAC (PiPnpRtlEnsureObjectCached.c)
 *     PiDqQueryUnlock @ 0x1408A75CC (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x1408DEB1C (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x1408DECD0 (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408DF160 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408DF220 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408DFA98 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1408E0340 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1408E0480 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E6E84 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PsRegisterAltSystemCallHandler @ 0x14090E340 (PsRegisterAltSystemCallHandler.c)
 *     WdipSemUpdate @ 0x140932384 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409328A4 (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x140936434 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14093671C (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x140936F84 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x140941780 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14094184C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409419E0 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x140941BD8 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x140942170 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140943AFC (EtwpTrackGuidEntryRegistrations.c)
 *     PopReleaseAwaymodeLock @ 0x140993570 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x1409B5C58 (ExShutdownSystem.c)
 *     PsNotifyCoreDriversInitialized @ 0x140A5E3F4 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfReleasePushLock @ 0x140242A10 (ExfReleasePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402F7278 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14032EF60 (KiAbThreadUnboostIoPriority.c)
 *     PsBoostThreadIoQoS @ 0x14035D3B8 (PsBoostThreadIoQoS.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A5A30 (EtwTraceAutoBoostClearFloor.c)
 */

char __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v6; // rax
  __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rdi
  int v9; // ebx
  unsigned int SessionId; // r8d
  unsigned __int8 v11; // r15
  unsigned int v12; // edx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdx
  char v19; // [rsp+72h] [rbp+1Ah]

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = *(_QWORD *)BugCheckParameter2,
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != v6) )
  {
    LOBYTE(v6) = ExfReleasePushLock(BugCheckParameter2, v5);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v19 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F848[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      goto LABEL_27;
    while ( 1 )
    {
      v15 = (__int64)&CurrentThread->LockEntries[v14];
      v12 &= ~(1 << v14);
      if ( (*(_BYTE *)(v15 + 26) & 1) != 0
        && (*(_DWORD *)(v15 + 32) & 1) == 0
        && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v15 + 40) == SessionId )
      {
        *(_BYTE *)(v15 + 26) &= ~1u;
        if ( *(_QWORD *)(v15 + 32) )
          break;
      }
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      if ( v13 )
        goto LABEL_27;
    }
    if ( !v15 )
    {
LABEL_27:
      LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( (v6 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v15 + 32) |= 2u;
      if ( *(__int64 *)(v15 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
      v9 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
      v16 = *(_DWORD *)(v15 + 88) & 0xFFFE0000;
      *(_BYTE *)(v15 + 25) &= ~1u;
      v19 = BYTE2(v9);
      *(_DWORD *)(v15 + 88) = v16;
      *(_QWORD *)(v15 + 32) = 0LL;
      v17 = (signed __int64)(v15 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v11 == 1 )
      {
        LODWORD(v6) = CurrentThread->AbEntrySummary | (1 << v17);
        CurrentThread->AbEntrySummary = v6;
      }
      else
      {
        LOBYTE(v6) = 1 << v17;
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
      }
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority(CurrentThread, 0LL);
      if ( (v19 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        PsBoostThreadIoQoS(CurrentThread, 1LL);
      }
      LOBYTE(v6) = -1;
      if ( (v9 & 0x7FFF) != 0 )
        LOBYTE(v6) = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        LOBYTE(v6) = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return v6;
}
