/*
 * XREFs of ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800B7D2C
 * Callers:
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006B960 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CRoundedRectangleShape::CalcEdgesAndControlPoints(CRoundedRectangleShape *this, struct CMilPoint2F *a2)
{
  float v2; // xmm7_4
  float v3; // xmm6_4
  int v4; // xmm5_4
  int v5; // xmm4_4
  __int64 v6; // r9
  __int64 v7; // r11
  float *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  float *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  float v14; // xmm5_4
  float *v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  float v18; // xmm4_4
  float *v19; // rcx
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float *v23; // r9
  __int64 v24; // r10
  float v25; // xmm4_4
  float v26; // xmm5_4
  char v27; // al
  float *v28; // rcx
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float *v32; // rcx
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  _DWORD v39[4]; // [rsp+20h] [rbp-48h] BYREF

  CRoundedRectangleGeometryData::GetBaseRect(*((_QWORD *)this + 2) + 16LL, (__int64)v39);
  v2 = *(float *)v39;
  v3 = *(float *)&v39[1];
  v4 = v39[2];
  v5 = v39[3];
  *(_DWORD *)v6 = v39[0];
  *(float *)(v6 + 4) = v3;
  *(_DWORD *)(v6 + 24) = v4;
  *(float *)(v6 + 28) = v3;
  *(float *)(v6 + 64) = v2;
  *(_DWORD *)(v6 + 68) = v5;
  *(_DWORD *)(v6 + 88) = v4;
  *(_DWORD *)(v6 + 92) = v5;
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(*(_QWORD *)(v7 + 16) + 16LL, 0) )
  {
    v8[8] = v2;
    v36 = v3 + *(float *)(v9 + 36);
    v8[9] = v36;
    v37 = v2 + *(float *)(v9 + 32);
    v8[3] = v3;
    v8[24] = v2;
    v8[2] = v37;
    v8[25] = v36 - (float)(*(float *)(v9 + 36) * 0.55228478);
    v38 = *(float *)(v9 + 32) * 0.55228478;
    v8[27] = v3;
    v8[26] = v37 - v38;
    v9 = *(_QWORD *)(v10 + 16);
  }
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v9 + 16, 1u) )
  {
    v32 = (float *)(v12 + 40 + (-(__int64)(*(_BYTE *)(v12 + 68) != 0) & 0xFFFFFFFFFFFFFFF8uLL));
    v33 = v14 - *v32;
    v11[5] = v3;
    v11[10] = v14;
    v11[4] = v33;
    v34 = v3 + v32[1];
    v11[11] = v34;
    v35 = *v32 * 0.55228478;
    v11[29] = v3;
    v11[30] = v14;
    v11[28] = v35 + v33;
    v11[31] = v34 - (float)(v32[1] * 0.55228478);
    v12 = *(_QWORD *)(v13 + 16);
  }
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v12 + 16, 3u) )
  {
    v19 = (float *)(v16 + 56 + (-(__int64)(*(_BYTE *)(v16 + 68) != 0) & 0xFFFFFFFFFFFFFFE8uLL));
    v20 = v2 + *v19;
    v15[19] = v18;
    v15[12] = v2;
    v15[18] = v20;
    v21 = v18 - v19[1];
    v15[13] = v21;
    v22 = *v19 * 0.55228478;
    v15[37] = v18;
    v15[32] = v2;
    v15[36] = v20 - v22;
    v15[33] = (float)(v19[1] * 0.55228478) + v21;
    v16 = *(_QWORD *)(v17 + 16);
  }
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v16 + 16, 2u) )
  {
    v27 = *(_BYTE *)(v24 + 68);
    v23[14] = v26;
    v28 = (float *)(v24 + (-(__int64)(v27 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 48);
    v29 = v25 - v28[1];
    v23[15] = v29;
    v30 = v26 - *v28;
    v23[21] = v25;
    v23[34] = v26;
    v23[20] = v30;
    v23[35] = (float)(v28[1] * 0.55228478) + v29;
    v31 = *v28;
    v23[39] = v25;
    v23[38] = (float)(v31 * 0.55228478) + v30;
  }
}
