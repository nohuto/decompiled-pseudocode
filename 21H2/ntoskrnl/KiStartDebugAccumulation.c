/*
 * XREFs of KiStartDebugAccumulation @ 0x14029B8BC
 * Callers:
 *     KiFreezeTargetExecution @ 0x14029AF90 (KiFreezeTargetExecution.c)
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
