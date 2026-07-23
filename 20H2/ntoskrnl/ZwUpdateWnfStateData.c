/*
 * XREFs of ZwUpdateWnfStateData @ 0x1403FBB50
 * Callers:
 *     PopThermalSxExit @ 0x140389BFC (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x1403A73CC (BapdWriteEtwEvents.c)
 *     FsRtlSendModernAppTermination @ 0x1403BFC60 (FsRtlSendModernAppTermination.c)
 *     HvlWnfUpdateStartupState @ 0x1403CF980 (HvlWnfUpdateStartupState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     PopFxClearDeviceConstraints @ 0x1405682F4 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14056AE74 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x14056DE5C (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058CBD0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PspChargeProcessWakeCounter @ 0x1405EE0B0 (PspChargeProcessWakeCounter.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14062F538 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventNotifyUserMode @ 0x14064921C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140649920 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140649C48 (PiUEventNotifyTargetDeviceChange.c)
 *     PspEnforceLimits @ 0x1406650BC (PspEnforceLimits.c)
 *     SPCallServerHandleQueryPolicy @ 0x140688AF0 (SPCallServerHandleQueryPolicy.c)
 *     PspJobNotificationWorker @ 0x1406A0750 (PspJobNotificationWorker.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PopSetPowerSettingValue @ 0x1406FA718 (PopSetPowerSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x14071E12C (PopDispatchNotificationsToList.c)
 *     PopEvaluateGlobalUserStatus @ 0x140720B34 (PopEvaluateGlobalUserStatus.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x140752898 (PiDcContainerRequiresConfiguration.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14076E830 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiUEventBroadcastEventWorker @ 0x14076FD20 (PiUEventBroadcastEventWorker.c)
 *     PopPolicyTimeChange @ 0x140776340 (PopPolicyTimeChange.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14077C2F0 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x14077D704 (PopUpdateConsoleDisplayState.c)
 *     PopPerfBoostPowerRequest @ 0x140787750 (PopPerfBoostPowerRequest.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     PopNetPublishWnfStateUpdate @ 0x1407C9228 (PopNetPublishWnfStateUpdate.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407CC784 (PopThermalHandlePreviousShutdown.c)
 *     PopEsUpdateSetting @ 0x1407CDB28 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x1407CF9A0 (PopEsPublishState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407CFDBC (PopSetupMixedRealitytNotification.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D0584 (PopUpdateBackgroundCoolingStatus.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140880E24 (CmFcpManagerPublishChangeNotifications.c)
 *     DbgkpStartSystemErrorHandler @ 0x14088A2B0 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x14088FB28 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A5530 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A55BC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1408A570C (PiUEventSendDeviceInstallNotification.c)
 *     PiNotifyCiDriverBlocked @ 0x1408A5764 (PiNotifyCiDriverBlocked.c)
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E8010 (PopFxUpdateVetoMaskWork.c)
 *     PopUpdateOverThrottledCount @ 0x1408EA764 (PopUpdateOverThrottledCount.c)
 *     PopSendWeakChargerNotification @ 0x1408F060C (PopSendWeakChargerNotification.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408F1374 (PopEvaluateInputSuppressionAction.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408F1958 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408F451C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408F4568 (PopNetEngageNetworkRefresh.c)
 *     PopPublishPowerButtonState @ 0x1408F49F8 (PopPublishPowerButtonState.c)
 *     PopPreSleepNotifyWorker @ 0x1408F7EE0 (PopPreSleepNotifyWorker.c)
 *     PopSleepstudySendWnfNotification @ 0x1408FCBE0 (PopSleepstudySendWnfNotification.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408FFCE8 (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409012D8 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14090BB64 (PspSendNoWakeChargeLimitNotification.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x14091C1C8 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x140A41C60 (PopNetInitialize.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     PopCheckShutdownMarker @ 0x140A45890 (PopCheckShutdownMarker.c)
 *     PpDevCfgInit @ 0x140A50A1C (PpDevCfgInit.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 *     PopInitVideoWnfState @ 0x140A761A4 (PopInitVideoWnfState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
