/*
 * XREFs of KiEndDebugAccumulation @ 0x14029B270
 * Callers:
 *     KiFreezeTargetExecution @ 0x14029AF90 (KiFreezeTargetExecution.c)
 *     KeThawExecution @ 0x1402DA4C0 (KeThawExecution.c)
 * Callees:
 *     KiAccumulateProcessorCycleStats @ 0x14029B7B0 (KiAccumulateProcessorCycleStats.c)
 *     KiBeginCounterAccumulation @ 0x140571770 (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KiEndDebugAccumulation(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    result = __rdtsc();
    v3 = result;
    *(_QWORD *)(a1 + 33400) += result - *(_QWORD *)(a1 + 33152);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 0x20) != 0 )
      result = KiAccumulateProcessorCycleStats(a1);
    *(_QWORD *)(a1 + 33152) = v3;
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
      result = KiBeginCounterAccumulation(v4, 0LL);
    *(_BYTE *)(a1 + 32) = 0;
  }
  return result;
}
