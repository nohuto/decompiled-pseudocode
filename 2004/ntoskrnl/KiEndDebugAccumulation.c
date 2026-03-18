/*
 * XREFs of KiEndDebugAccumulation @ 0x140518900
 * Callers:
 *     KeThawExecution @ 0x140518730 (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1405189B0 (KiFreezeTargetExecution.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x1403F22CC (PoGetFrequencyBucket.c)
 *     KiBeginCounterAccumulation @ 0x140516900 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r11
  unsigned int FrequencyBucket; // eax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v2 = *(_QWORD *)(a1 + 8);
    v3 = __rdtsc();
    v4 = *(_QWORD *)(a1 + 32448);
    v5 = v3 - v4;
    *(_QWORD *)(a1 + 32568) += v5;
    if ( (*(_BYTE *)(v2 + 2) & 0x20) != 0 )
    {
      FrequencyBucket = PoGetFrequencyBucket(a1);
      *(_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 33208) + 2LL * FrequencyBucket) + 32576) += v5;
      v4 = *(_QWORD *)(a1 + 32448);
      v2 = *(_QWORD *)(a1 + 8);
    }
    *(_QWORD *)(a1 + 32448) = v5 + v4;
    if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v2, 0);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
