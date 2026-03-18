/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x140221C70
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x140297520 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402E3978 (SepDesktopAppxSubProcessToken.c)
 *     SepQueueWorkItem @ 0x14031BC30 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x140320260 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14032F8D0 (SeTokenSetNoChildProcessRestricted.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140344550 (FsRtlAcquireFileForModWriteEx.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140364AE0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x140371B54 (MiProcessLoaderEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037F3F0 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1403BF5B0 (IoConfigureCrashDump.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1403F72CC (SeTokenSetRedirectionTrustPolicy.c)
 *     CcUnpinRepinnedBcb @ 0x1404E8BD0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405010CC (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14050E240 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14050EAB8 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x140587120 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x140589184 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x140589EC8 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1405941B4 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140595B50 (SeSetSecurityAttributesTokenEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405B3990 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CCCDC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1405E23FC (PspSetEnergyTrackingStateJobTree.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     PspLockJobsAndProcessExclusive @ 0x14062C618 (PspLockJobsAndProcessExclusive.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14062DC8C (PspApplyWorkingSetLimitsToProcess.c)
 *     NtAdjustPrivilegesToken @ 0x1406308D0 (NtAdjustPrivilegesToken.c)
 *     PiPnpRtlBeginOperation @ 0x14063C8BC (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14064120C (PiPnpRtlEndOperation.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140648B00 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x140649A60 (PnpNotifyTargetDeviceChange.c)
 *     PfSnCheckActionsNeeded @ 0x14064C34C (PfSnCheckActionsNeeded.c)
 *     PiDrvDbLoadNode @ 0x140657654 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x1406577B8 (PiDrvDbUnloadNode.c)
 *     MmChangeImageProtection @ 0x140658F80 (MmChangeImageProtection.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspLockJobChain @ 0x1406637C0 (PspLockJobChain.c)
 *     PspLockJobConditionally @ 0x1406638E8 (PspLockJobConditionally.c)
 *     PspLockJobExclusive @ 0x140665CF4 (PspLockJobExclusive.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140680470 (FsRtlAcquireFileExclusiveCommon.c)
 *     CmpStopRMLog @ 0x1406A3D08 (CmpStopRMLog.c)
 *     NtAdjustGroupsToken @ 0x1406A87B0 (NtAdjustGroupsToken.c)
 *     SeSetSessionIdToken @ 0x1406A8CE8 (SeSetSessionIdToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1406AA030 (SepReferenceLogonSessionSilo.c)
 *     SeSetMandatoryPolicyToken @ 0x1406AA8C8 (SeSetMandatoryPolicyToken.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     MmLockPagableDataSection @ 0x1406B9550 (MmLockPagableDataSection.c)
 *     MiCancelPhase0Locking @ 0x1406B9644 (MiCancelPhase0Locking.c)
 *     NtGetMUIRegistryInfo @ 0x1406C1890 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406C46DC (SepCreateLogonSessionTrack.c)
 *     IoOpenDeviceRegistryKey @ 0x1406C81C0 (IoOpenDeviceRegistryKey.c)
 *     SepDeReferenceLogonSession @ 0x1406C8580 (SepDeReferenceLogonSession.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406CAC2C (_CmGetDeviceSoftwareKey.c)
 *     SepUpdateLogonSessionTrack @ 0x1406D08C4 (SepUpdateLogonSessionTrack.c)
 *     PspSetBackgroundJobTree @ 0x1406DC6E0 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406DED9C (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406E2EC0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406E56F4 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406E5790 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406F40D4 (PfSnPrefetchCacheEntryUpdate.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
 *     NtCreateTimer @ 0x1406F8AA0 (NtCreateTimer.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14070828C (FsRtlAcquireFileForCcFlushEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x140711600 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x140711668 (PspFreezeJobTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14071FAB4 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 *     PopAcquireAdaptiveLock @ 0x1407210F0 (PopAcquireAdaptiveLock.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140721440 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140721FEC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDmListRemoveObjectWorker @ 0x140722AB0 (PiDmListRemoveObjectWorker.c)
 *     IoGetDeviceInterfaceAlias @ 0x140727720 (IoGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiSwDeviceFree @ 0x14072FF5C (PiSwDeviceFree.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073143C (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1407346EC (PiPnpRtlSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x140737980 (PnpSetDevicePropertyData.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     PpCheckInDriverDatabase @ 0x14073B530 (PpCheckInDriverDatabase.c)
 *     PnpNotifyDeviceClassChange @ 0x14073B830 (PnpNotifyDeviceClassChange.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14073F2E0 (PiPnpRtlSetDeviceRegProperty.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1407409DC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140740B58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwProcessParentRemoveIrp @ 0x140741B48 (PiSwProcessParentRemoveIrp.c)
 *     PiSwStopDestroy @ 0x140741C2C (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x140741DE8 (PiSwProcessParentStartIrp.c)
 *     PnpChainDereferenceComplete @ 0x140742A20 (PnpChainDereferenceComplete.c)
 *     PpDeviceRegistration @ 0x14074311C (PpDeviceRegistration.c)
 *     IopDoDeferredSetInterfaceState @ 0x14074379C (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x140743940 (IoSetDeviceInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407448FC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x140744A78 (PiDmListAddObjectWorker.c)
 *     PiDmAddCacheReferenceForObject @ 0x140744C54 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     PiSwCompleteCreate @ 0x140746764 (PiSwCompleteCreate.c)
 *     PiSwLock @ 0x140747260 (PiSwLock.c)
 *     IopGetRootDevices @ 0x140747F2C (IopGetRootDevices.c)
 *     PiSwPdoPnPDispatch @ 0x140748500 (PiSwPdoPnPDispatch.c)
 *     MiRememberUnloadedDriver @ 0x140758C34 (MiRememberUnloadedDriver.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14075EA90 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x14075F508 (CmpTransWriteLog.c)
 *     CmpAccountForLogReservation @ 0x140763C40 (CmpAccountForLogReservation.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1407670DC (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140768440 (IoEnumerateRegisteredFiltersList.c)
 *     PnpDisableDeviceInterfaces @ 0x14076AC4C (PnpDisableDeviceInterfaces.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     PnpDelayedRemoveWorker @ 0x14076D540 (PnpDelayedRemoveWorker.c)
 *     IopBootLog @ 0x14076D764 (IopBootLog.c)
 *     PiSwIrpSetLifetime @ 0x14076D8F8 (PiSwIrpSetLifetime.c)
 *     PiSwIrpCleanup @ 0x14076F6FC (PiSwIrpCleanup.c)
 *     SepBlockAccessForLogonSession @ 0x1407755BC (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1407763DC (WmiAcquireSmbiosLockExclusive.c)
 *     SepDeleteLogonSessionTrack @ 0x1407766C0 (SepDeleteLogonSessionTrack.c)
 *     IoUnregisterFileSystem @ 0x140779330 (IoUnregisterFileSystem.c)
 *     CmpStartRMLog @ 0x140779704 (CmpStartRMLog.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077A0C8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoRegisterFileSystem @ 0x14077CAE0 (IoRegisterFileSystem.c)
 *     PiSwIrpPropertySet @ 0x1407867C4 (PiSwIrpPropertySet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     MmFreeBootDriverInitializationCode @ 0x140793EF8 (MmFreeBootDriverInitializationCode.c)
 *     MiWriteProtectSystemImages @ 0x1407970E4 (MiWriteProtectSystemImages.c)
 *     PpDevCfgProcessDevices @ 0x140798D9C (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x1407A4480 (SepRmCommandServerThread.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     IoInitializeCrashDump @ 0x1407B2AE4 (IoInitializeCrashDump.c)
 *     SeExchangePrimaryToken @ 0x1407B6FE4 (SeExchangePrimaryToken.c)
 *     PpReleaseBootDDB @ 0x1407B80E4 (PpReleaseBootDDB.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407B85E4 (PiSwIrpInterfacePropertySet.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407C0980 (SepRmGlobalSaclSetWrkr.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C5980 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407C7368 (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407C8B50 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x1407CB7D0 (NtFlushInstallUILanguage.c)
 *     FsRtlCopyWrite @ 0x14088D2F0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088DD10 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14088FB28 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14088FCC0 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x1408938F4 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140894150 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x140896840 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140898CC8 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x1408A0F48 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x1408A22D8 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x1408A24F8 (PnpNotifyHwProfileChange.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A38C0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiSwIrpGetLifetime @ 0x1408B14A0 (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B2FC0 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B3B28 (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x1408B59A8 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1408BBC74 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x1408BBDB0 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogAcquireContextLock @ 0x1408F15B0 (PopDripsWatchdogAcquireContextLock.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408F1A30 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408F1C50 (PopDripsWatchdogNotifySessionStart.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408F1D54 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408F1EC4 (PopDripsWatchdogStopWatchdog.c)
 *     TtmpStopCallout @ 0x1408FFC58 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x140900640 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140900890 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x140900D3C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140900EAC (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x140901E40 (TtmpAcquireSessionById.c)
 *     TtmpInitiateModernStandbyTransition @ 0x140902300 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1409027D4 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x140902880 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x140902BD0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140903184 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x140907BDC (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140907DDC (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140907F4C (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x140908110 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x14090B690 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14090BD8C (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140918180 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14091F0A8 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14091F4A4 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x140925F00 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140925FFC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409261AC (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140926400 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x14094DA50 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x14095C2A0 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x140970BA0 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x140976E1C (_PnpCtxCloseMachine.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1409ADED8 (IoShutdownSystem.c)
 *     PipResetDevices @ 0x140A52548 (PipResetDevices.c)
 *     MiUnlockBootPageSections @ 0x140A52ED8 (MiUnlockBootPageSections.c)
 *     MiInitializeKernelCfg @ 0x140A5485C (MiInitializeKernelCfg.c)
 *     IopInitCrashDumpRegCallback @ 0x140A6A0D0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ExpWaitForResource @ 0x140217F70 (ExpWaitForResource.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x140223870 (ExpTryAcquireResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x140314650 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x14031705C (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpBoostIoAfterAcquire @ 0x14035D250 (ExpBoostIoAfterAcquire.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038DEF4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A9380 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A984C (PerfLogExecutiveResourceWait.c)
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
      ExpWaitForResource(
        &Resource->SystemResourcesList,
        (__int64)v40,
        0x10224u,
        (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
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
