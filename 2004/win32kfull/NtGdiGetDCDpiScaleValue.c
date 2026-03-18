/*
 * XREFs of NtGdiGetDCDpiScaleValue @ 0x1C0153E80
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0102144 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetDCDpiScaleValue(HDC a1)
{
  return GreGetDCDpiScaleValue(a1);
}
