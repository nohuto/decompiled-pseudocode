/*
 * XREFs of ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801E7CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1801E620C (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ApplyEdgeFlags @ 0x1801E7AC8 (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801E7B88 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801E82C0 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::EmitGeometry(
        CWARPDrawListEntry *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CRenderingBatchCommand *a3)
{
  __int128 v3; // xmm0
  float v4; // xmm7_4
  unsigned int v6; // r15d
  int v7; // xmm8_4
  int v8; // ecx
  int v9; // xmm9_4
  const struct CRenderingBatchCommand *v10; // rsi
  float v11; // xmm10_4
  struct CD3DBatchExecutionContext *v12; // r14
  unsigned int v13; // xmm11_4
  unsigned int v14; // xmm12_4
  D2DMatrixHelper *v15; // rdx
  __int64 v16; // rcx
  float v17; // xmm3_4
  unsigned int v18; // ebx
  float v19; // xmm1_4
  float v20; // xmm1_4
  _BYTE *v21; // r11
  char *v22; // r14
  _BYTE *v23; // r12
  _QWORD *v24; // r13
  __int64 v25; // rsi
  const struct D2D1::Matrix3x2F *v26; // r8
  __int128 v27; // xmm0
  unsigned __int64 v28; // xmm1_8
  _OWORD *v29; // r9
  __int64 v30; // r10
  _BYTE *v31; // r11
  BOOL v32; // eax
  int v33; // eax
  __int128 v34; // xmm0
  int v35; // edx
  int v36; // eax
  int v37; // edx
  unsigned int v38; // ebx
  int v39; // eax
  __int64 v40; // rcx
  __m128 v42; // [rsp+38h] [rbp-D0h]
  _BYTE *v43; // [rsp+38h] [rbp-D0h]
  _BYTE *v44; // [rsp+48h] [rbp-C0h]
  _QWORD v45[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+70h] [rbp-98h]
  int v47; // [rsp+88h] [rbp-80h] BYREF
  __int128 *v48; // [rsp+90h] [rbp-78h]
  int v49; // [rsp+98h] [rbp-70h]
  int v50; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v51; // [rsp+A0h] [rbp-68h]
  __int128 *v52; // [rsp+A8h] [rbp-60h]
  float *v53; // [rsp+B0h] [rbp-58h]
  char *v54; // [rsp+B8h] [rbp-50h]
  __int64 v55; // [rsp+C0h] [rbp-48h]
  const struct CRenderingBatchCommand *v56; // [rsp+C8h] [rbp-40h]
  struct CD3DBatchExecutionContext *v57; // [rsp+D0h] [rbp-38h]
  _QWORD v58[2]; // [rsp+D8h] [rbp-30h] BYREF
  char v59[4]; // [rsp+E8h] [rbp-20h] BYREF
  char v60; // [rsp+ECh] [rbp-1Ch] BYREF
  __int128 v61; // [rsp+168h] [rbp+60h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+178h] [rbp+70h] BYREF
  float v63; // [rsp+190h] [rbp+88h] BYREF
  int v64; // [rsp+194h] [rbp+8Ch]
  int v65; // [rsp+198h] [rbp+90h]
  int v66; // [rsp+19Ch] [rbp+94h]
  float v67; // [rsp+1A0h] [rbp+98h]
  int v68; // [rsp+1A4h] [rbp+9Ch]
  unsigned int v69; // [rsp+1A8h] [rbp+A0h]
  unsigned int v70; // [rsp+1ACh] [rbp+A4h]
  int v71; // [rsp+1B0h] [rbp+A8h]
  __int128 v72; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v73[32]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v74[48]; // [rsp+1E8h] [rbp+E0h] BYREF

  v3 = *(_OWORD *)((char *)this + 8);
  v49 = 0;
  v4 = *((float *)a3 + 4);
  v6 = 0;
  v7 = *((_DWORD *)a3 + 5);
  v8 = *((_DWORD *)this + 7) & 3;
  v9 = *((_DWORD *)a3 + 8);
  v10 = a3;
  v11 = *((float *)a3 + 9);
  v12 = a2;
  v13 = *((_DWORD *)a3 + 16);
  v14 = *((_DWORD *)a3 + 17);
  v61 = v3;
  v48 = &v72;
  v72 = v3;
  v8 <<= 6;
  v65 = *((_DWORD *)a3 + 7);
  LODWORD(v3) = *((_DWORD *)a3 + 11);
  v53 = &v63;
  v68 = v3;
  v71 = *((_DWORD *)a3 + 19);
  v63 = v4;
  v64 = v7;
  v66 = v9;
  v67 = v11;
  v69 = v13;
  v70 = v14;
  v56 = a3;
  v57 = a2;
  v47 = 26;
  v55 = 0LL;
  v51 = v8 | 0xF00;
  if ( v8 )
  {
    v15 = (D2DMatrixHelper *)*((unsigned int *)this + 6);
    if ( (_DWORD)v15 != 50529027 )
    {
      *(_QWORD *)&matrix.m11 = __PAIR64__(v7, LODWORD(v4));
      *(_QWORD *)&matrix.m[1][0] = __PAIR64__(LODWORD(v11), v9);
      *(_QWORD *)&matrix.m[2][0] = __PAIR64__(v14, v13);
      ApplyEdgeFlags((CWARPDrawListEntry *)((char *)this + 8), v15, &matrix, (float *)&v72);
      *(_QWORD *)&matrix.m11 = __PAIR64__(v7, LODWORD(v4));
      *(_QWORD *)&matrix.m[1][0] = __PAIR64__(LODWORD(v11), v9);
      *(_QWORD *)&matrix.m[2][0] = __PAIR64__(v14, v13);
      v53 = 0LL;
      D2D1InvertMatrix(&matrix);
    }
  }
  `vector constructor iterator'(v59, 64LL, 2LL, (void (__fastcall *)(char *))WarpTextureState::WarpTextureState);
  v16 = *((_QWORD *)this + 7);
  v17 = *((float *)v10 + 22);
  v42.m128_f32[1] = v17 * *((float *)this + 9);
  v42.m128_f32[2] = v17 * *((float *)this + 10);
  v42.m128_f32[3] = v17 * *((float *)this + 11);
  *(float *)&v61 = v17 * *((float *)this + 8);
  v42.m128_f32[0] = *(float *)&v61;
  HIDWORD(v61) = _mm_shuffle_ps(v42, v42, 255).m128_u32[0];
  DWORD1(v61) = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
  DWORD2(v61) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
  if ( v16 )
    v58[0] = (char *)this + 48;
  v18 = v16 != 0;
  if ( *((_QWORD *)this + 17) )
  {
    ++v18;
    v58[v16 != 0] = (char *)this + 128;
  }
  if ( v18 )
  {
    if ( (*((_BYTE *)this - 16) & 0x40) != 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v63) & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
      {
        v19 = *(float *)&v64;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(v64 & _xmm) - 1.0) & _xmm) < 0.000081380211 )
        {
          *(float *)&v64 = 1.0;
          if ( v19 <= 0.0 )
            *(float *)&v64 = -1.0;
        }
      }
      else if ( v63 <= 0.0 )
      {
        v63 = -1.0;
      }
      else
      {
        v63 = 1.0;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v67) & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
      {
        v20 = *(float *)&v66;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(v66 & _xmm) - 1.0) & _xmm) < 0.000081380211 )
        {
          *(float *)&v66 = 1.0;
          if ( v20 <= 0.0 )
            *(float *)&v66 = -1.0;
        }
      }
      else if ( v67 <= 0.0 )
      {
        v67 = -1.0;
      }
      else
      {
        v67 = 1.0;
      }
    }
    v43 = v73;
    v21 = v74;
    v45[0] = v73;
    v44 = v74;
    v22 = &v60;
    v23 = v74;
    v24 = v58;
    do
    {
      v25 = *v24;
      v26 = (const struct D2D1::Matrix3x2F *)(*v24 + 24LL);
      if ( v53 )
      {
        v27 = *(_OWORD *)v26;
        v28 = _mm_unpacklo_ps((__m128)*(unsigned int *)(*v24 + 40LL), (__m128)*(unsigned int *)(*v24 + 44LL)).m128_u64[0];
        *(_OWORD *)v23 = *(_OWORD *)v26;
        *((_QWORD *)v23 + 2) = v28;
        *(_OWORD *)&v45[1] = v27;
      }
      else
      {
        D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v45[1], (const struct D2D1::Matrix3x2F *)&matrix, v26);
        *(_OWORD *)v23 = *(_OWORD *)&v45[1];
        *((_QWORD *)v23 + 2) = v45[3];
      }
      *(_DWORD *)v22 = 0;
      *((_DWORD *)v22 - 1) = v6;
      *(_QWORD *)(v22 + 4) = v21;
      *((_DWORD *)v22 + 12) = ExtendModeToWarpAddressMode(v25 + 64);
      *((_DWORD *)v22 + 13) = ExtendModeToWarpAddressMode(v25 + 68);
      v32 = *(_DWORD *)(v25 + 72) != 0;
      *((_DWORD *)v22 + 8) = 0;
      *((_DWORD *)v22 + 11) = v32;
      *((_DWORD *)v22 + 9) = v25 == (_QWORD)this + 48;
      *((_DWORD *)v22 + 10) = v25 == (_QWORD)this + 128;
      if ( (CWARPDrawListEntry *)v25 == (CWARPDrawListEntry *)((char *)this + 48) )
      {
        if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)v25) )
        {
          if ( *((float *)&v61 + 3) == 1.0 )
            v33 = 1;
          else
            v33 = 3;
        }
        else
        {
          v33 = 2;
        }
        v30 = v45[0];
        v31 = v44;
        *((_DWORD *)v22 + 7) = v33;
        v29 = v43;
      }
      else if ( (CWARPDrawListEntry *)v25 == (CWARPDrawListEntry *)((char *)this + 128) )
      {
        *((_DWORD *)v22 + 7) = 4;
      }
      if ( *(_BYTE *)(v25 + 76) )
      {
        v34 = *(_OWORD *)(v25 + 48);
        *(_QWORD *)(v22 + 20) = v30;
        v46 = v34;
        *v29 = v34;
      }
      v21 = v31 + 24;
      v44 = v21;
      ++v6;
      v45[0] = v30 + 16;
      ++v24;
      v43 = v29 + 1;
      v23 += 24;
      v22 += 64;
    }
    while ( v6 < v18 );
    v10 = v56;
    v12 = v57;
  }
  v35 = *((_DWORD *)v10 + 21);
  v52 = &v61;
  v54 = v59;
  v36 = BlendModeToWarpBlendMode(v35);
  v38 = v51 & 0xFFFFFFC3 | (4 * (v18 | 0x3C0));
  v50 = v36;
  v51 = v38;
  if ( v37 == 4 || v37 == 6 || v37 == 17 || v37 == 20 )
  {
    if ( !*((_BYTE *)this + 208) )
      v51 = v38 & 0xFFFFF7FF;
  }
  else if ( v37 == 22 )
  {
    v51 = v38 & 0xFFFFF7FF;
    goto LABEL_54;
  }
  if ( !v37 && (*((_BYTE *)this - 16) & 1) != 0 )
  {
    if ( *((float *)v10 + 22) >= 0.99999988 )
      v36 = 0;
    v50 = v36;
  }
LABEL_54:
  v39 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v12 + 3) + 24LL))(*((_QWORD *)v12 + 3), &v47);
  if ( v39 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0LL, v39, 0x180u);
  ++dword_1803D3248;
  return 0LL;
}
