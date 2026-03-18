/*
 * XREFs of ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800A6474
 * Callers:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18005C3D0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A57F0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A6070 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x180260D58 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005C260 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform2DRectToPerspective(
        CMILMatrix *this,
        const struct MilRectF *a2,
        struct MilPoint2F *const a3)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  __int64 v15; // r10
  float *v16; // r11
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4

  v4 = *(float *)a2 * *(float *)this;
  v5 = *(float *)a2 * *((float *)this + 1);
  v6 = *((float *)a2 + 1);
  v7 = v6 * *((float *)this + 5);
  v8 = v6 * *((float *)this + 4);
  *(float *)a3 = (float)(v8 + v4) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)(v7 + v5) + *((float *)this + 13);
  v9 = *((float *)a2 + 3);
  v10 = v9 * *((float *)this + 5);
  v11 = v9 * *((float *)this + 4);
  *((float *)a3 + 2) = (float)(v11 + v4) + *((float *)this + 12);
  *((float *)a3 + 3) = (float)(v10 + v5) + *((float *)this + 13);
  v12 = *((float *)a2 + 2);
  v13 = v12 * *((float *)this + 1);
  v14 = v12 * *(float *)this;
  *((float *)a3 + 4) = (float)(v14 + v11) + *((float *)this + 12);
  *((float *)a3 + 5) = (float)(v13 + v10) + *((float *)this + 13);
  *((float *)a3 + 6) = (float)(v14 + v8) + *((float *)this + 12);
  *((float *)a3 + 7) = (float)(v13 + v7) + *((float *)this + 13);
  if ( CMILMatrix::Is2DAffine<1>((__int64)this, 1) )
    return;
  v17 = v16[15];
  v18 = v16[3];
  v19 = v18 * *((float *)a2 + 2);
  v20 = v16[7] * *((float *)a2 + 1);
  v21 = v18 * *(float *)a2;
  v22 = v16[7] * *((float *)a2 + 3);
  v23 = (float)(v22 + v19) + v17;
  v24 = (float)(v20 + v19) + v17;
  v25 = (float)(v20 + v21) + v17;
  v26 = (float)(v22 + v21) + v17;
  if ( v25 < 0.000081380211 || v26 < 0.000081380211 || v23 < 0.000081380211 || v24 < 0.000081380211 )
  {
    if ( v25 >= -0.000081380211 || v26 >= -0.000081380211 || v23 >= -0.000081380211 || v24 >= -0.000081380211 )
    {
      *(_DWORD *)v15 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *(_DWORD *)(v15 + 4) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      *(_DWORD *)(v15 + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *(_DWORD *)(v15 + 12) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      *(_DWORD *)(v15 + 16) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      *(_DWORD *)(v15 + 20) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      *(_DWORD *)(v15 + 24) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v30 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    }
    else
    {
      *(_QWORD *)v15 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_DWORD *)(v15 + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_DWORD *)(v15 + 12) = HIDWORD(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
      *(_QWORD *)(v15 + 16) = *((_QWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      *(_DWORD *)(v15 + 24) = DWORD2(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
      v30 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
    }
    goto LABEL_15;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v27 = *(float *)(v15 + 4) / v25;
    *(float *)v15 = *(float *)v15 / v25;
    *(float *)(v15 + 4) = v27;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v28 = *(float *)(v15 + 12) / v26;
    *(float *)(v15 + 8) = *(float *)(v15 + 8) / v26;
    *(float *)(v15 + 12) = v28;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v29 = *(float *)(v15 + 20) / v23;
    *(float *)(v15 + 16) = *(float *)(v15 + 16) / v23;
    *(float *)(v15 + 20) = v29;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v30 = *(float *)(v15 + 28) / v24;
    *(float *)(v15 + 24) = *(float *)(v15 + 24) / v24;
LABEL_15:
    *(float *)(v15 + 28) = v30;
  }
}
