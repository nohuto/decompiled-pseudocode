/*
 * XREFs of _tlgCreate1Sz_char @ 0x1C0017A90
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C00026B0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0002A40 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpMarkDeviceFailed @ 0x1C003B168 (StorpMarkDeviceFailed.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C0051D78 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C0052094 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0052560 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0052A2C (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0052F00 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0053210 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C005357C (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00538C4 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C00540D0 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C00543EC (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00548B8 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportLogError @ 0x1C005542C (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C00557B4 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C0055AD0 (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C00735AC (RaUnitStartDeviceIrp.c)
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
    a2 = &unk_1C005B793;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
