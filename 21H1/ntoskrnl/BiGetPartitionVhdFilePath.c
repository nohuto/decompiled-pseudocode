/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x140770CB4
 * Callers:
 *     BiGetNtPartitionPath @ 0x14076DF58 (BiGetNtPartitionPath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140770808 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1407708D0 (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140770CE4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
