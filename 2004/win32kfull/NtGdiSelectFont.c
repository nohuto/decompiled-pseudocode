/*
 * XREFs of NtGdiSelectFont @ 0x1C0062670
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C015B3DC (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
