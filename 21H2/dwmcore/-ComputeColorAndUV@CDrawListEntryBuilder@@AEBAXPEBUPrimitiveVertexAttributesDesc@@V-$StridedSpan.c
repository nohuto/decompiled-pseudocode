/*
 * XREFs of ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x1800A4C20
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x180014D14 (--$uninitialized_move@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEA.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x1800D743C (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1801E2BE8 (--$move_backward@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEAUText.c)
 */

int __fastcall CDrawListEntryBuilder::ComputeColorAndUV(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  float v4; // xmm1_4
  _BYTE *v5; // rbx
  char *v7; // r10
  __int64 v8; // r12
  char *v9; // rdx
  __int64 v10; // r15
  unsigned int *v11; // r13
  unsigned int v12; // eax
  unsigned __int8 v13; // cf
  __m128 v14; // xmm6
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  char *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  char v23; // r9
  _D3DCOLORVALUE v24; // xmm0
  float v25; // xmm0_4
  unsigned int v26; // edi
  float v27; // xmm0_4
  int v28; // edi
  float v29; // xmm0_4
  unsigned int v30; // edi
  int v31; // esi
  unsigned int v32; // r11d
  __int64 v33; // r8
  float *v34; // r9
  unsigned int v35; // eax
  unsigned int i; // edx
  float *v37; // rax
  float v38; // xmm2_4
  float v39; // xmm14_4
  float v40; // xmm15_4
  float v41; // xmm6_4
  float v42; // xmm0_4
  float v43; // xmm5_4
  float v44; // xmm2_4
  float v45; // xmm6_4
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm4_4
  float v49; // xmm8_4
  float v50; // xmm7_4
  _BYTE *v51; // rax
  __int64 v52; // r8
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  char *v55; // rax
  __int64 v56; // rax
  float v57; // xmm1_4
  float v58; // xmm3_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  unsigned __int64 v61; // rdi
  _BYTE *v62; // rax
  void *v63; // rcx
  unsigned __int64 v64; // rdi
  _BYTE *v65; // rax
  void *v66; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v68; // r11
  __int64 v69; // r9
  __int64 v70; // r11
  __int64 v71; // r9
  bool v73; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v74; // [rsp+21h] [rbp-DFh]
  __int128 v75; // [rsp+30h] [rbp-D0h]
  __int128 v76; // [rsp+30h] [rbp-D0h]
  __int128 v79; // [rsp+90h] [rbp-70h]
  __int128 v80; // [rsp+90h] [rbp-70h]
  __int128 v81; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-40h]
  __int128 v83; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v84; // [rsp+E0h] [rbp-20h]
  _BYTE v85[24]; // [rsp+F0h] [rbp-10h] BYREF
  _D3DCOLORVALUE v86; // [rsp+108h] [rbp+8h] BYREF
  void *v87; // [rsp+120h] [rbp+20h]
  char *v88; // [rsp+128h] [rbp+28h]
  char *v89; // [rsp+130h] [rbp+30h]
  _BYTE v90[112]; // [rsp+138h] [rbp+38h] BYREF
  char v91; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v92; // [rsp+1B0h] [rbp+B0h]
  __int128 v93; // [rsp+1C0h] [rbp+C0h]
  _BYTE v94[20]; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = *(float *)&FLOAT_1_0;
  v5 = v90;
  *(_QWORD *)&v86.r = a4;
  v87 = v90;
  v7 = v90;
  v8 = a4;
  v88 = v90;
  v9 = &v91;
  v89 = &v91;
  v10 = a3;
  v11 = (unsigned int *)a1;
  if ( a2 )
  {
    v8 = 0LL;
    if ( !*(_DWORD *)(a2 + 32) )
    {
LABEL_18:
      v8 = *(_QWORD *)&v86.r;
      goto LABEL_19;
    }
    while ( 1 )
    {
      if ( (unsigned __int64)(unsigned int)v8 >= *(_QWORD *)(a2 + 32) )
      {
        ((void (__fastcall *)(__int64, char *, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          a1,
          v9,
          a3,
          0x6DB6DB6DB6DB6DB7LL);
        __debugbreak();
      }
      v92 = 0LL;
      v93 = 0LL;
      a1 = *(_QWORD *)(a2 + 40) + 52LL * (unsigned int)v8;
      v73 = 0;
      v12 = v11[1101];
      v13 = _bittest((const int *)&v12, v8);
      memset(v94, 0, sizeof(v94));
      if ( v13 )
      {
        v14 = *(__m128 *)(a1 + 36);
        v74 = 1;
        v73 = v14.m128_f32[0] != 0.0
           || _mm_shuffle_ps(v14, v14, 85).m128_f32[0] != 0.0
           || _mm_shuffle_ps(v14, v14, 170).m128_f32[0] != v4
           || _mm_shuffle_ps(v14, v14, 255).m128_f32[0] != v4;
        v15 = *(_OWORD *)a1;
        v16 = *(_OWORD *)(a1 + 16);
        *(_DWORD *)v94 = *(_DWORD *)(a1 + 32);
        v92 = v15;
        v93 = v16;
      }
      else
      {
        v14 = *(__m128 *)&v94[4];
        v74 = 0;
      }
      v17 = 0x6DB6DB6DB6DB6DB7LL * ((v7 - v5) >> 3);
      if ( !(0x6DB6DB6DB6DB6DB7LL * ((v9 - v7) >> 3)) )
      {
        if ( v17 + 1 < v17 )
          goto LABEL_106;
        v61 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)a1,
                0x6DB6DB6DB6DB6DB7LL * ((v9 - v5) >> 3),
                v17 + 1);
        *(_QWORD *)&v75 = operator new(saturated_mul(v61, 0x38uLL));
        *((_QWORD *)&v75 + 1) = v17;
        v82 = 0LL;
        v81 = v75;
        std::uninitialized_move<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          (__int64)v85,
          (__int64)v87,
          (__int64)v88,
          &v81);
        v62 = v87;
        v63 = 0LL;
        v87 = (void *)v75;
        if ( v62 != v90 )
          v63 = v62;
        DefaultHeap::Free(v63);
        v5 = v87;
        v7 = (char *)v87 + 56 * v17;
        v88 = v7;
        v89 = (char *)v87 + 56 * v61;
      }
      a3 = 0x6DB6DB6DB6DB6DB7LL * ((v7 - v5) >> 3);
      v18 = a3 - v17;
      if ( !&v5[8 * ((v7 - v5) >> 3)] )
        goto LABEL_107;
      v19 = a3 - v17;
      if ( v18 > 1 )
        v19 = 1LL;
      a1 = 56 * v19;
      v20 = &v7[-56 * v19];
      if ( v7 != v20 )
      {
        v68 = 1LL;
        v69 = (__int64)&v5[8 * ((v7 - v5) >> 3) + 64];
        do
        {
          v7 -= 56;
          if ( !v68 )
            goto LABEL_107;
          --v68;
          v69 -= 56LL;
          if ( v68 )
            goto LABEL_107;
          *(_DWORD *)(v69 - 8) = *(_DWORD *)v7;
          *(_DWORD *)(v69 - 4) = *((_DWORD *)v7 + 1);
          *(_DWORD *)v69 = *((_DWORD *)v7 + 2);
          *(_DWORD *)(v69 + 4) = *((_DWORD *)v7 + 3);
          *(_DWORD *)(v69 + 8) = *((_DWORD *)v7 + 4);
          *(_DWORD *)(v69 + 12) = *((_DWORD *)v7 + 5);
          *(_DWORD *)(v69 + 16) = *((_DWORD *)v7 + 6);
          *(_DWORD *)(v69 + 20) = *((_DWORD *)v7 + 7);
          *(_DWORD *)(v69 + 24) = *((_DWORD *)v7 + 8);
          *(_OWORD *)(v69 + 28) = *(_OWORD *)(v7 + 36);
          *(_BYTE *)(v69 + 44) = v7[52];
          a1 = (unsigned __int8)v7[53];
          *(_BYTE *)(v69 + 45) = a1;
        }
        while ( v7 != v20 );
        v7 = v88;
      }
      if ( v18 > 1 )
      {
        *(_QWORD *)&v80 = v5;
        *((_QWORD *)&v80 + 1) = a3;
        if ( a3 && (!v5 || a3 < 0) )
          goto LABEL_107;
        v83 = v80;
        v84 = a3;
        std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          v85,
          &v5[56 * v17],
          &v5[56 * a3 - 56],
          &v83);
        v7 = v88;
      }
      v21 = 56 * v17;
      v88 = v7 + 56;
      v8 = (unsigned int)(v8 + 1);
      *(_OWORD *)&v5[v21] = v92;
      *(_OWORD *)&v5[v21 + 16] = v93;
      *(_DWORD *)&v5[v21 + 32] = *(_DWORD *)v94;
      v5[v21 + 52] = v73;
      a1 = v74;
      v5[v21 + 53] = v74;
      *(__m128 *)&v5[v21 + 36] = v14;
      v9 = v89;
      v7 = v88;
      v5 = v87;
      if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 32) )
        goto LABEL_18;
      v4 = *(float *)&FLOAT_1_0;
    }
  }
  while ( 1 )
  {
LABEL_19:
    v22 = 0x6DB6DB6DB6DB6DB7LL * ((v7 - v5) >> 3);
    if ( v22 >= *v11 )
    {
      if ( a2 && *((_BYTE *)v11 + 30) )
      {
        v23 = 1;
      }
      else
      {
        v23 = 0;
        if ( !a2 )
          goto LABEL_108;
      }
      *(_D3DCOLORVALUE *)&v24.r = *(_D3DCOLORVALUE *)a2;
      goto LABEL_24;
    }
    if ( !(0x6DB6DB6DB6DB6DB7LL * ((v9 - v7) >> 3)) )
    {
      if ( v22 + 1 < v22 )
      {
LABEL_106:
        std::_Xoverflow_error("overflow");
        __debugbreak();
        goto LABEL_107;
      }
      v64 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)a1,
              0x6DB6DB6DB6DB6DB7LL * ((v9 - v5) >> 3),
              v22 + 1);
      *(_QWORD *)&v79 = operator new(saturated_mul(v64, 0x38uLL));
      *((_QWORD *)&v79 + 1) = v22;
      v84 = 0LL;
      v83 = v79;
      std::uninitialized_move<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        (__int64)v85,
        (__int64)v87,
        (__int64)v88,
        &v83);
      v65 = v87;
      v66 = 0LL;
      v87 = (void *)v79;
      if ( v65 != v90 )
        v66 = v65;
      DefaultHeap::Free(v66);
      v5 = v87;
      v7 = (char *)v87 + 56 * v22;
      v88 = v7;
      v89 = (char *)v87 + 56 * v64;
    }
    v52 = 0x6DB6DB6DB6DB6DB7LL * ((v7 - v5) >> 3);
    v53 = v52 - v22;
    if ( !&v5[8 * ((v7 - v5) >> 3)] )
      goto LABEL_107;
    v54 = v52 - v22;
    if ( v53 > 1 )
      v54 = 1LL;
    a1 = 56 * v54;
    v55 = &v7[-56 * v54];
    if ( v7 != v55 )
      break;
