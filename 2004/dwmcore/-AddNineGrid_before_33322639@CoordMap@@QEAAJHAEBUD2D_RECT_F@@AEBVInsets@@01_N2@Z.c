/*
 * XREFs of ?AddNineGrid_before_33322639@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x1800EE448
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

__int64 __fastcall CoordMap::AddNineGrid_before_33322639(
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
  __int64 *v16; // r8
  float *v17; // r10
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
  bool v40; // zf
  __int64 *v41; // r15
  int v42; // eax
  int v43; // eax
  float v44; // xmm0_4
  float v45; // xmm7_4
  int v46; // eax
  char v47; // r12
  float bottom; // xmm2_4
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // eax
  __int64 v53; // rcx
  float v55; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v57; // [rsp+40h] [rbp-C8h]
  float v58; // [rsp+44h] [rbp-C4h]
  int v59; // [rsp+48h] [rbp-C0h]
  float right; // [rsp+4Ch] [rbp-BCh]
  float v61; // [rsp+50h] [rbp-B8h]
  float v62; // [rsp+54h] [rbp-B4h]
  __int64 *v63; // [rsp+58h] [rbp-B0h]
  float v64; // [rsp+60h] [rbp-A8h]
  float v65; // [rsp+64h] [rbp-A4h]
  __int64 v66; // [rsp+68h] [rbp-A0h]
  const struct D2D_RECT_F *v67; // [rsp+70h] [rbp-98h]
  __int128 v68; // [rsp+78h] [rbp-90h] BYREF

  v67 = a3;
  v63 = (__int64 *)this;
  if ( a8 )
    v8 = FLOAT_0_5;
  else
    v8 = 0.0;
  top = a3->top;
  right = a3->right;
  v10 = a5->bottom - a5->top;
  v11 = a5->right - a5->left;
  *(FLOAT *)&v66 = a3->bottom;
  v65 = top;
  v64 = v10;
  v62 = right;
  v61 = *(float *)&v66 - top;
  Insets::Clamp(&v55, (float *)a4, right, *(float *)&v66 - top);
  if ( v55 < 0.00000011920929 )
    v55 = 0.0;
  v12 = v57;
  if ( v57 < 0.00000011920929 )
  {
    v12 = 0.0;
    v57 = 0.0;
  }
  v13 = left;
  if ( left < 0.00000011920929 )
  {
    v13 = 0.0;
    left = 0.0;
  }
  v14 = v58;
  if ( v58 < 0.00000011920929 )
  {
    v14 = 0.0;
    v58 = 0.0;
  }
  Insets::Clamp((float *)&v68, (float *)a6, v11, v10);
  v18 = *(float *)&v68;
  if ( v8 > *(float *)&v68 )
  {
    v18 = 0.0;
    LODWORD(v68) = 0;
  }
  v19 = *((float *)&v68 + 2);
  if ( v8 > *((float *)&v68 + 2) )
  {
    v19 = 0.0;
    DWORD2(v68) = 0;
  }
  v20 = *((float *)&v68 + 1);
  if ( v8 > *((float *)&v68 + 1) )
  {
    v20 = 0.0;
    DWORD1(v68) = 0;
  }
  v21 = *((float *)&v68 + 3);
  if ( v8 > *((float *)&v68 + 3) )
  {
    v21 = 0.0;
    HIDWORD(v68) = 0;
  }
  v22 = a7;
  v23 = FLOAT_0_0000011920929;
  v24 = v55;
  if ( !a7 )
    goto LABEL_81;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v62 - (float)(v12 + v55)) & _xmm) <= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v61 - (float)(v14 + v13)) & _xmm) <= 0.0000011920929 )
  {
    v22 = 0;
  }
  if ( !v22 )
  {
LABEL_81:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v11 - v18) - v19) - (float)((float)(v62 - v55) - v12)) & _xmm) <= 0.0000011920929 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - v55) & _xmm) <= 0.0000011920929 )
      {
        v24 = 0.0;
        v18 = 0.0;
        v55 = 0.0;
        LODWORD(v68) = 0;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - v12) & _xmm) <= 0.0000011920929 )
      {
        v12 = 0.0;
        v19 = 0.0;
        v57 = 0.0;
        DWORD2(v68) = 0;
      }
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v64 - v20) - v21) - (float)((float)(v61 - v13) - v14)) & _xmm) <= 0.0000011920929 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v13) & _xmm) <= 0.0000011920929 )
      {
        v13 = 0.0;
        v20 = 0.0;
        left = 0.0;
        DWORD1(v68) = 0;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v14) & _xmm) <= 0.0000011920929 )
      {
        v14 = 0.0;
        v21 = 0.0;
        v58 = 0.0;
        HIDWORD(v68) = 0;
      }
    }
    if ( !v22 && Insets::IsEmpty((const struct Insets *)&v55) && Insets::IsEmpty((const struct Insets *)&v68) )
      return 0;
  }
  v25 = v23 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v62 - (float)(v12 + v24)) & _xmm);
  v26 = v12 > 0.0;
  v27 = *v17;
  v28 = v23 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v61 - (float)(v14 + v13)) & _xmm);
  v29 = *v17 + v24;
  LOBYTE(v59) = v14 > 0.0;
  if ( v23 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v62 - (float)(v12 + v24)) & _xmm) )
    right = v29;
  else
    right = right - v12;
  v30 = v65 + v13;
  if ( v23 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v61 - (float)(v14 + v13)) & _xmm) )
    v31 = v65 + v13;
  else
    v31 = *(float *)&v66 - v14;
  if ( v24 <= 0.0 )
  {
    if ( v25 )
      goto LABEL_53;
    goto LABEL_50;
  }
  left = a5->left;
  v57 = left;
  v55 = v27;
  v32 = CoordMap::AddEntry(v15, v16, (__int64)v16, (__int64)&v55, 0);
  v33 = v32;
  if ( v32 >= 0 )
  {
    v16 = v63;
LABEL_50:
    v55 = v29;
    v34 = (float)(v18 - v8) + a5->left;
    v35 = (float)(v18 + v8) + a5->left;
    left = v34;
    v57 = v35;
    v36 = CoordMap::AddEntry(v15, v16, (__int64)v16, (__int64)&v55, 2);
    v33 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v36, 0x209u, 0LL);
      return v33;
    }
    v16 = v63;
LABEL_53:
    if ( !v26 && v25 )
    {
      v38 = right;
      v41 = v63;
    }
    else
    {
      v37 = a5->right;
      v38 = right;
      v55 = right;
      left = v37 - (float)(v19 + v8);
      v57 = v37 - (float)(v19 - v8);
      v39 = CoordMap::AddEntry(v15, v16, (__int64)v16, (__int64)&v55, 2);
      v33 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v39, 0x210u, 0LL);
        return v33;
      }
      v40 = !v26;
      v41 = v63;
      if ( !v40 )
      {
        left = a5->right;
        v57 = left;
        v55 = v67->right;
        v42 = CoordMap::AddEntry(v15, v63, (__int64)v16, (__int64)&v55, 0);
        v33 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v42, 0x215u, 0LL);
          return v33;
        }
      }
    }
    if ( v13 <= 0.0 )
    {
      if ( v28 )
        goto LABEL_66;
    }
    else
    {
      left = a5->top;
      v57 = left;
      v55 = v67->top;
      v43 = CoordMap::AddEntry(v15, v41 + 23, (__int64)v16, (__int64)&v55, 0);
      v33 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v43, 0x21Au, 0LL);
        return v33;
      }
    }
    v55 = v30;
    v44 = (float)(v20 - v8) + a5->top;
    v45 = (float)(v20 + v8) + a5->top;
    left = v44;
    v57 = v45;
    v46 = CoordMap::AddEntry(v15, v41 + 23, (__int64)v16, (__int64)&v55, 2);
    v33 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v46, 0x221u, 0LL);
      return v33;
    }
LABEL_66:
    v47 = v59;
    if ( (_BYTE)v59 || !v28 )
    {
      bottom = a5->bottom;
      v55 = v31;
      left = bottom - (float)(v21 + v8);
      v57 = bottom - (float)(v21 - v8);
      v49 = CoordMap::AddEntry(v15, v41 + 23, (__int64)v16, (__int64)&v55, 2);
      v33 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x228u, 0LL);
        return v33;
      }
      if ( v47 )
      {
        left = a5->bottom;
        v57 = left;
        v55 = v67->bottom;
        v52 = CoordMap::AddEntry(v50, v41 + 23, v51, (__int64)&v55, 0);
        v33 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x22Du, 0LL);
          return v33;
        }
      }
    }
    if ( v22 )
    {
      *(_QWORD *)&v68 = __PAIR64__(LODWORD(v30), LODWORD(v29));
      *((_QWORD *)&v68 + 1) = __PAIR64__(LODWORD(v31), LODWORD(v38));
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::push_back(
        v41 + 46,
        &v68);
    }
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v32, 0x202u, 0LL);
  return v33;
}
