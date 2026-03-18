/*
 * XREFs of ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x1800163B8
 * Callers:
 *     ?GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ @ 0x180016358 (-GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ.c)
 *     ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180172DD0 (-GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsProtected@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801C0AA4 (-IsProtected@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
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
