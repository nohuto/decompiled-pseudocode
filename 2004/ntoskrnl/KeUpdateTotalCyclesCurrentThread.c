/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x14050E058
 * Callers:
 *     KeEnableProfiling @ 0x1408B8AD4 (KeEnableProfiling.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1409044F0 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread((__int64)KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
