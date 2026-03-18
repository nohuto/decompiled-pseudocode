/*
 * XREFs of ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x18005C210
 * Callers:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x180059634 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18005D490 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::IsSameVisualTree(CCachedVisualImage *this, const struct CVisualTree *a2)
{
  return (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 216LL))(this) == (_QWORD)a2;
}
