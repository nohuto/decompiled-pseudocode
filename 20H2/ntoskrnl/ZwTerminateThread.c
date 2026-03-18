/*
 * XREFs of ZwTerminateThread @ 0x1403F8BD0
 * Callers:
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140586E00 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTerminateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
