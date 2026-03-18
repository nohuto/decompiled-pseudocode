/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C00A0F80
 * Callers:
 *     <none>
 * Callees:
 *     GreExtSelectClipRgnInternal @ 0x1C015E358 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(HDC a1)
{
  return GreExtSelectClipRgnInternal(a1);
}
