/*
 * XREFs of ExReleasePushLockEx @ 0x140207FC0
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x1402070D0 (FsRtlLookupPerStreamContextInternal.c)
 *     CcGetVirtualAddress @ 0x14022F3B0 (CcGetVirtualAddress.c)
 *     NtTraceEvent @ 0x14026C620 (NtTraceEvent.c)
 *     EtwpUnlockBufferList @ 0x14027E450 (EtwpUnlockBufferList.c)
 *     ObpUnlockDirectory @ 0x140297B54 (ObpUnlockDirectory.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402BE678 (CcReleaseBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x1402C4F3C (CcAllocateInitializeBcb.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C8154 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1402C8358 (CcShouldSpinAsyncReadWorkerThread.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140325E00 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140331DC0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140333060 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140333150 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x140333FA0 (FsRtlInsertPerStreamContext.c)
 *     CcGetVirtualAddressIfMapped @ 0x140339600 (CcGetVirtualAddressIfMapped.c)
 *     FsRtlInsertPerFileContext @ 0x14034CFA0 (FsRtlInsertPerFileContext.c)
 *     FsRtlLookupPerFileContext @ 0x140352AB0 (FsRtlLookupPerFileContext.c)
 *     CcCompleteAsyncReadWorker @ 0x14035A2B0 (CcCompleteAsyncReadWorker.c)
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 *     IopCleanupNotifications @ 0x14037A5C0 (IopCleanupNotifications.c)
 *     CcGetNumberOfMappedPages @ 0x140392240 (CcGetNumberOfMappedPages.c)
 *     ExpUnlockCallbackListExclusive @ 0x1403A39DC (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x1403B4950 (CcAsyncReadWorker.c)
 *     CcAsyncReadWorkerThread @ 0x1404E74A0 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerFileContext @ 0x1404EBFD0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1404EC0D0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x140509378 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1405653A0 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     CmSetCallbackObjectContext @ 0x1405CC3F0 (CmSetCallbackObjectContext.c)
 *     VrpUnloadDifferencingHive @ 0x1405CCC78 (VrpUnloadDifferencingHive.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405CCE40 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405CD0A4 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405CD6C8 (CmpFreeCallbackObjectContexts.c)
 *     PiDqIrpQueryGetResult @ 0x1405D13F4 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405D1C7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x1405D20D0 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1405D243C (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x1405D2CB0 (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405D8DB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405D9120 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405DA0A4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405DA7D4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405DA99C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x1405DB07C (PiDmObjectIsEnumerable.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1405DF1A0 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x1405DF608 (CmpUnlockHashEntry.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockNameHashEntry @ 0x1405E8020 (CmpUnlockNameHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405E8060 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmEnumerateValueKey @ 0x1405E9400 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405ECD50 (CmpUnlockHashEntryByKcb.c)
 *     DelistKeyBodyFromKCB @ 0x1405ED3B0 (DelistKeyBodyFromKCB.c)
 *     CmpOKToFollowLink @ 0x1405EDEE0 (CmpOKToFollowLink.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1405F0F80 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1405F1AC0 (CmpCallbackFillObjectContext.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405F3DB0 (ObpIncrementHandleCountEx.c)
 *     ObDereferenceDeviceMap @ 0x140619124 (ObDereferenceDeviceMap.c)
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpReceiveNotification @ 0x140633CA8 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     EtwpQueueNotification @ 0x1406371FC (EtwpQueueNotification.c)
 *     ObpDecrementHandleCount @ 0x14063D434 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x14063D600 (ObpDeleteNameCheck.c)
 *     CmpGetNextActiveHive @ 0x14063FE90 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140644890 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 *     WdipTimeoutCheckRoutine @ 0x14064CAE0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14064CB90 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14064CC18 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     PopReleaseUmpoPushLock @ 0x14064CF38 (PopReleaseUmpoPushLock.c)
 *     ObQueryDeviceMapInformation @ 0x140665BB0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140666044 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1406661E0 (ObpReferenceDeviceMap.c)
 *     ObSetSecurityDescriptorInfo @ 0x140668C10 (ObSetSecurityDescriptorInfo.c)
 *     EtwpAddRegEntryToGroup @ 0x14066BC00 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14066E310 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x14066FF90 (EtwpDeleteRegistrationObject.c)
 *     CmpUnlockTwoKcbs @ 0x140672190 (CmpUnlockTwoKcbs.c)
 *     ObpFreeObject @ 0x140673440 (ObpFreeObject.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     ObpCallPreOperationCallbacks @ 0x140687D40 (ObpCallPreOperationCallbacks.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmUnlockHiveSecurity @ 0x14069CD48 (CmUnlockHiveSecurity.c)
 *     CmpAssignSecurityToKcb @ 0x14069CEF4 (CmpAssignSecurityToKcb.c)
 *     PopUmpoProcessMessage @ 0x1406A79B4 (PopUmpoProcessMessage.c)
 *     EtwpRealtimeConnect @ 0x1406C6788 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C6BB8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStopLoggerInstance @ 0x1406C6F20 (EtwpStopLoggerInstance.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406C7250 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406CA5F4 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     NtQuerySymbolicLinkObject @ 0x1406D87C0 (NtQuerySymbolicLinkObject.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406DA8E0 (FsRtlTeardownPerStreamContexts.c)
 *     CmpGetCallbackObjectContext @ 0x1406DD664 (CmpGetCallbackObjectContext.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406E1C30 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406E1CA8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406E1EAC (ObpDeleteSymbolicLinkName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406E2428 (ObSetCurrentProcessDeviceMap.c)
 *     EtwpRundownNotifications @ 0x1406E290C (EtwpRundownNotifications.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406E6D50 (FsRtlTeardownPerFileContexts.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1406EE47C (CmpInsertCallbackInListByAltitude.c)
 *     NtOpenPrivateNamespace @ 0x1406F3C10 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x1406F3DE0 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406F422C (ObpRegisterPrivateNamespace.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406F5734 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406F877C (ObpRemoveNamespaceFromTable.c)
 *     EtwpFreeGuidEntry @ 0x14070189C (EtwpFreeGuidEntry.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140701D50 (PiDmObjectGetCachedObjectReference.c)
 *     ObCheckActiveHandles @ 0x1407023CC (ObCheckActiveHandles.c)
 *     ExpWatchProductTypeWork @ 0x140702430 (ExpWatchProductTypeWork.c)
 *     CmpGetLastHive @ 0x14070500C (CmpGetLastHive.c)
 *     ObpCreateSymbolicLinkName @ 0x140707664 (ObpCreateSymbolicLinkName.c)
 *     UnlockShutdown @ 0x14070A50C (UnlockShutdown.c)
 *     ObMakeTemporaryObject @ 0x14070AFD0 (ObMakeTemporaryObject.c)
 *     ObpSetDeviceMap @ 0x14070B584 (ObpSetDeviceMap.c)
 *     CmpUnlockHiveList @ 0x14070BD9C (CmpUnlockHiveList.c)
 *     EtwpTrackProviderBinary @ 0x14070D9A8 (EtwpTrackProviderBinary.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140717A50 (CmpCopyMergeOfLayeredKeyNode.c)
 *     EtwpGetTraceGuidInfo @ 0x14071C74C (EtwpGetTraceGuidInfo.c)
 *     NtMakePermanentObject @ 0x14071F810 (NtMakePermanentObject.c)
 *     PiDmListRemoveObject @ 0x14071F8D4 (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x140720B84 (PiDmListRemoveList.c)
 *     PiDmObjectReleaseLock @ 0x140734C38 (PiDmObjectReleaseLock.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x14073551C (PiDmListAddObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x140736424 (PiDmObjectProcessPropertyChange.c)
 *     EtwUnregister @ 0x14074CF60 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x14074F950 (EtwpRegisterProvider.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074FEB0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140750254 (PiDqQueryApplyObjectEvent.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140752730 (CmpUnlockTwoSecurityCaches.c)
 *     ExpGetNextCallback @ 0x14075A7D0 (ExpGetNextCallback.c)
 *     PiDmListAddList @ 0x14075BE14 (PiDmListAddList.c)
 *     ObRevokeHandles @ 0x1407668BC (ObRevokeHandles.c)
 *     CmpEnumerateCallback @ 0x14076A9C0 (CmpEnumerateCallback.c)
 *     WdipSemReserveInstanceTableEntry @ 0x1407761F8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140776340 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x140776F70 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407770C0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x1407771FC (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x1407774CC (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140777590 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x1407776E8 (WdipSemEnableContextProvider.c)
 *     ObCreateObjectTypeEx @ 0x14077DE30 (ObCreateObjectTypeEx.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407828C0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmpStartSiloKeyLockTracker @ 0x14078ED00 (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     WdipSemInitialize @ 0x14079A584 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     WdipSemAllocatePool @ 0x1407ADD48 (WdipSemAllocatePool.c)
 *     CmLockKeyForWrite @ 0x1407B0CB0 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1407B0EA0 (CmpGlobalLockKeyForWrite.c)
 *     ObRegisterCallbacks @ 0x1407B7D20 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1407B7EF4 (ObpInsertCallbackByAltitude.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407B8DF0 (CmpMachineHiveLoadedWorkItem.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407BB880 (ObIsDosDeviceLocallyMapped.c)
 *     EtwpTracingProvEnableCallback @ 0x1407C2A80 (EtwpTracingProvEnableCallback.c)
 *     CmUnRegisterCallback @ 0x1408665C0 (CmUnRegisterCallback.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140866A50 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpSyncNextBackupHive @ 0x14086E138 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x14086EF88 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14086F454 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x14086F578 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x14086F680 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140872780 (CmpUnlockHashEntryByIndex.c)
 *     CmDumpKey @ 0x140878820 (CmDumpKey.c)
 *     IoRegisterContainerNotification @ 0x1408917F0 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140891A30 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A007C (PiPnpRtlEnsureObjectCached.c)
 *     PiDqQueryUnlock @ 0x1408A1A9C (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x1408D8CDC (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x1408D8E90 (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408D9320 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408D93E0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408D9C58 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1408DA500 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1408DA640 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E1044 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PsRegisterAltSystemCallHandler @ 0x140908720 (PsRegisterAltSystemCallHandler.c)
 *     WdipSemUpdate @ 0x14092C554 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x14092CA74 (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x140930604 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409308EC (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x140931154 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14093B950 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093BA1C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093BBB0 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x14093BDA8 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093C340 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093DD3C (EtwpTrackGuidEntryRegistrations.c)
 *     PopReleaseAwaymodeLock @ 0x14098D580 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x1409AFCE8 (ExShutdownSystem.c)
 *     PsNotifyCoreDriversInitialized @ 0x140A4F458 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1402748B0 (ExfReleasePushLock.c)
 *     PsBoostThreadIoQoS @ 0x140279D74 (PsBoostThreadIoQoS.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140340DC4 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14035E600 (KiAbThreadUnboostIoPriority.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A1F90 (EtwTraceAutoBoostClearFloor.c)
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
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F7C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
