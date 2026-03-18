/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x14050DA08
 * Callers:
 *     KeEnableProfiling @ 0x1408B77B4 (KeEnableProfiling.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140903210 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140332B00 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread((__int64)KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
