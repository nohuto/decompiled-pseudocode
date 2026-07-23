/*
 * XREFs of ZwIsProcessInJob @ 0x1403F2D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
