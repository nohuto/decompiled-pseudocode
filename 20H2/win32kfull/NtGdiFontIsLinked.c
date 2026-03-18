/*
 * XREFs of NtGdiFontIsLinked @ 0x1C0108F30
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C0108F48 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
