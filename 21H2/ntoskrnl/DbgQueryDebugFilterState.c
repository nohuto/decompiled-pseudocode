/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405855C0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140284340 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
