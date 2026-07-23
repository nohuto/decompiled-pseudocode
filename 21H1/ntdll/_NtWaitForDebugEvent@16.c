/*
 * XREFs of _NtWaitForDebugEvent@16 @ 0x4B2F4690
 * Callers:
 *     _DbgUiWaitStateChange@8 @ 0x4B32DC10 (_DbgUiWaitStateChange@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtWaitForDebugEvent(
        HANDLE DebugObjectHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE WaitStateChange)
{
  return Wow64SystemServiceCall();
}
