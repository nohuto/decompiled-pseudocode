/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x1407491E4
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1403700D0 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x14074BFB0 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x14089E970 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14089EF54 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14089F254 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A1900 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x14074986C (IopAllocateUnicodeString.c)
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
