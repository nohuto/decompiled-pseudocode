/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140749024
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14036FF20 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x14074BDF0 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x14089E810 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14089EDF4 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14089F0F4 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A17A0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403534C0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1407496AC (IopAllocateUnicodeString.c)
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
