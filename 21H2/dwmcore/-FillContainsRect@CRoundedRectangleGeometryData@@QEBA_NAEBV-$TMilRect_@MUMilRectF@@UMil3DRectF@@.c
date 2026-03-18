/*
 * XREFs of ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AAEA4
 * Callers:
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057114 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AAEA4 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800102BC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AAEA4 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AD06C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsPointOutsideCorner@CRoundedRectangleGeometryData@@CA_NAEBVCMilPoint2F@@0AEBUD2D_VECTOR_2F@@@Z @ 0x1800EF5E8 (-IsPointOutsideCorner@CRoundedRectangleGeometryData@@CA_NAEBVCMilPoint2F@@0AEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

char __fastcall CRoundedRectangleGeometryData::FillContainsRect(__int64 a1, __int128 *a2, CMILMatrix *a3, __int64 a4)
{
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm4_4
  bool v11; // cc
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  unsigned __int64 v16; // rcx
  float *v17; // rax
  float v18; // xmm13_4
  float v19; // xmm3_4
  float *v20; // rdx
  float v21; // xmm9_4
  float v22; // xmm14_4
  float v23; // xmm13_4
  float v24; // xmm11_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm2_4
  unsigned int v28; // xmm0_4
  unsigned int v29; // r10d
  unsigned __int64 v30; // r9
  float *v31; // rax
  float v32; // xmm1_4
  float v33; // xmm0_4
  __int64 v34; // r11
  const struct D2D_VECTOR_2F *v35; // r8
  const struct CMilPoint2F *v36; // rdx
  int v37; // r11d
  float v38; // [rsp+28h] [rbp-E0h]
  __int128 v39; // [rsp+30h] [rbp-D8h] BYREF
  float v40; // [rsp+40h] [rbp-C8h]
  int v41; // [rsp+44h] [rbp-C4h]
  int v42; // [rsp+48h] [rbp-C0h]
  int v43; // [rsp+4Ch] [rbp-BCh]
  __int128 v44; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v45; // [rsp+60h] [rbp-A8h]
  int v46; // [rsp+64h] [rbp-A4h]
  int v47; // [rsp+68h] [rbp-A0h]
  int v48; // [rsp+6Ch] [rbp-9Ch]
  float v49; // [rsp+70h] [rbp-98h] BYREF
  float v50[7]; // [rsp+74h] [rbp-94h]

  if ( a3
    && ((unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3, a2, a3, a4)
     || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3)) )
  {
    v44 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a3, a2, &v44);
    return CRoundedRectangleGeometryData::FillContainsRect(a1, &v44, 0LL);
  }
  else
  {
    CRoundedRectangleGeometryData::GetBaseRect(a1, (__int64)&v44);
    v39 = 0LL;
    if ( a3 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>(a3, a2, &v39);
    }
    else
    {
      v39 = *a2;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v39, 0.015625, 0.015625);
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v39) )
        return 0;
      v39 = *a2;
    }
    v8 = *(float *)&v39 + 0.015625;
    v9 = *((float *)&v39 + 1) + 0.015625;
    v10 = *((float *)&v39 + 3) - 0.015625;
    *(float *)&v39 = v8;
    *((float *)&v39 + 1) = *((float *)&v39 + 1) + 0.015625;
    v11 = (float)(*((float *)&v39 + 2) + -0.015625) <= v8;
    *((float *)&v39 + 2) = *((float *)&v39 + 2) + -0.015625;
    *((float *)&v39 + 3) = *((float *)&v39 + 3) - 0.015625;
    if ( v11 || v10 <= v9 )
    {
      v9 = 0.0;
      v8 = 0.0;
      v39 = 0uLL;
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v44) )
    {
      v14 = *(float *)(a1 + 16);
      v15 = *(float *)(a1 + 20);
      v16 = -(__int64)(*(_BYTE *)(a1 + 52) != 0) & 0xFFFFFFFFFFFFFFF8uLL;
      v17 = (float *)(a1 + 16);
      v18 = *(float *)(v16 + a1 + 24);
      v19 = *(float *)(v16 + a1 + 28);
      v20 = (float *)(a1 + (-(__int64)(*(_BYTE *)(a1 + 52) != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 32);
      if ( !*(_BYTE *)(a1 + 52) )
        v17 = (float *)(a1 + 40);
      v21 = *v17;
      v22 = *((float *)&v44 + 2) - *v20;
      v38 = *((float *)&v44 + 2) - v18;
      v50[1] = *((float *)&v44 + 2) - v18;
      v49 = *(float *)&v44 + v14;
      v23 = *((float *)&v44 + 3) - v20[1];
      v24 = *((float *)&v44 + 3) - v17[1];
      v50[0] = *((float *)&v44 + 1) + v15;
      v50[2] = *((float *)&v44 + 1) + v19;
      v50[3] = v22;
      v50[4] = v23;
      v50[5] = *(float *)&v44 + v21;
      v50[6] = v24;
      if ( (v9 < (float)(*((float *)&v44 + 1) + v15)
         || v9 < (float)(*((float *)&v44 + 1) + v19)
         || v24 < v12
         || v23 < v12)
        && (v8 < (float)(*(float *)&v44 + v14) || v8 < (float)(*(float *)&v44 + v21) || v38 < v13 || v22 < v13) )
      {
        LODWORD(v39) = LODWORD(v14) ^ _xmm;
        v25 = *((_DWORD *)v17 + 1);
        DWORD2(v39) = *(_DWORD *)(v16 + a1 + 24);
        v40 = *v20;
        v41 = *((_DWORD *)v20 + 1);
        DWORD1(v44) = *((_DWORD *)a2 + 1);
        v26 = *((_DWORD *)a2 + 3);
        DWORD1(v39) = LODWORD(v15) ^ _xmm;
        v27 = *(_DWORD *)a2;
        v43 = v25;
        v28 = *((_DWORD *)a2 + 2);
        v46 = v26;
        v48 = v26;
        HIDWORD(v39) = LODWORD(v19) ^ _xmm;
        v42 = LODWORD(v21) ^ _xmm;
        LODWORD(v44) = v27;
        *((_QWORD *)&v44 + 1) = __PAIR64__(DWORD1(v44), v28);
        v45 = v28;
        v47 = v27;
        if ( a3 )
          CMILMatrix::Transform(a3, (const struct MilPoint2F *)&v44, (struct MilPoint2F *)&v44, 4);
        v29 = 0;
        v30 = 0LL;
        do
        {
          if ( *(_BYTE *)(a1 + 52) )
            v31 = (float *)(a1 + 16);
          else
            v31 = (float *)(a1 + 8 * (v29 + 2LL));
          if ( *v31 > 0.0 && v31[1] > 0.0 )
          {
            if ( a3 )
            {
              v34 = 0LL;
              v35 = (const struct D2D_VECTOR_2F *)&v39 + v29;
              v36 = (const struct CMilPoint2F *)&v50[2 * v29 - 1];
              while ( !CRoundedRectangleGeometryData::IsPointOutsideCorner(
                         (const struct CMilPoint2F *)((char *)&v44 + 8 * v34),
                         v36,
                         v35) )
              {
                v34 = (unsigned int)(v37 + 1);
                if ( (unsigned int)v34 >= 4 )
                  goto LABEL_28;
              }
              return 0;
            }
            v32 = (float)(*(float *)((char *)&v44 + v30) - v50[v30 / 4 - 1]) / *(float *)((char *)&v39 + v30);
            if ( v32 > 0.0 )
            {
              v33 = (float)(*(float *)((char *)&v44 + v30 + 4) - v50[v30 / 4]) / *(float *)((char *)&v39 + v30 + 4);
              if ( v33 > 0.0 && (float)((float)(v33 * v33) + (float)(v32 * v32)) > 1.0 )
                return 0;
            }
          }
LABEL_28:
          ++v29;
          v30 += 8LL;
        }
        while ( v29 < 4 );
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
