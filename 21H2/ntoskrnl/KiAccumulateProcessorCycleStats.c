/*
 * XREFs of KiAccumulateProcessorCycleStats @ 0x1403F3640
 * Callers:
 *     <none>
 * Callees:
 *     PoGetFrequencyBucket @ 0x140241CC8 (PoGetFrequencyBucket.c)
 */

__int64 __fastcall KiAccumulateProcessorCycleStats(__int64 a1)
{
  unsigned int FrequencyBucket; // eax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // r11

  FrequencyBucket = PoGetFrequencyBucket(a1);
  v3 = *(unsigned __int8 *)(a1 + 33208);
  v4 = *(_QWORD *)(a1 + 8 * (v3 + 2LL * FrequencyBucket) + 32576);
  result = v3 + 2LL * FrequencyBucket;
  *(_QWORD *)(a1 + 8 * result + 32576) = v6 + v4;
  return result;
}
