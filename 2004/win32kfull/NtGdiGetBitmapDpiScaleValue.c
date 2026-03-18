/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x1C02AEDB0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x1C029F4AC (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(__int64 a1, __int64 a2)
{
  return GreGetBitmapDpiScaleValue(a1, a2);
}
