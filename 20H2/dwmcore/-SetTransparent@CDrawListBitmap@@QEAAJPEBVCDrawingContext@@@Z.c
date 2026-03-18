/*
 * XREFs of ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180009CB8
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180009910 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180020DA4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18004C688 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800C1A64 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x180009D08 (-GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x18004D4F4 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListBitmap::SetTransparent(CDrawListBitmap *this, CD3DDevice **a2)
{
  struct IBitmapRealization *StockTransparentBitmap; // rax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx

  StockTransparentBitmap = CD3DDevice::GetStockTransparentBitmap(a2[5]);
  if ( StockTransparentBitmap )
  {
    v6 = CDrawListBitmap::Initialize(this, StockTransparentBitmap, (const struct CDrawingContext *)a2);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5Bu, 0LL);
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304307, 0x5Fu, 0LL);
  }
  return v8;
}
