/*
 * XREFs of ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D2A70
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800D27C0 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18020B538 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18020E868 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18023B6E0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3, float a4)
{
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a4) & _xmm) >= 0.000081380211 )
  {
    if ( CMILMatrix::IsAffine<1>((__int64)this, 0) )
    {
      v8 = a3 + *((float *)this + 13);
      v9 = v7 + *((float *)this + 14);
      *((float *)this + 12) = a2 + *((float *)this + 12);
      *((float *)this + 13) = v8;
      *((float *)this + 14) = v9;
    }
    else
    {
      v10 = *((float *)this + 3);
      v11 = *((float *)this + 7);
      *((_BYTE *)this + 65) &= 0xF3u;
      v12 = (float)(v10 * a2) + *(float *)this;
      v13 = (float)(v10 * a3) + *((float *)this + 1);
      v14 = (float)(v10 * v7) + *((float *)this + 2);
      *(float *)this = v12;
      *((float *)this + 1) = v13;
      v15 = (float)(v11 * a2) + *((float *)this + 4);
      v16 = (float)(v11 * a3) + *((float *)this + 5);
      *((float *)this + 2) = v14;
      v17 = (float)(v11 * v7) + *((float *)this + 6);
      v18 = *((float *)this + 11);
      *((float *)this + 4) = v15;
      *((float *)this + 5) = v16;
      v19 = (float)(v18 * a2) + *((float *)this + 8);
      *((float *)this + 6) = v17;
      v20 = (float)(v18 * a3) + *((float *)this + 9);
      v21 = *((float *)this + 15);
      *((float *)this + 8) = v19;
      *((float *)this + 9) = v20;
      v22 = (float)(v21 * a2) + *((float *)this + 12);
      v23 = (float)(v21 * a3) + *((float *)this + 13);
      *((float *)this + 10) = (float)(v18 * v7) + *((float *)this + 10);
      v24 = (float)(v21 * v7) + *((float *)this + 14);
      *((float *)this + 12) = v22;
      *((float *)this + 13) = v23;
      *((float *)this + 14) = v24;
    }
    *((_BYTE *)this + 64) &= 0xFCu;
  }
}
