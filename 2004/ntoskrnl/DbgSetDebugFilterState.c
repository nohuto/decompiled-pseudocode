/*
 * XREFs of DbgSetDebugFilterState @ 0x1403B4440
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14078E860 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
