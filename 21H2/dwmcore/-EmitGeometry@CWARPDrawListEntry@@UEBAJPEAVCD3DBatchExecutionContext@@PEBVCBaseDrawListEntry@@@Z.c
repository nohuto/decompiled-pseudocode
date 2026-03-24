/*
 * XREFs of ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1801A1E80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x180052998 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800583B4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsCloseRealOneMatrixEpsilon@@YA_NM@Z @ 0x1800E2380 (-IsCloseRealOneMatrixEpsilon@@YA_NM@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ApplyEdgeFlags @ 0x1801A1CB8 (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801A1D78 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801A2518 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 *     ?erase@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@2@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@2@@Z @ 0x1801A29F0 (-erase@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$00$.c)
 */

__int64 __fastcall CWARPDrawListEntry::EmitGeometry(
        CWARPDrawListEntry *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  char *v3; // rdi
  __m128 v4; // xmm2
  __int64 v5; // rbx
  CWARPDrawListEntry *v6; // r14
  struct CD3DBatchExecutionContext *v7; // rsi
  int v8; // ecx
  int v9; // xmm1_4
  int v10; // xmm3_4
  int v11; // xmm4_4
  int v12; // xmm5_4
  int v13; // xmm6_4
  int v14; // xmm7_4
  int v15; // xmm8_4
  int v16; // xmm0_4
  D2DMatrixHelper *v17; // rdx
  FLOAT v18; // xmm1_4
  unsigned int v19; // xmm1_4
  unsigned int v20; // xmm2_4
  unsigned int v21; // xmm3_4
  unsigned int v22; // xmm4_4
  FLOAT v23; // xmm5_4
  unsigned int v24; // ebx
  float v25; // xmm3_4
  float v26; // xmm2_4
  unsigned int v27; // xmm0_4
  unsigned int v28; // xmm3_4
  __m128 v29; // xmm2
  char *v30; // r15
  __int64 v31; // rax
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm2_4
  float v35; // xmm2_4
  unsigned int v36; // r13d
  __int128 *v37; // r9
  char *v38; // rsi
  _BYTE *v39; // r12
  _BYTE *v40; // r14
  char *v41; // rdi
  const struct D2D1::Matrix3x2F *v42; // r8
  __int128 v43; // xmm0
  unsigned __int64 v44; // xmm1_8
  __int128 *v45; // r9
  _OWORD *v46; // r10
  _BYTE *v47; // r11
  BOOL v48; // eax
  int v49; // eax
  __int128 v50; // xmm0
  int *v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // ebx
  unsigned int v55; // ecx
  int v56; // r8d
  bool v57; // zf
  int v58; // eax
  __int64 v59; // rcx
  struct CD3DBatchExecutionContext *v61; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v62; // [rsp+40h] [rbp-C8h]
  _BYTE *v63; // [rsp+50h] [rbp-B8h]
  __int128 *v64; // [rsp+58h] [rbp-B0h]
  _BYTE *v65; // [rsp+60h] [rbp-A8h]
  _QWORD v66[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v67; // [rsp+88h] [rbp-80h]
  int v68; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v69; // [rsp+A0h] [rbp-68h]
  int v70; // [rsp+A8h] [rbp-60h]
  int v71; // [rsp+ACh] [rbp-5Ch]
  unsigned int v72; // [rsp+B0h] [rbp-58h]
  __int128 *v73; // [rsp+B8h] [rbp-50h]
  int *v74; // [rsp+C0h] [rbp-48h]
  char *v75; // [rsp+C8h] [rbp-40h]
  __int64 v76; // [rsp+D0h] [rbp-38h]
  CWARPDrawListEntry *v77; // [rsp+D8h] [rbp-30h]
  char v78[4]; // [rsp+E8h] [rbp-20h] BYREF
  char v79; // [rsp+ECh] [rbp-1Ch] BYREF
  __int128 v80; // [rsp+168h] [rbp+60h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+178h] [rbp+70h] BYREF
  int v82; // [rsp+190h] [rbp+88h] BYREF
  int v83; // [rsp+194h] [rbp+8Ch]
  __int32 v84; // [rsp+198h] [rbp+90h]
  int v85; // [rsp+19Ch] [rbp+94h]
  int v86; // [rsp+1A0h] [rbp+98h]
  int v87; // [rsp+1A4h] [rbp+9Ch]
  int v88; // [rsp+1A8h] [rbp+A0h]
  int v89; // [rsp+1ACh] [rbp+A4h]
  int v90; // [rsp+1B0h] [rbp+A8h]
  __int128 v91; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v92; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v93[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v94[48]; // [rsp+1F8h] [rbp+F0h] BYREF

  v70 = 0;
  v3 = (char *)this + 80;
  v4 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 200));
  v5 = *((_QWORD *)this + 10);
  v68 = 26;
  v6 = this;
  LODWORD(v80) = v4.m128_i32[0];
  DWORD1(v80) = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  v76 = 0LL;
  v7 = a2;
  DWORD2(v80) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  v77 = this;
  v8 = *((_DWORD *)this + 55) & 3;
  HIDWORD(v80) = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  v8 <<= 6;
  v61 = a2;
  v92 = v80;
  v66[0] = v3;
  v9 = *(_DWORD *)(v5 + 12);
  v4.m128_i32[0] = *(_DWORD *)(v5 + 20);
  v10 = *(_DWORD *)(v5 + 24);
  v11 = *(_DWORD *)(v5 + 28);
  v12 = *(_DWORD *)(v5 + 36);
  v13 = *(_DWORD *)(v5 + 56);
  v14 = *(_DWORD *)(v5 + 60);
  v15 = *(_DWORD *)(v5 + 68);
  v16 = *(_DWORD *)(v5 + 8);
  v69 = &v92;
  v74 = &v82;
  v82 = v16;
  v83 = v9;
  v84 = v4.m128_i32[0];
  v85 = v10;
  v86 = v11;
  v87 = v12;
  v88 = v13;
  v89 = v14;
  v90 = v15;
  v72 = v8 | 0xF00;
  if ( v8 )
  {
    v17 = (D2DMatrixHelper *)*((unsigned int *)v6 + 54);
    if ( (_DWORD)v17 != 50529027 )
    {
      *(_QWORD *)&matrix.m11 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)&matrix.m[1][0] = *(_QWORD *)(v5 + 24);
      matrix.dx = *(FLOAT *)(v5 + 56);
      v18 = *(float *)(v5 + 60);
      v91 = *(_OWORD *)((char *)v6 + 200);
      matrix.dy = v18;
      ApplyEdgeFlags((D2DMatrixHelper *)&v91, v17, &matrix, (float *)&v92);
      v74 = 0LL;
      v19 = *(_DWORD *)(v5 + 12);
      v20 = *(_DWORD *)(v5 + 24);
      v21 = *(_DWORD *)(v5 + 28);
      v22 = *(_DWORD *)(v5 + 56);
      v23 = *(float *)(v5 + 60);
      matrix.m11 = *(FLOAT *)(v5 + 8);
      *(_QWORD *)&matrix.m[0][1] = __PAIR64__(v20, v19);
      *(_QWORD *)&matrix.m[1][1] = __PAIR64__(v22, v21);
      matrix.dy = v23;
      D2D1InvertMatrix(&matrix);
    }
  }
  `vector constructor iterator'(v78, 64LL, 2LL, (void (__fastcall *)(char *))WarpTextureState::WarpTextureState);
  v24 = 0;
  v25 = *(float *)(*(_QWORD *)v3 + 4LL);
  v26 = v25 * *((float *)v6 + 56);
  *(float *)&v27 = v25 * *((float *)v6 + 58);
  *(float *)&v28 = v25 * *((float *)v6 + 59);
  v62.m128_f32[1] = *(float *)(*(_QWORD *)v3 + 4LL) * *((float *)v6 + 57);
  v62.m128_f32[0] = v26;
  v62.m128_u64[1] = __PAIR64__(v28, v27);
  v29 = v62;
  v62.m128_u64[0] = (unsigned __int64)v6 + 240;
  LODWORD(v80) = v29.m128_i32[0];
  HIDWORD(v80) = _mm_shuffle_ps(v29, v29, 255).m128_u32[0];
  DWORD1(v80) = _mm_shuffle_ps(v29, v29, 85).m128_u32[0];
  DWORD2(v80) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
  if ( *((_QWORD *)v6 + 30) || *((_QWORD *)v6 + 31) )
  {
    *(_QWORD *)&v91 = (char *)v6 + 240;
    v24 = 1;
  }
  v30 = (char *)v6 + 344;
  if ( *((_QWORD *)v6 + 43) || *((_QWORD *)v6 + 44) )
  {
    v31 = v24++;
    *((_QWORD *)&v91 + v31) = v30;
  }
  if ( v24 && (*((_BYTE *)v6 + 184) & 0x40) != 0 )
  {
    if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v82 & _xmm)) )
    {
      if ( v32 <= 0.0 )
        v82 = -1082130432;
      else
        v82 = 1065353216;
    }
    else
    {
      v33 = *(float *)&v83;
      if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v83 & _xmm)) )
      {
        *(float *)&v83 = 1.0;
        if ( v33 <= 0.0 )
          *(float *)&v83 = -1.0;
      }
    }
    v34 = *(float *)&v86;
    if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v86 & _xmm)) )
    {
      if ( v34 <= 0.0 )
        *(float *)&v86 = -1.0;
      else
        *(float *)&v86 = 1.0;
    }
    else
    {
      v35 = *(float *)&v85;
      if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v85 & _xmm)) )
      {
        *(float *)&v85 = 1.0;
        if ( v35 <= 0.0 )
          *(float *)&v85 = -1.0;
      }
    }
  }
  v36 = 0;
  if ( v24 )
  {
    v37 = &v91;
    v65 = v93;
    v64 = &v91;
    v63 = v93;
    v38 = &v79;
    v39 = v94;
    v40 = v94;
    do
    {
      v41 = *(char **)v37;
      v42 = (const struct D2D1::Matrix3x2F *)(*(_QWORD *)v37 + 48LL);
      if ( v74 )
      {
        v43 = *(_OWORD *)v42;
        v44 = _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*(_QWORD *)v37 + 64LL),
                (__m128)*(unsigned int *)(*(_QWORD *)v37 + 68LL)).m128_u64[0];
        *(_OWORD *)v39 = *(_OWORD *)v42;
        *((_QWORD *)v39 + 2) = v44;
        *(_OWORD *)&v66[1] = v43;
      }
      else
      {
        D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v66[1], (const struct D2D1::Matrix3x2F *)&matrix, v42);
        *(_OWORD *)v39 = *(_OWORD *)&v66[1];
        *((_QWORD *)v39 + 2) = v66[3];
      }
      *(_DWORD *)v38 = 0;
      *((_DWORD *)v38 - 1) = v36;
      *(_QWORD *)(v38 + 4) = v40;
      *((_DWORD *)v38 + 12) = ExtendModeToWarpAddressMode(v41 + 88);
      *((_DWORD *)v38 + 13) = ExtendModeToWarpAddressMode(v41 + 92);
      v48 = *((_DWORD *)v41 + 24) != 0;
      *((_DWORD *)v38 + 8) = 0;
      *((_DWORD *)v38 + 11) = v48;
      *((_DWORD *)v38 + 9) = v41 == (char *)v62.m128_u64[0];
      *((_DWORD *)v38 + 10) = v41 == v30;
      if ( v41 == (char *)v62.m128_u64[0] )
      {
        if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)v41) )
        {
          if ( *((float *)&v80 + 3) == 1.0 )
            v49 = 1;
          else
            v49 = 3;
        }
        else
        {
          v49 = 2;
        }
        v45 = v64;
        v46 = v65;
        v47 = v63;
        *((_DWORD *)v38 + 7) = v49;
      }
      else if ( v41 == v30 )
      {
        *((_DWORD *)v38 + 7) = 4;
      }
      if ( v41[100] )
      {
        v50 = *(_OWORD *)(v41 + 72);
        *(_QWORD *)(v38 + 20) = v47;
        v67 = v50;
        *v46 = v50;
      }
      v37 = (__int128 *)((char *)v45 + 8);
      v63 = v47 + 16;
      ++v36;
      v64 = v37;
      v40 += 24;
      v65 = v46 + 1;
      v39 += 24;
      v38 += 64;
    }
    while ( v36 < v24 );
    v6 = v77;
    v3 = (char *)v66[0];
    v7 = v61;
  }
  v51 = *(int **)v3;
  v73 = &v80;
  v75 = v78;
  v52 = BlendModeToWarpBlendMode(*v51);
  v54 = v72 & 0xFFFFFFC3 | (4 * (v24 | 0x3C0));
  v71 = v52;
  v72 = v54;
  v55 = *(_DWORD *)v53;
  if ( *(_DWORD *)v53 <= 0x14u && (v56 = 1179728, _bittest(&v56, v55)) )
    v57 = *((_BYTE *)v6 + 448) == 0;
  else
    v57 = v55 == 22;
  if ( v57 )
    v72 = v54 & 0xFFFFF7FF;
  if ( !*(_DWORD *)v53 && (*((_BYTE *)v6 + 184) & 1) != 0 )
  {
    if ( *(float *)(v53 + 4) >= 0.99999988 )
      v52 = 0;
    v71 = v52;
  }
  v58 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v7 + 3) + 24LL))(*((_QWORD *)v7 + 3), &v68);
  if ( v58 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x189u, 0LL);
  ++dword_180347398;
  v61 = *(struct CD3DBatchExecutionContext **)v3;
  detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::erase(
    v3,
    v66,
    &v61);
  return 0LL;
}
