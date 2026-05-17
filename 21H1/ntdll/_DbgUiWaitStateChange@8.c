/*
 * XREFs of _DbgUiWaitStateChange@8 @ 0x4B32DC10
 * Callers:
 *     <none>
 * Callees:
 *     _NtWaitForDebugEvent@16 @ 0x4B2F4690 (_NtWaitForDebugEvent@16.c)
 */

int __stdcall DbgUiWaitStateChange(int a1, int a2)
{
  return NtWaitForDebugEvent((int)NtCurrentTeb()->DbgSsReserved[1], 1, a2, a1);
}
