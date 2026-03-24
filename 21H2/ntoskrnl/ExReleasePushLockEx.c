/*
 * XREFs of ExReleasePushLockEx @ 0x14034AE90
 * Callers:
 *     NtTraceEvent @ 0x14025CC60 (NtTraceEvent.c)
 *     EtwpUnlockBufferList @ 0x1402662CC (EtwpUnlockBufferList.c)
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     ObpUnlockDirectory @ 0x14027EB0C (ObpUnlockDirectory.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402913F0 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402A22D0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402A28A0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402A2990 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1402A72F0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileContext @ 0x1402BF630 (FsRtlInsertPerFileContext.c)
 *     FsRtlLookupPerFileContext @ 0x1402C4680 (FsRtlLookupPerFileContext.c)
 *     CcCompleteAsyncReadWorker @ 0x1402CC2D0 (CcCompleteAsyncReadWorker.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F8664 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1402F8868 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcGetVirtualAddressIfMapped @ 0x14030F444 (CcGetVirtualAddressIfMapped.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140310D24 (CcReleaseBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     CcAllocateInitializeBcb @ 0x14031CD80 (CcAllocateInitializeBcb.c)
 *     CcGetVirtualAddress @ 0x140320F10 (CcGetVirtualAddress.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140349FA0 (FsRtlLookupPerStreamContextInternal.c)
 *     PnpDeviceActionWorker @ 0x1403700A0 (PnpDeviceActionWorker.c)
 *     IopCleanupNotifications @ 0x14037C458 (IopCleanupNotifications.c)
 *     CcGetNumberOfMappedPages @ 0x140394B70 (CcGetNumberOfMappedPages.c)
 *     ExpUnlockCallbackListExclusive @ 0x1403A666C (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x1403B7950 (CcAsyncReadWorker.c)
 *     CcAsyncReadWorkerThread @ 0x1404EC5C0 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerFileContext @ 0x1404F1400 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1404F1500 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x14050E7D8 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x14056A830 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     CmSetCallbackObjectContext @ 0x1405D5830 (CmSetCallbackObjectContext.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405D642C (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405D6690 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405D6B4C (CmpFreeCallbackObjectContexts.c)
 *     ObpCallPreOperationCallbacks @ 0x1405E9760 (ObpCallPreOperationCallbacks.c)
 *     EtwpRegisterUMGuid @ 0x1405EBAF0 (EtwpRegisterUMGuid.c)
 *     CmpUnlockHashEntry @ 0x1405EC638 (CmpUnlockHashEntry.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockNameHashEntry @ 0x1405EFE60 (CmpUnlockNameHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405EFEA0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     EtwpDeleteRegistrationObject @ 0x1405FC900 (EtwpDeleteRegistrationObject.c)
 *     ObQueryDeviceMapInformation @ 0x1406250A0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140625534 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1406256F0 (ObpReferenceDeviceMap.c)
 *     ObMakeTemporaryObject @ 0x14062C010 (ObMakeTemporaryObject.c)
 *     ObpDecrementHandleCount @ 0x14062CA04 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x14062CBD0 (ObpDeleteNameCheck.c)
 *     PiDqIrpQueryGetResult @ 0x14062E070 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14062E878 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x14062EBF0 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x14062F0BC (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x14062F5EC (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140635460 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406357D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140636754 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140636E84 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063704C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x14063772C (PiDmObjectIsEnumerable.c)
 *     EtwpAddRegEntryToGroup @ 0x140643580 (EtwpAddRegEntryToGroup.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x14065F2B0 (ObSetSecurityDescriptorInfo.c)
 *     DelistKeyBodyFromKCB @ 0x140667930 (DelistKeyBodyFromKCB.c)
 *     CmpAssignSecurityToKcb @ 0x14066A130 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x14066A1E4 (CmUnlockHiveSecurity.c)
 *     CmpFreeKeyByCell @ 0x14066B280 (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x14066C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14066CA24 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x140670E04 (CmpGetNextHive.c)
 *     CmpGetNextActiveHive @ 0x140672520 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406725C0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     PopUmpoProcessMessage @ 0x14067A514 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x14067C3B0 (PopReleaseUmpoPushLock.c)
 *     NtQuerySymbolicLinkObject @ 0x140686650 (NtQuerySymbolicLinkObject.c)
 *     CmpGetCallbackObjectContext @ 0x14068AFE4 (CmpGetCallbackObjectContext.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x140691A40 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140691AB8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x140691CBC (ObpDeleteSymbolicLinkName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140692BA8 (ObSetCurrentProcessDeviceMap.c)
 *     EtwpRundownNotifications @ 0x14069322C (EtwpRundownNotifications.c)
 *     FsRtlTeardownPerFileContexts @ 0x140697170 (FsRtlTeardownPerFileContexts.c)
 *     CmpInsertCallbackInListByAltitude @ 0x14069D58C (CmpInsertCallbackInListByAltitude.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406A5884 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406A7F3C (ObpRemoveNamespaceFromTable.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406AE300 (EtwpRealtimeUpdateConsumers.c)
 *     ObDereferenceDeviceMap @ 0x1406B0914 (ObDereferenceDeviceMap.c)
 *     EtwpFreeGuidEntry @ 0x1406B2ACC (EtwpFreeGuidEntry.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406B2EC0 (PiDmObjectGetCachedObjectReference.c)
 *     ObCheckActiveHandles @ 0x1406B380C (ObCheckActiveHandles.c)
 *     ExpWatchProductTypeWork @ 0x1406B3870 (ExpWatchProductTypeWork.c)
 *     EtwpFreeLoggerContext @ 0x1406B51BC (EtwpFreeLoggerContext.c)
 *     WdipTimeoutCheckRoutine @ 0x1406B5FF0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406B60A0 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406B6128 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     CmpGetLastHive @ 0x1406B6A70 (CmpGetLastHive.c)
 *     EtwpRealtimeConnect @ 0x1406B88C8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406B8CF8 (EtwpRealtimeDisconnectConsumer.c)
 *     ObpCreateSymbolicLinkName @ 0x1406B8F14 (ObpCreateSymbolicLinkName.c)
 *     ObpSetDeviceMap @ 0x1406BD6D4 (ObpSetDeviceMap.c)
 *     EtwpTrackProviderBinary @ 0x1406BFE18 (EtwpTrackProviderBinary.c)
 *     EtwpStopLoggerInstance @ 0x1406C0144 (EtwpStopLoggerInstance.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406E1144 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1406E1804 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x1406E3BB0 (EtwpAddGuidEntry.c)
 *     EtwpQueueNotification @ 0x1406E424C (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1406E478C (EtwpReceiveNotification.c)
 *     NtOpenPrivateNamespace @ 0x1406E4CB0 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x1406E4E80 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406E55A8 (ObpRegisterPrivateNamespace.c)
 *     ObpFreeObject @ 0x1406F0520 (ObpFreeObject.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406F2EB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1406F39F0 (CmpCallbackFillObjectContext.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1406F5660 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1406F5F60 (ObpIncrementHandleCountEx.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpOKToFollowLink @ 0x1406FC010 (CmpOKToFollowLink.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     FsRtlTeardownPerStreamContexts @ 0x14071A6B0 (FsRtlTeardownPerStreamContexts.c)
 *     CmpDeleteHive @ 0x14071C6F4 (CmpDeleteHive.c)
 *     CmpUnlockHiveList @ 0x14071D2C4 (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x14071D2E4 (UnlockShutdown.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407294A0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     EtwpGetTraceGuidInfo @ 0x14072E6C8 (EtwpGetTraceGuidInfo.c)
 *     PiDmListRemoveList @ 0x14073092C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140730A50 (PiDmListRemoveObject.c)
 *     NtMakePermanentObject @ 0x140731B90 (NtMakePermanentObject.c)
 *     PiDmListAddObject @ 0x1407354D4 (PiDmListAddObject.c)
 *     IopRegisterDeviceInterface @ 0x140748470 (IopRegisterDeviceInterface.c)
 *     PiDmObjectReleaseLock @ 0x1407497E8 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A454 (PiDmObjectProcessPropertyChange.c)
 *     EtwUnregister @ 0x1407601D0 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x140762D20 (EtwpRegisterProvider.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140763120 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407634C4 (PiDqQueryApplyObjectEvent.c)
 *     ExpGetNextCallback @ 0x14076CED0 (ExpGetNextCallback.c)
 *     PiDmListAddList @ 0x14076E9E4 (PiDmListAddList.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14076FAF8 (CmpUnlockTwoSecurityCaches.c)
 *     ObRevokeHandles @ 0x14077989C (ObRevokeHandles.c)
 *     CmpEnumerateCallback @ 0x14077CDB0 (CmpEnumerateCallback.c)
 *     WdipSemReserveInstanceTableEntry @ 0x1407885D8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140788720 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x140789350 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407894A0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x1407895DC (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x1407898AC (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140789970 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140789AC8 (WdipSemEnableContextProvider.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x14078F2B0 (CmRegisterMachineHiveLoadedNotification.c)
 *     ObCreateObjectTypeEx @ 0x1407958F0 (ObCreateObjectTypeEx.c)
 *     WdipSemInitialize @ 0x140799008 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 *     CmpStartSiloKeyLockTracker @ 0x1407A5770 (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     WdipSemAllocatePool @ 0x1407C008C (WdipSemAllocatePool.c)
 *     CmLockKeyForWrite @ 0x1407C2FF0 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1407C31E0 (CmpGlobalLockKeyForWrite.c)
 *     ObRegisterCallbacks @ 0x1407CA810 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1407CA9E4 (ObpInsertCallbackByAltitude.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407CB970 (CmpMachineHiveLoadedWorkItem.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407CE3D0 (ObIsDosDeviceLocallyMapped.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5700 (EtwpTracingProvEnableCallback.c)
 *     CmUnRegisterCallback @ 0x140869C10 (CmUnRegisterCallback.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A0A0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpSyncNextBackupHive @ 0x140871460 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x140872330 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1408727F4 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140872918 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x140872B30 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140875BBC (CmpUnlockHashEntryByIndex.c)
 *     CmDumpKey @ 0x14087BD18 (CmDumpKey.c)
 *     IoRegisterContainerNotification @ 0x140894A40 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140894C80 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A317C (PiPnpRtlEnsureObjectCached.c)
 *     PiDqQueryUnlock @ 0x1408A4B9C (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x1408DC2DC (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x1408DC490 (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408DC920 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408DC9E0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408DD258 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1408DDB00 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1408DDC40 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E4684 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PsRegisterAltSystemCallHandler @ 0x14090BAF0 (PsRegisterAltSystemCallHandler.c)
 *     WdipSemUpdate @ 0x14092FB54 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x140930074 (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x140933C04 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140933EEC (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x140934754 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14093EF50 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093F01C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F1B0 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3A8 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093F940 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409412CC (EtwpTrackGuidEntryRegistrations.c)
 *     PopReleaseAwaymodeLock @ 0x140990570 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x1409B2B58 (ExShutdownSystem.c)
 *     PsNotifyCoreDriversInitialized @ 0x140A5EF60 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     PsBoostThreadIoQoS @ 0x140287458 (PsBoostThreadIoQoS.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140293A50 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x1402D0FD0 (KiAbThreadUnboostIoPriority.c)
 *     ExfReleasePushLock @ 0x1402F1440 (ExfReleasePushLock.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A7460 (EtwTraceAutoBoostClearFloor.c)
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
  __int64 SessionId; // r8
  unsigned __int8 v11; // r15
  unsigned int v12; // edx
  _DWORD *v13; // r9
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdx
  char v20; // [rsp+72h] [rbp+1Ah]

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
    LOBYTE(v6) = ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v20 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v13 = (_DWORD *)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
    v14 = !_BitScanReverse((unsigned int *)&v15, v12);
    if ( v14 )
      goto LABEL_27;
    while ( 1 )
    {
      v16 = (__int64)&CurrentThread->LockEntries[v15];
      v12 &= ~(1 << v15);
      if ( (*(_BYTE *)(v16 + 26) & 1) != 0
        && (*(_DWORD *)(v16 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v13
        && *(_DWORD *)(v16 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v16 + 26) &= ~1u;
        if ( *(_QWORD *)(v16 + 32) )
          break;
      }
      v14 = !_BitScanReverse((unsigned int *)&v15, v12);
      if ( v14 )
        goto LABEL_27;
    }
    if ( !v16 )
    {
LABEL_27:
      LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( (v6 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v16 + 32) |= 2u;
      if ( *(__int64 *)(v16 + 32) < 0 )
        KiAbEntryRemoveFromTree(v16);
      v9 = *(_DWORD *)(v16 + 88) & 0x1FFFF;
      v17 = *(_DWORD *)(v16 + 88) & 0xFFFE0000;
      *(_BYTE *)(v16 + 25) &= ~1u;
      v20 = BYTE2(v9);
      *(_DWORD *)(v16 + 88) = v17;
      *(_QWORD *)(v16 + 32) = 0LL;
      v18 = (signed __int64)(v16 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v11 == 1 )
      {
        LODWORD(v6) = CurrentThread->AbEntrySummary | (1 << v18);
        CurrentThread->AbEntrySummary = v6;
      }
      else
      {
        v15 = (unsigned int)v18;
        LOBYTE(v6) = 1 << v18;
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
      }
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority((__int64)CurrentThread, 0LL);
      if ( (v20 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        PsBoostThreadIoQoS((__int64)CurrentThread, 1LL);
      }
      LOBYTE(v6) = -1;
      if ( (v9 & 0x7FFF) != 0 )
        LOBYTE(v6) = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread, v9 & 0x7FFF, SessionId, v13);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        LOBYTE(v6) = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery(v15);
  }
  return v6;
}
