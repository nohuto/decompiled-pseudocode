/*
 * XREFs of RtlTimeToTimeFields @ 0x14036CDF0
 * Callers:
 *     PiDevCfgBuildDriverConfigurationId @ 0x140722B88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407363C8 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140790AB0 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407B92CC (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407BDB50 (ExpKernelExpirationDateCacheProvider.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x14085F744 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140993E40 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140994638 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x1409ECC18 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140201C48 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  __int64 v2; // r8

  RtlpTimeToTimeFields((__int64 *)Time, TimeFields, v2);
}
