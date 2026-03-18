/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x14068A820
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C0C98 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x140700A24 (PopAnsiStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140962EA4 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14068A850 (RtlMultiByteToUnicodeSize.c)
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
