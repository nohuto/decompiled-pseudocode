/*
 * XREFs of ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1801A5E40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800471A8 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ApplyEdgeFlags @ 0x1801A5C78 (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801A5D38 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801A63C8 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 *     ?erase@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@2@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@2@@Z @ 0x1801A68A0 (-erase@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$00$.c)
 */

__int64 __fastcall CWARPDrawListEntry::EmitGeometry(
        CWARPDrawListEntry *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  __m128 v3; // xmm2
  char *v4; // rdi
  __int64 v5; // rbx
  int v7; // ecx
  struct CD3DBatchExecutionContext *v8; // rsi
  int v9; // ecx
  int v10; // xmm1_4
  int v11; // xmm3_4
  int v12; // xmm4_4
  int v13; // xmm5_4
  int v14; // xmm6_4
  int v15; // xmm7_4
  int v16; // xmm8_4
  int v17; // xmm0_4
  D2DMatrixHelper *v18; // rdx
  FLOAT v19; // xmm1_4
  unsigned int v20; // xmm1_4
  unsigned int v21; // xmm2_4
  unsigned int v22; // xmm3_4
  unsigned int v23; // xmm4_4
  FLOAT v24; // xmm5_4
  int *v25; // rdx
  unsigned int v26; // ebx
  float v27; // xmm3_4
  float v28; // xmm2_4
  unsigned int v29; // xmm0_4
  unsigned int v30; // xmm3_4
  char *v31; // r15
  __int64 v32; // rax
  unsigned int v33; // r13d
  _BYTE *v34; // rax
  __int128 *v35; // r10
  char *v36; // rsi
  _BYTE *v37; // r12
  char *v38; // rdi
  const struct D2D1::Matrix3x2F *v39; // r8
  __int128 v40; // xmm0
  unsigned __int64 v41; // xmm1_8
  __int64 v42; // r10
  _OWORD *v43; // r11
  BOOL v44; // eax
  char *v45; // r9
  int v46; // eax
  _BYTE *v47; // rax
  __int128 v48; // xmm0
  int v49; // eax
  __int64 v50; // rdx
  unsigned int v51; // ebx
  bool v52; // zf
  int v53; // eax
  __int64 v54; // rcx
  __m128 v56; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v57; // [rsp+48h] [rbp-C0h]
  _BYTE *v58; // [rsp+50h] [rbp-B8h]
  struct CD3DBatchExecutionContext *v59; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v60[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+80h] [rbp-88h]
  int v62; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v63; // [rsp+A0h] [rbp-68h]
  int v64; // [rsp+A8h] [rbp-60h]
  int v65; // [rsp+ACh] [rbp-5Ch]
  unsigned int v66; // [rsp+B0h] [rbp-58h]
  __int128 *v67; // [rsp+B8h] [rbp-50h]
  _DWORD *v68; // [rsp+C0h] [rbp-48h]
  char *v69; // [rsp+C8h] [rbp-40h]
  __int64 v70; // [rsp+D0h] [rbp-38h]
  char v71[4]; // [rsp+D8h] [rbp-30h] BYREF
  char v72; // [rsp+DCh] [rbp-2Ch] BYREF
  __int128 v73; // [rsp+158h] [rbp+50h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+168h] [rbp+60h] BYREF
  __int128 v75; // [rsp+180h] [rbp+78h] BYREF
  _DWORD v76[10]; // [rsp+190h] [rbp+88h] BYREF
  __int128 v77; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v78[32]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v79[48]; // [rsp+1E8h] [rbp+E0h] BYREF

  v3 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 200));
  v62 = 26;
  v4 = (char *)this + 80;
  v5 = *((_QWORD *)this + 10);
  LODWORD(v73) = v3.m128_i32[0];
  v64 = 0;
  DWORD2(v73) = _mm_shuffle_ps(v3, v3, 170).m128_u32[0];
  v7 = *((_DWORD *)this + 55);
  v70 = 0LL;
  v8 = a2;
  DWORD1(v73) = _mm_shuffle_ps(v3, v3, 85).m128_u32[0];
  HIDWORD(v73) = _mm_shuffle_ps(v3, v3, 255).m128_u32[0];
  v9 = (v7 & 3) << 6;
  v59 = a2;
  v77 = v73;
  v10 = *(_DWORD *)(v5 + 12);
  v3.m128_i32[0] = *(_DWORD *)(v5 + 20);
  v11 = *(_DWORD *)(v5 + 24);
  v12 = *(_DWORD *)(v5 + 28);
  v13 = *(_DWORD *)(v5 + 36);
  v14 = *(_DWORD *)(v5 + 56);
  v15 = *(_DWORD *)(v5 + 60);
  v16 = *(_DWORD *)(v5 + 68);
  v17 = *(_DWORD *)(v5 + 8);
  v63 = &v77;
  v68 = v76;
  v76[0] = v17;
  v76[1] = v10;
  v76[2] = v3.m128_i32[0];
  v76[3] = v11;
  v76[4] = v12;
  v76[5] = v13;
  v76[6] = v14;
  v76[7] = v15;
  v76[8] = v16;
  v66 = v9 | 0xF00;
  if ( v9 )
  {
    v18 = (D2DMatrixHelper *)*((unsigned int *)this + 54);
    if ( (_DWORD)v18 != 50529027 )
    {
      *(_QWORD *)&matrix.m11 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)&matrix.m[1][0] = *(_QWORD *)(v5 + 24);
      matrix.dx = *(FLOAT *)(v5 + 56);
      v19 = *(float *)(v5 + 60);
      v75 = *(_OWORD *)((char *)this + 200);
      matrix.dy = v19;
      ApplyEdgeFlags((D2DMatrixHelper *)&v75, v18, &matrix, (float *)&v77);
      v68 = 0LL;
      v20 = *(_DWORD *)(v5 + 12);
      v21 = *(_DWORD *)(v5 + 24);
      v22 = *(_DWORD *)(v5 + 28);
      v23 = *(_DWORD *)(v5 + 56);
      v24 = *(float *)(v5 + 60);
      matrix.m11 = *(FLOAT *)(v5 + 8);
      *(_QWORD *)&matrix.m[0][1] = __PAIR64__(v21, v20);
      *(_QWORD *)&matrix.m[1][1] = __PAIR64__(v23, v22);
      matrix.dy = v24;
      D2D1InvertMatrix(&matrix);
    }
  }
  `vector constructor iterator'(v71, 64LL, 2LL, (void (__fastcall *)(char *))WarpTextureState::WarpTextureState);
  v25 = *(int **)v4;
  v26 = 0;
  v27 = *(float *)(*(_QWORD *)v4 + 4LL);
  v28 = v27 * *((float *)this + 56);
  *(float *)&v29 = v27 * *((float *)this + 58);
  *(float *)&v30 = v27 * *((float *)this + 59);
  v56.m128_f32[1] = *(float *)(*(_QWORD *)v4 + 4LL) * *((float *)this + 57);
  v56.m128_u64[1] = __PAIR64__(v30, v29);
  v56.m128_f32[0] = v28;
  *(float *)&v73 = v28;
  HIDWORD(v73) = _mm_shuffle_ps(v56, v56, 255).m128_u32[0];
  DWORD1(v73) = _mm_shuffle_ps(v56, v56, 85).m128_u32[0];
  DWORD2(v73) = _mm_shuffle_ps(v56, v56, 170).m128_u32[0];
  if ( *((_QWORD *)this + 30) || *((_QWORD *)this + 31) )
  {
    *(_QWORD *)&v75 = (char *)this + 240;
    v26 = 1;
  }
  v31 = (char *)this + 344;
  if ( *((_QWORD *)this + 43) || *((_QWORD *)this + 44) )
  {
    v32 = v26++;
    *(_QWORD *)&v76[2 * v32 - 4] = v31;
  }
  v33 = 0;
  if ( v26 )
  {
    v57 = v78;
    v34 = v79;
    v56.m128_u64[0] = (unsigned __int64)v78;
    v35 = &v75;
    v58 = v79;
    v36 = &v72;
    v60[0] = &v75;
    v37 = v79;
    do
    {
      v38 = *(char **)v35;
      v39 = (const struct D2D1::Matrix3x2F *)(*(_QWORD *)v35 + 48LL);
      if ( v68 )
      {
        v40 = *(_OWORD *)v39;
        v41 = _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*(_QWORD *)v35 + 64LL),
                (__m128)*(unsigned int *)(*(_QWORD *)v35 + 68LL)).m128_u64[0];
        *(_OWORD *)v37 = *(_OWORD *)v39;
        *((_QWORD *)v37 + 2) = v41;
        *(_OWORD *)&v60[1] = v40;
      }
      else
      {
        D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v60[1], (const struct D2D1::Matrix3x2F *)&matrix, v39);
        *(_OWORD *)v37 = *(_OWORD *)&v60[1];
        *((_QWORD *)v37 + 2) = v60[3];
      }
      *(_DWORD *)v36 = 0;
      *((_DWORD *)v36 - 1) = v33;
      *(_QWORD *)(v36 + 4) = v34;
      *((_DWORD *)v36 + 12) = ExtendModeToWarpAddressMode(v38 + 88);
      *((_DWORD *)v36 + 13) = ExtendModeToWarpAddressMode(v38 + 92);
      v44 = *((_DWORD *)v38 + 24) != 0;
      *((_DWORD *)v36 + 8) = 0;
      *((_DWORD *)v36 + 11) = v44;
      *((_DWORD *)v36 + 9) = v38 == v45;
      *((_DWORD *)v36 + 10) = v38 == v31;
      if ( v38 == v45 )
      {
        if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)v38) )
        {
          if ( *((float *)&v73 + 3) == 1.0 )
            v46 = 1;
          else
            v46 = 3;
        }
        else
        {
          v46 = 2;
        }
        v42 = v60[0];
        *((_DWORD *)v36 + 7) = v46;
        v43 = (_OWORD *)v56.m128_u64[0];
      }
      else if ( v38 == v31 )
      {
        *((_DWORD *)v36 + 7) = 4;
      }
      v47 = v57;
      if ( v38[100] )
      {
        v48 = *(_OWORD *)(v38 + 72);
        *(_QWORD *)(v36 + 20) = v57;
        v61 = v48;
        *v43 = v48;
      }
      v58 += 24;
      v35 = (__int128 *)(v42 + 8);
      v57 = v47 + 16;
      v34 = v58;
      ++v33;
      v60[0] = v35;
      v37 += 24;
      v56.m128_u64[0] = (unsigned __int64)(v43 + 1);
      v36 += 64;
    }
    while ( v33 < v26 );
    v8 = v59;
    v4 = (char *)this + 80;
    v25 = (int *)*((_QWORD *)this + 10);
  }
  v67 = &v73;
  v69 = v71;
  v49 = BlendModeToWarpBlendMode(*v25);
  v51 = v66 & 0xFFFFFFC3 | (4 * (v26 | 0x3C0));
  v65 = v49;
  v66 = v51;
  if ( *(_DWORD *)v50 == 4 || *(_DWORD *)v50 == 6 || *(_DWORD *)v50 == 17 || *(_DWORD *)v50 == 20 )
    v52 = *((_BYTE *)this + 448) == 0;
  else
    v52 = *(_DWORD *)v50 == 22;
  if ( v52 )
    v66 = v51 & 0xFFFFF7FF;
  if ( !*(_DWORD *)v50 && (*((_BYTE *)this + 184) & 1) != 0 )
  {
    if ( *(float *)(v50 + 4) >= 0.99999988 )
      v49 = 0;
    v65 = v49;
  }
  v53 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v8 + 3) + 24LL))(*((_QWORD *)v8 + 3), &v62);
  if ( v53 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x170u, 0LL);
  ++dword_180349378;
  v59 = *(struct CD3DBatchExecutionContext **)v4;
  detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::erase(
    v4,
    &v56,
    &v59);
  return 0LL;
}
