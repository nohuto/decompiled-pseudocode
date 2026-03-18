/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x140749860
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406BF6A0 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x1407496C0 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14090B4A0 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14068A850 (RtlMultiByteToUnicodeSize.c)
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
