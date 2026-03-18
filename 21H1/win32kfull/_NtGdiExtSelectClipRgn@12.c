/*
 * XREFs of _NtGdiExtSelectClipRgn@12 @ 0x9D99C
 * Callers:
 *     <none>
 * Callees:
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 */

int __stdcall NtGdiExtSelectClipRgn(HDC a1, int a2, int a3)
{
  return GreExtSelectClipRgnInternal(a1, a3, 0);
}
