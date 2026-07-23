/*
 * XREFs of ZwDebugActiveProcess @ 0x1403F3CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
