/*
 * XREFs of RtlxUnicodeStringToAnsiSize @ 0x1407480F0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14036FA14 (DbgUnicodeStringToAnsiString.c)
 *     ObCreateObjectTypeEx @ 0x14077DE30 (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14090C900 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x140951460 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140951DB0 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1405E6150 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToAnsiSize(PCUNICODE_STRING UnicodeString)
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
