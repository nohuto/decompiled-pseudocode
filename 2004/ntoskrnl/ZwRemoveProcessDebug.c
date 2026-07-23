/*
 * XREFs of ZwRemoveProcessDebug @ 0x1403F63E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
