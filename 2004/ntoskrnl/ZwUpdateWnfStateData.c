/*
 * XREFs of ZwUpdateWnfStateData @ 0x1403F6F80
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x1403786F0 (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x140387A3C (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x1403A4FCC (BapdWriteEtwEvents.c)
 *     HvlWnfUpdateStartupState @ 0x1403CCCF0 (HvlWnfUpdateStartupState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     PopFxClearDeviceConstraints @ 0x140564914 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x140567444 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x14056A42C (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405891A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiUEventNotifyUserMode @ 0x140647C2C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140648330 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140648658 (PiUEventNotifyTargetDeviceChange.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PspEnforceLimits @ 0x14065775C (PspEnforceLimits.c)
 *     SPCallServerHandleQueryPolicy @ 0x14066E740 (SPCallServerHandleQueryPolicy.c)
 *     PspChargeProcessWakeCounter @ 0x140687480 (PspChargeProcessWakeCounter.c)
 *     PopSetPowerSettingValue @ 0x1406A7D78 (PopSetPowerSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x1406F0938 (PopDispatchNotificationsToList.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F64D4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspJobNotificationWorker @ 0x1406FE770 (PspJobNotificationWorker.c)
 *     PopEvaluateGlobalUserStatus @ 0x140712414 (PopEvaluateGlobalUserStatus.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x140743CB8 (PiDcContainerRequiresConfiguration.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1407601E0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiUEventBroadcastEventWorker @ 0x140761710 (PiUEventBroadcastEventWorker.c)
 *     PopPolicyTimeChange @ 0x140767310 (PopPolicyTimeChange.c)
 *     PopUpdateConsoleDisplayState @ 0x14076BFE8 (PopUpdateConsoleDisplayState.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14076D8C0 (PopBatteryCheckCompositeCapacity.c)
 *     PopPerfBoostPowerRequest @ 0x140779150 (PopPerfBoostPowerRequest.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     PopNetPublishWnfStateUpdate @ 0x1407BA998 (PopNetPublishWnfStateUpdate.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407BDEF4 (PopThermalHandlePreviousShutdown.c)
 *     PopEsUpdateSetting @ 0x1407BF298 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x1407C1110 (PopEsPublishState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407C15B8 (PopSetupMixedRealitytNotification.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407C1D84 (PopUpdateBackgroundCoolingStatus.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087B2B4 (CmFcpManagerPublishChangeNotifications.c)
 *     DbgkpStartSystemErrorHandler @ 0x140884760 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x140889FD8 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14089FA00 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14089FA8C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14089FBDC (PiUEventSendDeviceInstallNotification.c)
 *     PiNotifyCiDriverBlocked @ 0x14089FC34 (PiNotifyCiDriverBlocked.c)
 *     MiAddPhysicalMemory @ 0x1408C1890 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C298C (MiRemovePhysicalMemory.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E21D0 (PopFxUpdateVetoMaskWork.c)
 *     PopUpdateOverThrottledCount @ 0x1408E4B54 (PopUpdateOverThrottledCount.c)
 *     PopSendWeakChargerNotification @ 0x1408EA9FC (PopSendWeakChargerNotification.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408EB764 (PopEvaluateInputSuppressionAction.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408EBD48 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408EE90C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408EE958 (PopNetEngageNetworkRefresh.c)
 *     PopPublishPowerButtonState @ 0x1408EEDE8 (PopPublishPowerButtonState.c)
 *     PopPreSleepNotifyWorker @ 0x1408F22D0 (PopPreSleepNotifyWorker.c)
 *     PopSleepstudySendWnfNotification @ 0x1408F6FD0 (PopSleepstudySendWnfNotification.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408FA0D8 (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FB6B0 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140905F44 (PspSendNoWakeChargeLimitNotification.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140916598 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x140A3BBDC (PopNetInitialize.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     PopCheckShutdownMarker @ 0x140A3F5F0 (PopCheckShutdownMarker.c)
 *     PpDevCfgInit @ 0x140A5039C (PpDevCfgInit.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 *     PopInitVideoWnfState @ 0x140A6FC84 (PopInitVideoWnfState.c)
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
