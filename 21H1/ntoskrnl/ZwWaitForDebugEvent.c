/*
 * XREFs of ZwWaitForDebugEvent @ 0x1403F5D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForDebugEvent(
        HANDLE DebugObjectHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE WaitStateChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObjectHandle);
}
