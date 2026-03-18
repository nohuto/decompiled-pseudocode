/*
 * XREFs of _NtGdiSelectFont@8 @ 0xA8E58
 * Callers:
 *     <none>
 * Callees:
 *     _GreSelectFontInternal@12 @ 0xF7EBA (_GreSelectFontInternal@12.c)
 */

int __stdcall NtGdiSelectFont(HDC a1, int a2)
{
  return GreSelectFontInternal(a1, 0);
}
