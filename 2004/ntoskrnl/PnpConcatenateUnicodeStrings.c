/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140734474
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14036D828 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x140733D1C (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x14089B710 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14089BCF4 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14089BFF4 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089E6A0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140734AFC (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString(DestinationString, SourceString->Length);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
