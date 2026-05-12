/*
 * XREFs of _tlgCreate1Sz_char @ 0x1C001A3E4
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C000208C (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000DC7C (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C000E1D0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpMarkDeviceFailed @ 0x1C003C5F8 (StorpMarkDeviceFailed.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C005334C (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C0053668 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0053B34 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0054000 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C00544D4 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C00547E4 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0054B50 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0054E98 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C00556A4 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C00559C0 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0055E8C (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0056A00 (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0056D88 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C00570A4 (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C00747FC (RaUnitStartDeviceIrp.c)
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
    a2 = &unk_1C005D123;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
