/*
 * XREFs of ?GetPixelFormatInfo@CWICBitmapWrapper@@WBBA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F6DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmap::GetPixelFormatInfo(a1 - 272, a2);
}
