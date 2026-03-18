/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x14074DC80
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406DFC20 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x14074DAE0 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14090C750 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14063D230 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG Length; // r8d
  char *Buffer; // rdx
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  Length = OemString->Length;
  Buffer = OemString->Buffer;
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, Buffer, Length);
  return BytesInUnicodeString + 2;
}