LABEL_57:
    if ( v53 > 1 )
    {
      *(_QWORD *)&v76 = v5;
      *((_QWORD *)&v76 + 1) = v52;
      if ( v52 && (!v5 || v52 < 0) )
        goto LABEL_107;
      v81 = v76;
      v82 = v52;
      std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        v85,
        &v5[56 * v22],
        &v5[56 * v52 - 56],
        &v81);
      v7 = v88;
    }
    v56 = 56 * v22;
    v88 = v7 + 56;
    a1 = 0LL;
    *(_DWORD *)&v5[v56 + 52] = 0;
    *(_OWORD *)&v5[v56] = 0LL;
    *(_OWORD *)&v5[v56 + 16] = 0LL;
    *(_DWORD *)&v5[v56 + 32] = 0;
    *(_OWORD *)&v5[v56 + 36] = 0LL;
    v9 = v89;
    v7 = v88;
    v5 = v87;
  }
  v70 = 1LL;
  v71 = (__int64)&v5[8 * ((v7 - v5) >> 3) + 64];
  while ( 1 )
  {
    v7 -= 56;
    if ( !v70 )
      break;
    --v70;
    v71 -= 56LL;
    if ( v70 )
      break;
    *(_DWORD *)(v71 - 8) = *(_DWORD *)v7;
    *(_DWORD *)(v71 - 4) = *((_DWORD *)v7 + 1);
    *(_DWORD *)v71 = *((_DWORD *)v7 + 2);
    *(_DWORD *)(v71 + 4) = *((_DWORD *)v7 + 3);
    *(_DWORD *)(v71 + 8) = *((_DWORD *)v7 + 4);
    *(_DWORD *)(v71 + 12) = *((_DWORD *)v7 + 5);
    *(_DWORD *)(v71 + 16) = *((_DWORD *)v7 + 6);
    *(_DWORD *)(v71 + 20) = *((_DWORD *)v7 + 7);
    *(_DWORD *)(v71 + 24) = *((_DWORD *)v7 + 8);
    *(_OWORD *)(v71 + 28) = *(_OWORD *)(v7 + 36);
    *(_BYTE *)(v71 + 44) = v7[52];
    a1 = (unsigned __int8)v7[53];
    *(_BYTE *)(v71 + 45) = a1;
    if ( v7 == v55 )
    {
      v7 = v88;
      goto LABEL_57;
    }
  }
