/*
 * XREFs of PoGetFrequencyBucket @ 0x140342694
 * Callers:
 *     KiAccumulateProcessorCycleStats @ 0x14029B7B0 (KiAccumulateProcessorCycleStats.c)
 *     KiChooseTargetProcessor @ 0x1403419B0 (KiChooseTargetProcessor.c)
 *     KiSelectIdleProcessor @ 0x140574678 (KiSelectIdleProcessor.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x1403426C8 (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentFrequency; // edx

  CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL, a3, a4);
  if ( CurrentFrequency < 0x4B )
    return CurrentFrequency / 0x19;
  else
    return 3;
}
