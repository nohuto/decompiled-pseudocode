/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x140261C10
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14022E960 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 *     SepQueueWorkItem @ 0x14030D790 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x140311E50 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x140321120 (SeTokenSetNoChildProcessRestricted.c)
 *     SepDesktopAppxSubProcessToken @ 0x140339778 (SepDesktopAppxSubProcessToken.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1403537D4 (FsRtlAcquireFileForModWriteEx.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140362140 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x14036EFD4 (MiProcessLoaderEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037CC00 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1403BBE10 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5090 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1404FD1AC (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14050A2C0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14050AB38 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x140583090 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1405850F4 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x140585E38 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140590024 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405919C0 (SeSetSecurityAttributesTokenEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405AF710 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C6ACC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     ExAcquireTimeRefreshLock @ 0x1405D0D58 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1405D1630 (PfSnPrefetchCacheEntryUpdate.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405EE47C (FsRtlAcquireFileForCcFlushEx.c)
 *     PiDrvDbLoadNode @ 0x1405EE954 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x1405EEAB8 (PiDrvDbUnloadNode.c)
 *     PspLockJobExclusive @ 0x1406129B4 (PspLockJobExclusive.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140630F50 (FsRtlAcquireFileExclusiveCommon.c)
 *     PfSnCheckActionsNeeded @ 0x140650B2C (PfSnCheckActionsNeeded.c)
 *     CmpStopRMLog @ 0x1406592B4 (CmpStopRMLog.c)
 *     PspLockJobConditionally @ 0x14065E260 (PspLockJobConditionally.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspLockJobChain @ 0x14066F47C (PspLockJobChain.c)
 *     NtAdjustPrivilegesToken @ 0x14066FDD0 (NtAdjustPrivilegesToken.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140671D90 (PspApplyWorkingSetLimitsToProcess.c)
 *     SepReferenceLogonSessionSilo @ 0x1406740E0 (SepReferenceLogonSessionSilo.c)
 *     PspLockJobsAndProcessExclusive @ 0x140674DFC (PspLockJobsAndProcessExclusive.c)
 *     NtAdjustGroupsToken @ 0x1406759E0 (NtAdjustGroupsToken.c)
 *     PnpNotifyTargetDeviceChange @ 0x140684748 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140684F18 (PiDcHandleCustomDeviceEvent.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406A6604 (PiPnpRtlBeginOperation.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406ADC48 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406ADCE4 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406AEE88 (_CmGetDeviceSoftwareKey.c)
 *     IopGetDeviceInterfaces @ 0x1406B3D5C (IopGetDeviceInterfaces.c)
 *     NtCreateTimer @ 0x1406C7A00 (NtCreateTimer.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1406CBE4C (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1406CBEB4 (PspFreezeJobTree.c)
 *     NtGetMUIRegistryInfo @ 0x1406CC610 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406CFF3C (SepCreateLogonSessionTrack.c)
 *     IoOpenDeviceRegistryKey @ 0x1406D2470 (IoOpenDeviceRegistryKey.c)
 *     SepDeReferenceLogonSession @ 0x1406D2920 (SepDeReferenceLogonSession.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 *     SepUpdateLogonSessionTrack @ 0x1406DAAD4 (SepUpdateLogonSessionTrack.c)
 *     SeSetMandatoryPolicyToken @ 0x1406DDA84 (SeSetMandatoryPolicyToken.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1406E2038 (PspSetEnergyTrackingStateJobTree.c)
 *     SeSetSessionIdToken @ 0x1406E4A08 (SeSetSessionIdToken.c)
 *     PspSetBackgroundJobTree @ 0x1406E6470 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406E88BC (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406ECF80 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     MmLockPagableDataSection @ 0x1406EF480 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406EF580 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x1406F0198 (MiCancelPhase0Locking.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     PopAcquireAdaptiveLock @ 0x1406FE7B4 (PopAcquireAdaptiveLock.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1407118A0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407173A0 (IoGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071A188 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDmListRemoveObjectWorker @ 0x14071CCE8 (PiDmListRemoveObjectWorker.c)
 *     PiSwDeviceFree @ 0x14071FF8C (PiSwDeviceFree.c)
 *     PnpNotifyDeviceClassChange @ 0x140722CF8 (PnpNotifyDeviceClassChange.c)
 *     PpCheckInDriverDatabase @ 0x1407231E0 (PpCheckInDriverDatabase.c)
 *     IopDoDeferredSetInterfaceState @ 0x1407234D0 (IopDoDeferredSetInterfaceState.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x14072C26C (PnpSetDevicePropertyData.c)
 *     PiSwLock @ 0x14072C754 (PiSwLock.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14072DF88 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x14072E104 (PiDmListAddObjectWorker.c)
 *     PiDmAddCacheReferenceForObject @ 0x14072E2E0 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     IoSetDeviceInterfaceState @ 0x14072FA80 (IoSetDeviceInterfaceState.c)
 *     PpDeviceRegistration @ 0x1407310DC (PpDeviceRegistration.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14073331C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140733498 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwStopDestroy @ 0x1407344C4 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x14073456C (PiSwProcessParentRemoveIrp.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1407367B0 (PiPnpRtlSetDeviceRegProperty.c)
 *     PnpDisableDeviceInterfaces @ 0x140736F54 (PnpDisableDeviceInterfaces.c)
 *     PnpChainDereferenceComplete @ 0x1407371F8 (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x140737340 (PnpDelayedRemoveWorker.c)
 *     IopGetRootDevices @ 0x14073749C (IopGetRootDevices.c)
 *     PiSwPdoPnPDispatch @ 0x140737A70 (PiSwPdoPnPDispatch.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073C170 (DrvDbOpenDriverDatabaseRegKey.c)
 *     MiRememberUnloadedDriver @ 0x1407484D4 (MiRememberUnloadedDriver.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074BA90 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x14074C508 (CmpTransWriteLog.c)
 *     CmpAccountForLogReservation @ 0x140750970 (CmpAccountForLogReservation.c)
 *     PiSwCompleteCreate @ 0x140753438 (PiSwCompleteCreate.c)
 *     PiSwIrpSetLifetime @ 0x14075455C (PiSwIrpSetLifetime.c)
 *     PiSwIrpCleanup @ 0x140754680 (PiSwIrpCleanup.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14075652C (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140758340 (IoEnumerateRegisteredFiltersList.c)
 *     PiSwProcessParentStartIrp @ 0x1407595D8 (PiSwProcessParentStartIrp.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     IopBootLog @ 0x14075CC40 (IopBootLog.c)
 *     SepBlockAccessForLogonSession @ 0x140764BCC (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1407659EC (WmiAcquireSmbiosLockExclusive.c)
 *     SepDeleteLogonSessionTrack @ 0x140765CD0 (SepDeleteLogonSessionTrack.c)
 *     IoUnregisterFileSystem @ 0x140768940 (IoUnregisterFileSystem.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140768F28 (PnpSetDeviceInterfacePropertyData.c)
 *     IoRegisterFileSystem @ 0x14076B910 (IoRegisterFileSystem.c)
 *     CmpStartRMLog @ 0x14076C534 (CmpStartRMLog.c)
 *     PiSwIrpPropertySet @ 0x140775DB4 (PiSwIrpPropertySet.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     MiWriteProtectSystemImages @ 0x140783A44 (MiWriteProtectSystemImages.c)
 *     PpDevCfgProcessDevices @ 0x14078A78C (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x1407953A0 (SepRmCommandServerThread.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     MmFreeBootDriverInitializationCode @ 0x14079B7E8 (MmFreeBootDriverInitializationCode.c)
 *     IoInitializeCrashDump @ 0x14079F7D4 (IoInitializeCrashDump.c)
 *     SeExchangePrimaryToken @ 0x1407A36C8 (SeExchangePrimaryToken.c)
 *     PpReleaseBootDDB @ 0x1407A64A4 (PpReleaseBootDDB.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407A7544 (PiSwIrpInterfacePropertySet.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407AF8C0 (SepRmGlobalSaclSetWrkr.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407B3FE0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5968 (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407B7150 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x1407B9DD0 (NtFlushInstallUILanguage.c)
 *     FsRtlCopyWrite @ 0x140886480 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140886EA0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x140888CB8 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x140888E50 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x14088CA84 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x14088D370 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x14088FA30 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140891CF8 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14089A0F8 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089B488 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14089B6A8 (PnpNotifyHwProfileChange.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14089CA70 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiSwIrpGetLifetime @ 0x1408AA650 (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AC170 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ACCD8 (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x1408AEB58 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1408B4D34 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x1408B4E70 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogAcquireContextLock @ 0x1408EA720 (PopDripsWatchdogAcquireContextLock.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408EABA0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408EADC0 (PopDripsWatchdogNotifySessionStart.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408EAEC4 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408EB034 (PopDripsWatchdogStopWatchdog.c)
 *     TtmpStopCallout @ 0x1408F8D58 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1408F9730 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408F9980 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408F9E2C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408F9F94 (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1408FAF28 (TtmpAcquireSessionById.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1408FB3E8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1408FB8BC (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1408FB960 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1408FBCB0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FC264 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x140900C8C (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140900ED0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140901040 (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x140901210 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x140904790 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x140904E8C (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x1409112C0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x140918188 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14091857C (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x14091EE30 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14091EF2C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x14091F0DC (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x14091F330 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x1409469F0 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x140969A30 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x14096FCAC (_PnpCtxCloseMachine.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     PipResetDevices @ 0x140A4C1C8 (PipResetDevices.c)
 *     MiUnlockBootPageSections @ 0x140A4CB58 (MiUnlockBootPageSections.c)
 *     MiInitializeKernelCfg @ 0x140A4E4DC (MiInitializeKernelCfg.c)
 *     IopInitCrashDumpRegCallback @ 0x140A5FC10 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x140263810 (ExpTryAcquireResourceExclusive.c)
 *     ExpWaitForResource @ 0x140267490 (ExpWaitForResource.c)
 *     ExpBoostIoAfterAcquire @ 0x1402DB614 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140305750 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140307F0C (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038AEC4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A51F0 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A56BC (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  unsigned __int8 v4; // cl
  __int16 v5; // ax
  struct _KTHREAD *v6; // rbp
  bool v7; // si
  __int64 v8; // rcx
  BOOLEAN v9; // di
  ULONG v10; // ecx
  unsigned __int64 OldIrql; // rbp
  ULONG v13; // edi
  ULONG v14; // edi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r8
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v40[4]; // [rsp+48h] [rbp-40h] BYREF

  v4 = (Wait == 0) + 1;
  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v5 = Resource->Flag & 1;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > v4 )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v4, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v5 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    memset(v40, 0, 48);
    v6 = KeGetCurrentThread();
    v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    __incgsdword(0x8678u);
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    v9 = ExpTryAcquireResourceExclusive(Resource);
    if ( v9 )
    {
      v10 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v6;
      Resource->OwnerEntry.TableSize = v10 | 8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      __incgsdword(0x867Cu);
      __incgsdword(0x8664u);
      if ( v7 )
        PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v9;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == v6 )
    {
      v13 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v13;
      v14 = v13 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v15 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8(v15);
      __incgsdword(0x8680u);
      __incgsdword(0x8664u);
      if ( !v7 )
        return 1;
      v37 = v14;
      v38 = 65585LL;
    }
    else
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v19 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v24 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
        }
        __writecr8(v19);
        __incgsdword(0x8688u);
        return 0;
      }
      ExpPrepareToWaitForResourceExclusive(v8, v6, v40);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v16 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
      }
      __writecr8(v16);
      __incgsdword(0x8684u);
      if ( v7 )
        PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
      ExpApplyPrewaitBoost(Resource);
      ExpWaitForResource(Resource, v40, 66084LL, ExpApplyRewaitBoost);
      ExpBoostIoAfterAcquire(Resource, v6, 0LL);
      __incgsdword(0x867Cu);
      __incgsdword(0x8664u);
      if ( !v7 )
        return 1;
      v37 = 1LL;
      v38 = 65569LL;
    }
    PerfLogExecutiveResourceAcquire(v38, Resource, v37, Resource->ContentionCount);
    return 1;
  }
  return ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
}