LABEL_107:
  _o__invalid_parameter_noinfo_noreturn(a1);
  __debugbreak();
LABEL_108:
  *(_D3DCOLORVALUE *)&v24.r = (_D3DCOLORVALUE)_xmm;
LABEL_24:
  *(_D3DCOLORVALUE *)&v86.r = *(_D3DCOLORVALUE *)&v24.r;
  if ( v23 )
  {
    v30 = ColorDWFromStraightColorF(&v86);
  }
  else
  {
    v25 = (float)(v86.a * 255.0) + 6291456.25;
    v26 = (LODWORD(v25) << 23) & 0xFF00FFFF;
    v27 = (float)(v86.b * 255.0) + 6291456.25;
    v28 = (LODWORD(v27) << 15) | v26;
    v29 = (float)(v86.g * 255.0) + 6291456.25;
    v86.r = (float)(v86.r * 255.0) + 6291456.25;
    v30 = ((int)(LODWORD(v86.r) << 10) >> 11) | ((int)(LODWORD(v29) << 10) >> 3) & 0xFFFFFF00 | v28 & 0xFFFF0000;
  }
  v31 = v30 & 0xFFFFFF;
  v32 = 0;
  if ( !v23 )
    v31 = 0;
  if ( *(_DWORD *)(v10 + 12) )
  {
    do
    {
      v33 = *(_QWORD *)v10 + (int)(v32 * *(_DWORD *)(v10 + 8));
      v34 = (float *)(*(_QWORD *)v8 + (int)(v32 * *(_DWORD *)(v8 + 8)));
      if ( v34[3] == 0.0 )
        v35 = v31;
      else
        v35 = v30;
      *(_DWORD *)(v33 + 12) = v35;
      for ( i = 0; ; ++i )
      {
        v7 = v88;
        v5 = v87;
        if ( i >= (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((v88 - (_BYTE *)v87) >> 3)) )
          break;
        v37 = (float *)((char *)v87 + 56 * i);
        if ( *((_BYTE *)v37 + 53) )
        {
          v38 = *(float *)(v33 + 4);
          v39 = v37[6];
          v40 = v37[7];
          v41 = (float)(v37[1] * *(float *)v33) + (float)(v37[4] * v38);
          v42 = v37[5] * v38;
          v43 = (float)((float)(*v37 * *(float *)v33) + (float)(v37[3] * v38)) + v39;
          v44 = v37[8];
          v45 = v41 + v40;
          v46 = (float)((float)(v37[2] * *(float *)v33) + v42) + v44;
          if ( COERCE_FLOAT(LODWORD(v46) & _xmm) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v46 - 1.0) & _xmm) >= 0.000081380211 )
          {
            v43 = v43 / v46;
            v45 = v45 / v46;
          }
          v47 = v34[1];
          v48 = (float)((float)(v37[2] * *v34) + (float)(v37[5] * v47)) + v44;
          v49 = (float)((float)(*v37 * *v34) + (float)(v37[3] * v47)) + v39;
          v50 = (float)((float)(v37[1] * *v34) + (float)(v37[4] * v47)) + v40;
          if ( COERCE_FLOAT(LODWORD(v48) & _xmm) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v48 - 1.0) & _xmm) >= 0.000081380211 )
          {
            v49 = v49 / v48;
            v50 = v50 / v48;
          }
          if ( *((_BYTE *)v37 + 52) )
          {
            v57 = v37[11];
            v58 = v37[9];
            if ( v43 > v57 )
              v43 = v37[11];
            else
              v43 = fmaxf(v43, v58);
            v59 = v37[12];
            v60 = v37[10];
            if ( v45 > v59 )
              v45 = v37[12];
            else
              v45 = fmaxf(v45, v60);
            if ( v49 > v57 )
              v49 = v37[11];
            else
              v49 = fmaxf(v49, v58);
            if ( v50 > v59 )
              v50 = v37[12];
            else
              v50 = fmaxf(v50, v60);
          }
          *(float *)(v33 + 8LL * i + 16) = v43;
          *(float *)(v33 + 8LL * i + 20) = v45;
          v34[2 * i + 4] = v49;
          v34[2 * i + 5] = v50;
        }
        else
        {
          *(_DWORD *)(v33 + 8LL * i + 16) = 0;
          *(_DWORD *)(v33 + 8LL * i + 20) = 0;
          *(_QWORD *)&v86.r = 0LL;
          v34[2 * i + 4] = 0.0;
          v34[2 * i + 5] = 0.0;
        }
      }
      ++v32;
    }
    while ( v32 < *(_DWORD *)(v10 + 12) );
  }
  if ( 0x6DB6DB6DB6DB6DB7LL * ((v7 - v5) >> 3) )
    v88 = &v7[-8 * ((v7 - v5) >> 3)];
  v51 = v90;
  v87 = 0LL;
  if ( v5 == v90 )
    v5 = 0LL;
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v51) = HeapFree(ProcessHeap, 0, v5);
  }
  return (int)v51;
}
