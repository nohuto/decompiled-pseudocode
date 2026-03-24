/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x140371FA4
 * Callers:
 *     MiDriverLoadSucceeded @ 0x14075C644 (MiDriverLoadSucceeded.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x140372000 (DbgLoadImageSymbols.c)
 *     DbgUnicodeStringToAnsiString @ 0x140372054 (DbgUnicodeStringToAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, __int64 a2)
{
  STRING P; // [rsp+20h] [rbp-18h] BYREF

  P = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&P, SourceString) )
    return 0LL;
  DbgLoadImageSymbols(&P, a2, -1LL);
  ExFreePoolWithTag(P.Buffer, 0);
  return 1LL;
}
