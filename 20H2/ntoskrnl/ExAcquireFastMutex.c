/*
 * XREFs of ExAcquireFastMutex @ 0x140220130
 * Callers:
 *     RawCompletionRoutine @ 0x140202C40 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x140202FEC (RawInitiateDeleteVolume.c)
 *     PoRunDownDeviceObject @ 0x1402034A8 (PoRunDownDeviceObject.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140220050 (FsRtlLookupPerStreamContextInternal.c)
 *     CcDeleteMbcb @ 0x1402482E0 (CcDeleteMbcb.c)
 *     HalpAcpiGetTable @ 0x14025EF70 (HalpAcpiGetTable.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcAcquireByteRangeForWrite @ 0x140297520 (CcAcquireByteRangeForWrite.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140298384 (CcAcquireBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     CcGetDirtyPagesHelper @ 0x14029CC30 (CcGetDirtyPagesHelper.c)
 *     CcZeroEndOfLastPage @ 0x14029F7A8 (CcZeroEndOfLastPage.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402F37AC (CmpWaitForLateUnloadWorker.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402F9E20 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAddLargeMcbEntry @ 0x140301E30 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x140301EA0 (FsRtlTruncateLargeMcb.c)
 *     FsRtlInsertPerStreamContext @ 0x14030A6E0 (FsRtlInsertPerStreamContext.c)
 *     CcGetFlushedValidData @ 0x1403170D0 (CcGetFlushedValidData.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140322450 (FsRtlpCancelOplockRHIrp.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     PopGetPowerSettingValue @ 0x140363854 (PopGetPowerSettingValue.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036C610 (FsRtlpCancelExclusiveIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037F3F0 (PnpUnregisterPlugPlayNotification.c)
 *     PopRunNormalIrpWorkers @ 0x140386668 (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x14038BC90 (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A4910 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x1403A8724 (PopInitilizeAcDcSettings.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B9DC8 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTables @ 0x1403BAABC (HalpAcpiGetAllTables.c)
 *     PopIrpWorkerControl @ 0x1403CB5E0 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x1404E8AF0 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1404E8D80 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E99B4 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1404ED640 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1404ED730 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1404ED7E0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404ED860 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1404ED9E0 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1404EDA40 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1404EDAE0 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1404EDCA0 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404EEB58 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EEC38 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EF150 (FsRtlpWaitOnIrp.c)
 *     FsRtlRemovePerStreamContext @ 0x1404EF960 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x14050C02C (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x140522C54 (KiOpPatchCode.c)
 *     PopAcquireIrpWorkerLock @ 0x1405761C0 (PopAcquireIrpWorkerLock.c)
 *     RawVerifyVolume @ 0x140583434 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x14058D230 (RtlpTraceDatabaseAcquireLock.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1405D8390 (FsRtlTeardownPerStreamContexts.c)
 *     RawDispatch @ 0x1405D8820 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x1405D8A28 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1405D8AE4 (RawCreate.c)
 *     RawClose @ 0x1405D8C7C (RawClose.c)
 *     RawCleanup @ 0x1405D8CFC (RawCleanup.c)
 *     RawScanDeletedList @ 0x1405D90B8 (RawScanDeletedList.c)
 *     RawMountVolume @ 0x1405D9E90 (RawMountVolume.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405F5200 (EtwpReleaseProviderTraitsReference.c)
 *     DbgkCopyProcessDebugPort @ 0x140630564 (DbgkCopyProcessDebugPort.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiUEventHandleGetEvent @ 0x140648318 (PiUEventHandleGetEvent.c)
 *     PiUEventProcessEventWorker @ 0x140648C00 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x140648D9C (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x14064921C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClient @ 0x14064983C (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140649920 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1406499BC (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140649C48 (PiUEventNotifyTargetDeviceChange.c)
 *     PnpProcessDeferredRegistrations @ 0x14064ACBC (PnpProcessDeferredRegistrations.c)
 *     PnpInsertEventInQueue @ 0x14064AECC (PnpInsertEventInQueue.c)
 *     PfGetCompletedTrace @ 0x14064E334 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14064E5C4 (PfTTraceListAdd.c)
 *     PfSnEndTrace @ 0x14065AA98 (PfSnEndTrace.c)
 *     IoGetDeviceProperty @ 0x140668830 (IoGetDeviceProperty.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406697B8 (EtwpSetProviderTraitsCommon.c)
 *     CmpDelayCloseWorker @ 0x140670BA0 (CmpDelayCloseWorker.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1406801A0 (FsRtlAcquireToCreateMappedSection.c)
 *     CmpAddToDelayedClose @ 0x1406825DC (CmpAddToDelayedClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406A3130 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpRemoveFromDelayedClose @ 0x1406A39B0 (CmpRemoveFromDelayedClose.c)
 *     CmpDelayFreeCmRm @ 0x1406A3C7C (CmpDelayFreeCmRm.c)
 *     CmpWorkerEngineWorker @ 0x1406A5F30 (CmpWorkerEngineWorker.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406A7530 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406A7600 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406A7770 (FsRtlAddToTunnelCacheEx.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406CC0DC (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1406D074C (PfSnGetCompletedTrace.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1406D7F7C (PiDqObjectManagerUnregisterQuery.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1406DABE8 (CmWorkerEngineQueueWorkItem.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406DC7A8 (PiUEventFreeClientRegistrationContext.c)
 *     CmpDelayFreeRMWorker @ 0x1406DF440 (CmpDelayFreeRMWorker.c)
 *     PiUEventHandleUnregisterClient @ 0x1406E1664 (PiUEventHandleUnregisterClient.c)
 *     CmpAddStringToMapping @ 0x1406E22A4 (CmpAddStringToMapping.c)
 *     PnpBusTypeGuidGet @ 0x1406E263C (PnpBusTypeGuidGet.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406E40B0 (PfSnTracingStateExWorkerRoutine.c)
 *     PnpDeferNotification @ 0x1406ECE54 (PnpDeferNotification.c)
 *     PopSetPowerSettingValue @ 0x1406FA718 (PopSetPowerSettingValue.c)
 *     CmpGetMappingHiveForString @ 0x1407014E0 (CmpGetMappingHiveForString.c)
 *     PiUEventHandleRegistration @ 0x140718598 (PiUEventHandleRegistration.c)
 *     PopDiagTraceControlCallback @ 0x14071C0D0 (PopDiagTraceControlCallback.c)
 *     PopGetSettingNotificationName @ 0x14071C434 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x14071C950 (PopGetSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14071D950 (PoRegisterPowerSettingCallback.c)
 *     PopDispatchNotificationsToList @ 0x14071E12C (PopDispatchNotificationsToList.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14071E5A0 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x14071E6C0 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x14071EE5C (PopLogDisabledSleepReason.c)
 *     IopDestroyDeviceNode @ 0x14071F594 (IopDestroyDeviceNode.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071FA1C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpRestartDeviceNode @ 0x14072D508 (PnpRestartDeviceNode.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14073AD94 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpNotifyDeviceClassChange @ 0x14073B830 (PnpNotifyDeviceClassChange.c)
 *     PnpOrphanNotification @ 0x140742B60 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140742BFC (PnpCleanupDeviceRegistryValues.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140744118 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PnpBuildCmResourceLists @ 0x14074898C (PnpBuildCmResourceLists.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14074950C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x140749FD4 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14074C000 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopReleaseResources @ 0x14074C80C (IopReleaseResources.c)
 *     IopLegacyResourceAllocation @ 0x14074C8B4 (IopLegacyResourceAllocation.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14075EA90 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1407631A8 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpFreeDeviceInstancePath @ 0x140767A58 (PnpFreeDeviceInstancePath.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140767CF8 (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140768634 (PiUEventNotifyDeviceInstanceChange.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407687F4 (PnpBusTypeGuidGetIndex.c)
 *     RawUserFsCtrl @ 0x140769E38 (RawUserFsCtrl.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14076C93C (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PoUnregisterPowerSettingCallback @ 0x14076E510 (PoUnregisterPowerSettingCallback.c)
 *     DbgkClearProcessDebugObject @ 0x14076EE70 (DbgkClearProcessDebugObject.c)
 *     PiUEventBroadcastEventWorker @ 0x14076FD20 (PiUEventBroadcastEventWorker.c)
 *     ExSwapinWorkerThreads @ 0x1407734E4 (ExSwapinWorkerThreads.c)
 *     PopFreeSessionState @ 0x140774DB0 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x140775BB4 (PopQueryPowerSettingUlong.c)
 *     PoVolumeDevice @ 0x14077C4AC (PoVolumeDevice.c)
 *     PfTInitialize @ 0x1407BA93C (PfTInitialize.c)
 *     PfTStart @ 0x1407BB63C (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C4540 (KeRegisterProcessorChangeCallback.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407D0094 (WheaCrashDumpInitializationComplete.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140867C20 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x140867D74 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x140867FEC (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x140868118 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x140868208 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140868338 (HalpIrtReleaseDeviceAperture.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x14086E564 (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x140886E48 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140887290 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x14088758C (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140887F78 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140888270 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1408889B0 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140888D20 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140888EB0 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x140893DC8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x1408A24F8 (PnpNotifyHwProfileChange.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408A72C0 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408ADBAC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408ADDD8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1408ADE60 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408ADF0C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408AE05C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1408AE11C (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1408AE16C (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1408AE7DC (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1408B5804 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x1408B59A8 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x1408B7C5C (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x1408E2BFC (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x1408E6420 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x1408E64E0 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1408E8E90 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x14094F634 (ExpUpdateDebugInfo.c)
 *     WheapReportDeferredLiveDumps @ 0x14096090C (WheapReportDeferredLiveDumps.c)
 *     PopFlushVolumes @ 0x14099AAFC (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x14099ADB0 (PopFlushVolumeWorker.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x1409B69C4 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x1409B6A74 (WheapSaveRecordForLiveDump.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x140241B40 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v5; // rcx
  int SessionId; // eax
  bool v7; // zf
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
    && byte_140C4F848[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
