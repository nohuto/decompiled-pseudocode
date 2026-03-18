/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x1402481DC
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x1406C73D0 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x140961F3C (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
