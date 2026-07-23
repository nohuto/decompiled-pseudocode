/*
 * XREFs of DbgSetDebugFilterState @ 0x1403B75B0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x1407A56C0 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
