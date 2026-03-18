/*
 * XREFs of RtlWriteAcquireTickLock @ 0x140240C34
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14020233C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020245C (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x1402409F8 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x1403949A8 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403ACB0C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x1405174AC (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140990BE0 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x1409994A0 (KiCreateCpuSetForProcessor.c)
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
