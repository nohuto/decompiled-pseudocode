/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x180085020
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180045B7C (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, (__int64)QueryTable, (__int64)Context, Environment, 1);
}
