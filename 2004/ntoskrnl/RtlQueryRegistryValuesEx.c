/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x140709DA0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x14035B210 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1403B57C4 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403B9ABC (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x1403B9D24 (EtwpReadPerSiloConfigParameters.c)
 *     sub_1405AD8E8 @ 0x1405AD8E8 (sub_1405AD8E8.c)
 *     ExpReadTimeZoneInformation @ 0x1405C970C (ExpReadTimeZoneInformation.c)
 *     SmQueryRegistry @ 0x140A67B94 (SmQueryRegistry.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A69A18 (IopInitCrashDumpDuringSysInit.c)
 *     CmIsLastKnownGoodBoot @ 0x140A6B958 (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x140A6D714 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1405DFA64 (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context);
}
