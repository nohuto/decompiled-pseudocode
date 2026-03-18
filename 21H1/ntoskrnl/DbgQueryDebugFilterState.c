/*
 * XREFs of DbgQueryDebugFilterState @ 0x14057FB00
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x14033C8B0 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
