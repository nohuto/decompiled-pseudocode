/*
 * XREFs of ZwUpdateWnfStateData @ 0x1403F5CF0
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x1403778E0 (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x140386ACC (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x140397B08 (BapdWriteEtwEvents.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     PopFxClearDeviceConstraints @ 0x1405642C4 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x140566DF4 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x140569DDC (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x140588AB0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1405D5DEC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     SPCallServerHandleQueryPolicy @ 0x1405F66A0 (SPCallServerHandleQueryPolicy.c)
 *     PspChargeProcessWakeCounter @ 0x14060F300 (PspChargeProcessWakeCounter.c)
 *     PspEnforceLimits @ 0x140615940 (PspEnforceLimits.c)
 *     PiUEventNotifyUserMode @ 0x14068421C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140684930 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140684CE4 (PiUEventNotifyClientPendingEvent.c)
 *     PopDispatchNotificationsToList @ 0x1406CF638 (PopDispatchNotificationsToList.c)
 *     PspJobNotificationWorker @ 0x1406DB700 (PspJobNotificationWorker.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406FEC90 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopSetPowerSettingValue @ 0x14070F018 (PopSetPowerSettingValue.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x140742138 (PiDcContainerRequiresConfiguration.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14075DEB0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiUEventBroadcastEventWorker @ 0x14075F2D0 (PiUEventBroadcastEventWorker.c)
 *     PopPolicyTimeChange @ 0x140765950 (PopPolicyTimeChange.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14076B120 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x14076D0B4 (PopUpdateConsoleDisplayState.c)
 *     PopPerfBoostPowerRequest @ 0x140776D40 (PopPerfBoostPowerRequest.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     PopNetPublishWnfStateUpdate @ 0x1407B7828 (PopNetPublishWnfStateUpdate.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407BAD84 (PopThermalHandlePreviousShutdown.c)
 *     PopEsUpdateSetting @ 0x1407BC128 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x1407BDEF0 (PopEsPublishState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407BE30C (PopSetupMixedRealitytNotification.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407BEA94 (PopUpdateBackgroundCoolingStatus.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140879FC4 (CmFcpManagerPublishChangeNotifications.c)
 *     DbgkpStartSystemErrorHandler @ 0x140883440 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x140888CB8 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14089E6E0 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14089E76C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14089E8BC (PiUEventSendDeviceInstallNotification.c)
 *     PiNotifyCiDriverBlocked @ 0x14089E914 (PiNotifyCiDriverBlocked.c)
 *     MiAddPhysicalMemory @ 0x1408C0540 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E0F50 (PopFxUpdateVetoMaskWork.c)
 *     PopUpdateOverThrottledCount @ 0x1408E38D4 (PopUpdateOverThrottledCount.c)
 *     PopSendWeakChargerNotification @ 0x1408E977C (PopSendWeakChargerNotification.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408EA4E4 (PopEvaluateInputSuppressionAction.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408EAAC8 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408ED61C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408ED668 (PopNetEngageNetworkRefresh.c)
 *     PopPublishPowerButtonState @ 0x1408EDAF8 (PopPublishPowerButtonState.c)
 *     PopPreSleepNotifyWorker @ 0x1408F0FE0 (PopPreSleepNotifyWorker.c)
 *     PopSleepstudySendWnfNotification @ 0x1408F5CE0 (PopSleepstudySendWnfNotification.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408F8DE8 (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FA3C0 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140904C64 (PspSendNoWakeChargeLimitNotification.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140915328 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 *     PopCheckShutdownMarker @ 0x140A36264 (PopCheckShutdownMarker.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x140A3BD6C (PopNetInitialize.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 *     PpDevCfgInit @ 0x140A4A920 (PpDevCfgInit.c)
 *     PopInitVideoWnfState @ 0x140A6F260 (PopInitVideoWnfState.c)
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
