/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1403568F0
 * Callers:
 *     SepQueueWorkItem @ 0x14023C470 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14023FE60 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14024FD40 (SeTokenSetNoChildProcessRestricted.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140276F3C (FsRtlAcquireFileForModWriteEx.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402F4D04 (SepDesktopAppxSubProcessToken.c)
 *     CcAcquireByteRangeForWrite @ 0x14031AC90 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140364EF0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x140371EB0 (MiProcessLoaderEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037F780 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1403C0230 (IoConfigureCrashDump.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1403F9084 (SeTokenSetRedirectionTrustPolicy.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA9A0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140502BCC (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14050FFB0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x140510828 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x14058ADC4 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14058BB08 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140595E1C (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405977B0 (SeSetSecurityAttributesTokenEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405B55C0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1405DA420 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1405DA488 (PspFreezeJobTree.c)
 *     CmpStopRMLog @ 0x1405E1088 (CmpStopRMLog.c)
 *     NtGetMUIRegistryInfo @ 0x1405FB840 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1405FFB2C (SepCreateLogonSessionTrack.c)
 *     IoOpenDeviceRegistryKey @ 0x140602CD0 (IoOpenDeviceRegistryKey.c)
 *     SepDeReferenceLogonSession @ 0x140603270 (SepDeReferenceLogonSession.c)
 *     PspSetQuotaLimits @ 0x140603BC4 (PspSetQuotaLimits.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406052CC (_CmGetDeviceSoftwareKey.c)
 *     NtAdjustGroupsToken @ 0x1406087B0 (NtAdjustGroupsToken.c)
 *     SepUpdateLogonSessionTrack @ 0x14060DD64 (SepUpdateLogonSessionTrack.c)
 *     SeSetMandatoryPolicyToken @ 0x140610854 (SeSetMandatoryPolicyToken.c)
 *     SeSetSessionIdToken @ 0x140619180 (SeSetSessionIdToken.c)
 *     PspSetBackgroundJobTree @ 0x14061B560 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x14061DD08 (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140621C40 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     IopGetDeviceInterfaces @ 0x14062F318 (IopGetDeviceInterfaces.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x14063540C (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406354A8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14063BFF4 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtCreateTimer @ 0x140641B80 (NtCreateTimer.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 *     PopAcquireAdaptiveLock @ 0x140671E84 (PopAcquireAdaptiveLock.c)
 *     PfSnCheckActionsNeeded @ 0x140679AEC (PfSnCheckActionsNeeded.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PspLockJobChain @ 0x14067FEA0 (PspLockJobChain.c)
 *     PspLockJobConditionally @ 0x14067FFC8 (PspLockJobConditionally.c)
 *     PspLockJobExclusive @ 0x1406823D4 (PspLockJobExclusive.c)
 *     PiDrvDbUnloadNode @ 0x140693F2C (PiDrvDbUnloadNode.c)
 *     PiDrvDbLoadNode @ 0x140694044 (PiDrvDbLoadNode.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     NtAdjustPrivilegesToken @ 0x1406977C0 (NtAdjustPrivilegesToken.c)
 *     MiCancelPhase0Locking @ 0x1406A7E8C (MiCancelPhase0Locking.c)
 *     MmLockPagableDataSection @ 0x1406A7FB0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A80B0 (MmChangeImageProtection.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406B38CC (PfSnPrefetchCacheEntryUpdate.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1406C52D4 (PspSetEnergyTrackingStateJobTree.c)
 *     SepReferenceLogonSessionSilo @ 0x1406CBF7C (SepReferenceLogonSessionSilo.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406F56C0 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobsAndProcessExclusive @ 0x1406F6C1C (PspLockJobsAndProcessExclusive.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1406FD420 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14071F020 (FsRtlAcquireFileExclusiveCommon.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140725EB0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B4C0 (IoGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x14072BB1C (PiCMDeleteDevice.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14072E2A8 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDmListRemoveObjectWorker @ 0x140730CE8 (PiDmListRemoveObjectWorker.c)
 *     PiSwDeviceFree @ 0x140734150 (PiSwDeviceFree.c)
 *     PiDmListAddObjectWorker @ 0x1407355B0 (PiDmListAddObjectWorker.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735BC4 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PnpDelayedRemoveWorker @ 0x140736080 (PnpDelayedRemoveWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x1407361DC (PnpDisableDeviceInterfaces.c)
 *     PnpChainDereferenceComplete @ 0x140736648 (PnpChainDereferenceComplete.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140737C9C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140737E18 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwStopDestroy @ 0x140738E04 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140738F40 (PiSwProcessParentRemoveIrp.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140739E5C (PiPnpRtlSetDeviceRegProperty.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D798 (PnpNotifyDeviceClassChange.c)
 *     PpCheckInDriverDatabase @ 0x14073DC80 (PpCheckInDriverDatabase.c)
 *     IopDoDeferredSetInterfaceState @ 0x14073DF70 (IopDoDeferredSetInterfaceState.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074594C (PiPnpRtlSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x140746D9C (PnpSetDevicePropertyData.c)
 *     PiSwLock @ 0x140747284 (PiSwLock.c)
 *     IopRegisterDeviceInterface @ 0x140748630 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 *     IoSetDeviceInterfaceState @ 0x140749220 (IoSetDeviceInterfaceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 *     PpDeviceRegistration @ 0x14074BF20 (PpDeviceRegistration.c)
 *     PiSwIrpCleanup @ 0x14074D048 (PiSwIrpCleanup.c)
 *     PiSwIrpSetLifetime @ 0x14074D18C (PiSwIrpSetLifetime.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 *     IopGetRootDevices @ 0x14074ECA8 (IopGetRootDevices.c)
 *     PiSwPdoPnPDispatch @ 0x14074F280 (PiSwPdoPnPDispatch.c)
 *     MiRememberUnloadedDriver @ 0x14075FCB4 (MiRememberUnloadedDriver.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407632E0 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x140763D58 (CmpTransWriteLog.c)
 *     CmpAccountForLogReservation @ 0x1407673F0 (CmpAccountForLogReservation.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076B42C (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14076CA80 (IoEnumerateRegisteredFiltersList.c)
 *     PiSwProcessParentStartIrp @ 0x14076DF48 (PiSwProcessParentStartIrp.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     IopBootLog @ 0x140771BE0 (IopBootLog.c)
 *     SepBlockAccessForLogonSession @ 0x14077972C (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x14077A54C (WmiAcquireSmbiosLockExclusive.c)
 *     SepDeleteLogonSessionTrack @ 0x14077A830 (SepDeleteLogonSessionTrack.c)
 *     IoUnregisterFileSystem @ 0x14077D2D0 (IoUnregisterFileSystem.c)
 *     CmpStartRMLog @ 0x14077D6A4 (CmpStartRMLog.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077E068 (PnpSetDeviceInterfacePropertyData.c)
 *     IoRegisterFileSystem @ 0x140780A80 (IoRegisterFileSystem.c)
 *     PiSwIrpPropertySet @ 0x14078A764 (PiSwIrpPropertySet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     MiWriteProtectSystemImages @ 0x1407A1804 (MiWriteProtectSystemImages.c)
 *     PpDevCfgProcessDevices @ 0x1407A34BC (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407B3CA8 (MmFreeBootDriverInitializationCode.c)
 *     IoInitializeCrashDump @ 0x1407B7C74 (IoInitializeCrashDump.c)
 *     SeExchangePrimaryToken @ 0x1407BC3D4 (SeExchangePrimaryToken.c)
 *     PpReleaseBootDDB @ 0x1407BD4D4 (PpReleaseBootDDB.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407BD9D4 (PiSwIrpInterfacePropertySet.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407C51D0 (SepRmGlobalSaclSetWrkr.c)
 *     IoReportRootDevice @ 0x1407C8180 (IoReportRootDevice.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9F60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407CB7C8 (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407CCF80 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x1407CFC00 (NtFlushInstallUILanguage.c)
 *     FsRtlCopyWrite @ 0x14088A9F0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B410 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14088D228 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14088D3C0 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140891024 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140891878 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x140893F70 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E678 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089FA08 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14089FC28 (PnpNotifyHwProfileChange.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A0FF0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiSwIrpGetLifetime @ 0x1408AEBD0 (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B06F0 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1258 (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x1408B30D8 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1408B92B4 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x1408B93F0 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogAcquireContextLock @ 0x1408EEF10 (PopDripsWatchdogAcquireContextLock.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408EF390 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408EF5B0 (PopDripsWatchdogNotifySessionStart.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408EF6B4 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408EF824 (PopDripsWatchdogStopWatchdog.c)
 *     TtmpStopCallout @ 0x1408FD568 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1408FDF50 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408FE1A0 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408FE64C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408FE7BC (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1408FF750 (TtmpAcquireSessionById.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1408FFC10 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1409000E4 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x140900190 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1409004E0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140900A94 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x1409054EC (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409056EC (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14090585C (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x140905A20 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x140908FA0 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14090969C (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140915A90 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14091C9C8 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14091CDC4 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x140923830 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14092392C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140923ADC (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140923D30 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x14094B3F0 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x14096E498 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x140974714 (_PnpCtxCloseMachine.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     PipResetDevices @ 0x140A54B50 (PipResetDevices.c)
 *     MiUnlockBootPageSections @ 0x140A554E0 (MiUnlockBootPageSections.c)
 *     MiInitializeKernelCfg @ 0x140A56E64 (MiInitializeKernelCfg.c)
 *     IopInitCrashDumpRegCallback @ 0x140A68640 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpBoostIoAfterAcquire @ 0x140204490 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140235590 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140237ED0 (ExpPrepareToWaitForResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x14034D120 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceExclusive @ 0x140358470 (ExpTryAcquireResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038E5B4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAFBC (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB488 (PerfLogExecutiveResourceWait.c)
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
      ExpPrepareToWaitForResourceExclusive(v8, (__int64)v6, (__int64)v40);
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
      ExpApplyPrewaitBoost();
      ExpWaitForResource(
        &Resource->SystemResourcesList,
        (__int64)v40,
        0x10224u,
        (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
      ExpBoostIoAfterAcquire((__int64)Resource, (__int64)v6, 0);
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
