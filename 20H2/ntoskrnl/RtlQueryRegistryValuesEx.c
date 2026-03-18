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

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
