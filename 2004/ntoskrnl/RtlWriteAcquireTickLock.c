/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1402F3F34
 * Callers:
 *     KiUpdateTimeAssist @ 0x1402F3CF8 (KiUpdateTimeAssist.c)
 *     KeSetSystemAllowedCpuSets @ 0x14032B394 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14032B4B4 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x140395578 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B278C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x140517AFC (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140991B20 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x14099A500 (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
