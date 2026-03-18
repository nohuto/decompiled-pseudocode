/*
 * XREFs of _NtGdiSaveDC@4 @ 0x9305C
 * Callers:
 *     <none>
 * Callees:
 *     _GreSaveDCInternal@8 @ 0xF7458 (_GreSaveDCInternal@8.c)
 */

int __stdcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
