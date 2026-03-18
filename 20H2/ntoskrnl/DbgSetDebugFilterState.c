/*
 * XREFs of DbgSetDebugFilterState @ 0x1403B5E00
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14079AFA0 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
