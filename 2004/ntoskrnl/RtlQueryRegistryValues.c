/*
 * XREFs of RtlQueryRegistryValues @ 0x140708260
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1405DFA64 (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context);
}
