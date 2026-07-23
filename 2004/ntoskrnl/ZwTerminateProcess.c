/*
 * XREFs of ZwTerminateProcess @ 0x1403F3B40
 * Callers:
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x140520A70 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1408BA400 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x140909E00 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
