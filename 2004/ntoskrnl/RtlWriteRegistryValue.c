/*
 * XREFs of RtlWriteRegistryValue @ 0x1407038F0
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403EDB60 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x140583640 (RtlSetPortableOperatingSystem.c)
 *     ExpWriteSiloTimeZoneMarker @ 0x1405C994C (ExpWriteSiloTimeZoneMarker.c)
 *     EtwpEnumerateKeyProviders @ 0x14077C948 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14077CAA4 (EtwpEnableAutoLoggerProvider.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140793910 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140793BA8 (RtlSetActiveTimeBias.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079C8A0 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14079CB10 (EtwStartAutoLogger.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407C03D4 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140911E1C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092C5C8 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WheapCommitPolicy @ 0x14095A710 (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1405E1A94 (RtlpGetRegistryHandle.c)
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
