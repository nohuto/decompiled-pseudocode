/*
 * XREFs of ZwTerminateThread @ 0x1403F8BD0
 * Callers:
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140586E00 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
