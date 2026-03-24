/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x1405134C8
 * Callers:
 *     KeEnableProfiling @ 0x1408BBFDC (KeEnableProfiling.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1409078C0 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14022F8C0 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread((__int64)KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
