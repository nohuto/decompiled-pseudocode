/*
 * XREFs of _tlgKeywordOn @ 0x1C0002AFC
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000232C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C00027A0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0002B30 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000D040 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000D158 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterRequestComplete @ 0x1C000DA70 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00115E0 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0012D94 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001992C (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C002AC04 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C002D2B8 (RaidAdapterResetBus.c)
 *     StorpMarkDeviceFailed @ 0x1C003B738 (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003DBF4 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003DF38 (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C0047DE8 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00495B0 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C0050988 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0050DD4 (StorpCSExitTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0051CD4 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C00522CC (StorpLogRegisterAdapterPerfStates.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C0052488 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C00527A4 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0052C70 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C005313C (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0053610 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0053920 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0053C8C (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0053FD4 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0054414 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0054584 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C00547E0 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0054AFC (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0054FC8 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0055B3C (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0055EC4 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C00561E0 (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C00738F8 (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077E54 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidInitializeAdapter @ 0x1C0078078 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & qword_1C0068068) != 0 && (a2 & qword_1C0068070) == qword_1C0068070 )
    return 1;
  return v2;
}
