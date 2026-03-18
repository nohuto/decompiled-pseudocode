/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180055AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0M$0?0$0?0$0A@@?$span@$$CBM$0?0@gsl@@QEAA@AEBV?$span@M$0?0@1@@Z @ 0x18003B958 (--$-0M$0-0$0-0$0A@@-$span@$$CBM$0-0@gsl@@QEAA@AEBV-$span@M$0-0@1@@Z.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18003B9B0 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x18003BB14 (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003BBC0 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800555F0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180056568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180059E28 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180088C60 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$?0$0?0V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@M$0?0@gsl@@QEAA@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E9D14 (--$-0$0-0V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x18024065C (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  char *v4; // r14
  int v7; // edi
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64); // r9
  __int64 v10; // r11
  __int64 v11; // rsi
  CSurfaceDrawListBrush *v12; // rcx
  CSurfaceDrawListBrush *v13; // rax
  CSurfaceDrawListBrush *v14; // rax
  CMILMatrix *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _BYTE *v19; // rdx
  unsigned int v20; // r10d
  struct D2D_MATRIX_3X2_F *v21; // r9
  __int64 v22; // r13
  _BYTE *v23; // r8
  _BYTE *v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r15
  float v27; // xmm0_4
  __int64 v28; // r12
  unsigned int v29; // r11d
  unsigned __int64 v30; // rax
  __int64 v31; // r10
  float v32; // xmm2_4
  __int64 v33; // rsi
  unsigned int v34; // xmm0_4
  __int32 v35; // xmm1_4
  char v36; // r12
  __int32 v37; // xmm1_4
  FLOAT v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm7_4
  float v42; // xmm10_4
  float v43; // xmm4_4
  float v44; // xmm3_4
  float *v45; // rdi
  __int64 v46; // rax
  CSurfaceDrawListBrush *v47; // rcx
  struct D2D_RECT_F v48; // xmm0
  CSurfaceDrawListBrush *v49; // rax
  int v50; // r11d
  int v51; // eax
  unsigned int v52; // ecx
  unsigned __int64 v53; // rax
  void *v54; // rcx
  bool v55; // zf
  void *v56; // rcx
  struct D2D_MATRIX_3X2_F *v57; // rcx
  void *v58; // rcx
  float v60; // xmm0_4
  FLOAT v61; // xmm5_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm0_4
  FLOAT v65; // xmm1_4
  float v66; // xmm0_4
  float v67; // xmm0_4
  __int64 v68; // rax
  struct D2D_RECT_F v69; // xmm0
  int v70; // r11d
  struct D2D_MATRIX_3X2_F *v71; // r9
  __int64 v72; // rax
  __int64 v73; // xmm1_8
  int v74; // eax
  unsigned int v75; // ecx
  int v76; // eax
  unsigned int v77; // ecx
  float v78; // xmm2_4
  float v79; // xmm1_4
  float v80; // xmm1_4
  __m128 v81; // xmm3
  float v82; // xmm0_4
  __m128 v83; // xmm2
  __int64 v84; // rax
  void *v85; // rcx
  void *v86; // rcx
  struct D2D_MATRIX_3X2_F *v87; // rcx
  char v88; // [rsp+48h] [rbp-C0h]
  CSurfaceDrawListBrush *v89; // [rsp+50h] [rbp-B8h] BYREF
  int v90; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v91; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v92; // [rsp+78h] [rbp-90h] BYREF
  __int64 v93; // [rsp+88h] [rbp-80h]
  int v94; // [rsp+90h] [rbp-78h]
  struct D2D_RECT_F v95; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v96; // [rsp+A8h] [rbp-60h]
  float v97; // [rsp+ACh] [rbp-5Ch] BYREF
  float v98; // [rsp+B0h] [rbp-58h] BYREF
  __m128 v99; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v100; // [rsp+C8h] [rbp-40h] BYREF
  void *v101; // [rsp+D8h] [rbp-30h]
  int (*v102)(const struct CDrawListBrush *, void *); // [rsp+E0h] [rbp-28h]
  __int64 v103; // [rsp+E8h] [rbp-20h] BYREF
  __m256i v104; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v105; // [rsp+118h] [rbp+10h]
  __int128 v106; // [rsp+128h] [rbp+20h]
  int v107; // [rsp+138h] [rbp+30h]
  _BYTE v108[68]; // [rsp+13Ch] [rbp+34h] BYREF
  struct D2D_MATRIX_3X2_F *v109; // [rsp+180h] [rbp+78h] BYREF
  _BYTE *v110; // [rsp+188h] [rbp+80h]
  _BYTE **v111; // [rsp+190h] [rbp+88h]
  _BYTE v112[24]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE *v113; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE *v114; // [rsp+1B8h] [rbp+B0h]
  _QWORD *v115; // [rsp+1C0h] [rbp+B8h]
  _BYTE v116[24]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v117[3]; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v118[24]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v119[3]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v120[24]; // [rsp+228h] [rbp+120h] BYREF
  char v121; // [rsp+240h] [rbp+138h] BYREF
  __m256i v122; // [rsp+248h] [rbp+140h] BYREF
  __int128 v123; // [rsp+268h] [rbp+160h]
  __int128 v124; // [rsp+278h] [rbp+170h]
  int v125; // [rsp+288h] [rbp+180h]

  v101 = a4;
  v102 = a3;
  v4 = (char *)this + 112;
  v7 = 0;
  if ( CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 3);
    v76 = v9(*((_QWORD *)this + 9), v10);
    v7 = v76;
    if ( v76 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x90u, 0LL);
    return (unsigned int)v7;
  }
  v89 = 0LL;
  v88 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 2LL) )
  {
    v11 = *((_QWORD *)this + 9);
    *(_QWORD *)&v92.left = &v89;
    *(_QWORD *)&v92.right = 0LL;
    LOBYTE(v93) = 1;
    LOWORD(v90) = *(_WORD *)(v11 + 80);
    BYTE2(v90) = *(_BYTE *)(v11 + 82);
    v7 = CSurfaceDrawListBrush::CreateWithTextureTransform(v11 + 56, &v90, &Matrix3x3::Identity, &v92.right);
    if ( (_BYTE)v93 )
    {
      v12 = **(CSurfaceDrawListBrush ***)&v92.left;
      **(_QWORD **)&v92.left = *(_QWORD *)&v92.right;
      if ( v12 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1u);
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v7, 0xA2u, 0LL);
      goto LABEL_41;
    }
    if ( !*(_BYTE *)(v11 + 145) )
    {
      v13 = v89;
      *(_OWORD *)((char *)v89 + 120) = *(_OWORD *)(v11 + 120);
      *((_BYTE *)v13 + 145) = 0;
    }
    v14 = v89;
    *(_OWORD *)((char *)v89 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v14 + 3) = *((_QWORD *)this + 3);
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v89, (const struct D2D_VECTOR_2F *)this + 7);
    if ( *(_BYTE *)(v11 + 144) )
    {
      v88 = 1;
      v125 = 0;
      CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 368), (struct CMILMatrix *)&v122);
      v15 = CMILMatrix::CMILMatrix((CMILMatrix *)v108, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
      v104 = *(__m256i *)v15;
      v105 = *((_OWORD *)v15 + 2);
      v106 = *((_OWORD *)v15 + 3);
      v107 = *((_DWORD *)v15 + 16);
      CMILMatrix::Multiply((CMILMatrix *)&v104, (const struct CMILMatrix *)&v122);
      v125 = v107;
      v122 = v104;
      v123 = v105;
      v124 = v106;
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v122, &v97, &v98);
      *((_BYTE *)v89 + 147) = 1;
    }
  }
  v113 = v116;
  v114 = v116;
  v115 = v117;
  v109 = (struct D2D_MATRIX_3X2_F *)v112;
  v110 = v112;
  v111 = &v113;
  CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (int)v4,
    (int)&v113,
    (int)&v109,
    (__int64)this + 32,
    SLODWORD(FLOAT_1_1920929eN7));
  v119[0] = v120;
  v119[1] = v120;
  v119[2] = &v121;
  v117[0] = v118;
  v117[1] = v118;
  v117[2] = v119;
  v16 = (_QWORD *)gsl::span<float,-1>::span<float,-1>(&v95, &v109);
  v100 = *(__m128 *)gsl::span<float const,-1>::span<float const,-1>(&v91, v16);
  v17 = (_QWORD *)gsl::span<float,-1>::span<float,-1>(&v103, &v113);
  v99 = *(__m128 *)gsl::span<float const,-1>::span<float const,-1>(&v92, v17);
  CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (__int64)v4,
    v18,
    (__int128 *)&v99,
    (unsigned int *)&v100,
    (__int64)v119,
    (__int64)v117);
  v19 = v110;
  v20 = 1;
  v21 = v109;
  v94 = 1;
  if ( (unsigned __int64)((v110 - (_BYTE *)v109) >> 2) <= 1 )
  {
LABEL_32:
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v117);
    v54 = (void *)v117[0];
    v55 = v117[0] == (_QWORD)v118;
    v117[0] = 0LL;
    if ( v55 )
      v54 = 0LL;
    DefaultHeap::Free(v54);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v119);
    v56 = (void *)v119[0];
    v55 = v119[0] == (_QWORD)v120;
    v119[0] = 0LL;
    if ( v55 )
      v56 = 0LL;
    DefaultHeap::Free(v56);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v109);
    v57 = v109;
    v55 = v109 == (struct D2D_MATRIX_3X2_F *)v112;
    v109 = 0LL;
    if ( v55 )
      v57 = 0LL;
    DefaultHeap::Free(v57);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v113);
    v58 = v113;
    v55 = v113 == v116;
    v113 = 0LL;
    if ( v55 )
      v58 = 0LL;
    goto LABEL_40;
  }
  v22 = 1LL;
  v23 = v114;
  v24 = v113;
  v25 = v119[0];
  v26 = v117[0];
  while ( 1 )
  {
    v27 = *((float *)&v21->0 + v20 - 1) - *(&v21->m11 + v22);
    v28 = v20 - 1;
    v96 = v20 - 1;
    v103 = v28;
    if ( COERCE_FLOAT(LODWORD(v27) & _xmm) > 0.0000011920929 )
    {
      v29 = 1;
      v90 = 1;
      v30 = (v23 - v24) >> 2;
      if ( v30 > 1 )
        break;
    }
LABEL_31:
    v22 = ++v20;
    v94 = v20;
    if ( v20 >= (unsigned __int64)((v19 - (_BYTE *)v21) >> 2) )
      goto LABEL_32;
  }
  v31 = 1LL;
  while ( 1 )
  {
    v32 = *(float *)&v24[4 * v31];
    v33 = v29 - 1;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v24[4 * v33] - v32) & _xmm) > 0.0000011920929 )
      break;
