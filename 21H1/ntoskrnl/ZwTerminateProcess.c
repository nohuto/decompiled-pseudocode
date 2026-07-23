/*
 * XREFs of ZwTerminateProcess @ 0x1403F28B0
 * Callers:
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x140520420 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x140908B50 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
