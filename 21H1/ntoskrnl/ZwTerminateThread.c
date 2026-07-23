/*
 * XREFs of ZwTerminateThread @ 0x1403F2D90
 * Callers:
 *     KiParkUmsThread @ 0x140520420 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140582D70 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
