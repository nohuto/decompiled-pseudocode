/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180011F1C
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18001084C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000FA64 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x18001069C (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x1800125D0 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18001364C (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7,
        bool a8)
{
  float v8; // xmm8_4
  float top; // xmm2_4
  float v10; // xmm7_4
  float v11; // xmm15_4
  float v12; // xmm13_4
  float v13; // xmm14_4
  float v14; // xmm12_4
  __int64 v15; // rcx
  float *v16; // r8
  __int64 *v17; // r10
  float v18; // xmm9_4
  float v19; // xmm11_4
  float v20; // xmm7_4
  float v21; // xmm10_4
  bool v22; // r13
  float v23; // xmm4_4
  float v24; // xmm5_4
  bool v25; // di
  bool v26; // r15
  float v27; // xmm1_4
  bool v28; // r14
  float v29; // xmm6_4
  float v30; // xmm15_4
  float v31; // xmm13_4
  int v32; // eax
  unsigned int v33; // ebx
  float v34; // xmm0_4
  float v35; // xmm9_4
  int v36; // eax
  float v37; // xmm2_4
  float v38; // xmm9_4
  int v39; // eax
  __int64 *v40; // rdi
  bool v41; // zf
  const struct D2D_RECT_F *v42; // r15
  float v43; // xmm1_4
  int v44; // eax
  __int64 *v45; // rdi
  float v46; // xmm1_4
  int v47; // eax
  float v48; // xmm0_4
  float v49; // xmm7_4
  int v50; // eax
  char v51; // r15
  float v52; // xmm2_4
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  unsigned int v56; // ecx
  __int128 v58; // xmm6
  float v59; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v61; // [rsp+40h] [rbp-C8h]
  float v62; // [rsp+44h] [rbp-C4h]
  int v63; // [rsp+48h] [rbp-C0h]
  float right; // [rsp+4Ch] [rbp-BCh]
  float v65; // [rsp+50h] [rbp-B8h]
  __int128 v66; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+68h] [rbp-A0h]
  __int64 *v68; // [rsp+70h] [rbp-98h]
  const struct D2D_RECT_F *v69; // [rsp+78h] [rbp-90h]
  float v70; // [rsp+80h] [rbp-88h]
  float v71; // [rsp+84h] [rbp-84h]
  float bottom; // [rsp+88h] [rbp-80h]

  v69 = a3;
  v68 = (__int64 *)this;
  if ( a8 )
    v8 = FLOAT_0_5;
  else
    v8 = 0.0;
  top = a3->top;
  right = a3->right;
  v10 = a5->bottom - a5->top;
  v11 = a5->right - a5->left;
  bottom = a3->bottom;
  v71 = top;
  v70 = v10;
  *(float *)&v67 = right;
  v65 = bottom - top;
  Insets::Clamp(&v59, a4);
  if ( v59 < 0.00000011920929 )
    v59 = 0.0;
  v12 = v61;
  if ( v61 < 0.00000011920929 )
  {
    v12 = 0.0;
    v61 = 0.0;
  }
  v13 = left;
  if ( left < 0.00000011920929 )
  {
    v13 = 0.0;
    left = 0.0;
  }
  v14 = v62;
  if ( v62 < 0.00000011920929 )
  {
    v14 = 0.0;
    v62 = 0.0;
  }
  Insets::Clamp(&v66, a6);
  v18 = *(float *)&v66;
  if ( v8 > *(float *)&v66 )
  {
    v18 = 0.0;
    LODWORD(v66) = 0;
  }
  v19 = *((float *)&v66 + 2);
  if ( v8 > *((float *)&v66 + 2) )
  {
    v19 = 0.0;
    DWORD2(v66) = 0;
  }
  v20 = *((float *)&v66 + 1);
  if ( v8 > *((float *)&v66 + 1) )
  {
    v20 = 0.0;
    DWORD1(v66) = 0;
  }
  v21 = *((float *)&v66 + 3);
  if ( v8 > *((float *)&v66 + 3) )
  {
    v21 = 0.0;
    HIDWORD(v66) = 0;
  }
  v22 = a7;
  v23 = FLOAT_0_0000011920929;
  v24 = v59;
  if ( a7 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v67 - (float)(v12 + v59)) & _xmm) <= 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v65 - (float)(v14 + v13)) & _xmm) <= 0.0000011920929 )
    {
      v22 = 0;
    }
    if ( v22 )
      goto LABEL_24;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v11 - v18) - v19) - (float)((float)(*(float *)&v67 - v59) - v12)) & _xmm) <= 0.0000011920929 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - v59) & _xmm) <= 0.0000011920929 )
    {
      v24 = 0.0;
      v18 = 0.0;
      v59 = 0.0;
      LODWORD(v66) = 0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - v12) & _xmm) <= 0.0000011920929 )
    {
      v12 = 0.0;
      v19 = 0.0;
      v61 = 0.0;
      DWORD2(v66) = 0;
    }
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v70 - v20) - v21) - (float)((float)(v65 - v13) - v14)) & _xmm) <= 0.0000011920929 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v13) & _xmm) <= 0.0000011920929 )
    {
      v13 = 0.0;
      v20 = 0.0;
      left = 0.0;
      DWORD1(v66) = 0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v14) & _xmm) <= 0.0000011920929 )
    {
      v14 = 0.0;
      v21 = 0.0;
      v62 = 0.0;
      HIDWORD(v66) = 0;
    }
  }
  if ( v22 || !Insets::IsEmpty((const struct Insets *)&v59) || !Insets::IsEmpty((const struct Insets *)&v66) )
  {
LABEL_24:
    v25 = v23 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v67 - (float)(v12 + v24)) & _xmm);
    v26 = v12 > 0.0;
    v27 = *v16;
    v28 = v23 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v65 - (float)(v14 + v13)) & _xmm);
    v29 = *v16 + v24;
    LOBYTE(v63) = v14 > 0.0;
    if ( v23 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v67 - (float)(v12 + v24)) & _xmm) )
      right = v29;
    else
      right = right - v12;
    v30 = v71 + v13;
    if ( v23 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v65 - (float)(v14 + v13)) & _xmm) )
      v31 = v71 + v13;
    else
      v31 = bottom - v14;
    if ( v24 <= 0.0 )
    {
      if ( v25 )
        goto LABEL_33;
    }
    else
    {
      left = a5->left;
      v61 = left;
      v59 = v27;
      v32 = CoordMap::AddEntry(v15, v17, (__int64)v16, (__int64)&v59, 0);
      v33 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v32, 0x19Cu, 0LL);
        return v33;
      }
      v17 = v68;
    }
    v59 = v29;
    v34 = (float)(v18 - v8) + a5->left;
    v35 = (float)(v18 + v8) + a5->left;
    left = v34;
    v61 = v35;
    v36 = CoordMap::AddEntry(v15, v17, (__int64)v16, (__int64)&v59, 2);
    v33 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v36, 0x1A3u, 0LL);
      return v33;
    }
    v17 = v68;
