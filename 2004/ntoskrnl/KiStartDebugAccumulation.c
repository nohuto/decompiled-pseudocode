/*
 * XREFs of KiStartDebugAccumulation @ 0x140518FBC
 * Callers:
 *     KeFreezeExecution @ 0x140518240 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1405189B0 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
