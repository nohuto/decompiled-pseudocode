/*
 * XREFs of KiStartDebugAccumulation @ 0x14051E46C
 * Callers:
 *     KeFreezeExecution @ 0x14051D6F0 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x14051DE60 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14022F8C0 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
