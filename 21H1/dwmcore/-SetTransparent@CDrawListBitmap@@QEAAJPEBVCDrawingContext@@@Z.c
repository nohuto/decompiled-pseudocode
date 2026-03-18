/*
 * XREFs of ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180013BD8
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013828 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180013EE4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18006F82C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180070974 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x180013C28 (-GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x1800717E0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
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
