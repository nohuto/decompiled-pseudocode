/*
 * XREFs of ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180052C34
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCVisual@@@Z @ 0x180004728 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18003CA54 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800534A0 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800F4D90 (-CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ??0CRenderTargetManager@@IEAA@PEAVCComposition@@@Z @ 0x1800F70F4 (--0CRenderTargetManager@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDrawingContext@@IEAA@XZ @ 0x180052CC0 (--0CDrawingContext@@IEAA@XZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawingContext::Create(struct CDrawingContext **a1)
{
  CDrawingContext *v2; // rax
  CDrawingContext *v3; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CDrawingContext *)DefaultHeap::AllocClear(0x1F70uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v2, 0, 0x1F70uLL);
  CDrawingContext::CDrawingContext(v3);
  *(_QWORD *)v3 = &CGlobalDrawingContext::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)v3 + 2) = &CGlobalDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)v3 + 3) = &CGlobalDrawingContext::`vftable'{for `ID2DContextOwner'};
  *a1 = v3;
  (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v3 + 8LL))(v3);
}
