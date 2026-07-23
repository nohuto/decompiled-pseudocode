/*
 * XREFs of ZwTerminateThread @ 0x1403F4020
 * Callers:
 *     KiParkUmsThread @ 0x140520A70 (KiParkUmsThread.c)
 *     RtlAssert @ 0x1405834A0 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408BA400 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
