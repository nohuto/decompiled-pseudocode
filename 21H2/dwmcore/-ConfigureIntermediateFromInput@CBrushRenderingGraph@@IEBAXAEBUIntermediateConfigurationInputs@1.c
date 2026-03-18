/*
 * XREFs of ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180252278
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180053510 (-RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802524EC (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?PixelInflate@@YA?AUD2D_RECT_F@@AEBU1@@Z @ 0x180057D6C (-PixelInflate@@YA-AUD2D_RECT_F@@AEBU1@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180057E64 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005844C (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0B40 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801E4F1C (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromInput(
        CBrushRenderingGraph *this,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a2,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a3)
{
  __int64 v3; // rdi
  float *v4; // rbx
  bool v7; // zf
  FLOAT v8; // xmm1_4
  __int64 v9; // r15
  struct D2D_RECT_F *v10; // r9
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  FLOAT v14; // xmm3_4
  float v15; // xmm0_4
  FLOAT v16; // xmm2_4
  FLOAT v17; // xmm1_4
  const struct D2D_RECT_F *v18; // r8
  __m128 v19; // xmm1
  float v20; // xmm3_4
  float v21; // xmm4_4
  __int64 v22; // [rsp+28h] [rbp-39h] BYREF
  float v23[10]; // [rsp+30h] [rbp-31h] BYREF
  struct D2D_RECT_F v24; // [rsp+58h] [rbp-9h] BYREF
  struct D2D_RECT_F v25; // [rsp+68h] [rbp+7h] BYREF
  float v26; // [rsp+78h] [rbp+17h]
  float v27; // [rsp+7Ch] [rbp+1Bh]

  v3 = *((_QWORD *)a2 + 2);
  v4 = (float *)((char *)a3 + 24);
  v24.left = 0.0;
  v24.top = 0.0;
  v7 = *(_BYTE *)(v3 + 44) == 0;
  v8 = *((float *)a2 + 1);
  v9 = *(_QWORD *)a3;
  v24.right = *(FLOAT *)a2;
  v24.bottom = v8;
  if ( v7 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 56) + 8LL))(*(_QWORD *)(v3 + 56), 2LL) )
    {
      *(_QWORD *)v4 = *((_QWORD *)a2 + 1);
      goto LABEL_7;
    }
    CSurfaceDrawListBrush::ComputeLocalToSourceTransform(*(CSurfaceDrawListBrush **)(v3 + 56), (struct Matrix3x3 *)v23);
  }
  else
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)v3, &v22);
    v25.top = 0.0;
    v25.right = 0.0;
    v25.left = (float)(int)v22;
    v25.bottom = (float)SHIDWORD(v22);
    v26 = 0.0 - (float)((float)(int)v22 * 0.0);
    v27 = 0.0 - (float)((float)SHIDWORD(v22) * 0.0);
    Matrix3x3::operator*((float *)(v3 + 48), v23, &v25.left);
  }
  Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v23, v4, v4 + 1, &v24.left);
LABEL_7:
  v11 = fminf(*((float *)a2 + 2), *v4);
  v12 = *((float *)a3 + 4);
  v13 = *((float *)a3 + 5);
  v24.left = 0.0;
  v24.top = 0.0;
  v25.top = 0.0;
  v14 = fmaxf(v12, v11);
  v15 = fminf(*((float *)a2 + 3), v4[1]);
  v25.right = 0.0;
  *((FLOAT *)a3 + 4) = v14;
  v25.left = v14;
  v16 = fmaxf(v13, v15);
  *((FLOAT *)a3 + 5) = v16;
  v17 = *((float *)a2 + 1);
  v24.right = *(FLOAT *)a2;
  v25.bottom = v16;
  v24.bottom = v17;
  v26 = 0.0 - (float)(v14 * 0.0);
  v27 = 0.0 - (float)(v16 * 0.0);
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)&v24,
    &v25,
    (const struct D2D_MATRIX_3X2_F *)(v9 + 84),
    v10);
  v19 = (__m128)_mm_loadu_si128((const __m128i *)PixelInflate(&v24, v18));
  *((_DWORD *)a3 + 2) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  *((_DWORD *)a3 + 3) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
  v20 = *((float *)a3 + 4);
  v21 = *((float *)a3 + 5);
  *(_DWORD *)(v9 + 52) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  *(_DWORD *)(v9 + 60) = 0;
  *(_DWORD *)(v9 + 68) = 0;
  *(_DWORD *)(v9 + 80) = 1065353216;
  *(float *)(v9 + 48) = v20;
  *(float *)(v9 + 64) = v21;
  *(float *)(v9 + 72) = 0.0 - (float)(v20 * 0.0);
  *(float *)(v9 + 76) = 0.0 - (float)(v21 * 0.0);
}
