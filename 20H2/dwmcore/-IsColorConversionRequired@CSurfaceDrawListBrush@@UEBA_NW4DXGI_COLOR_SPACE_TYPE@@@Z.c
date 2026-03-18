/*
 * XREFs of ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18019D540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x180064714 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

bool __fastcall CSurfaceDrawListBrush::IsColorConversionRequired(
        CSurfaceDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF

  return CDrawListBitmap::GetPixelFormatInfo((CSurfaceDrawListBrush *)((char *)this + 56), v3)[2] != a2;
}
