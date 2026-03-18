/*
 * XREFs of ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801133BE
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180053F34 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B3FF4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1802ACC78 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800BCC70 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x180115F4A (-GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ.c)
 */

__int64 __fastcall CDrawListBitmap::SetTransparent(CDrawListBitmap *this, CD3DDevice **a2)
{
  unsigned int v3; // ebx
  struct IBitmapRealization *StockTransparentBitmap; // rax
  __int64 v5; // rcx
  __int64 *v6; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  StockTransparentBitmap = CD3DDevice::GetStockTransparentBitmap(a2[5]);
  if ( StockTransparentBitmap )
  {
    v6 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v8, StockTransparentBitmap);
    CDrawListBitmap::operator=((__int64 *)this, v6);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v9);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v8);
  }
  else
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2003304307, 0x34u);
  }
  return v3;
}
