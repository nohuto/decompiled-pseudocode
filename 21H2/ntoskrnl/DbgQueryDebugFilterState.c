/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405857F0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140272960 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
