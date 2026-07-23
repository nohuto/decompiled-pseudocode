/*
 * XREFs of _DbgUiWaitStateChange@8 @ 0x4B32DC10
 * Callers:
 *     <none>
 * Callees:
 *     _NtWaitForDebugEvent@16 @ 0x4B2F4690 (_NtWaitForDebugEvent@16.c)
 */

NTSTATUS __cdecl DbgUiWaitStateChange(PDBGUI_WAIT_STATE_CHANGE StateChange, PLARGE_INTEGER Timeout)
{
  return NtWaitForDebugEvent(NtCurrentTeb()->DbgSsReserved[1], 1u, Timeout, StateChange);
}
