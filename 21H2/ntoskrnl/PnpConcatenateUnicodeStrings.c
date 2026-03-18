/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x1407690BC
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1402DDEC0 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x14076B5DC (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x140943B34 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x140943E3C (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140946900 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140769784 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString(DestinationString);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
