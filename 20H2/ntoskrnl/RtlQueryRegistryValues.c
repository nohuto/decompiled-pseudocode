/*
 * XREFs of RtlQueryRegistryValues @ 0x1406DAAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x14066AD7C (RtlpQueryRegistryValues.c)
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
