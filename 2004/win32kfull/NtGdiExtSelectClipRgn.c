/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C00758A0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtSelectClipRgnInternal @ 0x1C015AE98 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(HDC a1)
{
  return GreExtSelectClipRgnInternal(a1);
}
