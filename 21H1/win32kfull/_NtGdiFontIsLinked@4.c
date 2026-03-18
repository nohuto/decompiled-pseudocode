/*
 * XREFs of _NtGdiFontIsLinked@4 @ 0x84546
 * Callers:
 *     <none>
 * Callees:
 *     _GreFontIsLinked@4 @ 0x84558 (_GreFontIsLinked@4.c)
 */

int __stdcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
