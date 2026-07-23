/*
 * XREFs of DbgUiStopDebugging @ 0x1800CCBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiStopDebugging(HANDLE Process)
{
  return ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
}
