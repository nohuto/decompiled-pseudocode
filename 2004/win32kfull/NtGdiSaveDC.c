/*
 * XREFs of NtGdiSaveDC @ 0x1C0075AE0
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C015B034 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
