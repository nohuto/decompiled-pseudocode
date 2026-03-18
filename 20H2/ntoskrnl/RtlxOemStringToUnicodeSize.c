/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x14075C860
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406B7570 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x14075C6C0 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140912380 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1405DFCC0 (RtlMultiByteToUnicodeSize.c)
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
