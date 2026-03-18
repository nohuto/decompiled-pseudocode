/*
 * XREFs of ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x1800393E8
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800394A0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180039428 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this)
{
  __int64 v2; // rcx
  int v3; // edi

  v3 = CDrawingContext::FlushDeferredD2DLayers(this);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v3, 0xFB2u, 0LL);
  }
  else if ( *((_BYTE *)this + 5955) )
  {
    *((_WORD *)this + 2977) = 1;
  }
  return (unsigned int)v3;
}
