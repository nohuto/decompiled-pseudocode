/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140743904
 * Callers:
 *     IoGetDeviceInstanceName @ 0x140370428 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1407431AC (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x1408A1240 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x1408A1824 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x1408A1B24 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A41D0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140743F8C (IopAllocateUnicodeString.c)
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
