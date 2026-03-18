/*
 * XREFs of _NtGdiSetMetaRgn@4 @ 0xA93FE
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetMetaRgn@4 @ 0xA9410 (_GreSetMetaRgn@4.c)
 */

int __stdcall NtGdiSetMetaRgn(HDC a1)
{
  return GreSetMetaRgn(a1);
}
