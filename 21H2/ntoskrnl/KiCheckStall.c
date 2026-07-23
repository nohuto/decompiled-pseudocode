/*
 * XREFs of KiCheckStall @ 0x14051DF60
 * Callers:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     KeStallWhileFrozen @ 0x14051DD20 (KeStallWhileFrozen.c)
 *     KeSwitchFrozenProcessor @ 0x14051DD40 (KeSwitchFrozenProcessor.c)
 *     KiFreezeTargetExecution @ 0x14051E0A0 (KiFreezeTargetExecution.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KiCheckStall(__int64 a1, char a2)
{
  __int64 v3; // rdi
  LARGE_INTEGER v5; // r8
  __int64 result; // rax
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  v7.QuadPart = 0LL;
  v3 = KiFreezeStallOwner;
  if ( a1 == KiFreezeStallOwner )
  {
    v5 = KeQueryPerformanceCounter(&v7);
    if ( (unsigned __int64)(1000 * (v5.QuadPart - KiLastStallTick)) / v7.QuadPart > 0x1F4 )
      KiLastStallTick = v5.QuadPart;
  }
  result = KiDebuggerOwner;
  if ( a2 && v3 && v3 != a1 && KiDebuggerOwner && KiDebuggerOwner != a1 )
    _mm_pause();
  return result;
}
