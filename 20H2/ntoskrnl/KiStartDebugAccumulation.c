/*
 * XREFs of KiStartDebugAccumulation @ 0x14051C98C
 * Callers:
 *     KeFreezeExecution @ 0x14051BC10 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x14051C380 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402DC410 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
