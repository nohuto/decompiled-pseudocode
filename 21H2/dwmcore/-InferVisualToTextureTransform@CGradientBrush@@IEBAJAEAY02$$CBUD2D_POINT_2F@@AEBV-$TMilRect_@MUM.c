/*
 * XREFs of ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18003F220
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18003EEB0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18023A940 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x18003F354 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo_ea_18003F354.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CGradientBrush::InferVisualToTextureTransform(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm0_4
  char v4; // al
  float v5; // xmm2_4
  unsigned __int64 v6; // xmm1_8
  D2D1_MATRIX_3X2_F *v7; // r9
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-19h] BYREF
  __int128 v12; // [rsp+40h] [rbp-9h]
  __int128 v13; // [rsp+50h] [rbp+7h]
  __int128 v14; // [rsp+60h] [rbp+17h]
  char v15; // [rsp+70h] [rbp+27h]
  char v16; // [rsp+71h] [rbp+28h]
  __int128 v17; // [rsp+80h] [rbp+37h] BYREF

  LODWORD(v3) = (_DWORD)FLOAT_1_0;
  v4 = *(_BYTE *)(a1 + 152);
  if ( v4 == 1 && *(_BYTE *)(a1 + 226) )
  {
    v5 = 1.0 / *(float *)(a3 + 8);
LABEL_4:
    v3 = 1.0 - (float)(1.0 / *(float *)(a3 + 8));
    goto LABEL_5;
  }
  v5 = 0.0;
  if ( v4 == 1 )
    goto LABEL_4;
LABEL_5:
  *((float *)&v17 + 3) = v3;
  v11 = _xmm;
  v12 = _xmm;
  v13 = _xmm;
  v16 = v16 & 0xC0 | 0x17;
  *(float *)&v17 = v5;
  *(_QWORD *)((char *)&v17 + 4) = __PAIR64__(LODWORD(v3), LODWORD(v5));
  v14 = _xmm;
  v15 = 85;
  CMILMatrix::InferAffineMatrix(&v11, &v17, a2);
  *(_QWORD *)&v17 = v11;
  *((_QWORD *)&v17 + 1) = v12;
  v6 = _mm_unpacklo_ps((__m128)(unsigned int)v14, (__m128)DWORD1(v14)).m128_u64[0];
  *(_OWORD *)&v7->m11 = v17;
  *(_QWORD *)&v7->m[2][0] = v6;
  if ( D2D1InvertMatrix(v7) )
  {
    return 0;
  }
  else
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(
      v8,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304441,
      0x1ADu,
      0LL);
  }
  return v9;
}
