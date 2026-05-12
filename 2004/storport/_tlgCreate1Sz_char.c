/*
 * XREFs of _tlgCreate1Sz_char @ 0x1C0019900
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C00027A0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0002B30 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpMarkDeviceFailed @ 0x1C003B738 (StorpMarkDeviceFailed.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C0052488 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C00527A4 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0052C70 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C005313C (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0053610 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0053920 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0053C8C (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0053FD4 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C00547E0 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0054AFC (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0054FC8 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0055B3C (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0055EC4 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C00561E0 (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C00738F8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &unk_1C005B8F3;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
