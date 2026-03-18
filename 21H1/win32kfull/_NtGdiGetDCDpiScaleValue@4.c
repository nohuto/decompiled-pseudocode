/*
 * XREFs of _NtGdiGetDCDpiScaleValue@4 @ 0x212CC9
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetDCDpiScaleValue@4 @ 0x91320 (_GreGetDCDpiScaleValue@4.c)
 */

int __stdcall NtGdiGetDCDpiScaleValue(HDC a1)
{
  return GreGetDCDpiScaleValue(a1);
}
