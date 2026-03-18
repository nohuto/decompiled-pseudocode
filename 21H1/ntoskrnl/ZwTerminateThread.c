/*
 * XREFs of ZwTerminateThread @ 0x1403F2D90
 * Callers:
 *     KiParkUmsThread @ 0x140520420 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140582D70 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTerminateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
