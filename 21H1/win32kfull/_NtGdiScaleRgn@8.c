/*
 * XREFs of _NtGdiScaleRgn@8 @ 0x213F4C
 * Callers:
 *     <none>
 * Callees:
 *     _GreScaleRgn@8 @ 0x1FD560 (_GreScaleRgn@8.c)
 */

int __stdcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  return GreScaleRgn(a1, a2);
}
