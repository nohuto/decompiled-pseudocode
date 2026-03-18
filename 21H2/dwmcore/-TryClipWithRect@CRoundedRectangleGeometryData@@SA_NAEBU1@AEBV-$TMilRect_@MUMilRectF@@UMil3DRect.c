/*
 * XREFs of ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1800846CC
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??$IsCloseToEmpty@X@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NM@Z @ 0x1800866A0 (--$IsCloseToEmpty@X@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NM@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AD06C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

bool __fastcall CRoundedRectangleGeometryData::TryClipWithRect(__int64 a1)
{
  __int128 *v1; // r8
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  float v5; // xmm8_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  __int64 v13; // r10
  int v14; // xmm4_4
  float v15; // xmm5_4
  char v16; // al
  float v17; // xmm9_4
  float v18; // xmm5_4
  float v19; // xmm8_4
  bool v20; // si
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r10
  char v24; // r11
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  __int64 v29; // r9
  __int64 v30; // r10
  char v31; // r11
  float v32; // xmm4_4
  unsigned __int64 v33; // rcx
  float v34; // xmm2_4
  float v35; // xmm1_4
  __int64 v36; // r9
  __int64 v37; // r10
  unsigned __int64 v38; // rcx
  float v39; // xmm0_4
  float v40; // xmm1_4
  __int64 v41; // r9
  __int64 v42; // r10
  float v43; // xmm5_4
  unsigned __int64 v44; // rcx
  float v45; // xmm1_4
  float v46; // xmm0_4
  __int128 v48; // [rsp+28h] [rbp-29h] BYREF
  __int128 v49; // [rsp+38h] [rbp-19h] BYREF

  CRoundedRectangleGeometryData::GetBaseRect(a1, &v49);
  v48 = *v1;
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v48);
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v48) )
  {
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v4 + 16);
    *(_OWORD *)(v3 + 32) = *(_OWORD *)(v4 + 32);
    *(_QWORD *)(v3 + 48) = *(_QWORD *)(v4 + 48);
    return 1;
  }
  v5 = *(float *)&v49;
  v6 = *(float *)v2;
  v48 = v49;
  if ( v6 > *(float *)&v49 )
    *(float *)&v48 = v6;
  else
    v6 = *(float *)&v48;
  v7 = *(float *)(v2 + 4);
  v8 = *((float *)&v48 + 1);
  if ( v7 > *((float *)&v48 + 1) )
  {
    DWORD1(v48) = *(_DWORD *)(v2 + 4);
    v8 = v7;
  }
  v9 = *((float *)&v48 + 2);
  v10 = *((float *)&v48 + 2);
  if ( *((float *)&v48 + 2) > *(float *)(v2 + 8) )
  {
    DWORD2(v48) = *(_DWORD *)(v2 + 8);
    v9 = *((float *)&v48 + 2);
    v10 = *((float *)&v48 + 2);
  }
  v11 = *((float *)&v48 + 3);
  v12 = *((float *)&v48 + 3);
  if ( *((float *)&v48 + 3) > *(float *)(v2 + 12) )
  {
    HIDWORD(v48) = *(_DWORD *)(v2 + 12);
    v11 = *((float *)&v48 + 3);
    v12 = *((float *)&v48 + 3);
  }
  if ( v10 <= v6
    || v12 <= v8
    || (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsCloseToEmpty<void>(&v48) )
  {
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    *(_WORD *)(v3 + 52) = 1;
    return 1;
  }
  v16 = *(_BYTE *)(v13 + 53);
  v17 = *((float *)&v49 + 2);
  *(float *)v3 = v15;
  *(_DWORD *)(v3 + 4) = v14;
  v18 = v15 - v5;
  v19 = *((float *)&v49 + 3);
  *(float *)(v3 + 8) = v9;
  *(float *)(v3 + 12) = v11;
  *(_BYTE *)(v3 + 53) = v16;
  *(_BYTE *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(v13 + 48);
  *(_OWORD *)(v3 + 16) = 0LL;
  *(_OWORD *)(v3 + 32) = 0LL;
  v20 = COERCE_FLOAT(LODWORD(v18) & _xmm) <= 0.0000011920929;
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v13, 0) )
  {
    v27 = *(float *)(v23 + 16);
    v28 = *(float *)(v23 + 20);
    if ( v20 && v24 )
    {
      *(float *)(v22 + 16) = v27;
      *(float *)(v22 + 20) = v28;
    }
    else if ( (float)(v27 - v26) > 0.0000011920929 && (float)(v28 - v25) > 0.0000011920929 )
    {
      return 0;
    }
  }
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v21, 1u) )
  {
    v33 = -(__int64)(*(_BYTE *)(v30 + 52) != 0) & 0xFFFFFFFFFFFFFFF8uLL;
    v34 = *(float *)(v33 + v30 + 24);
    v35 = *(float *)(v33 + v30 + 28);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - v17) & _xmm) <= 0.0000011920929 && v31 )
    {
      *(float *)(v29 + 24) = v34;
      *(float *)(v29 + 28) = v35;
    }
    else if ( (float)(v34 - (float)(v17 - v9)) > 0.0000011920929 && (float)(v35 - v32) > 0.0000011920929 )
    {
      return 0;
    }
  }
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v30, 2u) )
  {
    v38 = -(__int64)(*(_BYTE *)(v37 + 52) != 0) & 0xFFFFFFFFFFFFFFF0uLL;
    v39 = *(float *)(v38 + v37 + 32);
    v40 = *(float *)(v38 + v37 + 36);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - v17) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v19) & _xmm) > 0.0000011920929 )
    {
      if ( (float)(v39 - (float)(v17 - v9)) > 0.0000011920929 && (float)(v40 - (float)(v19 - v11)) > 0.0000011920929 )
        return 0;
    }
    else
    {
      *(float *)(v36 + 32) = v39;
      *(float *)(v36 + 36) = v40;
    }
  }
  if ( !CRoundedRectangleGeometryData::IsRoundedCorner(v37, 3u) )
    return 1;
  v44 = -(__int64)(*(_BYTE *)(v42 + 52) != 0) & 0xFFFFFFFFFFFFFFE8uLL;
  v45 = *(float *)(v44 + v42 + 40);
  v46 = *(float *)(v44 + v42 + 44);
  if ( v20 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v19) & _xmm) <= 0.0000011920929 )
  {
    *(float *)(v41 + 40) = v45;
    *(float *)(v41 + 44) = v46;
    return 1;
  }
  return (float)(v45 - v43) <= 0.0000011920929 || (float)(v46 - (float)(v19 - v11)) <= 0.0000011920929;
}
