/*
 * XREFs of ?GetPixelFormatInfo@CWICBitmapWrapper@@WBAI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F1320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmap::GetPixelFormatInfo(a1 - 264, a2);
}
