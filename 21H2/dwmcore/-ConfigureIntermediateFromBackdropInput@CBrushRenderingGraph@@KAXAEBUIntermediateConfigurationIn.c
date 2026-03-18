/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800557F8
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180053510 (-RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802524EC (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?PixelInflate@@YA?AUD2D_RECT_F@@AEBU1@@Z @ 0x180057D6C (-PixelInflate@@YA-AUD2D_RECT_F@@AEBU1@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005844C (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0B40 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        FLOAT *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  FLOAT v2; // xmm0_4
  FLOAT v4; // xmm1_4
  __int64 v6; // r15
  __int64 v7; // r13
  FLOAT v8; // xmm0_4
  FLOAT v9; // xmm1_4
  struct D2D_MATRIX_3X2_F *v10; // r9
  FLOAT bottom; // xmm1_4
  __m128 v12; // xmm7
  float v13; // xmm6_4
  __int64 v14; // rax
  float v15; // xmm6_4
  __int64 v16; // rax
  float v17; // xmm6_4
  __int64 v18; // [rsp+28h] [rbp-89h] BYREF
  _BYTE v19[40]; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v20[40]; // [rsp+58h] [rbp-59h] BYREF
  struct D2D_RECT_F v21; // [rsp+80h] [rbp-31h] BYREF
  float v22; // [rsp+90h] [rbp-21h]
  float v23; // [rsp+94h] [rbp-1Dh]
  D2D_RECT_F v24; // [rsp+98h] [rbp-19h] BYREF

  v2 = *a1;
  v4 = a1[1];
  v7 = *(_QWORD *)a2;
  v6 = *((_QWORD *)a1 + 2);
  v24.left = 0.0;
  v24.top = 0.0;
  v24.right = v2;
  v24.bottom = v4;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v6, &v18);
  v21.top = 0.0;
  v21.right = 0.0;
  v21.left = (float)(int)v18;
  v21.bottom = (float)SHIDWORD(v18);
  v22 = 0.0 - (float)((float)(int)v18 * 0.0);
  v23 = 0.0 - (float)((float)SHIDWORD(v18) * 0.0);
  Matrix3x3::operator*(v6 + 48, v19, &v21);
  ((void (__fastcall *)(_BYTE *, char *, char *, D2D_RECT_F *, __int64))Matrix3x3::Get2DScaleDimensionsWithPerspective)(
    v19,
    (char *)a2 + 24,
    (char *)a2 + 28,
    &v24,
    v18);
  v8 = *a1;
  v9 = a1[1];
  v24.left = 0.0;
  v24.top = 0.0;
  v24.right = v8;
  v24.bottom = v9;
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v24, (const struct D2D_RECT_F *)(v6 + 84), &v21, v10);
  bottom = v21.bottom;
  *((_DWORD *)a2 + 4) = LODWORD(v21.left);
  *((FLOAT *)a2 + 5) = bottom;
  v12 = (__m128)_mm_loadu_si128((const __m128i *)PixelInflate(&v24, (const struct D2D_RECT_F *)(v6 + 84)));
  v13 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  *((float *)a2 + 2) = _mm_shuffle_ps(v12, v12, 170).m128_f32[0] - v12.m128_f32[0];
  *((float *)a2 + 3) = _mm_shuffle_ps(v12, v12, 255).m128_f32[0] - v13;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v6, &v18);
  v21.top = 0.0;
  v21.left = (float)(int)v18;
  v21.right = 0.0;
  v21.bottom = (float)SHIDWORD(v18);
  v22 = 0.0 - (float)((float)(int)v18 * 0.0);
  v23 = 0.0 - (float)((float)SHIDWORD(v18) * 0.0);
  v14 = Matrix3x3::operator*(v6 + 48, v19, &v21);
  v12.m128_i32[0] ^= _xmm;
  LODWORD(v15) = LODWORD(v13) ^ _xmm;
  v21 = *(struct D2D_RECT_F *)&_xmm;
  v22 = v12.m128_f32[0];
  v23 = v15;
  v16 = Matrix3x3::operator*(v14, v20, &v21);
  *(_OWORD *)(v7 + 48) = *(_OWORD *)v16;
  *(_OWORD *)(v7 + 64) = *(_OWORD *)(v16 + 16);
  *(_DWORD *)(v7 + 80) = *(_DWORD *)(v16 + 32);
  *(float *)(v7 + 84) = v12.m128_f32[0] + *(float *)(v6 + 84);
  *(float *)(v7 + 88) = v15 + *(float *)(v6 + 88);
  *(float *)(v7 + 92) = v12.m128_f32[0] + *(float *)(v6 + 92);
  v17 = v15 + *(float *)(v6 + 96);
  *(_BYTE *)(v7 + 101) = 1;
  *(float *)(v7 + 96) = v17;
  *(_BYTE *)(v7 + 102) = *(_BYTE *)(v6 + 102);
  *(_BYTE *)(v7 + 103) = *(_BYTE *)(v6 + 103);
}
