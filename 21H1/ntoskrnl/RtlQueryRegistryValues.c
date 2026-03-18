/*
 * XREFs of RtlQueryRegistryValues @ 0x140681D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable, Context);
}
