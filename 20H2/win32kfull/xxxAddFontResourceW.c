/*
 * XREFs of xxxAddFontResourceW @ 0x1C0073C1C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C0022640 (xxxLW_LoadFonts.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0073A7C (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 * Callees:
 *     xxxClientAddFontResourceW @ 0x1C0073C68 (xxxClientAddFontResourceW.c)
 */

__int64 __fastcall xxxAddFontResourceW(PCWSTR SourceString, unsigned int a2, __int64 a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return xxxClientAddFontResourceW(&DestinationString, a2, a3);
}
