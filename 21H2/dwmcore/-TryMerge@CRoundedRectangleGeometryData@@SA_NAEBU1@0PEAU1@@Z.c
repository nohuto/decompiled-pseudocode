/*
 * XREFs of ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1801916A0
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??$IsCloseToEmpty@X@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NM@Z @ 0x1800866A0 (--$IsCloseToEmpty@X@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NM@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _lambda_130f3fd38fafab82521855fb46aefe92_::operator() @ 0x180191350 (_lambda_130f3fd38fafab82521855fb46aefe92_--operator().c)
 */

char __fastcall CRoundedRectangleGeometryData::TryMerge(
        const struct CRoundedRectangleGeometryData *a1,
        const struct CRoundedRectangleGeometryData *a2,
        struct CRoundedRectangleGeometryData *a3)
{
  __int64 BaseRect; // rax
  __int64 v6; // r8
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  __int64 v15; // rcx
  int *v16; // r9
  int v17; // xmm4_4
  int v18; // xmm5_4
  __int64 v19; // rcx
  float v21; // [rsp+20h] [rbp-48h] BYREF
  float v22; // [rsp+24h] [rbp-44h]
  float v23; // [rsp+28h] [rbp-40h]
  float v24; // [rsp+2Ch] [rbp-3Ch]
  _BYTE v25[16]; // [rsp+30h] [rbp-38h] BYREF

  CRoundedRectangleGeometryData::GetBaseRect((__int64)a1, (__int64)&v21);
  BaseRect = CRoundedRectangleGeometryData::GetBaseRect((__int64)a2, (__int64)v25);
  v7 = v21;
  v8 = *(float *)BaseRect;
  if ( *(float *)BaseRect > v21 )
  {
    v21 = *(float *)BaseRect;
    v7 = v8;
  }
  v9 = v22;
  v10 = *(float *)(BaseRect + 4);
  v11 = v22;
  if ( v10 > v22 )
  {
    v22 = *(float *)(BaseRect + 4);
    v9 = v10;
    v11 = v10;
  }
  v12 = v23;
  v13 = v23;
  if ( v23 > *(float *)(BaseRect + 8) )
  {
    v23 = *(float *)(BaseRect + 8);
    v12 = v23;
    v13 = v23;
  }
  v14 = v24;
  if ( v24 > *(float *)(BaseRect + 12) )
  {
    v24 = *(float *)(BaseRect + 12);
    v14 = v24;
  }
  if ( v13 <= v7
    || v14 <= v11
    || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsCloseToEmpty<void>(&v21, 0.0000011920929) )
  {
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) = 0;
    *(_DWORD *)(v6 + 48) = 0;
    *(_WORD *)(v6 + 52) = 1;
  }
  else
  {
    *(_WORD *)(v6 + 52) = 0;
    *(_DWORD *)v6 = v17;
    *(float *)(v6 + 4) = v9;
    *(float *)(v6 + 8) = v12;
    *(_DWORD *)(v6 + 12) = v18;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_OWORD *)(v6 + 32) = 0LL;
    if ( !lambda_130f3fd38fafab82521855fb46aefe92_::operator()(v15, v16, (CRoundedRectangleGeometryData *)v6)
      || !lambda_130f3fd38fafab82521855fb46aefe92_::operator()(v19, (int *)a2, a3) )
    {
      return 0;
    }
  }
  return 1;
}
