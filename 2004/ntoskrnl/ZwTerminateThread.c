/*
 * XREFs of ZwTerminateThread @ 0x1403F4020
 * Callers:
 *     KiParkUmsThread @ 0x140520A70 (KiParkUmsThread.c)
 *     RtlAssert @ 0x1405834A0 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408BA400 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTerminateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
