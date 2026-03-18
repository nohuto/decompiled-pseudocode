/*
 * XREFs of RtlTimeToTimeFields @ 0x14036C6C0
 * Callers:
 *     PiDevCfgBuildDriverConfigurationId @ 0x14072D20C (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14072EED0 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14072FAF4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x140792748 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140793484 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407BC43C (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407C0D70 (ExpKernelExpirationDateCacheProvider.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407C1F10 (ExInitializeUtcTimeZoneBias.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140860A98 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x140948780 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140995480 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140995C78 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x1409ECC18 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140341A98 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  __int64 v2; // r8

  RtlpTimeToTimeFields((__int64 *)Time, TimeFields, v2);
}