LABEL_29:
    v29 = v90 + 1;
    v53 = (v23 - v24) >> 2;
    v31 = v29;
    ++v90;
    if ( v29 >= v53 )
    {
      v20 = v94;
      goto LABEL_31;
    }
  }
  v34 = *((_DWORD *)&v21->m11 + v28);
  v99.m128_i32[0] = *(_DWORD *)&v24[4 * v33];
  v99.m128_i32[3] = *((_DWORD *)&v21->m11 + v22);
  v35 = *(_DWORD *)(v26 + 4 * v28);
  v36 = *((_BYTE *)this + 569);
  v100.m128_i32[1] = v35;
  v37 = *(_DWORD *)(v26 + 4 * v22);
  *(unsigned __int64 *)((char *)v99.m128_u64 + 4) = __PAIR64__(LODWORD(v32), v34);
  v38 = *(float *)(v25 + 4 * v33);
  v100.m128_i32[3] = v37;
  v100.m128_f32[0] = v38;
  v100.m128_i32[2] = *(_DWORD *)(v25 + 4 * v31);
  v91.left = v38;
  LODWORD(v39) = _mm_shuffle_ps(v100, v100, 85).m128_u32[0];
  LODWORD(v40) = _mm_shuffle_ps(v100, v100, 170).m128_u32[0];
  LODWORD(v41) = _mm_shuffle_ps(v100, v100, 255).m128_u32[0];
  LODWORD(v42) = _mm_shuffle_ps(v99, v99, 85).m128_u32[0];
  LODWORD(v43) = _mm_shuffle_ps(v99, v99, 170).m128_u32[0];
  LODWORD(v44) = _mm_shuffle_ps(v99, v99, 255).m128_u32[0];
  v91.top = v39;
  v91.right = v40;
  v91.bottom = v41;
  LODWORD(v95.left) = v99.m128_i32[0];
  v95.top = v42;
  v95.right = v43;
  v95.bottom = v44;
  if ( v36
    && (float)(*((float *)this + 138) - v99.m128_f32[0]) <= 0.0000011920929
    && (float)(*((float *)this + 139) - v42) <= 0.0000011920929
    && (float)(v43 - *((float *)this + 140)) <= 0.0000011920929
    && (float)(v44 - *((float *)this + 141)) <= 0.0000011920929 )
  {
LABEL_28:
    v28 = v103;
    goto LABEL_29;
  }
  if ( !v89 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v100.m128_f32[0] - v40) & _xmm) <= 0.0009765625 )
    {
      v78 = (float)(v40 + v100.m128_f32[0]) * 0.5;
      v91.left = v78 - 0.00048828125;
      v91.right = v78 + 0.00048828125;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v39 - v41) & _xmm) <= 0.0009765625 )
    {
      v79 = (float)(v39 + v41) * 0.5;
      v91.top = v79 - 0.00048828125;
      v91.bottom = v79 + 0.00048828125;
    }
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v91, &v95, (const struct D2D_RECT_F *)&v122, v21);
    v68 = *((_QWORD *)this + 9);
    v69 = v91;
    *(_BYTE *)(v68 + 52) = 1;
    *(struct D2D_RECT_F *)(v68 + 32) = v69;
    *(_DWORD *)(v68 + 48) = v70;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v92,
      (const struct D2D1::Matrix3x2F *)&v122,
      (CNineGridDrawListBrush *)((char *)this + 8));
    v72 = *((_QWORD *)this + 9);
    v73 = v93;
    *(struct D2D_RECT_F *)(v72 + 8) = v92;
    *(_QWORD *)(v72 + 24) = v73;
    if ( *((_BYTE *)this + 64) )
    {
      D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v95, &v91, &v92, v71);
      v80 = *((float *)this + 15);
      v81 = (__m128)*((unsigned int *)this + 14);
      v82 = v80 * v92.right;
      v83 = v81;
      v84 = *((_QWORD *)this + 9);
      v83.m128_f32[0] = v81.m128_f32[0] * v92.left;
      v81.m128_f32[0] = v81.m128_f32[0] * v92.top;
      *(_BYTE *)(v84 + 64) = 1;
      v83.m128_f32[0] = (float)(v83.m128_f32[0] + v82) + *(float *)&v93;
      v81.m128_f32[0] = (float)(v81.m128_f32[0] + (float)(v80 * v92.bottom)) + *((float *)&v93 + 1);
      *(_QWORD *)(v84 + 56) = _mm_unpacklo_ps(v83, v81).m128_u64[0];
    }
    v74 = ((__int64 (__fastcall *)(_QWORD, void *))v102)(*((_QWORD *)this + 9), v101);
    v7 = v74;
    if ( v74 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x1BDu, 0LL);
      goto LABEL_75;
    }
    goto LABEL_27;
  }
  v45 = (float *)*((_QWORD *)this + 9);
  if ( v88 )
  {
    if ( (float)(v40 - v100.m128_f32[0]) > 0.5
      && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v43 - v99.m128_f32[0])
                                                        / (float)(v40 - v100.m128_f32[0]))
                                                * v97) - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( v100.m128_f32[0] <= v45[8] )
        v60 = 0.0;
      else
        v60 = FLOAT_0_5;
      v61 = v100.m128_f32[0] + v60;
      v62 = v45[10];
      v91.left = v61;
      if ( v62 <= v40 )
        v63 = 0.0;
      else
        v63 = FLOAT_0_5;
      v91.right = v40 - v63;
    }
    if ( (float)(v41 - v39) > 0.5
      && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v44 - v42) / (float)(v41 - v39)) * v98) - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( v39 <= v45[9] )
        v64 = 0.0;
      else
        v64 = FLOAT_0_5;
      v65 = v39 + v64;
      v66 = v45[11];
      v91.top = v65;
      if ( v66 <= v41 )
        v67 = 0.0;
      else
        v67 = FLOAT_0_5;
      v91.bottom = v41 - v67;
    }
  }
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v95, &v91, &v92, v21);
  v122.m256i_i32[5] = 0;
  v122.m256i_i32[0] = LODWORD(v92.left);
  *(__int64 *)((char *)v122.m256i_i64 + 4) = LODWORD(v92.top);
  *(__int64 *)((char *)&v122.m256i_i64[1] + 4) = *(_QWORD *)&v92.right;
  v122.m256i_i64[3] = v93;
  LODWORD(v123) = 1065353216;
  v46 = Matrix3x3::operator*(&v122, &v104, v45 + 21);
  v47 = v89;
  *(_OWORD *)((char *)v89 + 84) = *(_OWORD *)v46;
  v48 = v95;
  *(_OWORD *)((char *)v47 + 100) = *(_OWORD *)(v46 + 16);
  *((_DWORD *)v47 + 29) = *(_DWORD *)(v46 + 32);
  v49 = v89;
  *((_BYTE *)v89 + 52) = 1;
  *((struct D2D_RECT_F *)v49 + 2) = v48;
  *((_DWORD *)v49 + 12) = v50;
  v51 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v102)(v89, v101);
  v7 = v51;
  if ( v51 >= 0 )
  {
LABEL_27:
    v23 = v114;
    v24 = v113;
    v19 = v110;
    v21 = v109;
    v25 = v119[0];
    v26 = v117[0];
    goto LABEL_28;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x18Cu, 0LL);
LABEL_75:
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v117);
  v85 = (void *)v117[0];
  v55 = v117[0] == (_QWORD)v118;
  v117[0] = 0LL;
  if ( v55 )
    v85 = 0LL;
  DefaultHeap::Free(v85);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v119);
  v86 = (void *)v119[0];
  v55 = v119[0] == (_QWORD)v120;
  v119[0] = 0LL;
  if ( v55 )
    v86 = 0LL;
  DefaultHeap::Free(v86);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v109);
  v87 = v109;
  v55 = v109 == (struct D2D_MATRIX_3X2_F *)v112;
  v109 = 0LL;
  if ( v55 )
    v87 = 0LL;
  DefaultHeap::Free(v87);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v113);
  v58 = v113;
  v55 = v113 == v116;
  v113 = 0LL;
  if ( v55 )
    v58 = 0LL;
LABEL_40:
  DefaultHeap::Free(v58);
LABEL_41:
  if ( v89 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v89, 1u);
  return (unsigned int)v7;
}
