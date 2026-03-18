/*
 * XREFs of ?IsProtected@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800E66D0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014D64 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180015408 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsProtected(CCompositionSurfaceBitmap *this)
{
  char v1; // bl
  struct IBitmapRealization *RenderingRealization; // rax

  v1 = 0;
  RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization(this);
  if ( RenderingRealization )
    return (*(__int64 (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)RenderingRealization + 24LL))(RenderingRealization);
  return v1;
}
