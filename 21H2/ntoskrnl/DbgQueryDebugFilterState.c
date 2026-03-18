/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405E41C0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140369DB0 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
