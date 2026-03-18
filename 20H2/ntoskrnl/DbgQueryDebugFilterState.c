/*
 * XREFs of DbgQueryDebugFilterState @ 0x140583BB0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140364990 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
