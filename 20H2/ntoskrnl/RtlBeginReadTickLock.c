/*
 * XREFs of RtlBeginReadTickLock @ 0x14033D458
 * Callers:
 *     KiComputeThreadAffinity @ 0x14033D398 (KiComputeThreadAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x140360700 (RtlGetMultiTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x14051AAD0 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x14051B648 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x1407C2DC8 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    _mm_pause();
  }
  return result;
}
