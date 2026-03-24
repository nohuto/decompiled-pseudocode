/*
 * XREFs of PoGetFrequencyBucket @ 0x1402C3748
 * Callers:
 *     KiAccumulateProcessorCycleStats @ 0x1403F3640 (KiAccumulateProcessorCycleStats.c)
 *     KiEndDebugAccumulation @ 0x14051DDB0 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x1402C397C (PpmPerfGetCurrentFrequency.c)
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
