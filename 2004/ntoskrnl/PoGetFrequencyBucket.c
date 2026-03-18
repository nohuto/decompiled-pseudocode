/*
 * XREFs of PoGetFrequencyBucket @ 0x1403F22CC
 * Callers:
 *     KiAccumulateProcessorCycleStats @ 0x1403EDA60 (KiAccumulateProcessorCycleStats.c)
 *     KiEndDebugAccumulation @ 0x140518900 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140351EC0 (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  unsigned int CurrentFrequency; // r9d

  CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0);
  if ( CurrentFrequency >= 0x4B )
    return 3;
  else
    return CurrentFrequency / 0x19;
}
