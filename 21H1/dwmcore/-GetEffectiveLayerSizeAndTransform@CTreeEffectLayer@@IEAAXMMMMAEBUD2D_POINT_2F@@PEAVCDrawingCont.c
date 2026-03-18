/*
 * XREFs of ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18000E368
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DCA8 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18000EDA4 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18000EDD4 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C8EC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1801C3090 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 */

void __fastcall CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
        CTreeEffectLayer *this,
        float a2,
        float a3,
        float a4,
        float a5,
        const struct D2D_POINT_2F *a6,
        struct CDrawingContext *a7,
        struct CMILMatrix *a8,
        struct D2D_SIZE_F *a9)
{
  struct D2D_SIZE_F *v10; // rax
  float v11; // xmm1_4
  CDropShadow *v12; // rcx
  const struct CMILMatrix *v13; // rdx
  CMILMatrix *v14; // rcx
  _OWORD v15[4]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v16; // [rsp+60h] [rbp-38h]

  *(_QWORD *)a8 = 1065353216LL;
  *((_QWORD *)a8 + 1) = 0LL;
  *((_DWORD *)a8 + 4) = 0;
  *(_QWORD *)((char *)a8 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a8 + 28) = 0LL;
  *((_DWORD *)a8 + 9) = 0;
  *((_QWORD *)a8 + 5) = 1065353216LL;
  *((_QWORD *)a8 + 6) = 0LL;
  *((_DWORD *)a8 + 14) = 0;
  *((_DWORD *)a8 + 15) = 1065353216;
  *((_WORD *)a8 + 32) = 32085;
  CMILMatrix::Scale(a8, 1.0 / a4, 1.0 / a5, 1.0);
  if ( CLayerVisual::GetAutomaticBoundsExpansion(*((CLayerVisual **)this + 32)) )
  {
    if ( CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 32)) )
    {
      v12 = *(CDropShadow **)(*((_QWORD *)this + 32) + 616LL);
      if ( !v12 || CDropShadow::GetMaskForLayerVisualNoRef(v12) )
      {
        CMILMatrix::Translate(a8, (float)*((int *)this + 4), (float)*((int *)this + 5));
        v13 = (CTreeEffectLayer *)((char *)this + 128);
      }
      else
      {
        v15[0] = _xmm;
        v15[1] = _xmm;
        v15[2] = _xmm;
        v15[3] = _xmm;
        v16 = 32085;
        CMatrixStack::Top((struct CDrawingContext *)((char *)a7 + 408), (struct CMILMatrix *)v15);
        v13 = (const struct CMILMatrix *)v15;
        v14 = a8;
      }
      CMILMatrix::Multiply(v14, v13);
    }
    else
    {
      CMILMatrix::Translate(a8, *((float *)this + 57) - a6->x, *((float *)this + 58) - a6->y);
    }
    v10 = a9;
    a9->width = *((float *)this + 59) * *((float *)this + 70);
    v11 = *((float *)this + 60) * *((float *)this + 70);
  }
  else
  {
    CMILMatrix::Translate(a8, a2, a3);
    v10 = a9;
    a9->width = *((float *)this + 51) - *((float *)this + 49);
    v11 = *((float *)this + 52) - *((float *)this + 50);
  }
  v10->height = v11;
}
