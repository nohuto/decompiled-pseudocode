/*
 * XREFs of PoGetFrequencyBucket @ 0x1403315CC
 * Callers:
 *     KiAccumulateProcessorCycleStats @ 0x1403F1D90 (KiAccumulateProcessorCycleStats.c)
 *     KiEndDebugAccumulation @ 0x14051C2D0 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14034082C (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  unsigned int CurrentFrequency; // r9d

  CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
  if ( CurrentFrequency < 0x4B )
    return CurrentFrequency / 0x19;
  else
    return 3;
}
