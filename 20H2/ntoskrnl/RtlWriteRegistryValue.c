/*
 * XREFs of RtlWriteRegistryValue @ 0x1406D6A00
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403F1F60 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x140586FA0 (RtlSetPortableOperatingSystem.c)
 *     ExpWriteSiloTimeZoneMarker @ 0x1405CF948 (ExpWriteSiloTimeZoneMarker.c)
 *     EtwpEnumerateKeyProviders @ 0x14078ED40 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14078EE9C (EtwpEnableAutoLoggerProvider.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407A009C (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1407A0334 (RtlSetActiveTimeBias.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407ABBD0 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x1407ABE40 (EtwStartAutoLogger.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407CEC64 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091795C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409323F8 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WheapCommitPolicy @ 0x1409604D0 (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x14066D824 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
