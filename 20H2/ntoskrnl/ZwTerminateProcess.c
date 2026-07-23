/*
 * XREFs of ZwTerminateProcess @ 0x1403F86F0
 * Callers:
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
