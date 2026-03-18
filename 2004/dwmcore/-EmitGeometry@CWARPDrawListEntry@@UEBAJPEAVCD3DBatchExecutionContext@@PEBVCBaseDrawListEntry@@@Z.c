/*
 * XREFs of ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1801A32A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180041AC4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18004D928 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?IsCloseRealOneMatrixEpsilon@@YA_NM@Z @ 0x1800DDE50 (-IsCloseRealOneMatrixEpsilon@@YA_NM@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ApplyEdgeFlags @ 0x1801A30D8 (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801A3198 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801A396C (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 *     ?erase@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@2@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@2@@Z @ 0x1801A3E40 (-erase@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$00$.c)
 */

__int64 __fastcall CWARPDrawListEntry::EmitGeometry(
        CWARPDrawListEntry *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  CWARPDrawListEntry *v3; // r14
  struct CD3DBatchExecutionContext *v4; // rsi
  __m128 v5; // xmm2
  int **v6; // rdi
  _DWORD *v7; // rax
  __int128 v8; // xmm0
  int v9; // xmm1_4
  int v10; // xmm3_4
  int v11; // xmm4_4
  int v12; // xmm5_4
  int v13; // xmm6_4
  int v14; // xmm7_4
  int v15; // xmm8_4
  int *v16; // rbx
  D2DMatrixHelper *v17; // rdx
  FLOAT v18; // xmm1_4
  FLOAT v19; // xmm0_4
  FLOAT v20; // xmm1_4
  __int128 v21; // xmm0
  FLOAT v22; // xmm1_4
  unsigned int v23; // xmm1_4
  unsigned int v24; // xmm2_4
  unsigned int v25; // xmm3_4
  unsigned int v26; // xmm4_4
  FLOAT v27; // xmm5_4
  unsigned int v28; // ebx
  float v29; // xmm3_4
  float v30; // xmm2_4
  unsigned int v31; // xmm0_4
  unsigned int v32; // xmm3_4
  __m128 v33; // xmm2
  char *v34; // r12
  __int64 v35; // rax
  float v36; // xmm4_4
  float v37; // xmm2_4
  float v38; // xmm2_4
  float v39; // xmm2_4
  unsigned int v40; // r13d
  __int128 *v41; // r9
  char *v42; // rsi
  _BYTE *v43; // r15
  _BYTE *v44; // r14
  char *v45; // rdi
  const struct D2D1::Matrix3x2F *v46; // r8
  __int128 v47; // xmm0
  unsigned __int64 v48; // xmm1_8
  __int128 *v49; // r9
  _OWORD *v50; // r10
  _BYTE *v51; // r11
  BOOL v52; // eax
  int v53; // eax
  __int128 v54; // xmm0
  int *v55; // rdx
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // ebx
  unsigned int v59; // ecx
  int v60; // r8d
  bool v61; // zf
  int v62; // eax
  __int64 v63; // rcx
  void *v65[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct CD3DBatchExecutionContext *v66; // [rsp+48h] [rbp-C0h] BYREF
  __m128 v67; // [rsp+50h] [rbp-B8h]
  _BYTE *v68; // [rsp+60h] [rbp-A8h]
  __int128 *v69; // [rsp+68h] [rbp-A0h]
  _QWORD v70[5]; // [rsp+70h] [rbp-98h] BYREF
  int v71; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v72; // [rsp+A0h] [rbp-68h]
  int v73; // [rsp+A8h] [rbp-60h]
  int v74; // [rsp+ACh] [rbp-5Ch]
  unsigned int v75; // [rsp+B0h] [rbp-58h]
  _DWORD *v76; // [rsp+B8h] [rbp-50h]
  int *v77; // [rsp+C0h] [rbp-48h]
  char *v78; // [rsp+C8h] [rbp-40h]
  __int64 v79; // [rsp+D0h] [rbp-38h]
  CWARPDrawListEntry *v80; // [rsp+D8h] [rbp-30h]
  char v81[4]; // [rsp+E8h] [rbp-20h] BYREF
  char v82; // [rsp+ECh] [rbp-1Ch] BYREF
  int v83; // [rsp+168h] [rbp+60h] BYREF
  int v84; // [rsp+16Ch] [rbp+64h]
  __int32 v85; // [rsp+170h] [rbp+68h]
  int v86; // [rsp+174h] [rbp+6Ch]
  int v87; // [rsp+178h] [rbp+70h]
  int v88; // [rsp+17Ch] [rbp+74h]
  int v89; // [rsp+180h] [rbp+78h]
  int v90; // [rsp+184h] [rbp+7Ch]
  int v91; // [rsp+188h] [rbp+80h]
  struct D2D_MATRIX_3X2_F v92; // [rsp+190h] [rbp+88h] BYREF
  _DWORD v93[3]; // [rsp+1A8h] [rbp+A0h] BYREF
  float v94; // [rsp+1B4h] [rbp+ACh]
  D2D1_MATRIX_3X2_F matrix; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v96; // [rsp+1D0h] [rbp+C8h] BYREF
  __int128 v97; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v98[32]; // [rsp+1F0h] [rbp+E8h] BYREF
  _BYTE v99[48]; // [rsp+210h] [rbp+108h] BYREF

  v73 = 0;
  v3 = this;
  v80 = this;
  v66 = a2;
  v71 = 26;
  v4 = a2;
  v75 = 3840;
  v79 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
  v5 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v3 + 200));
  v6 = (int **)((char *)v3 + 80);
  v7 = (_DWORD *)*((_QWORD *)v3 + 10);
  LODWORD(v65[0]) = v5.m128_i32[0];
  HIDWORD(v65[0]) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  HIDWORD(v65[1]) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  LODWORD(v65[1]) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  v8 = *(_OWORD *)v65;
  v65[0] = (char *)v3 + 80;
  v97 = v8;
  v9 = v7[3];
  v5.m128_i32[0] = v7[5];
  v10 = v7[6];
  v11 = v7[7];
  v12 = v7[9];
  v13 = v7[14];
  v14 = v7[15];
  v15 = v7[17];
  LODWORD(v8) = v7[2];
  v72 = &v97;
  v77 = &v83;
  LOBYTE(v7) = (unsigned __int8)*((_DWORD *)v3 + 55) << 6;
  v83 = v8;
  v84 = v9;
  v85 = v5.m128_i32[0];
  v86 = v10;
  v87 = v11;
  v88 = v12;
  v89 = v13;
  v90 = v14;
  v91 = v15;
  v75 = (unsigned __int8)v7 & 0xC0 ^ 0xF00;
  if ( ((unsigned __int8)v7 & 0xC0) != 0 && *((_DWORD *)v3 + 54) != 50529027 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
    v16 = *v6;
    v17 = (D2DMatrixHelper *)*((unsigned int *)v3 + 54);
    v18 = *((float *)*v6 + 3);
    LODWORD(v92.m11) = (*v6)[2];
    LODWORD(v92.m21) = v16[6];
    v19 = *((float *)v16 + 14);
    v92.m12 = v18;
    v20 = *((float *)v16 + 7);
    v92.dx = v19;
    v21 = *(_OWORD *)((char *)v3 + 200);
    v92.m22 = v20;
    v22 = *((float *)v16 + 15);
    v96 = v21;
    v92.dy = v22;
    ApplyEdgeFlags((D2DMatrixHelper *)&v96, v17, &v92, (float *)&v97);
    v77 = 0LL;
    v23 = v16[3];
    v24 = v16[6];
    v25 = v16[7];
    v26 = v16[14];
    v27 = *((float *)v16 + 15);
    LODWORD(matrix.m11) = v16[2];
    *(_QWORD *)&matrix.m[0][1] = __PAIR64__(v24, v23);
    *(_QWORD *)&matrix.m[1][1] = __PAIR64__(v26, v25);
    matrix.dy = v27;
    D2D1InvertMatrix(&matrix);
  }
  `vector constructor iterator'(v81, 64LL, 2LL, (void (__fastcall *)(char *))WarpTextureState::WarpTextureState);
  v28 = 0;
  v29 = *((float *)*v6 + 1);
  v30 = v29 * *((float *)v3 + 56);
  *(float *)&v31 = v29 * *((float *)v3 + 58);
  *(float *)&v32 = v29 * *((float *)v3 + 59);
  v67.m128_f32[1] = *((float *)*v6 + 1) * *((float *)v3 + 57);
  v67.m128_f32[0] = v30;
  v67.m128_u64[1] = __PAIR64__(v32, v31);
  v33 = v67;
  v67.m128_u64[0] = (unsigned __int64)v3 + 240;
  v93[0] = v33.m128_i32[0];
  LODWORD(v94) = _mm_shuffle_ps(v33, v33, 255).m128_u32[0];
  v93[1] = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
  v93[2] = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
  if ( *((_QWORD *)v3 + 30) || *((_QWORD *)v3 + 31) )
  {
    *(_QWORD *)&v96 = (char *)v3 + 240;
    v28 = 1;
  }
  v34 = (char *)v3 + 344;
  if ( *((_QWORD *)v3 + 43) || *((_QWORD *)v3 + 44) )
  {
    v35 = v28++;
    *((_QWORD *)&v96 + v35) = v34;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl)
    && v28
    && (*((_BYTE *)v3 + 184) & 0x40) != 0 )
  {
    if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v83 & _xmm)) )
    {
      if ( v36 <= 0.0 )
        v83 = -1082130432;
      else
        v83 = 1065353216;
    }
    else
    {
      v37 = *(float *)&v84;
      if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v84 & _xmm)) )
      {
        *(float *)&v84 = 1.0;
        if ( v37 <= 0.0 )
          *(float *)&v84 = -1.0;
      }
    }
    v38 = *(float *)&v87;
    if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v87 & _xmm)) )
    {
      if ( v38 <= 0.0 )
        *(float *)&v87 = -1.0;
      else
        *(float *)&v87 = 1.0;
    }
    else
    {
      v39 = *(float *)&v86;
      if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v86 & _xmm)) )
      {
        *(float *)&v86 = 1.0;
        if ( v39 <= 0.0 )
          *(float *)&v86 = -1.0;
      }
    }
  }
  v40 = 0;
  if ( v28 )
  {
    v41 = &v96;
    v70[0] = v98;
    v69 = &v96;
    v68 = v98;
    v42 = &v82;
    v43 = v99;
    v44 = v99;
    do
    {
      v45 = *(char **)v41;
      v46 = (const struct D2D1::Matrix3x2F *)(*(_QWORD *)v41 + 48LL);
      if ( v77 )
      {
        v47 = *(_OWORD *)v46;
        v48 = _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*(_QWORD *)v41 + 64LL),
                (__m128)*(unsigned int *)(*(_QWORD *)v41 + 68LL)).m128_u64[0];
        *(_OWORD *)v43 = *(_OWORD *)v46;
        *((_QWORD *)v43 + 2) = v48;
        *(_OWORD *)&v70[1] = v47;
      }
      else
      {
        D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v70[1], (const struct D2D1::Matrix3x2F *)&matrix, v46);
        *(_OWORD *)v43 = *(_OWORD *)&v70[1];
        *((_QWORD *)v43 + 2) = v70[3];
      }
      *(_DWORD *)v42 = 0;
      *((_DWORD *)v42 - 1) = v40;
      *(_QWORD *)(v42 + 4) = v44;
      *((_DWORD *)v42 + 12) = ExtendModeToWarpAddressMode(v45 + 88);
      *((_DWORD *)v42 + 13) = ExtendModeToWarpAddressMode(v45 + 92);
      v52 = *((_DWORD *)v45 + 24) != 0;
      *((_DWORD *)v42 + 8) = 0;
      *((_DWORD *)v42 + 11) = v52;
      *((_DWORD *)v42 + 9) = v45 == (char *)v67.m128_u64[0];
      *((_DWORD *)v42 + 10) = v45 == v34;
      if ( v45 == (char *)v67.m128_u64[0] )
      {
        if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)v45) )
        {
          if ( v94 == 1.0 )
            v53 = 1;
          else
            v53 = 3;
        }
        else
        {
          v53 = 2;
        }
        v49 = v69;
        v50 = (_OWORD *)v70[0];
        v51 = v68;
        *((_DWORD *)v42 + 7) = v53;
      }
      else if ( v45 == v34 )
      {
        *((_DWORD *)v42 + 7) = 4;
      }
      if ( v45[100] )
      {
        v54 = *(_OWORD *)(v45 + 72);
        *(_QWORD *)(v42 + 20) = v51;
        *(_OWORD *)&v92.m11 = v54;
        *v50 = v54;
      }
      v41 = (__int128 *)((char *)v49 + 8);
      v68 = v51 + 16;
      ++v40;
      v69 = v41;
      v44 += 24;
      v70[0] = v50 + 1;
      v43 += 24;
      v42 += 64;
    }
    while ( v40 < v28 );
    v3 = v80;
    v6 = (int **)v65[0];
    v4 = v66;
  }
  v55 = *v6;
  v76 = v93;
  v78 = v81;
  v56 = BlendModeToWarpBlendMode(*v55);
  v58 = v75 & 0xFFFFFFC3 | (4 * (v28 | 0x3C0));
  v74 = v56;
  v75 = v58;
  v59 = *(_DWORD *)v57;
  if ( *(_DWORD *)v57 <= 0x14u && (v60 = 1179728, _bittest(&v60, v59)) )
    v61 = *((_BYTE *)v3 + 448) == 0;
  else
    v61 = v59 == 22;
  if ( v61 )
    v75 = v58 & 0xFFFFF7FF;
  if ( !*(_DWORD *)v57 && (*((_BYTE *)v3 + 184) & 1) != 0 )
  {
    if ( *(float *)(v57 + 4) >= 0.99999988 )
      v56 = 0;
    v74 = v56;
  }
  v62 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v4 + 3) + 24LL))(*((_QWORD *)v4 + 3), &v71);
  if ( v62 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x197u, 0LL);
  ++dword_180345378;
  v66 = (struct CD3DBatchExecutionContext *)*v6;
  detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::erase(
    v6,
    v65,
    &v66);
  return 0LL;
}
