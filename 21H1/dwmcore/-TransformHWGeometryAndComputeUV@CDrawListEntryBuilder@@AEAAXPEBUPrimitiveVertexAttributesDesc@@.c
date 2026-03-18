/*
 * XREFs of ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x180051710
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180053820 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180011C78 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?ComputeUVsFromXY@@YAXPEAU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V?$span@$$CBUTextureStageInfo@@$0?0@gsl@@@Z @ 0x180012B2C (-ComputeUVsFromXY@@YAXPEAU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V-$span@$$.c)
 *     ??$?0V?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@UTextureStageInfo@@$0?0@gsl@@QEAA@AEAV?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800187EC (--$-0V-$vector_facade@UTextureStageInfo@@V-$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expans.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x180018854 (--$uninitialized_copy@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEA.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180051568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800ACBE8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1801A0850 (--$move_backward@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEAUText.c)
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x1801A1410 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_--TexStageIn.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1802210B4 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
        CDrawListEntryBuilder *this,
        const struct PrimitiveVertexAttributesDesc *a2,
        const struct D2D1::Matrix3x2F *a3,
        const struct D2D1::Matrix3x2F *a4,
        unsigned int a5)
{
  __m128 v5; // xmm6
  __int128 v6; // xmm8
  __int128 v7; // xmm10
  __int128 v8; // xmm11
  float *v9; // rbx
  float *v10; // r14
  int v11; // eax
  signed __int64 v13; // r9
  char *v14; // r8
  int v16; // r10d
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v20; // r11
  int v21; // xmm7_4
  __int64 v22; // xmm1_8
  unsigned int v23; // r14d
  __int64 v24; // r8
  int v25; // eax
  float *v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  char *v29; // r8
  _BYTE *v30; // rbx
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  char *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
  float v38; // xmm5_4
  signed __int64 v39; // xmm1_8
  float v40; // xmm6_4
  int v41; // xmm13_4
  float m22; // xmm13_4
  float *v43; // rbx
  float *v44; // rax
  float v45; // xmm14_4
  float v46; // xmm4_4
  float v47; // xmm13_4
  float v48; // xmm8_4
  float v49; // xmm7_4
  float v50; // xmm15_4
  float v51; // xmm2_4
  float v52; // xmm6_4
  float v53; // xmm1_4
  float v54; // xmm11_4
  float v55; // xmm12_4
  float v56; // xmm10_4
  float v57; // xmm9_4
  float v58; // xmm5_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  float v62; // xmm14_4
  float v63; // xmm8_4
  unsigned int v64; // edi
  int v65; // r14d
  float v66; // xmm11_4
  float v67; // xmm12_4
  float v68; // xmm13_4
  float v69; // xmm14_4
  float v70; // xmm6_4
  float v71; // xmm10_4
  float v72; // xmm15_4
  __int64 v73; // r12
  signed int v74; // ebx
  signed int v75; // esi
  float *v76; // r9
  float *v77; // r10
  float v78; // xmm2_4
  float v79; // xmm3_4
  float v80; // xmm4_4
  float v81; // xmm5_4
  char *v82; // r11
  __int64 v83; // r8
  unsigned int v84; // edx
  float *v85; // rax
  float v86; // xmm3_4
  float v87; // xmm4_4
  char *v88; // rbx
  signed __int64 v89; // rdx
  unsigned __int64 v90; // rdx
  float v91; // xmm5_4
  float v92; // xmm14_4
  float v93; // xmm15_4
  float v94; // xmm11_4
  float v95; // xmm12_4
  float v96; // xmm10_4
  float v97; // xmm13_4
  float v98; // xmm3_4
  float v99; // xmm4_4
  float v100; // xmm2_4
  float v101; // xmm0_4
  float v102; // xmm6_4
  float v103; // xmm2_4
  float v104; // xmm5_4
  __int64 v105; // rcx
  signed __int64 v106; // r8
  unsigned __int64 v107; // rdx
  __int64 v108; // rax
  char *v109; // rax
  __int64 v110; // rax
  float v111; // xmm0_4
  float v112; // xmm1_4
  float v113; // xmm9_4
  float v114; // xmm2_4
  unsigned int v115; // edi
  int v116; // r14d
  __int64 v117; // r15
  __int64 v118; // r12
  signed int v119; // ebx
  signed int v120; // esi
  unsigned __int64 v121; // rdi
  void *v122; // rbx
  _BYTE *v123; // rax
  void *v124; // rcx
  __int64 v125; // rdx
  unsigned __int64 v126; // rdi
  void *v127; // rbx
  _BYTE *v128; // rax
  void *v129; // rcx
  HANDLE v130; // rax
  unsigned __int64 v131; // r11
  __int64 v132; // r10
  bool v133; // sf
  unsigned __int64 v134; // r10
  bool v135; // sf
  FLOAT v136; // xmm0_4
  float v137; // xmm1_4
  float v138; // xmm0_4
  HANDLE ProcessHeap; // rax
  struct D2D_MATRIX_3X2_F v140; // [rsp+28h] [rbp-E0h] BYREF
  signed __int64 v141; // [rsp+40h] [rbp-C8h]
  FLOAT dy; // [rsp+48h] [rbp-C0h]
  __int64 v143; // [rsp+4Ch] [rbp-BCh]
  float v144; // [rsp+54h] [rbp-B4h]
  float v145; // [rsp+58h] [rbp-B0h]
  float m21; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v147; // [rsp+60h] [rbp-A8h]
  float v148; // [rsp+68h] [rbp-A0h]
  float v149; // [rsp+6Ch] [rbp-9Ch]
  float v150; // [rsp+70h] [rbp-98h]
  float v151; // [rsp+74h] [rbp-94h]
  float v152; // [rsp+78h] [rbp-90h]
  int v153; // [rsp+7Ch] [rbp-8Ch]
  __int128 v154; // [rsp+88h] [rbp-80h] BYREF
  __int128 v155; // [rsp+98h] [rbp-70h]
  __int64 v156; // [rsp+A8h] [rbp-60h]
  __int128 v157; // [rsp+B8h] [rbp-50h]
  __int64 v158; // [rsp+C8h] [rbp-40h]
  __int128 v159; // [rsp+D8h] [rbp-30h]
  __int64 v160; // [rsp+E8h] [rbp-20h]
  __int128 v161; // [rsp+F8h] [rbp-10h]
  signed __int64 v162; // [rsp+108h] [rbp+0h]
  __int64 v163[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v164; // [rsp+120h] [rbp+18h] BYREF
  int v165; // [rsp+128h] [rbp+20h]
  __int64 v166; // [rsp+12Ch] [rbp+24h]
  int v167; // [rsp+134h] [rbp+2Ch]
  signed __int64 v168; // [rsp+138h] [rbp+30h]
  int i; // [rsp+140h] [rbp+38h]
  __int128 v170; // [rsp+148h] [rbp+40h] BYREF
  signed __int64 v171; // [rsp+158h] [rbp+50h]
  __int128 v172; // [rsp+168h] [rbp+60h] BYREF
  signed __int64 v173; // [rsp+178h] [rbp+70h]
  float v174[12]; // [rsp+188h] [rbp+80h] BYREF
  void *v175; // [rsp+1B8h] [rbp+B0h] BYREF
  char *v176; // [rsp+1C0h] [rbp+B8h]
  char *v177; // [rsp+1C8h] [rbp+C0h]
  _BYTE v178[112]; // [rsp+1D0h] [rbp+C8h] BYREF
  char v179; // [rsp+240h] [rbp+138h] BYREF
  LPVOID lpMem[2]; // [rsp+248h] [rbp+140h] BYREF
  _OWORD v181[5]; // [rsp+258h] [rbp+150h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+2A8h] [rbp+1A0h] BYREF
  _OWORD v183[6]; // [rsp+308h] [rbp+200h]

  v9 = (float *)v178;
  v10 = (float *)v178;
  v163[0] = *((_QWORD *)this + 24);
  v11 = *(_DWORD *)this;
  v175 = v178;
  v13 = (signed __int64)a3;
  v176 = v178;
  v14 = &v179;
  v177 = &v179;
  v16 = 8 * v11 + 16;
  v17 = *((_QWORD *)this + 148);
  v153 = v16;
  v18 = 1LL;
  *(_QWORD *)&v154 = v17;
  v20 = 0x4924924924924925LL;
  v21 = 0;
  if ( !a2 )
    goto LABEL_18;
  v22 = *(_QWORD *)(v13 + 16);
  *(_OWORD *)&matrix.m11 = *(_OWORD *)v13;
  *(_QWORD *)&matrix.m[2][0] = v22;
  D2D1InvertMatrix(&matrix);
  D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v140.m[1], a4, (const struct D2D1::Matrix3x2F *)&matrix);
  v18 = 1LL;
  v23 = 0;
  v20 = 0x4924924924924925LL;
  v166 = *(_QWORD *)&v140.m[2][0];
  v168 = v141;
  v164 = *(_QWORD *)&v140.m[1][0];
  v165 = 0;
  v167 = 0;
  for ( i = 1065353216; v23 < *((_DWORD *)a2 + 10); *(__m128 *)&v30[v36 + 36] = v5 )
  {
    if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 5) )
      goto LABEL_116;
    *(_OWORD *)lpMem = 0LL;
    memset(v181, 0, 36);
    v24 = *((_QWORD *)a2 + 6) + 52LL * v23;
    LOBYTE(v140.m11) = 0;
    v25 = *((_DWORD *)this + 569);
    if ( _bittest(&v25, v23) )
    {
      v5 = *(__m128 *)(v24 + 36);
      BYTE1(v140.m11) = 1;
      if ( v5.m128_f32[0] != 0.0
        || _mm_shuffle_ps(v5, v5, 85).m128_f32[0] != 0.0
        || _mm_shuffle_ps(v5, v5, 170).m128_f32[0] != 1.0
        || _mm_shuffle_ps(v5, v5, 255).m128_f32[0] != 1.0 )
      {
        LOBYTE(v140.m11) = 1;
      }
      v26 = Matrix3x3::operator*((float *)&v164, v174, (float *)v24);
      v27 = *(_OWORD *)v26;
      v28 = *((_OWORD *)v26 + 1);
      *(float *)&v26 = v26[8];
      *(_OWORD *)lpMem = v27;
      LODWORD(v181[1]) = (_DWORD)v26;
      v181[0] = v28;
    }
    else
    {
      v5 = *(__m128 *)((char *)&v181[1] + 4);
      BYTE1(v140.m11) = 0;
    }
    v29 = v176;
    v30 = v175;
    v31 = ((unsigned __int64)((unsigned __int128)((v176 - (_BYTE *)v175) * (__int128)v20) >> 64) >> 63)
        + ((__int64)((unsigned __int128)((v176 - (_BYTE *)v175) * (__int128)v20) >> 64) >> 4);
    if ( !(((unsigned __int64)((unsigned __int128)((v177 - v176) * (__int128)v20) >> 64) >> 63)
         + ((__int64)((unsigned __int128)((v177 - v176) * (__int128)v20) >> 64) >> 4)) )
    {
      if ( v31 + 1 < v31 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
LABEL_115:
        _o__invalid_parameter_noinfo_noreturn(v32, v33);
        __debugbreak();
LABEL_116:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v121 = detail::liberal_expansion_policy::expand(
               (detail::liberal_expansion_policy *)(v177 - v176),
               ((unsigned __int64)((unsigned __int128)((v177 - (_BYTE *)v175) * (__int128)v20) >> 64) >> 63)
             + ((__int64)((unsigned __int128)((v177 - (_BYTE *)v175) * (__int128)v20) >> 64) >> 4),
               v31 + 1);
      *(_QWORD *)&v140.m[1][0] = operator new(saturated_mul(v121, 0x38uLL));
      v122 = *(void **)&v140.m[1][0];
      *(_QWORD *)&v140.m[2][0] = v31;
      v141 = 0LL;
      v170 = *(_OWORD *)&v140.m[1][0];
      v171 = 0LL;
      std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        (__int64)v174,
        (__int64)v175,
        (__int64)v176,
        &v170);
      v123 = v175;
      v124 = 0LL;
      v175 = v122;
      if ( v123 != v178 )
        v124 = v123;
      operator delete(v124);
      v30 = v175;
      v20 = 0x4924924924924925LL;
      v29 = (char *)v175 + 56 * v31;
      v176 = v29;
      v177 = (char *)v175 + 56 * v121;
      v18 = 1LL;
    }
    *((_QWORD *)&v155 + 1) = v18;
    v32 = v29 - v30;
    v156 = 0LL;
    v158 = 0LL;
    v13 = ((unsigned __int64)((unsigned __int128)((v29 - v30) * (__int128)v20) >> 64) >> 63)
        + ((__int64)((unsigned __int128)((v29 - v30) * (__int128)v20) >> 64) >> 4);
    v33 = v13 - v31;
    *(_QWORD *)&v155 = &v30[56 * v13];
    v157 = v155;
    if ( !(_QWORD)v155 )
      goto LABEL_115;
    v158 = v18;
    v34 = ((unsigned __int64)((unsigned __int128)((v29 - v30) * (__int128)v20) >> 64) >> 63)
        + ((__int64)((unsigned __int128)((v29 - v30) * (__int128)v20) >> 64) >> 4)
        - v31;
    if ( v33 > 1 )
      v34 = v18;
    v159 = v155;
    v32 = 56 * v34;
    v160 = v18;
    v35 = &v29[-56 * v34];
    if ( v29 != v35 )
    {
      v131 = v160;
      v132 = v157 + 64;
      do
      {
        v29 -= 56;
        if ( !(_QWORD)v159 )
          goto LABEL_115;
        if ( !v131 )
          goto LABEL_115;
        --v131;
        v132 -= 56LL;
        if ( v131 >= *((_QWORD *)&v159 + 1) )
          goto LABEL_115;
        *(_DWORD *)(v132 - 8) = *(_DWORD *)v29;
        *(_DWORD *)(v132 - 4) = *((_DWORD *)v29 + 1);
        *(_DWORD *)v132 = *((_DWORD *)v29 + 2);
        *(_DWORD *)(v132 + 4) = *((_DWORD *)v29 + 3);
        *(_DWORD *)(v132 + 8) = *((_DWORD *)v29 + 4);
        *(_DWORD *)(v132 + 12) = *((_DWORD *)v29 + 5);
        *(_DWORD *)(v132 + 16) = *((_DWORD *)v29 + 6);
        *(_DWORD *)(v132 + 20) = *((_DWORD *)v29 + 7);
        *(_DWORD *)(v132 + 24) = *((_DWORD *)v29 + 8);
        *(_OWORD *)(v132 + 28) = *(_OWORD *)(v29 + 36);
        *(_BYTE *)(v132 + 44) = v29[52];
        v32 = (unsigned __int8)v29[53];
        *(_BYTE *)(v132 + 45) = v32;
      }
      while ( v29 != v35 );
      v29 = v176;
      v18 = 1LL;
      v20 = 0x4924924924924925LL;
    }
    if ( v33 > 1 )
    {
      *(_QWORD *)&v161 = v30;
      *((_QWORD *)&v161 + 1) = v13;
      v133 = v13 < 0;
      if ( v13 )
      {
        if ( !v30 )
          goto LABEL_115;
        v133 = v13 < 0;
      }
      if ( v133 && v13 )
        goto LABEL_115;
      v162 = v13;
      v172 = v161;
      v173 = v13;
      std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        v174,
        &v30[56 * v31],
        &v30[56 * v13 - 56],
        &v172);
      v29 = v176;
      v18 = 1LL;
      v20 = 0x4924924924924925LL;
    }
    v36 = 56 * v31;
    v176 = v29 + 56;
    ++v23;
    *(_OWORD *)&v30[v36] = *(_OWORD *)lpMem;
    *(_OWORD *)&v30[v36 + 16] = v181[0];
    *(_DWORD *)&v30[v36 + 32] = v181[1];
    *(_WORD *)&v30[v36 + 52] = LOWORD(v140.m11);
  }
  while ( 1 )
  {
    v9 = (float *)v175;
    v10 = (float *)v176;
    v14 = v177;
LABEL_18:
    v37 = ((unsigned __int64)((unsigned __int128)(((char *)v10 - (char *)v9) * (__int128)v20) >> 64) >> 63)
        + ((__int64)((unsigned __int128)(((char *)v10 - (char *)v9) * (__int128)v20) >> 64) >> 4);
    if ( v37 >= *(unsigned int *)this )
      break;
    if ( !(((unsigned __int64)((unsigned __int128)((v14 - (char *)v10) * (__int128)v20) >> 64) >> 63)
         + ((__int64)((unsigned __int128)((v14 - (char *)v10) * (__int128)v20) >> 64) >> 4)) )
    {
      if ( v37 + 1 < v37 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
LABEL_130:
        _o__invalid_parameter_noinfo_noreturn(v105, v107);
        __debugbreak();
        goto LABEL_131;
      }
      v125 = (unsigned __int128)((v14 - (char *)v9) * (__int128)v20) >> 64;
      v126 = detail::liberal_expansion_policy::expand(
               (detail::liberal_expansion_policy *)(v37 + 1),
               ((unsigned __int64)v125 >> 63) + (v125 >> 4),
               v37 + 1);
      *(_QWORD *)&v161 = operator new(saturated_mul(v126, 0x38uLL));
      v127 = (void *)v161;
      *((_QWORD *)&v161 + 1) = v37;
      v162 = 0LL;
      v172 = v161;
      v173 = 0LL;
      std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        (__int64)v174,
        (__int64)v175,
        (__int64)v176,
        &v172);
      v128 = v175;
      v129 = 0LL;
      v175 = v127;
      if ( v128 != v178 )
        v129 = v128;
      operator delete(v129);
      v9 = (float *)v175;
      v20 = 0x4924924924924925LL;
      v177 = (char *)v175 + 56 * v126;
      v10 = (float *)((char *)v175 + 56 * v37);
      v176 = (char *)v10;
      v18 = 1LL;
    }
    *((_QWORD *)&v159 + 1) = v18;
    v105 = (char *)v10 - (char *)v9;
    v160 = 0LL;
    v158 = 0LL;
    v106 = ((unsigned __int64)((unsigned __int128)(((char *)v10 - (char *)v9) * (__int128)v20) >> 64) >> 63)
         + ((__int64)((unsigned __int128)(((char *)v10 - (char *)v9) * (__int128)v20) >> 64) >> 4);
    v107 = v106 - v37;
    *(_QWORD *)&v159 = &v9[14 * v106];
    v157 = v159;
    if ( !(_QWORD)v159 )
      goto LABEL_130;
    v158 = v18;
    v108 = ((unsigned __int64)((unsigned __int128)(((char *)v10 - (char *)v9) * (__int128)v20) >> 64) >> 63)
         + ((__int64)((unsigned __int128)(((char *)v10 - (char *)v9) * (__int128)v20) >> 64) >> 4)
         - v37;
    if ( v107 > 1 )
      v108 = v18;
    v155 = v159;
    v105 = 56 * v108;
    v156 = v18;
    v109 = (char *)&v10[-14 * v108];
    if ( v10 != (float *)v109 )
    {
      v134 = v156;
      v13 = v157 + 64;
      while ( 1 )
      {
        v10 -= 14;
        if ( !(_QWORD)v155 )
          goto LABEL_130;
        if ( !v134 )
          goto LABEL_130;
        --v134;
        v13 -= 56LL;
        if ( v134 >= *((_QWORD *)&v155 + 1) )
          goto LABEL_130;
        *(float *)(v13 - 8) = *v10;
        *(float *)(v13 - 4) = v10[1];
        *(float *)v13 = v10[2];
        *(float *)(v13 + 4) = v10[3];
        *(float *)(v13 + 8) = v10[4];
        *(float *)(v13 + 12) = v10[5];
        *(float *)(v13 + 16) = v10[6];
        *(float *)(v13 + 20) = v10[7];
        *(float *)(v13 + 24) = v10[8];
        *(_OWORD *)(v13 + 28) = *(_OWORD *)(v10 + 9);
        *(_BYTE *)(v13 + 44) = *((_BYTE *)v10 + 52);
        v105 = *((unsigned __int8 *)v10 + 53);
        *(_BYTE *)(v13 + 45) = v105;
        if ( v10 == (float *)v109 )
        {
          v10 = (float *)v176;
          v18 = 1LL;
          break;
        }
      }
    }
    if ( v107 > 1 )
    {
      *(_QWORD *)&v140.m[1][0] = v9;
      *(_QWORD *)&v140.m[2][0] = v106;
      v135 = v106 < 0;
      if ( v106 )
      {
        if ( !v9 )
          goto LABEL_130;
        v135 = v106 < 0;
      }
      if ( v135 && v106 )
        goto LABEL_130;
      v141 = v106;
      v170 = *(_OWORD *)&v140.m[1][0];
      v171 = v106;
      std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        v174,
        &v9[14 * v37],
        &v9[14 * v106 - 14],
        &v170);
      v10 = (float *)v176;
      v18 = 1LL;
      v20 = 0x4924924924924925LL;
    }
    v110 = 14 * v37;
    v176 = (char *)(v10 + 14);
    v9[v110 + 13] = 0.0;
    *(_OWORD *)&v9[v110] = 0LL;
    *(_OWORD *)&v9[v110 + 4] = 0LL;
    v9[v110 + 8] = 0.0;
    *(_OWORD *)&v9[v110 + 9] = 0LL;
  }
  v5.m128_i32[0] = *(_DWORD *)a4;
  v38 = 0.0;
  v183[3] = v6;
  v183[1] = v7;
  v183[0] = v8;
  if ( v5.m128_f32[0] == 1.0
    && *((float *)a4 + 1) == 0.0
    && *((float *)a4 + 2) == 0.0
    && *((float *)a4 + 3) == 1.0
    && *((float *)a4 + 4) == 0.0
    && *((float *)a4 + 5) == 0.0 )
  {
    v115 = a5;
    if ( a5 < *((_DWORD *)this + 544) )
    {
      v116 = v153;
      v117 = v163[0];
      v118 = v154;
      v119 = a5 * v153;
      v120 = a5 * v153;
      do
      {
        gsl::span<TextureStageInfo,-1>::span<TextureStageInfo,-1>(v163, (gsl::details **)&v175);
        v154 = *(_OWORD *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                            (__int64 *)v140.m[1],
                            v163);
        ComputeUVsFromXY(v117 + v119, v118 + v120, &v154);
        ++v115;
        v120 += v116;
        v119 += v116;
      }
      while ( v115 < *((_DWORD *)this + 544) );
      v10 = (float *)v176;
      v20 = 0x4924924924924925LL;
      v9 = (float *)v175;
    }
    goto LABEL_47;
  }
  LODWORD(v7) = *((_DWORD *)a4 + 1);
  v21 = _xmm;
  *(float *)&v6 = FLOAT_0_000081380211;
  LODWORD(v8) = v7 & _xmm;
  LODWORD(v147) = v7 & _xmm;
  if ( COERCE_FLOAT(v7 & _xmm) < 0.000081380211 && COERCE_FLOAT(*((_DWORD *)a4 + 2) & _xmm) < 0.000081380211 )
    goto LABEL_22;
LABEL_131:
  if ( *(float *)&v6 <= COERCE_FLOAT(v5.m128_i32[0] & v21) || *(float *)&v6 <= COERCE_FLOAT(*((_DWORD *)a4 + 3) & v21) )
  {
    D2DMatrixHelper::GetScaleDimensions(a4, (struct D2D_MATRIX_3X2_F *)v140.m[1], &v140.m22, (float *)v13);
    *(FLOAT *)&v8 = v140.m21;
    m22 = v140.m22;
    v20 = 0x4924924924924925LL;
    v147 = *(_QWORD *)&v140.m[1][0];
    v38 = 0.0;
    *(float *)&v143 = (float)(1.0 / v140.m21) * *(float *)&v7;
    v136 = (float)(1.0 / v140.m22) * *((float *)a4 + 3);
    *((float *)&v143 + 1) = (float)(1.0 / v140.m22) * *((float *)a4 + 2);
    v137 = *((float *)a4 + 4);
    dy = v136;
    v138 = *((float *)a4 + 5);
    v145 = v137;
    m21 = (float)(1.0 / v140.m21) * v5.m128_f32[0];
    v144 = v138;
    goto LABEL_27;
  }
LABEL_22:
  v39 = *((_QWORD *)a4 + 2);
  LODWORD(v40) = v5.m128_i32[0] & v21;
  v41 = *((_DWORD *)a4 + 3);
  *(_OWORD *)&v140.m[1][0] = *(_OWORD *)a4;
  v141 = v39;
  if ( *(float *)&v6 <= v40 || *(float *)&v6 <= COERCE_FLOAT(v41 & v21) )
  {
    LODWORD(m22) = v41 & v21;
    *(float *)&v8 = v40;
    dy = FLOAT_N1_0;
    v147 = __PAIR64__(LODWORD(m22), LODWORD(v40));
    if ( v38 > v140.m21 )
      m21 = FLOAT_N1_0;
    else
      m21 = *(float *)&FLOAT_1_0;
    v145 = *(float *)&v141;
    v143 = *(_QWORD *)&v140.m[1][1];
    v144 = *((float *)&v141 + 1);
    if ( v38 <= v140.dy )
      dy = *(float *)&FLOAT_1_0;
  }
  else
  {
    LODWORD(m22) = *((_DWORD *)a4 + 2) & v21;
    *((float *)&v147 + 1) = m22;
    *((float *)&v143 + 1) = FLOAT_N1_0;
    if ( v38 <= v140.m22 )
      LODWORD(v143) = (_DWORD)FLOAT_1_0;
    else
      *(float *)&v143 = FLOAT_N1_0;
    v144 = *((float *)&v141 + 1);
    dy = v140.dy;
    v145 = *(float *)&v141;
    m21 = v140.m21;
    if ( v38 <= v140.dx )
      HIDWORD(v143) = (_DWORD)FLOAT_1_0;
  }
LABEL_27:
  lpMem[0] = (char *)v181 + 8;
  lpMem[1] = (char *)v181 + 8;
  *(_QWORD *)&v181[0] = &matrix;
  v43 = v9 + 2;
  v152 = 1.0 / *(float *)&v8;
  v148 = 1.0 / m22;
  v150 = 0.0 - (float)((float)(1.0 / *(float *)&v8) * v38);
  v149 = 0.0 - (float)((float)(1.0 / m22) * v38);
  while ( 1 )
  {
    v44 = v43 - 2;
    if ( v43 - 2 == v10 )
      break;
    v45 = v43[3];
    v46 = *v43;
    v47 = v43[1];
    v48 = v43[4];
    v49 = v43[6];
    v50 = v43[2];
    v51 = *v44;
    v52 = v43[5];
    v140.m21 = *(v43 - 1);
    v53 = v49 * v38;
    v151 = v51;
    v54 = v48 * v38;
    v55 = v52 * v38;
    v56 = (float)((float)(v152 * v46) + (float)(v45 * v38)) + (float)(v49 * v38);
    v57 = (float)((float)(v47 * v148) + (float)(v51 * v38)) + (float)(v48 * v38);
    v58 = (float)((float)(v50 * v148) + (float)(v140.m21 * 0.0)) + (float)(v52 * v38);
    v59 = (float)((float)(v45 * v148) + (float)(v46 * 0.0)) + v53;
    v60 = (float)((float)(v47 * v149) + (float)(v51 * v150)) + v48;
    v61 = (float)((float)(v50 * v149) + (float)(v140.m21 * v150)) + v52;
    v62 = (float)((float)(v45 * v149) + (float)(v150 * v46)) + v49;
    v63 = (float)((float)(v140.m21 * v152) + (float)(v50 * 0.0)) + v55;
    *v44 = (float)((float)(v151 * v152) + (float)(v47 * 0.0)) + v54;
    *(v43 - 1) = v63;
    *v43 = v56;
    v43[1] = v57;
    v43[2] = v58;
    v38 = 0.0;
    v43[3] = v59;
    v43[4] = v60;
    v43[5] = v61;
    v43[6] = v62;
    v43 += 14;
  }
  v64 = a5;
  if ( a5 < *((_DWORD *)this + 544) )
  {
    v65 = v153;
    v66 = *(float *)&v147;
    v67 = dy;
    v68 = *((float *)&v147 + 1);
    v69 = *(float *)&v143;
    v70 = *((float *)&v143 + 1);
    v71 = v144;
    v72 = v145;
    v73 = v154;
    v74 = a5 * v153;
    v75 = a5 * v153;
    do
    {
      v76 = (float *)(v73 + v74);
      v77 = (float *)(v163[0] + v75);
      v78 = *v76;
      v79 = v76[1];
      v80 = *v77;
      v81 = v77[1];
      *v76 = *v76 * v66;
      v76[1] = v79 * v68;
      *v77 = (float)(v80 - v78) + (float)(v78 * v66);
      v77[1] = (float)(v81 - v79) + v76[1];
      v82 = (char *)v175;
      v83 = (v176 - (_BYTE *)v175) / 56;
      if ( v83 < 0 || !v175 && v83 || !v175 && v83 )
      {
LABEL_144:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v84 = 0;
      if ( (_DWORD)v83 )
      {
        do
        {
          if ( v84 >= (unsigned __int64)v83 )
            goto LABEL_144;
          v85 = (float *)&v82[56 * v84];
          if ( *((_BYTE *)v85 + 53) )
          {
            v91 = v85[3];
            v92 = v85[5];
            v93 = v85[2];
            v94 = v85[4];
            v95 = v85[1];
            v96 = v85[6];
            v97 = v85[7];
            v98 = (float)((float)(*v77 * *v85) + (float)(v77[1] * v91)) + v96;
            v99 = (float)((float)(*v77 * v95) + (float)(v77[1] * v94)) + v97;
            v100 = (float)((float)(*v77 * v93) + (float)(v77[1] * v92)) + v85[8];
            if ( COERCE_FLOAT(LODWORD(v100) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v100 - 1.0) & _xmm) >= 0.000081380211 )
            {
              v98 = v98 / v100;
              v99 = v99 / v100;
            }
            v101 = v76[1];
            v102 = (float)((float)(*v76 * *v85) + (float)(v101 * v91)) + v96;
            v103 = (float)((float)(*v76 * v93) + (float)(v101 * v92)) + v85[8];
            v104 = (float)((float)(*v76 * v95) + (float)(v101 * v94)) + v97;
            if ( COERCE_FLOAT(LODWORD(v103) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v103 - 1.0) & _xmm) >= 0.000081380211 )
            {
              v102 = v102 / v103;
              v104 = v104 / v103;
            }
            if ( *((_BYTE *)v85 + 52) )
            {
              v111 = v85[11];
              v112 = v85[9];
              if ( v98 > v111 )
                v98 = v85[11];
              else
                v98 = fmaxf(v98, v112);
              v113 = v85[12];
              v114 = v85[10];
              if ( v99 > v113 )
                v99 = v85[12];
              else
                v99 = fmaxf(v99, v114);
              if ( v102 > v111 )
                v102 = v85[11];
              else
                v102 = fmaxf(v102, v112);
              if ( v104 > v113 )
                v104 = v85[12];
              else
                v104 = fmaxf(v104, v114);
            }
            v77[2 * v84 + 4] = v98;
            v77[2 * v84 + 5] = v99;
            v76[2 * v84 + 4] = v102;
            v76[2 * v84 + 5] = v104;
          }
          else
          {
            v77[2 * v84 + 4] = 0.0;
            v77[2 * v84 + 5] = 0.0;
            *(_QWORD *)&v154 = 0LL;
            v76[2 * v84 + 4] = 0.0;
            v76[2 * v84 + 5] = 0.0;
          }
          ++v84;
        }
        while ( v84 < (unsigned int)v83 );
        v66 = *(float *)&v147;
        v67 = dy;
        v68 = *((float *)&v147 + 1);
        v69 = *(float *)&v143;
        v70 = *((float *)&v143 + 1);
        v71 = v144;
        v72 = v145;
      }
      ++v64;
      v75 += v65;
      v74 += v65;
      v86 = (float)((float)(v77[1] * v67) + (float)(*v77 * v69)) + v71;
      *v77 = (float)((float)(v77[1] * v70) + (float)(*v77 * m21)) + v72;
      v77[1] = v86;
      v87 = (float)((float)(v76[1] * v67) + (float)(*v76 * v69)) + v71;
      *v76 = (float)((float)(v76[1] * v70) + (float)(*v76 * m21)) + v72;
      v76[1] = v87;
    }
    while ( v64 < *((_DWORD *)this + 544) );
    v20 = 0x4924924924924925LL;
  }
  v88 = (char *)lpMem[0];
  v89 = ((char *)lpMem[1] - (char *)lpMem[0]) / 36;
  if ( v89 )
  {
    detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region(
      lpMem,
      v89,
      ((char *)lpMem[1] - (char *)lpMem[0]) / 36);
    v88 = (char *)lpMem[0];
    v20 = 0x4924924924924925LL;
  }
  lpMem[0] = 0LL;
  if ( v88 == (char *)v181 + 8 || !v88 )
  {
    v10 = (float *)v176;
    v9 = (float *)v175;
  }
  else
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v88);
    v10 = (float *)v176;
    v20 = 0x4924924924924925LL;
    v9 = (float *)v175;
  }
LABEL_47:
  v90 = ((unsigned __int64)((unsigned __int128)(((char *)v10 - (char *)v9) * (__int128)v20) >> 64) >> 63)
      + ((__int64)((unsigned __int128)(((char *)v10 - (char *)v9) * (__int128)v20) >> 64) >> 4);
  if ( v90 )
    v176 = (char *)&v10[-14 * v90];
  v175 = 0LL;
  if ( v9 == (float *)v178 )
    v9 = 0LL;
  if ( v9 )
  {
    v130 = GetProcessHeap();
    HeapFree(v130, 0, v9);
  }
}
