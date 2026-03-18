/*
 * XREFs of ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180189FF8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18007BF90 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18007CDF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018E05C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D1BE0 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D35E0 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDirtyRegion::ForceFullDirty(CDirtyRegion *this)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _QWORD *, char *); // rbx
  _QWORD *OptimizedDirtyRects; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 4456) )
  {
    CDirtyRegion::SetFullDirty(this);
    if ( *((_QWORD *)this + 4) == GetCurrentFrameId() )
    {
      v2 = *(_QWORD *)this;
      v3 = *(void (__fastcall **)(__int64, _QWORD *, char *))(**(_QWORD **)this + 216LL);
      OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects((__int64)this, v5);
      v3(v2, OptimizedDirtyRects, (char *)this + 16);
    }
  }
}
