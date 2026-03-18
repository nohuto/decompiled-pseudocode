/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1406E45B0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1406E3FA0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406E4060 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406E4150 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406E43C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1405E6150 (RtlUnicodeToMultiByteSize.c)
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
