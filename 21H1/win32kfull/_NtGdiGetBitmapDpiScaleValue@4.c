/*
 * XREFs of _NtGdiGetBitmapDpiScaleValue@4 @ 0x212774
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetBitmapDpiScaleValue@4 @ 0x1FD33D (_GreGetBitmapDpiScaleValue@4.c)
 */

int __stdcall NtGdiGetBitmapDpiScaleValue(void *a1)
{
  return GreGetBitmapDpiScaleValue(a1);
}
