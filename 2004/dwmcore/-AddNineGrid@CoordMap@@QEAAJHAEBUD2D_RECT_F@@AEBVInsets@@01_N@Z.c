/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800EDCF4
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000946C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x1800092BC (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18000A694 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x1800CDAB8 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?push_back@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUD2D_RECT_F@@@Z @ 0x1800D436C (-push_back@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_pol.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7)
{
  float bottom; // xmm3_4
  float top; // xmm1_4
  float v9; // xmm13_4
  float v10; // xmm14_4
  float v11; // xmm0_4
  float v12; // xmm15_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  __int64 v16; // rcx
  __int64 *v17; // r8
  float *v18; // r10
  float v19; // xmm9_4
  float v20; // xmm2_4
  float v21; // xmm8_4
  float v22; // xmm4_4
  bool v23; // r12
  float v24; // xmm5_4
  float v25; // xmm13_4
  float v26; // xmm14_4
  bool v27; // al
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm5_4
  bool v31; // r15
  bool v32; // r14
  float v33; // xmm6_4
  float v34; // xmm15_4
  float v35; // xmm10_4
  float v36; // xmm7_4
  int v37; // eax
  unsigned int v38; // ebx
  float v39; // xmm9_4
  int v40; // eax
  float v41; // xmm0_4
  int v42; // eax
  __int64 *v43; // rdi
  bool v44; // zf
  const struct D2D_RECT_F *v45; // r15
  float v46; // xmm1_4
  int v47; // eax
  __int64 *v48; // rdi
  float v49; // xmm1_4
  int v50; // eax
  float v51; // xmm8_4
  int v52; // eax
  char v53; // r15
  float v54; // xmm0_4
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // eax
  __int64 v59; // rcx
  float v61; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v63; // [rsp+40h] [rbp-C8h]
  float v64; // [rsp+44h] [rbp-C4h]
  int v65; // [rsp+48h] [rbp-C0h]
  float v66; // [rsp+4Ch] [rbp-BCh]
  __int64 v67; // [rsp+50h] [rbp-B8h]
  __int64 *v68; // [rsp+58h] [rbp-B0h]
  const struct D2D_RECT_F *v69; // [rsp+60h] [rbp-A8h]
  float right; // [rsp+68h] [rbp-A0h]
  float v71; // [rsp+6Ch] [rbp-9Ch]
  float v72; // [rsp+70h] [rbp-98h]
  __int128 v73; // [rsp+78h] [rbp-90h] BYREF

  v69 = a3;
  v68 = (__int64 *)this;
  bottom = a3->bottom;
  top = a3->top;
  v9 = a5->right - a5->left;
  v10 = a5->bottom - a5->top;
  right = a3->right;
  v11 = right - a3->left;
  v72 = bottom;
  v71 = top;
  *(float *)&v67 = v11;
  v66 = bottom - top;
  Insets::Clamp((float *)&v73, (float *)a4, v11, bottom - top);
  v12 = *(float *)&v73;
  if ( *(float *)&v73 < 0.0000011920929 )
  {
    v12 = 0.0;
    LODWORD(v73) = 0;
  }
  v13 = *((float *)&v73 + 2);
  if ( *((float *)&v73 + 2) < 0.0000011920929 )
  {
    v13 = 0.0;
    DWORD2(v73) = 0;
  }
  v14 = *((float *)&v73 + 1);
  if ( *((float *)&v73 + 1) < 0.0000011920929 )
  {
    v14 = 0.0;
    DWORD1(v73) = 0;
  }
  v15 = *((float *)&v73 + 3);
  if ( *((float *)&v73 + 3) < 0.0000011920929 )
  {
    v15 = 0.0;
    HIDWORD(v73) = 0;
  }
  Insets::Clamp(&v61, (float *)a6, v9, v10);
  v19 = v61;
  if ( v61 < 0.0000011920929 )
  {
    v19 = 0.0;
    v61 = 0.0;
  }
  v20 = v63;
  if ( v63 < 0.0000011920929 )
  {
    v20 = 0.0;
    v63 = 0.0;
  }
  v21 = left;
  if ( left < 0.0000011920929 )
  {
    v21 = 0.0;
    left = 0.0;
  }
  v22 = v64;
  if ( v64 < 0.0000011920929 )
  {
    v22 = 0.0;
    v64 = 0.0;
  }
  v23 = a7;
  if ( !a7 )
    goto LABEL_25;
  v24 = v66;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v67 - (float)(v13 + v12)) & _xmm) <= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v66 - (float)(v15 + v14)) & _xmm) <= 0.0000011920929 )
  {
    v23 = 0;
  }
  if ( v23 )
  {
    v25 = v63;
    v26 = v64;
  }
  else
  {
LABEL_25:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 - v19) - v20) - (float)((float)(*(float *)&v67 - v12) - v13)) & _xmm) > 0.0000011920929 )
      goto LABEL_27;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - v12) & _xmm) <= 0.0000011920929 )
    {
      v12 = 0.0;
      v19 = 0.0;
      LODWORD(v73) = 0;
      v61 = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v13) & _xmm) > 0.0000011920929 )
    {
LABEL_27:
      v25 = v63;
    }
    else
    {
      v13 = 0.0;
      v25 = 0.0;
      DWORD2(v73) = 0;
      v63 = 0.0;
    }
    v24 = v66;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 - v21) - v22) - (float)((float)(v66 - v14) - v15)) & _xmm) > 0.0000011920929 )
      goto LABEL_33;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v14) & _xmm) <= 0.0000011920929 )
    {
      v14 = 0.0;
      v21 = 0.0;
      DWORD1(v73) = 0;
      left = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - v15) & _xmm) > 0.0000011920929 )
    {
LABEL_33:
      v26 = v64;
    }
    else
    {
      v15 = 0.0;
      v26 = 0.0;
      HIDWORD(v73) = 0;
      v64 = 0.0;
    }
    if ( !v23 && Insets::IsEmpty((const struct Insets *)&v73) && Insets::IsEmpty((const struct Insets *)&v61) )
      return 0;
  }
  v27 = v12 > 0.0;
  LODWORD(v28) = COERCE_UNSIGNED_INT(*(float *)&v67 - (float)(v13 + v12)) & _xmm;
  v29 = *v18;
  LODWORD(v30) = COERCE_UNSIGNED_INT(v24 - (float)(v15 + v14)) & _xmm;
  v31 = v13 > 0.0;
  v32 = v30 <= 0.0000011920929;
  v33 = *v18 + v12;
  LOBYTE(v65) = v15 > 0.0;
  if ( v28 <= 0.0000011920929 )
    v34 = v33;
  else
    v34 = right - v13;
  v35 = v71 + v14;
  if ( v30 <= 0.0000011920929 )
    v36 = v71 + v14;
  else
    v36 = v72 - v15;
  if ( !v27 )
  {
    if ( v28 <= 0.0000011920929 )
      goto LABEL_54;
    goto LABEL_51;
  }
  v61 = v29;
  left = a5->left;
  v63 = left;
  v37 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v61, 0);
  v38 = v37;
  if ( v37 >= 0 )
  {
    v17 = v68;
LABEL_51:
    v39 = v19 + a5->left;
    v61 = v33;
    left = v39;
    v63 = v39;
    v40 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v61, 2);
    v38 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v40, 0x163u, 0LL);
      return v38;
    }
    v17 = v68;
