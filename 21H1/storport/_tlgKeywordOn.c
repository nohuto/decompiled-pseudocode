/*
 * XREFs of _tlgKeywordOn @ 0x1C0002A0C
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000223C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C00026B0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0002A40 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000CA50 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000CB68 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterRequestComplete @ 0x1C000D480 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C000F820 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0010F24 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0017ABC (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C002A664 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C002CD08 (RaidAdapterResetBus.c)
 *     StorpMarkDeviceFailed @ 0x1C003B168 (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003D624 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003D968 (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C00476D8 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048EA0 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C0050278 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C00506C4 (StorpCSExitTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C00515C4 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C0051BBC (StorpLogRegisterAdapterPerfStates.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C0051D78 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C0052094 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0052560 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0052A2C (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0052F00 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0053210 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C005357C (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00538C4 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0053D04 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0053E74 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C00540D0 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C00543EC (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00548B8 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportLogError @ 0x1C005542C (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C00557B4 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C0055AD0 (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C00735AC (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077F30 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidInitializeAdapter @ 0x1C0078154 (RaidInitializeAdapter.c)
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
