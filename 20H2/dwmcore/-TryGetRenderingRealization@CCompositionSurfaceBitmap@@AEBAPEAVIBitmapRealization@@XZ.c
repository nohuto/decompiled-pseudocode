/*
 * XREFs of ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180015408
 * Callers:
 *     ?GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ @ 0x1800153A8 (-GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ.c)
 *     ?IsProtected@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800E66D0 (-IsProtected@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18016E460 (-GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

struct IBitmapRealization *__fastcall CCompositionSurfaceBitmap::TryGetRenderingRealization(
        CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  struct IBitmapRealization *result; // rax

  v1 = *((_QWORD *)this + 12);
  result = 0LL;
  if ( v1 )
    return (struct IBitmapRealization *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  return result;
}
