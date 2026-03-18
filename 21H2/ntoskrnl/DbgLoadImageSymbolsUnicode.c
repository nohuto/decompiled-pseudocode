/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x1402D9D04
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x1402D9D60 (DbgLoadImageSymbols.c)
 *     DbgUnicodeStringToAnsiString @ 0x1402D9DB4 (DbgUnicodeStringToAnsiString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
