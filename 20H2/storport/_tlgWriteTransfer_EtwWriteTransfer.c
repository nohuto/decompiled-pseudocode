/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001A58C
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C000208C (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0002108 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000DC7C (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C000E1D0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000E560 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000E678 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterRequestComplete @ 0x1C000EA30 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C0012B2C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00142F4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001A410 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C002BA58 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C002E120 (RaidAdapterResetBus.c)
 *     StorpMarkDeviceFailed @ 0x1C003C5F8 (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003EB14 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003EE58 (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C0048BF8 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A3C0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitResetTarget @ 0x1C004B168 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004B420 (RaidUnitResetUnit.c)
 *     StorpCSEntryTelemetry @ 0x1C0051840 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0051C94 (StorpCSExitTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052B98 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C0053190 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C005334C (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C0053668 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0053B34 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0054000 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C00544D4 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C00547E4 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0054B50 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0054E98 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C00552D8 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0055448 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C00556A4 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C00559C0 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0055E8C (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0056A00 (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0056D88 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C00570A4 (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C00747FC (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C007934C (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidInitializeAdapter @ 0x1C0079570 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = (unsigned __int64)EventInformation;
  UserData->Size = *(unsigned __int16 *)EventInformation;
  UserData[1].Ptr = (unsigned __int64)(a2 + 11);
  UserData->Reserved = 2;
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, UserDataCount, UserData);
}
