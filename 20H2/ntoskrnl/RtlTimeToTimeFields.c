/*
 * XREFs of RtlTimeToTimeFields @ 0x14036E6A0
 * Callers:
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073BC88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073D688 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073E2AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x14079EFDC (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14079FC10 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CACCC (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407CF600 (ExpKernelExpirationDateCacheProvider.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D0710 (ExInitializeUtcTimeZoneBias.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1408664B4 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x14099B5E0 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x14099BDD8 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x1409F2C18 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140312808 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  __int64 v2; // r8

  RtlpTimeToTimeFields((__int64 *)Time, TimeFields, v2);
}
