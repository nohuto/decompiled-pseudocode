/*
 * XREFs of DbgSetDebugFilterState @ 0x1403C3F10
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14082CCC0 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
