/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1406C4C40
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1406C4630 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406C46F0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406C47E0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C4A50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x14061B770 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG Length; // r8d
  wchar_t *Buffer; // rdx
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  Length = UnicodeString->Length;
  Buffer = UnicodeString->Buffer;
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, Buffer, Length);
  return BytesInMultiByteString + 1;
}
