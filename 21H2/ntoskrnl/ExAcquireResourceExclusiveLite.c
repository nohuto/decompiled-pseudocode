/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x14034BBA0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1402504F4 (SepDesktopAppxSubProcessToken.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1402559CC (FsRtlAcquireFileForModWriteEx.c)
 *     SepQueueWorkItem @ 0x1402BDE30 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x1402C19C0 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1402D1920 (SeTokenSetNoChildProcessRestricted.c)
 *     CcAcquireByteRangeForWrite @ 0x14030FF40 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x14031F630 (CcPinFileData.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140364D40 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x140372360 (MiProcessLoaderEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037FC30 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1403BFE04 (IoConfigureCrashDump.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1403F9000 (SeTokenSetRedirectionTrustPolicy.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA760 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140502C4C (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14050FD70 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1405105E8 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x140588B30 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x14058AB94 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14058B8D8 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140595BEC (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140597580 (SeSetSecurityAttributesTokenEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405B5390 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     NtAdjustGroupsToken @ 0x1405DA5F0 (NtAdjustGroupsToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1405DC7FC (SepReferenceLogonSessionSilo.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605A6C (PspApplyWorkingSetLimitsToProcess.c)
 *     NtAdjustPrivilegesToken @ 0x140607D30 (NtAdjustPrivilegesToken.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PspLockJobChain @ 0x140616240 (PspLockJobChain.c)
 *     PspLockJobConditionally @ 0x140616368 (PspLockJobConditionally.c)
 *     PspLockJobExclusive @ 0x140618774 (PspLockJobExclusive.c)
 *     PiDrvDbUnloadNode @ 0x140629E58 (PiDrvDbUnloadNode.c)
 *     PiDrvDbLoadNode @ 0x140629F74 (PiDrvDbLoadNode.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140634680 (PiPnpRtlBeginOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140639C1C (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x140639C54 (PpDevNodeLockTree.c)
 *     IopGetDeviceInterfaces @ 0x14063A508 (IopGetDeviceInterfaces.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406405FC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140640698 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140647204 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtCreateTimer @ 0x14064CD60 (NtCreateTimer.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 *     SeSetMandatoryPolicyToken @ 0x140676460 (SeSetMandatoryPolicyToken.c)
 *     NtCreateLowBoxToken @ 0x140676580 (NtCreateLowBoxToken.c)
 *     PopAcquireAdaptiveLock @ 0x14067E094 (PopAcquireAdaptiveLock.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14067F620 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x14067F980 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x14067F9E8 (PspFreezeJobTree.c)
 *     NtGetMUIRegistryInfo @ 0x14069C770 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406A07EC (SepCreateLogonSessionTrack.c)
 *     IoOpenDeviceRegistryKey @ 0x1406A50A0 (IoOpenDeviceRegistryKey.c)
 *     SepDeReferenceLogonSession @ 0x1406A5640 (SepDeReferenceLogonSession.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406A784C (_CmGetDeviceSoftwareKey.c)
 *     SepUpdateLogonSessionTrack @ 0x1406AF4C4 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x1406BA010 (SeSetSessionIdToken.c)
 *     CmpStopRMLog @ 0x1406BB6A8 (CmpStopRMLog.c)
 *     PspSetBackgroundJobTree @ 0x1406BC3F0 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406BEC14 (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406C2F90 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PfSnCheckActionsNeeded @ 0x1406CB1FC (PfSnCheckActionsNeeded.c)
 *     MiCancelPhase0Locking @ 0x1406D0BAC (MiCancelPhase0Locking.c)
 *     MmLockPagableDataSection @ 0x1406D0CD0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406D0DD0 (MmChangeImageProtection.c)
 *     ExAcquireTimeRefreshLock @ 0x1406DBD14 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406DC5EC (PfSnPrefetchCacheEntryUpdate.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1406E6038 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406E6FA0 (PnpNotifyTargetDeviceChange.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140707C40 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x140716C84 (PspSetEnergyTrackingStateJobTree.c)
 *     PspLockJobsAndProcessExclusive @ 0x14072076C (PspLockJobsAndProcessExclusive.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140725CE0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B010 (IoGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x14072B66C (PiCMDeleteDevice.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14072DDF8 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDmListRemoveObjectWorker @ 0x140730B1C (PiDmListRemoveObjectWorker.c)
 *     PiSwDeviceFree @ 0x140733F90 (PiSwDeviceFree.c)
 *     PiDmListAddObjectWorker @ 0x1407353F0 (PiDmListAddObjectWorker.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735A04 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PnpDelayedRemoveWorker @ 0x140735EC0 (PnpDelayedRemoveWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x14073601C (PnpDisableDeviceInterfaces.c)
 *     PnpChainDereferenceComplete @ 0x140736488 (PnpChainDereferenceComplete.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140737ADC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140737C58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwStopDestroy @ 0x140738C44 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140738D80 (PiSwProcessParentRemoveIrp.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140739C9C (PiPnpRtlSetDeviceRegProperty.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D5D8 (PnpNotifyDeviceClassChange.c)
 *     PpCheckInDriverDatabase @ 0x14073DAC0 (PpCheckInDriverDatabase.c)
 *     IopDoDeferredSetInterfaceState @ 0x14073DDB0 (IopDoDeferredSetInterfaceState.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074578C (PiPnpRtlSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x140746BDC (PnpSetDevicePropertyData.c)
 *     PiSwLock @ 0x1407470C4 (PiSwLock.c)
 *     IopRegisterDeviceInterface @ 0x140748470 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407488F8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407489A8 (PiDmAddCacheReferenceForObject.c)
 *     IoSetDeviceInterfaceState @ 0x140749060 (IoSetDeviceInterfaceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PpDeviceRegistration @ 0x14074BD60 (PpDeviceRegistration.c)
 *     PiSwIrpCleanup @ 0x14074CE88 (PiSwIrpCleanup.c)
 *     PiSwIrpSetLifetime @ 0x14074CFCC (PiSwIrpSetLifetime.c)
 *     PiSwCompleteCreate @ 0x14074D690 (PiSwCompleteCreate.c)
 *     IopGetRootDevices @ 0x14074EAE8 (IopGetRootDevices.c)
 *     PiSwPdoPnPDispatch @ 0x14074F0C0 (PiSwPdoPnPDispatch.c)
 *     MiRememberUnloadedDriver @ 0x14075FAF4 (MiRememberUnloadedDriver.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140763120 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x140763B98 (CmpTransWriteLog.c)
 *     CmpAccountForLogReservation @ 0x140767230 (CmpAccountForLogReservation.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076B26C (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14076C8C0 (IoEnumerateRegisteredFiltersList.c)
 *     PiSwProcessParentStartIrp @ 0x14076DD88 (PiSwProcessParentStartIrp.c)
 *     CmpCleanupTransactionState @ 0x140770484 (CmpCleanupTransactionState.c)
 *     IopBootLog @ 0x140771A20 (IopBootLog.c)
 *     SepBlockAccessForLogonSession @ 0x14077956C (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x14077A38C (WmiAcquireSmbiosLockExclusive.c)
 *     SepDeleteLogonSessionTrack @ 0x14077A670 (SepDeleteLogonSessionTrack.c)
 *     IoUnregisterFileSystem @ 0x14077D110 (IoUnregisterFileSystem.c)
 *     CmpStartRMLog @ 0x14077D4E4 (CmpStartRMLog.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077DEA8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoRegisterFileSystem @ 0x1407808C0 (IoRegisterFileSystem.c)
 *     PiSwIrpPropertySet @ 0x14078A5A4 (PiSwIrpPropertySet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     MiWriteProtectSystemImages @ 0x1407A1604 (MiWriteProtectSystemImages.c)
 *     PpDevCfgProcessDevices @ 0x1407A32BC (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x1407AD230 (SepRmCommandServerThread.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407B3B08 (MmFreeBootDriverInitializationCode.c)
 *     IoInitializeCrashDump @ 0x1407B7754 (IoInitializeCrashDump.c)
 *     SeExchangePrimaryToken @ 0x1407BBC44 (SeExchangePrimaryToken.c)
 *     PpReleaseBootDDB @ 0x1407BCD44 (PpReleaseBootDDB.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407BD244 (PiSwIrpInterfacePropertySet.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407C4CB0 (SepRmGlobalSaclSetWrkr.c)
 *     IoReportRootDevice @ 0x1407C7E60 (IoReportRootDevice.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9C40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407CB658 (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407CCE10 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x1407CFA90 (NtFlushInstallUILanguage.c)
 *     FsRtlCopyWrite @ 0x14088A890 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B2B0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14088D0C8 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14088D260 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140890EC4 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140891718 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x140893E10 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140896298 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E518 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089F8A8 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14089FAC8 (PnpNotifyHwProfileChange.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A0E90 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiSwIrpGetLifetime @ 0x1408AEA70 (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B0590 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B10F8 (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x1408B2F78 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1408B9154 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x1408B9290 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogAcquireContextLock @ 0x1408EEDB0 (PopDripsWatchdogAcquireContextLock.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408EF230 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408EF450 (PopDripsWatchdogNotifySessionStart.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408EF554 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408EF6C4 (PopDripsWatchdogStopWatchdog.c)
 *     TtmpStopCallout @ 0x1408FD408 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1408FDDF0 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408FE040 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408FE4EC (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408FE65C (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1408FF5F0 (TtmpAcquireSessionById.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1408FFAB0 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1408FFF84 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x140900030 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x140900380 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140900934 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x14090538C (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x14090558C (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409056FC (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x1409058C0 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x140908E40 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14090953C (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140915930 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14091C868 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14091CC64 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x1409236D0 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409237CC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x14092397C (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140923BD0 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x14094B220 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x140959B20 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x14096E2B8 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x140974534 (_PnpCtxCloseMachine.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1409AADD8 (IoShutdownSystem.c)
 *     PipResetDevices @ 0x140A53B50 (PipResetDevices.c)
 *     MiUnlockBootPageSections @ 0x140A544E0 (MiUnlockBootPageSections.c)
 *     MiInitializeKernelCfg @ 0x140A55E64 (MiInitializeKernelCfg.c)
 *     IopInitCrashDumpRegCallback @ 0x140A67640 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpBoostIoAfterAcquire @ 0x1402872F0 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x1402B73B0 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x1402B9CC0 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpWaitForResource @ 0x1403423D0 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceExclusive @ 0x14034D720 (ExpTryAcquireResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038E464 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAD8C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB258 (PerfLogExecutiveResourceWait.c)
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
