/*
 * XREFs of ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x1801D97E4
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DA300 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800D0448 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800F3278 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x1802236A0 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
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
  char v10; // al
  CDropShadow *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const struct CMILMatrix *v14; // rdx
  struct D2D_SIZE_F *v15; // rax
  float v16; // xmm1_4
  _OWORD v17[4]; // [rsp+20h] [rbp-78h] BYREF
  char v18; // [rsp+60h] [rbp-38h]
  char v19; // [rsp+61h] [rbp-37h]

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
  v10 = *((_BYTE *)a8 + 65);
  *((_BYTE *)a8 + 64) = 85;
  *((_BYTE *)a8 + 65) = v10 & 0xC0 | 0x17;
  CMILMatrix::Scale(a8, 1.0 / a4, 1.0 / a5, 1.0);
  if ( CLayerVisual::GetAutomaticBoundsExpansion(*((CLayerVisual **)this + 32)) )
  {
    if ( CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 32)) )
    {
      v11 = *(CDropShadow **)(*((_QWORD *)this + 32) + 728LL);
      if ( !v11 || CDropShadow::GetMaskForLayerVisualNoRef(v11) )
      {
        CMILMatrix::Translate(a8, (float)*((int *)this + 4), (float)*((int *)this + 5));
        v14 = (CTreeEffectLayer *)((char *)this + 128);
      }
      else
      {
        v17[0] = _xmm;
        v17[1] = _xmm;
        v19 = v19 & 0xC0 | 0x17;
        v17[2] = _xmm;
        v17[3] = _xmm;
        v18 = 85;
        CMatrixStack::Top((__int64)a7 + 368, (__int64)v17);
        v14 = (const struct CMILMatrix *)v17;
      }
      CMILMatrix::Multiply(a8, v14, v12, v13);
    }
    else
    {
      CMILMatrix::Translate(a8, *((float *)this + 57) - a6->x, *((float *)this + 58) - a6->y);
    }
    v15 = a9;
    a9->width = *((float *)this + 59) * *((float *)this + 70);
    v16 = *((float *)this + 60) * *((float *)this + 70);
  }
  else
  {
    CMILMatrix::Translate(a8, a2, a3);
    v15 = a9;
    a9->width = *((float *)this + 51) - *((float *)this + 49);
    v16 = *((float *)this + 52) - *((float *)this + 50);
  }
  v15->height = v16;
}
