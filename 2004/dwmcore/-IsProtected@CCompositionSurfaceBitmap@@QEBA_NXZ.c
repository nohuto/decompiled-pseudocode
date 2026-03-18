/*
 * XREFs of ?IsProtected@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801BE184
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014F44 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x1800155E8 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
