/*
 * XREFs of ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CAB30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetBoundsForOcclusion(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rcx
  char v7; // r9
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float *v14; // r8
  float *v15; // rdx
  float *v16; // rax
  float *v17; // rcx
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  __int128 v22; // xmm0
  __int64 v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-68h]
  __int128 v26; // [rsp+30h] [rbp-58h] BYREF

  v4 = a1[2] + 16LL;
  if ( *(_BYTE *)(v4 + 52) )
  {
    v5 = 0;
  }
  else
  {
    if ( *(float *)(v4 + 16) > 0.0 && *(float *)(v4 + 20) > 0.0
      || CRoundedRectangleGeometryData::IsRoundedCorner(v4, 1u)
      || CRoundedRectangleGeometryData::IsRoundedCorner(v24, 2u) )
    {
      goto LABEL_7;
    }
    v5 = 3;
  }
  if ( !CRoundedRectangleGeometryData::IsRoundedCorner(v4, v5) )
  {
LABEL_16:
    v22 = *(_OWORD *)CRoundedRectangleGeometryData::GetBaseRect(a1[2] + 16LL, (__int64)&v26);
    goto LABEL_14;
  }
LABEL_7:
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1) )
    goto LABEL_16;
  v6 = a1[2];
  v7 = *(_BYTE *)(v6 + 68);
  v8 = *(float *)(v6 + 20);
  v9 = *(float *)(v6 + 16);
  *((float *)&v25 + 1) = v8;
  if ( v7 )
  {
    v10 = v9 + *(float *)(v6 + 24);
    v11 = v8 + *(float *)(v6 + 28);
  }
  else
  {
    v10 = *(float *)(v6 + 24);
    v11 = *(float *)(v6 + 28);
  }
  *((float *)&v25 + 3) = v11;
  v12 = *(float *)(v6 + 16);
  *(float *)&v26 = v12;
  v13 = v10;
  *((float *)&v26 + 2) = v10;
  v14 = (float *)(v6 + 32);
  if ( v7 )
  {
    v18 = *(float *)(v6 + 36);
    v19 = v9 + *v14;
    v20 = v10 - *v14;
    v21 = v11 - v18;
  }
  else
  {
    v15 = (float *)(v6 + 40);
    v16 = (float *)(v6 + 56);
    v17 = (float *)(v6 + 48);
    v18 = fmaxf(v14[1], v15[1]);
    v19 = v9 + fmaxf(*v14, *v16);
    v20 = v10 - fmaxf(*v15, *v17);
    v21 = v11 - fmaxf(v16[1], v17[1]);
  }
  *((float *)&v25 + 2) = v20;
  *((float *)&v26 + 3) = v21;
  *(float *)&v25 = v19;
  *((float *)&v26 + 1) = v18 + v8;
  if ( (float)((float)(v13 - v12) * (float)(v21 - (float)(v18 + v8))) < (float)((float)(v20 - v19) * (float)(v11 - v8)) )
    v22 = v25;
  else
    v22 = v26;
LABEL_14:
  *a2 = v22;
  return 0LL;
}
