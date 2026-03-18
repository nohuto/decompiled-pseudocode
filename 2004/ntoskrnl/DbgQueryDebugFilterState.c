/*
 * XREFs of DbgQueryDebugFilterState @ 0x140580250
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140361520 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
