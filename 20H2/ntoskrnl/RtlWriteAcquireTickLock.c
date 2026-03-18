/*
 * XREFs of RtlWriteAcquireTickLock @ 0x140266A84
 * Callers:
 *     KiUpdateTimeAssist @ 0x140266848 (KiUpdateTimeAssist.c)
 *     KeSetSystemAllowedCpuSets @ 0x1402F6F20 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x140397A38 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B50FC (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x14051B4CC (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140997B90 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x1409A060C (KiCreateCpuSetForProcessor.c)
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
