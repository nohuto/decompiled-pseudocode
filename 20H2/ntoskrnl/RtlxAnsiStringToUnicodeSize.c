/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x1405DFC90
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C5038 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x14071CEF8 (PopAnsiStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x14096A014 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1405DFCC0 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxAnsiStringToUnicodeSize(PCANSI_STRING AnsiString)
{
  ULONG Length; // r8d
  char *Buffer; // rdx
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  Length = AnsiString->Length;
  Buffer = AnsiString->Buffer;
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, Buffer, Length);
  return BytesInUnicodeString + 2;
}
