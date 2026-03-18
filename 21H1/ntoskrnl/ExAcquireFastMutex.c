/*
 * XREFs of ExAcquireFastMutex @ 0x1402600D0
 * Callers:
 *     CcAcquireBcbLockAndVacbLock @ 0x14022BA78 (CcAcquireBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcAcquireByteRangeForWrite @ 0x14022E960 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1402301A0 (CcGetDirtyPagesHelper.c)
 *     CcDeleteMbcb @ 0x140235CE0 (CcDeleteMbcb.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14025FFF0 (FsRtlLookupPerStreamContextInternal.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     CcZeroEndOfLastPage @ 0x1402818D4 (CcZeroEndOfLastPage.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 *     RawInitiateDeleteVolume @ 0x1402C27AC (RawInitiateDeleteVolume.c)
 *     RawCompletionRoutine @ 0x1402E4F90 (RawCompletionRoutine.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402EBBEC (CmpWaitForLateUnloadWorker.c)
 *     FsRtlAddLargeMcbEntry @ 0x1402F04B0 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x1402F0520 (FsRtlTruncateLargeMcb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1402F5590 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F6E60 (FsRtlInsertPerStreamContext.c)
 *     HalpAcpiGetTable @ 0x1402F8740 (HalpAcpiGetTable.c)
 *     CcGetFlushedValidData @ 0x140307F80 (CcGetFlushedValidData.c)
 *     CcPrepareMdlWrite @ 0x14031CA60 (CcPrepareMdlWrite.c)
 *     PopGetPowerSettingValue @ 0x14031D2BC (PopGetPowerSettingValue.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14031F568 (FsRtlPrivateInitializeFileLock.c)
 *     PoRunDownDeviceObject @ 0x14033F9E8 (PoRunDownDeviceObject.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140369C70 (FsRtlpCancelExclusiveIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037CC00 (PnpUnregisterPlugPlayNotification.c)
 *     PopRunNormalIrpWorkers @ 0x14037FBBC (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x140388A80 (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A1CB0 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x1403A9E74 (PopInitilizeAcDcSettings.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B64F8 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTables @ 0x1403B71EC (HalpAcpiGetAllTables.c)
 *     PopIrpWorkerControl @ 0x1403C7B90 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x1404E4FB0 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1404E5240 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1404E9780 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1404E9870 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1404E9920 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404E99A0 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1404E9B20 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1404E9B80 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1404E9C20 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1404E9DE0 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404EAC98 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EAD78 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB290 (FsRtlpWaitOnIrp.c)
 *     FsRtlRemovePerStreamContext @ 0x1404EBAA0 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x1405080AC (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x14051EC34 (KiOpPatchCode.c)
 *     PopAcquireIrpWorkerLock @ 0x140572140 (PopAcquireIrpWorkerLock.c)
 *     RawVerifyVolume @ 0x14057F3C4 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x140589110 (RtlpTraceDatabaseAcquireLock.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405F38C0 (EtwpSetProviderTraitsCommon.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x140630C80 (FsRtlAcquireToCreateMappedSection.c)
 *     RawDispatch @ 0x140652280 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x140652488 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140652544 (RawCreate.c)
 *     RawClose @ 0x1406526DC (RawClose.c)
 *     RawCleanup @ 0x14065275C (RawCleanup.c)
 *     PfSnEndTrace @ 0x1406536D8 (PfSnEndTrace.c)
 *     CmpDelayFreeCmRm @ 0x140659228 (CmpDelayFreeCmRm.c)
 *     CmpRemoveFromDelayedClose @ 0x140659A10 (CmpRemoveFromDelayedClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14065B320 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     PfGetCompletedTrace @ 0x140662E14 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1406630A4 (PfTTraceListAdd.c)
 *     DbgkCopyProcessDebugPort @ 0x14066FA68 (DbgkCopyProcessDebugPort.c)
 *     PiUEventHandleRegistration @ 0x1406801D8 (PiUEventHandleRegistration.c)
 *     PiUEventHandleGetEvent @ 0x140683408 (PiUEventHandleGetEvent.c)
 *     PiUEventProcessEventWorker @ 0x140683C00 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x140683D9C (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x14068421C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140684930 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x140684C00 (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140684CE4 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140684D80 (PiUEventReferenceEventEntry.c)
 *     CmpGetMappingHiveForString @ 0x140691560 (CmpGetMappingHiveForString.c)
 *     CmpDelayCloseWorker @ 0x140695A00 (CmpDelayCloseWorker.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1406A0304 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A055C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IoGetDeviceProperty @ 0x1406AF4F0 (IoGetDeviceProperty.c)
 *     PnpDeferNotification @ 0x1406B3854 (PnpDeferNotification.c)
 *     CmpWorkerEngineWorker @ 0x1406B62A0 (CmpWorkerEngineWorker.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406B95D0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406B9AE0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406B9BB0 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406B9D20 (FsRtlAddToTunnelCacheEx.c)
 *     CmpAddToDelayedClose @ 0x1406C2DA4 (CmpAddToDelayedClose.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C8B78 (EtwpReleaseProviderTraitsReference.c)
 *     PopDispatchNotificationsToList @ 0x1406CF638 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1406CFA30 (PopGetSettingValue.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406D61F8 (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1406DA95C (PfSnGetCompletedTrace.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1406E4AFC (CmWorkerEngineQueueWorkItem.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E6538 (PiUEventFreeClientRegistrationContext.c)
 *     CmpDelayFreeRMWorker @ 0x1406E91B0 (CmpDelayFreeRMWorker.c)
 *     PiUEventHandleUnregisterClient @ 0x1406EB4E4 (PiUEventHandleUnregisterClient.c)
 *     CmpAddStringToMapping @ 0x1406EBF40 (CmpAddStringToMapping.c)
 *     PnpBusTypeGuidGet @ 0x1406EC88C (PnpBusTypeGuidGet.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406EDBE0 (PfSnTracingStateExWorkerRoutine.c)
 *     PopDiagTraceControlCallback @ 0x1406FF180 (PopDiagTraceControlCallback.c)
 *     RawMountVolume @ 0x140701B0C (RawMountVolume.c)
 *     RawScanDeletedList @ 0x140703040 (RawScanDeletedList.c)
 *     PnpProcessDeferredRegistrations @ 0x14070AA74 (PnpProcessDeferredRegistrations.c)
 *     PnpInsertEventInQueue @ 0x14070AC58 (PnpInsertEventInQueue.c)
 *     PopGetSettingNotificationName @ 0x14070E014 (PopGetSettingNotificationName.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14070E620 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14070F018 (PopSetPowerSettingValue.c)
 *     PopLogDisabledSleepReason @ 0x14070FACC (PopLogDisabledSleepReason.c)
 *     IopDestroyDeviceNode @ 0x140710204 (IopDestroyDeviceNode.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071068C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopCallPowerSettingCallback @ 0x140710DA0 (PopCallPowerSettingCallback.c)
 *     PoRegisterPowerSettingCallback @ 0x140711220 (PoRegisterPowerSettingCallback.c)
 *     PnpRestartDeviceNode @ 0x14071D838 (PnpRestartDeviceNode.c)
 *     PnpNotifyDeviceClassChange @ 0x140722CF8 (PnpNotifyDeviceClassChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140730258 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PnpBuildCmResourceLists @ 0x140737EFC (PnpBuildCmResourceLists.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140738A7C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x140739544 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14073B570 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopReleaseResources @ 0x14073BD7C (IopReleaseResources.c)
 *     IopLegacyResourceAllocation @ 0x14073BE24 (IopLegacyResourceAllocation.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074BA90 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x14074FED8 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpFreeDeviceInstancePath @ 0x140757198 (PnpFreeDeviceInstancePath.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1407571F0 (PnpCleanupDeviceRegistryValues.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140757A98 (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14075841C (PiUEventNotifyDeviceInstanceChange.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407585DC (PnpBusTypeGuidGetIndex.c)
 *     RawUserFsCtrl @ 0x140759748 (RawUserFsCtrl.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14075BDEC (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PnpOrphanNotification @ 0x14075C2A4 (PnpOrphanNotification.c)
 *     PoUnregisterPowerSettingCallback @ 0x14075DB90 (PoUnregisterPowerSettingCallback.c)
 *     DbgkClearProcessDebugObject @ 0x14075E490 (DbgkClearProcessDebugObject.c)
 *     PiUEventBroadcastEventWorker @ 0x14075F2D0 (PiUEventBroadcastEventWorker.c)
 *     ExSwapinWorkerThreads @ 0x14075FD14 (ExSwapinWorkerThreads.c)
 *     PopFreeSessionState @ 0x140764360 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x1407651C4 (PopQueryPowerSettingUlong.c)
 *     PoVolumeDevice @ 0x14076B2DC (PoVolumeDevice.c)
 *     PfTInitialize @ 0x1407A989C (PfTInitialize.c)
 *     PfTStart @ 0x1407AA59C (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407B2BA0 (KeRegisterProcessorChangeCallback.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407BE610 (WheaCrashDumpInitializationComplete.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140860F00 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x140861054 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x1408612AC (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x1408613D8 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x1408614C8 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x1408615F8 (HalpIrtReleaseDeviceAperture.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1408677F4 (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x14087FFD8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140880420 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x14088071C (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140881108 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140881400 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140881B40 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140881EB0 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140882040 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088CF58 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14089B6A8 (PnpNotifyHwProfileChange.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408A0470 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408A6D5C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408A6F88 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1408A7010 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408A70BC (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408A720C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1408A72CC (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1408A731C (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1408A798C (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1408AE9B4 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x1408AEB58 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x1408B0D1C (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x1408DBA4C (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x1408DF380 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x1408DF440 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1408E1DD0 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x1409484D4 (ExpUpdateDebugInfo.c)
 *     WheapReportDeferredLiveDumps @ 0x1409597AC (WheapReportDeferredLiveDumps.c)
 *     PopFlushVolumes @ 0x14099335C (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x140993610 (PopFlushVolumeWorker.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x1409AFBF4 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x1409AFCA4 (WheapSaveRecordForLiveDump.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v5; // rcx
  int SessionId; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 AbOrphanedEntrySummary; // di

  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_20;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  v1 = (__int64)&CurrentThread->LockEntries[v5];
  if ( !v1 )
  {
LABEL_20:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_140C4F908[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v1 + 40) = SessionId;
  *(_QWORD *)(v1 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v8, v7, v9, v10);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
