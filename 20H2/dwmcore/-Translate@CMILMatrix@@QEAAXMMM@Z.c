/*
 * XREFs of ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18004E790
 * Callers:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18008C1B0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008EB40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x1800925F0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800936C0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009EE90 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800BF2A0 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x1801B8110 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801BB2D4 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801F43F0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3, float a4)
{
  float v5; // xmm3_4
  float v7; // xmm2_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4

  v5 = *((float *)this + 3);
  v7 = *((float *)this + 7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 11) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 15) - 1.0) & _xmm) >= 0.000081380211 )
  {
    v11 = (float)(v5 * a2) + *(float *)this;
    v12 = (float)(v5 * a3) + *((float *)this + 1);
    v13 = (float)(v5 * a4) + *((float *)this + 2);
    *(float *)this = v11;
    *((float *)this + 1) = v12;
    v14 = (float)(v7 * a2) + *((float *)this + 4);
    v15 = (float)(v7 * a3) + *((float *)this + 5);
    *((float *)this + 2) = v13;
    v16 = (float)(v7 * a4) + *((float *)this + 6);
    v17 = *((float *)this + 15);
    *((float *)this + 4) = v14;
    *((float *)this + 5) = v15;
    *((float *)this + 6) = v16;
    v18 = *((float *)this + 11);
    v19 = (float)(v18 * a2) + *((float *)this + 8);
    v20 = (float)(v18 * a3) + *((float *)this + 9);
    v21 = (float)(v18 * a4) + *((float *)this + 10);
    *((float *)this + 8) = v19;
    *((float *)this + 9) = v20;
    v22 = (float)(v17 * a2) + *((float *)this + 12);
    v23 = (float)(v17 * a3) + *((float *)this + 13);
    *((float *)this + 10) = v21;
    v24 = (float)(v17 * a4) + *((float *)this + 14);
    *((float *)this + 12) = v22;
    *((float *)this + 13) = v23;
    *((float *)this + 14) = v24;
  }
  else
  {
    v9 = a3 + *((float *)this + 13);
    v10 = a4 + *((float *)this + 14);
    *((float *)this + 12) = a2 + *((float *)this + 12);
    *((float *)this + 13) = v9;
    *((float *)this + 14) = v10;
  }
  *((_BYTE *)this + 64) &= 0xFCu;
  *((_BYTE *)this + 65) &= 0x3Fu;
}
