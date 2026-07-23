/*
 * XREFs of _DbgUiStopDebugging@4 @ 0x4B32DBE0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwRemoveProcessDebug@8 @ 0x4B2F4090 (_ZwRemoveProcessDebug@8.c)
 */

NTSTATUS __cdecl DbgUiStopDebugging(HANDLE Process)
{
  return ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
}
