/*
 * XREFs of NtGdiSaveDC @ 0x1C00A11C0
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C015E520 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
