/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x14072FA40
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14036B8A0 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x14073116C (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x14089A3F0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14089A9D4 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14089ACD4 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089D380 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1407300CC (IopAllocateUnicodeString.c)
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
