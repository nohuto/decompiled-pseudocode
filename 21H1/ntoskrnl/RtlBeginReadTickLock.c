/*
 * XREFs of RtlBeginReadTickLock @ 0x140337704
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1402DE9B0 (RtlGetMultiTimePrecise.c)
 *     KiComputeThreadAffinity @ 0x140337644 (KiComputeThreadAffinity.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140516AB0 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140517628 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x1407B1428 (KeQueryCpuSetInformation.c)
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
