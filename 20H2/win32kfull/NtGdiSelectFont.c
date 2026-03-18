/*
 * XREFs of NtGdiSelectFont @ 0x1C0037280
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C015E8C8 (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
