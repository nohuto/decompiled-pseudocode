/*
 * XREFs of KiAccumulateProcessorCycleStats @ 0x14029B7B0
 * Callers:
 *     KiEndDebugAccumulation @ 0x14029B270 (KiEndDebugAccumulation.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140342694 (PoGetFrequencyBucket.c)
 */

__int64 __fastcall KiAccumulateProcessorCycleStats(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int FrequencyBucket; // eax
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int8 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  FrequencyBucket = PoGetFrequencyBucket(a1, a2, a3, a1);
  if ( KeHeteroSystem )
    v6 = *(_BYTE *)(v4 + 34056);
  else
    v6 = *(_BYTE *)(v4 + 34059);
  v7 = FrequencyBucket;
  result = v6;
  *(_QWORD *)(v4 + 8 * (v6 + 2 * v7) + 33408) += v5;
  return result;
}
