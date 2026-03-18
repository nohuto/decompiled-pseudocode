/*
 * XREFs of ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180097784
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A920 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B3174 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyDeferredD2DClipLayers@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800977D4 (-ApplyDeferredD2DClipLayers@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this)
{
  __int64 v2; // rcx
  int v3; // edi

  v3 = CScopedClipStack::ApplyDeferredD2DClipLayers((CDrawingContext *)((char *)this + 864), this);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0LL, v3, 0x1048u);
  }
  else if ( *((_BYTE *)this + 8042) )
  {
    *(_WORD *)((char *)this + 8041) = 1;
  }
  return (unsigned int)v3;
}
