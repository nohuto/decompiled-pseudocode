/*
 * XREFs of ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x18006D7EC
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006D4F4 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD2DLayer@@IEAA@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18006D898 (--0CD2DLayer@@IEAA@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MO.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CD2DLayer::Create(
        const struct D2D_RECT_F *a1,
        struct ID2D1Geometry *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        float a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_LAYER_OPTIONS1 a6,
        enum D2D1_PRIMITIVE_BLEND a7,
        struct CD2DLayer **a8)
{
  unsigned int v9; // ebx
  CD2DLayer *v12; // rcx
  struct CD2DLayer *v13; // rcx

  v9 = 0;
  v12 = (CD2DLayer *)operator new(0x50uLL);
  if ( v12 )
    v13 = CD2DLayer::CD2DLayer(v12, a1, a2, a3, a4, a5, a6, a7);
  else
    v13 = 0LL;
  *a8 = v13;
  if ( !v13 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
  return v9;
}
