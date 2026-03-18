/*
 * XREFs of _xxxAddFontResourceW@12 @ 0xD716A
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z @ 0xD7046 (-xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z.c)
 * Callees:
 *     _xxxClientAddFontResourceW@12 @ 0xD719A (_xxxClientAddFontResourceW@12.c)
 */

int __thiscall xxxAddFontResourceW(PCWSTR SourceString, int a2)
{
  struct _UNICODE_STRING DestinationString; // [esp+4h] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return xxxClientAddFontResourceW(a2);
}
