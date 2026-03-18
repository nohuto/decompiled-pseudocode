/*
 * XREFs of RtlBeginReadTickLock @ 0x14030BEE0
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1402FF8D0 (RtlGetMultiTimePrecise.c)
 *     KiComputeThreadAffinity @ 0x14030BE20 (KiComputeThreadAffinity.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140517100 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140517C78 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x1407B4598 (KeQueryCpuSetInformation.c)
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