LABEL_33:
    if ( v26 || !v25 )
    {
      v37 = a5->right;
      v38 = right;
      v59 = right;
      left = v37 - (float)(v19 + v8);
      v61 = v37 - (float)(v19 - v8);
      v39 = CoordMap::AddEntry(v15, v17, (__int64)v16, (__int64)&v59, 2);
      v33 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v39, 0x1AAu, 0LL);
        return v33;
      }
      v40 = v68;
      v41 = !v26;
      v42 = v69;
      if ( !v41 )
      {
        v43 = a5->right;
        v59 = v69->right;
        left = v43;
        v61 = v43;
        v44 = CoordMap::AddEntry(v15, v68, (__int64)v16, (__int64)&v59, 0);
        v33 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v44, 0x1AFu, 0LL);
          return v33;
        }
      }
    }
    else
    {
      v38 = right;
      v42 = v69;
      v40 = v68;
    }
    v45 = v40 + 23;
    if ( v13 <= 0.0 )
    {
      if ( v28 )
        goto LABEL_40;
    }
    else
    {
      v46 = a5->top;
      v59 = v42->top;
      left = v46;
      v61 = v46;
      v47 = CoordMap::AddEntry(v15, v45, (__int64)v16, (__int64)&v59, 0);
      v33 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v47, 0x1B4u, 0LL);
        return v33;
      }
    }
    v59 = v30;
    v48 = (float)(v20 - v8) + a5->top;
    v49 = (float)(v20 + v8) + a5->top;
    left = v48;
    v61 = v49;
    v50 = CoordMap::AddEntry(v15, v45, (__int64)v16, (__int64)&v59, 2);
    v33 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v50, 0x1BBu, 0LL);
      return v33;
    }
LABEL_40:
    v51 = v63;
    if ( (_BYTE)v63 || !v28 )
    {
      v52 = a5->bottom;
      v59 = v31;
      left = v52 - (float)(v21 + v8);
      v61 = v52 - (float)(v21 - v8);
      v53 = CoordMap::AddEntry(v15, v45, (__int64)v16, (__int64)&v59, 2);
      v33 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x1C2u, 0LL);
        return v33;
      }
      if ( v51 )
      {
        left = a5->bottom;
        v61 = left;
        v59 = v69->bottom;
        v55 = CoordMap::AddEntry(v54, v45, (__int64)v16, (__int64)&v59, 0);
        v33 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x1C7u, 0LL);
          return v33;
        }
      }
    }
    if ( v22 )
    {
      *(_QWORD *)&v66 = __PAIR64__(LODWORD(v30), LODWORD(v29));
      *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v31), LODWORD(v38));
      v58 = v66;
      *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                   (void **)v68 + 46,
                   (v68[47] - v68[46]) >> 4,
                   (__int64)v16) = v58;
    }
  }
  return 0;
}
