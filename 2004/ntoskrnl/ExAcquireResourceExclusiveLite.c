/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x140208CF0
 * Callers:
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     SepDesktopAppxSubProcessToken @ 0x140269A78 (SepDesktopAppxSubProcessToken.c)
 *     CcAcquireByteRangeForWrite @ 0x1402C1790 (CcAcquireByteRangeForWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1402F77F4 (FsRtlAcquireFileForModWriteEx.c)
 *     SepQueueWorkItem @ 0x14034AC70 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14034F640 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14035EBE0 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140362C30 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x14036FC04 (MiProcessLoaderEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037D6C0 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1403BD130 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5640 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1404FD7FC (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14050A910 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14050B188 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x1405837C0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x140585824 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x140586568 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140590714 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405920B0 (SeSetSecurityAttributesTokenEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405AFE30 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C7ACC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405FBF10 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspLockJobChain @ 0x140617D5C (PspLockJobChain.c)
 *     NtAdjustPrivilegesToken @ 0x1406186B0 (NtAdjustPrivilegesToken.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     SepReferenceLogonSessionSilo @ 0x14062F8A0 (SepReferenceLogonSessionSilo.c)
 *     NtAdjustGroupsToken @ 0x140631220 (NtAdjustGroupsToken.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140647510 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x140648470 (PnpNotifyTargetDeviceChange.c)
 *     CmpStopRMLog @ 0x1406530F8 (CmpStopRMLog.c)
 *     PspLockJobsAndProcessExclusive @ 0x140658118 (PspLockJobsAndProcessExclusive.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406596EC (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobConditionally @ 0x14065A8E8 (PspLockJobConditionally.c)
 *     PspLockJobExclusive @ 0x14068AB34 (PspLockJobExclusive.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069797C (FsRtlAcquireFileForCcFlushEx.c)
 *     PiDrvDbLoadNode @ 0x140697E54 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x140697FB8 (PiDrvDbUnloadNode.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A5DF4 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     MmLockPagableDataSection @ 0x1406A8960 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A8A60 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x1406A9678 (MiCancelPhase0Locking.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406A9984 (PfSnPrefetchCacheEntryUpdate.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     NtCreateTimer @ 0x1406AC2A0 (NtCreateTimer.c)
 *     PfSnCheckActionsNeeded @ 0x1406B8CBC (PfSnCheckActionsNeeded.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     SeSetMandatoryPolicyToken @ 0x1406BAEA8 (SeSetMandatoryPolicyToken.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 *     IopGetDeviceInterfaces @ 0x1406BE69C (IopGetDeviceInterfaces.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406C3FC4 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406C4060 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1406ED14C (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1406ED1B4 (PspFreezeJobTree.c)
 *     NtGetMUIRegistryInfo @ 0x1406ED910 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406F12DC (SepCreateLogonSessionTrack.c)
 *     IoOpenDeviceRegistryKey @ 0x1406F4F50 (IoOpenDeviceRegistryKey.c)
 *     SepDeReferenceLogonSession @ 0x1406F54F0 (SepDeReferenceLogonSession.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406F7B3C (_CmGetDeviceSoftwareKey.c)
 *     SepUpdateLogonSessionTrack @ 0x1406FDB54 (SepUpdateLogonSessionTrack.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1407049B8 (PspSetEnergyTrackingStateJobTree.c)
 *     SeSetSessionIdToken @ 0x140708398 (SeSetSessionIdToken.c)
 *     PspSetBackgroundJobTree @ 0x14070A2E0 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x14070C88C (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140710B30 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PopAcquireAdaptiveLock @ 0x140712000 (PopAcquireAdaptiveLock.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140713750 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDmListRemoveObjectWorker @ 0x140714AE8 (PiDmListRemoveObjectWorker.c)
 *     IoGetDeviceInterfaceAlias @ 0x140719730 (IoGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C518 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiSwDeviceFree @ 0x140721E4C (PiSwDeviceFree.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140725C5C (PiPnpRtlSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x140728EF0 (PnpSetDevicePropertyData.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     PpCheckInDriverDatabase @ 0x14072CAB4 (PpCheckInDriverDatabase.c)
 *     PnpNotifyDeviceClassChange @ 0x14072CDB4 (PnpNotifyDeviceClassChange.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14072FEDC (PiPnpRtlSetDeviceRegProperty.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731638 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1407317B4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwProcessParentRemoveIrp @ 0x14073279C (PiSwProcessParentRemoveIrp.c)
 *     PiSwStopDestroy @ 0x14073287C (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x140732958 (PiSwProcessParentStartIrp.c)
 *     PnpChainDereferenceComplete @ 0x140733590 (PnpChainDereferenceComplete.c)
 *     PpDeviceRegistration @ 0x140733C8C (PpDeviceRegistration.c)
 *     IopDoDeferredSetInterfaceState @ 0x14073430C (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x1407344B0 (IoSetDeviceInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14073546C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x1407355E8 (PiDmListAddObjectWorker.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407357C4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwCompleteCreate @ 0x1407372D4 (PiSwCompleteCreate.c)
 *     PiSwLock @ 0x140737DD0 (PiSwLock.c)
 *     IopGetRootDevices @ 0x14073901C (IopGetRootDevices.c)
 *     PiSwPdoPnPDispatch @ 0x1407395F0 (PiSwPdoPnPDispatch.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073DCF0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     MiRememberUnloadedDriver @ 0x14074A054 (MiRememberUnloadedDriver.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074FEB0 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x140750928 (CmpTransWriteLog.c)
 *     CmpAccountForLogReservation @ 0x140755000 (CmpAccountForLogReservation.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14075849C (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140759C80 (IoEnumerateRegisteredFiltersList.c)
 *     PnpDisableDeviceInterfaces @ 0x14075C4DC (PnpDisableDeviceInterfaces.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 *     PnpDelayedRemoveWorker @ 0x14075EED0 (PnpDelayedRemoveWorker.c)
 *     IopBootLog @ 0x14075F0F4 (IopBootLog.c)
 *     PiSwIrpSetLifetime @ 0x14075F288 (PiSwIrpSetLifetime.c)
 *     PiSwIrpCleanup @ 0x1407610EC (PiSwIrpCleanup.c)
 *     SepBlockAccessForLogonSession @ 0x14076658C (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1407673AC (WmiAcquireSmbiosLockExclusive.c)
 *     SepDeleteLogonSessionTrack @ 0x1407680B4 (SepDeleteLogonSessionTrack.c)
 *     IoUnregisterFileSystem @ 0x14076AD20 (IoUnregisterFileSystem.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14076B308 (PnpSetDeviceInterfacePropertyData.c)
 *     IoRegisterFileSystem @ 0x14076E0B0 (IoRegisterFileSystem.c)
 *     CmpStartRMLog @ 0x14076ECD4 (CmpStartRMLog.c)
 *     PiSwIrpPropertySet @ 0x1407781C4 (PiSwIrpPropertySet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407861E8 (MmFreeBootDriverInitializationCode.c)
 *     MiWriteProtectSystemImages @ 0x1407893D4 (MiWriteProtectSystemImages.c)
 *     PpDevCfgProcessDevices @ 0x14078C65C (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x140795150 (SepRmCommandServerThread.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IoInitializeCrashDump @ 0x1407A37B4 (IoInitializeCrashDump.c)
 *     SeExchangePrimaryToken @ 0x1407A5F18 (SeExchangePrimaryToken.c)
 *     PpReleaseBootDDB @ 0x1407AA1A4 (PpReleaseBootDDB.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407AA6A4 (PiSwIrpInterfacePropertySet.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407B2A30 (SepRmGlobalSaclSetWrkr.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407B7150 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B8AD8 (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407BA2C0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x1407BCF40 (NtFlushInstallUILanguage.c)
 *     FsRtlCopyWrite @ 0x1408877A0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1408881C0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x140889FD8 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14088A170 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x14088DDA4 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x14088E690 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x140890D50 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140893018 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14089B418 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089C7A8 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14089C9C8 (PnpNotifyHwProfileChange.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14089DD90 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiSwIrpGetLifetime @ 0x1408AB970 (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AD490 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ADFF8 (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x1408AFE78 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1408B6054 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x1408B6190 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogAcquireContextLock @ 0x1408EB9A0 (PopDripsWatchdogAcquireContextLock.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408EBE20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408EC040 (PopDripsWatchdogNotifySessionStart.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408EC144 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408EC2B4 (PopDripsWatchdogStopWatchdog.c)
 *     TtmpStopCallout @ 0x1408FA048 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1408FAA20 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408FAC70 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408FB11C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408FB284 (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1408FC218 (TtmpAcquireSessionById.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1408FC6D8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1408FCBAC (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1408FCC50 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1408FCFA0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FD554 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x140901F7C (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409021C0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140902330 (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x140902500 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x140905A70 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14090616C (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140912640 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x140919438 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14091982C (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x1409200E0 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409201DC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x14092038C (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1409205E0 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x140947C90 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x1409564E0 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x14096ADD0 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x14097104C (_PnpCtxCloseMachine.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 *     PipResetDevices @ 0x140A51EC8 (PipResetDevices.c)
 *     MiUnlockBootPageSections @ 0x140A52858 (MiUnlockBootPageSections.c)
 *     MiInitializeKernelCfg @ 0x140A541DC (MiInitializeKernelCfg.c)
 *     IopInitCrashDumpRegCallback @ 0x140A62D10 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x14020A8F0 (ExpTryAcquireResourceExclusive.c)
 *     ExpWaitForResource @ 0x14020E440 (ExpWaitForResource.c)
 *     ExpBoostIoAfterAcquire @ 0x140279C0C (ExpBoostIoAfterAcquire.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x1403431A0 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140345D0C (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038BA34 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A58E0 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A5DAC (PerfLogExecutiveResourceWait.c)
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
