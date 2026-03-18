/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1802131C8
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1802498C8 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180213630 (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180260414 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

char __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        char a6,
        float *a7,
        float *a8)
{
  int SourceInputBounds; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // r9
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // xmm2_4
  int v21; // xmm3_4
  __int64 v22; // r9
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm5_4
  float v39; // xmm4_4
  float v40; // xmm1_4
  int v42; // r9d
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  __int128 v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+58h] [rbp-A8h]
  _OWORD v47[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v48; // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v51; // [rsp+D0h] [rbp-30h] BYREF
  int v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+E4h] [rbp-1Ch]
  __int128 v54; // [rsp+E8h] [rbp-18h] BYREF
  int v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+FCh] [rbp-4h]
  __int128 v57; // [rsp+100h] [rbp+0h] BYREF
  int v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+114h] [rbp+14h]
  __int128 v60; // [rsp+118h] [rbp+18h] BYREF
  int v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+12Ch] [rbp+2Ch]
  __int128 v63; // [rsp+130h] [rbp+30h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024809, 0x2EFu);
    return 0;
  }
  v52 = 0;
  v53 = 0;
  v55 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v63 = 0LL;
  v46 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v54 = 0LL;
  v57 = 0LL;
  v60 = 0LL;
  SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, &v44);
  if ( SourceInputBounds < 0 )
  {
    v43 = 688;
    goto LABEL_37;
  }
  v13 = *(_DWORD *)(a4 + 64);
  v14 = *(_OWORD *)(a4 + 16);
  v47[0] = *(_OWORD *)a4;
  v15 = *(_OWORD *)(a4 + 32);
  v48 = v13;
  v47[1] = v14;
  v16 = *(_OWORD *)(a4 + 48);
  v47[2] = v15;
  v47[3] = v16;
  if ( !(unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v47, a5, &v63) )
  {
    v42 = -2147024809;
    v43 = 706;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v42, v43);
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v44);
    return 0;
  }
  SourceInputBounds = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 112) + 96LL))(
                        *(_QWORD *)(a1 + 112),
                        &v63,
                        a2,
                        v44,
                        v46,
                        &v49,
                        &v50);
  if ( SourceInputBounds < 0 )
  {
    v43 = 702;
LABEL_37:
    v42 = SourceInputBounds;
    goto LABEL_35;
  }
  v18 = v49;
  if ( a6 )
  {
    v19 = v50;
  }
  else
  {
    v20 = *(_DWORD *)(a2 + 16);
    v21 = *(_DWORD *)(a2 + 20);
    v51 = v49;
    v52 = v20;
    v54 = v50;
    v53 = v21;
    v55 = v20;
    v56 = v21;
    CMILMatrix::Transform3DBoundsHelper<1>(a4, (float *)&v51, (float *)&v57, v17);
    CMILMatrix::Transform3DBoundsHelper<1>(a4, (float *)&v54, (float *)&v60, v22);
    v18 = v57;
    v19 = v60;
  }
  *(_OWORD *)a7 = v18;
  *(_OWORD *)a8 = v19;
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a7) )
  {
    v23 = *a5;
    v24 = *a7;
    if ( *a5 > *a7 )
    {
      *a7 = v23;
      v24 = v23;
    }
    v25 = a5[1];
    v26 = a7[1];
    if ( v25 > v26 )
    {
      a7[1] = v25;
      v26 = v25;
    }
    v27 = a7[2];
    v28 = a5[2];
    v29 = v27;
    if ( v27 > v28 )
    {
      a7[2] = v28;
      v27 = v28;
      v29 = v28;
    }
    v30 = a5[3];
    v31 = a7[3];
    if ( v31 > v30 )
    {
      a7[3] = v30;
      v27 = v29;
      v31 = v30;
    }
    if ( v27 <= v24 || v31 <= v26 )
    {
      *((_QWORD *)a7 + 1) = 0LL;
      *(_QWORD *)a7 = 0LL;
    }
  }
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a8) )
  {
    v32 = *a5;
    v33 = *a8;
    if ( *a5 > *a8 )
    {
      *a8 = v32;
      v33 = v32;
    }
    v34 = a5[1];
    v35 = a8[1];
    if ( v34 > v35 )
    {
      a8[1] = v34;
      v35 = v34;
    }
    v36 = a8[2];
    v37 = a5[2];
    v38 = v36;
    if ( v36 > v37 )
    {
      a8[2] = v37;
      v36 = v37;
      v38 = v37;
    }
    v39 = a5[3];
    v40 = a8[3];
    if ( v40 > v39 )
    {
      a8[3] = v39;
      v36 = v38;
      v40 = v39;
    }
    if ( v36 <= v33 || v40 <= v35 )
    {
      *((_QWORD *)a8 + 1) = 0LL;
      *(_QWORD *)a8 = 0LL;
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v44);
  return 1;
}