LABEL_54:
    if ( v31 || v28 > 0.0000011920929 )
    {
      v41 = a5->right - v25;
      v61 = v34;
      left = v41;
      v63 = v41;
      v42 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v61, 2);
      v38 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v42, 0x16Au, 0LL);
        return v38;
      }
      v43 = v68;
      v44 = !v31;
      v45 = v69;
      if ( !v44 )
      {
        v46 = a5->right;
        v61 = v69->right;
        left = v46;
        v63 = v46;
        v47 = CoordMap::AddEntry(v16, v68, (__int64)v17, (__int64)&v61, 0);
        v38 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v47, 0x16Fu, 0LL);
          return v38;
        }
      }
    }
    else
    {
      v43 = v68;
      v45 = v69;
    }
    v48 = v43 + 23;
    if ( v14 <= 0.0 )
    {
      if ( v32 )
        goto LABEL_67;
    }
    else
    {
      v49 = a5->top;
      v61 = v45->top;
      left = v49;
      v63 = v49;
      v50 = CoordMap::AddEntry(v16, v48, (__int64)v17, (__int64)&v61, 0);
      v38 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v50, 0x174u, 0LL);
        return v38;
      }
    }
    v51 = v21 + a5->top;
    v61 = v35;
    left = v51;
    v63 = v51;
    v52 = CoordMap::AddEntry(v16, v48, (__int64)v17, (__int64)&v61, 2);
    v38 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v52, 0x17Bu, 0LL);
      return v38;
    }
LABEL_67:
    v53 = v65;
    if ( (_BYTE)v65 || !v32 )
    {
      v54 = a5->bottom - v26;
      v61 = v36;
      left = v54;
      v63 = v54;
      v55 = CoordMap::AddEntry(v16, v48, (__int64)v17, (__int64)&v61, 2);
      v38 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x182u, 0LL);
        return v38;
      }
      if ( v53 )
      {
        left = a5->bottom;
        v63 = left;
        v61 = v69->bottom;
        v58 = CoordMap::AddEntry(v56, v48, v57, (__int64)&v61, 0);
        v38 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x187u, 0LL);
          return v38;
        }
      }
    }
    if ( v23 )
    {
      *(_QWORD *)&v73 = __PAIR64__(LODWORD(v35), LODWORD(v33));
      *((_QWORD *)&v73 + 1) = __PAIR64__(LODWORD(v36), LODWORD(v34));
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::push_back(
        v68 + 46,
        &v73);
    }
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v37, 0x15Cu, 0LL);
  return v38;
}
