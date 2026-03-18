/*
 * XREFs of RtlxUnicodeStringToAnsiSize @ 0x140746570
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14036EDE4 (DbgUnicodeStringToAnsiString.c)
 *     ObCreateObjectTypeEx @ 0x14077E640 (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14090B650 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409500C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140950A10 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x14061B770 (RtlUnicodeToMultiByteSize.c)
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
