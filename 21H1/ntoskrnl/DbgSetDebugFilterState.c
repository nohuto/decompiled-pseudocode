/*
 * XREFs of DbgSetDebugFilterState @ 0x1403B2640
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14078C990 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
