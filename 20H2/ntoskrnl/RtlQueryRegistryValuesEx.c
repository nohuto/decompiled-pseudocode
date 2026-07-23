/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406DC2F0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x14032BC70 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1403B6884 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403BBF3C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x1403BC1A4 (EtwpReadPerSiloConfigParameters.c)
 *     sub_1405B1448 @ 0x1405B1448 (sub_1405B1448.c)
 *     ExpReadTimeZoneInformation @ 0x1405CF708 (ExpReadTimeZoneInformation.c)
 *     SmQueryRegistry @ 0x140A6E3BC (SmQueryRegistry.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6FEB8 (IopInitCrashDumpDuringSysInit.c)
 *     CmIsLastKnownGoodBoot @ 0x140A7223C (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x140A73E34 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x14066AD7C (RtlpQueryRegistryValues.c)
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
