/*
 * XREFs of PoGetFrequencyBucket @ 0x1403F0F04
 * Callers:
 *     KiAccumulateProcessorCycleStats @ 0x1403EC9A0 (KiAccumulateProcessorCycleStats.c)
 *     KiEndDebugAccumulation @ 0x1405182B0 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140314070 (PpmPerfGetCurrentFrequency.c)
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
