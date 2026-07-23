/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x140681B00
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140320C80 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1403B30C4 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403BC388 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x1403BC5F0 (EtwpReadPerSiloConfigParameters.c)
 *     sub_1405AD1C8 @ 0x1405AD1C8 (sub_1405AD1C8.c)
 *     EtwpReadConfigParameters @ 0x140A463D0 (EtwpReadConfigParameters.c)
 *     SmQueryRegistry @ 0x140A6770C (SmQueryRegistry.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A69598 (IopInitCrashDumpDuringSysInit.c)
 *     CmIsLastKnownGoodBoot @ 0x140A6B6D0 (CmIsLastKnownGoodBoot.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable, Context);
}
