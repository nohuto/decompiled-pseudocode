/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x140803D60
 * Callers:
 *     BiGetNtPartitionPath @ 0x140802BE0 (BiGetNtPartitionPath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1408038B4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14080397C (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140803D90 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
