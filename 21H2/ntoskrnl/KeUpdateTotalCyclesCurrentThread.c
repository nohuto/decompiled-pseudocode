/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140513708
 * Callers:
 *     KeEnableProfiling @ 0x1408BC13C (KeEnableProfiling.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140907A20 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread((__int64)KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
