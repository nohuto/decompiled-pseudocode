/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EC7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x1800098D0 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180018084 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180049DF0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180052F50 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180053280 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057AD4 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080080 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??1?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180084AE8 (--1-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QE.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800869C0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x1800869E4 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800C17A4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C3328 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800C81A0 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x1800D2434 (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180163F3C (-terminate@details@gsl@@YAXXZ.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801EFF20 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  float **v4; // r15
  int v7; // edi
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64); // r9
  __int64 v10; // r10
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  CSurfaceDrawListBrush *v14; // rcx
  unsigned int v15; // r8d
  CSurfaceDrawListBrush *v16; // rax
  CMILMatrix *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  gsl::details *v22; // rcx
  __m128 v23; // xmm7
  __int64 v24; // rax
  __int64 v25; // rdx
  _BYTE *v26; // r8
  unsigned int v27; // r13d
  __int64 v28; // rcx
  __int64 v29; // r15
  _BYTE *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r11
  float v34; // xmm3_4
  float v35; // xmm0_4
  unsigned int v36; // r12d
  __int64 v37; // rsi
  float v38; // xmm2_4
  __int64 v39; // r14
  bool v40; // zf
  unsigned int v41; // xmm1_4
  __int32 v42; // xmm1_4
  float v43; // xmm13_4
  float v44; // xmm10_4
  float v45; // xmm14_4
  float v46; // xmm7_4
  float v47; // xmm6_4
  float v48; // xmm11_4
  float v49; // xmm9_4
  float v50; // xmm8_4
  struct D2D_MATRIX_3X2_F *v51; // r9
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // r8d
  int v55; // edi
  int v56; // edi
  int v57; // eax
  int v58; // edi
  int v59; // eax
  int v60; // edi
  float v61; // xmm1_4
  __int64 v62; // rsi
  struct D2D_MATRIX_3X2_F *v63; // r9
  float *v64; // rax
  float v65; // xmm0_4
  FLOAT v66; // xmm10_4
  float v67; // xmm0_4
  float v68; // xmm0_4
  float v69; // xmm0_4
  FLOAT v70; // xmm7_4
  float v71; // xmm0_4
  float v72; // xmm0_4
  float *v73; // rax
  CSurfaceDrawListBrush *v74; // rcx
  void *v75; // rdx
  struct D2D_RECT_F v76; // xmm0
  CSurfaceDrawListBrush *v77; // rax
  int v78; // eax
  __int64 v79; // rcx
  float v80; // xmm0_4
  float v81; // xmm0_4
  __int64 v82; // rax
  struct D2D_RECT_F v83; // xmm0
  struct D2D_MATRIX_3X2_F *v84; // r9
  __int64 v85; // rax
  __int64 v86; // xmm1_8
  __m128 left_low; // xmm2
  __int64 v88; // rax
  __m128 top_low; // xmm1
  float v90; // xmm0_4
  int v91; // eax
  __int64 v92; // rcx
  char v94; // [rsp+48h] [rbp-C0h]
  CSurfaceDrawListBrush *v95; // [rsp+50h] [rbp-B8h] BYREF
  float v96; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v97; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v98; // [rsp+78h] [rbp-90h] BYREF
  char v99; // [rsp+88h] [rbp-80h]
  struct D2D_RECT_F v100; // [rsp+98h] [rbp-70h] BYREF
  __int64 v101; // [rsp+A8h] [rbp-60h]
  struct D2D_RECT_F v102; // [rsp+B0h] [rbp-58h] BYREF
  float v103; // [rsp+C0h] [rbp-48h] BYREF
  __m128 v104; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v105; // [rsp+D8h] [rbp-30h]
  void *v106; // [rsp+E0h] [rbp-28h]
  int (*v107)(const struct CDrawListBrush *, void *); // [rsp+E8h] [rbp-20h]
  struct D2D_RECT_F v108; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v109; // [rsp+100h] [rbp-8h]
  __int128 v110; // [rsp+110h] [rbp+8h]
  __int128 v111; // [rsp+120h] [rbp+18h]
  int v112; // [rsp+130h] [rbp+28h]
  _BYTE v113[68]; // [rsp+134h] [rbp+2Ch] BYREF
  gsl::details *v114; // [rsp+178h] [rbp+70h] BYREF
  _BYTE *v115; // [rsp+180h] [rbp+78h]
  gsl::details **v116; // [rsp+188h] [rbp+80h]
  _BYTE v117[24]; // [rsp+190h] [rbp+88h] BYREF
  gsl::details *v118; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE *v119; // [rsp+1B0h] [rbp+A8h]
  struct D2D_RECT_F *v120; // [rsp+1B8h] [rbp+B0h]
  _BYTE v121[24]; // [rsp+1C0h] [rbp+B8h] BYREF
  struct D2D_RECT_F v122; // [rsp+1D8h] [rbp+D0h] BYREF
  __int128 v123; // [rsp+1E8h] [rbp+E0h]
  __int128 v124; // [rsp+1F8h] [rbp+F0h]
  __int128 v125; // [rsp+208h] [rbp+100h]
  int v126; // [rsp+218h] [rbp+110h]
  _QWORD v127[3]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v128[24]; // [rsp+240h] [rbp+138h] BYREF
  _QWORD v129[3]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v130[24]; // [rsp+270h] [rbp+168h] BYREF
  __int64 v131; // [rsp+288h] [rbp+180h] BYREF

  v106 = a4;
  v107 = a3;
  v4 = (float **)((char *)this + 112);
  v7 = 0;
  if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v95 = 0LL;
    v94 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 2LL) )
    {
      v13 = *((_QWORD *)this + 9);
      v98.m128_u64[1] = 0LL;
      v98.m128_u64[0] = (unsigned __int64)&v95;
      v99 = 1;
      LOWORD(v96) = *(_WORD *)(v13 + 104);
      BYTE2(v96) = *(_BYTE *)(v13 + 106);
      v7 = CSurfaceDrawListBrush::CreateWithTextureTransform(
             (struct CSurfaceDrawListBrush *)(v13 + 56),
             (__int16 *)&v96,
             (__int64)&Matrix3x3::Identity,
             &v98.m128_u64[1]);
      if ( v99 )
      {
        v14 = *(CSurfaceDrawListBrush **)v98.m128_u64[0];
        *(_QWORD *)v98.m128_u64[0] = v98.m128_u64[1];
        if ( v14 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1, v15);
      }
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v7, 0xB5u, 0LL);
LABEL_94:
        std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v95, v53, v54);
        return (unsigned int)v7;
      }
      *((_OWORD *)v95 + 9) = *(_OWORD *)(v13 + 144);
      v16 = v95;
      *(_OWORD *)((char *)v95 + 8) = *(_OWORD *)((char *)this + 8);
      *((_QWORD *)v16 + 3) = *((_QWORD *)this + 3);
      *((_BYTE *)v95 + 168) = 0;
      if ( *((_BYTE *)this + 64) )
        CSurfaceDrawListBrush::SetSnapToPixelsReference(v95, (const struct D2D_VECTOR_2F *)this + 7);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl)
        && *(_BYTE *)(v13 + 168) )
      {
        v94 = 1;
        v126 = 0;
        CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 408), (struct CMILMatrix *)&v122);
        v17 = CMILMatrix::CMILMatrix((CMILMatrix *)v113, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
        v18 = *((_OWORD *)v17 + 1);
        v108 = *(struct D2D_RECT_F *)v17;
        v19 = *((_OWORD *)v17 + 2);
        v109 = v18;
        v20 = *((_OWORD *)v17 + 3);
        LODWORD(v17) = *((_DWORD *)v17 + 16);
        v110 = v19;
        v112 = (int)v17;
        v111 = v20;
        CMILMatrix::Multiply((CMILMatrix *)&v108, (const struct CMILMatrix *)&v122);
        v126 = v112;
        v122 = v108;
        v123 = v109;
        v124 = v110;
        v125 = v111;
        CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v122, &v96, &v103);
        *((_BYTE *)v95 + 169) = 1;
      }
    }
    v118 = (gsl::details *)v121;
    v119 = v121;
    v120 = &v122;
    v114 = (gsl::details *)v117;
    v115 = v117;
    v116 = &v118;
    CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      v4,
      (__int64 *)&v118,
      (__int64 *)&v114,
      (float *)this + 8,
      0.00000011920929);
    v129[0] = v130;
    v129[1] = v130;
    v129[2] = &v131;
    v127[0] = v128;
    v127[1] = v128;
    v127[2] = v129;
    v21 = gsl::narrow<__int64,unsigned __int64>((v115 - (_BYTE *)v114) >> 2);
    v98.m128_u64[0] = v21;
    if ( v21 < 0
      || (v22 = v114, (v98.m128_u64[1] = (unsigned __int64)v114) == 0) && v21
      || (v23 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                             (__int64 *)&v102,
                             (__int64 *)&v98),
          v24 = gsl::narrow<__int64,unsigned __int64>((v119 - (_BYTE *)v118) >> 2),
          v98.m128_u64[0] = v24,
          v24 < 0)
      || (v22 = v118, (v98.m128_u64[1] = (unsigned __int64)v118) == 0) && v24 )
    {
      gsl::details::terminate(v22);
      JUMPOUT(0x1800ED390LL);
    }
    v104 = v23;
    v98 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                       (__int64 *)&v97,
                       (__int64 *)&v98);
    CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      (__int64 *)v4,
      v25,
      (__int128 *)&v98,
      (unsigned int *)&v104,
      v129,
      v127,
      0.00000011920929);
    v26 = v115;
    v27 = 1;
    v28 = (__int64)v114;
    if ( (unsigned __int64)((v115 - (_BYTE *)v114) >> 2) > 1 )
    {
      v29 = 1LL;
      v30 = v119;
      v31 = (__int64)v118;
      v32 = v129[0];
      v33 = v127[0];
      v34 = FLOAT_0_0000011920929;
      while ( 1 )
      {
        v35 = *(float *)(v28 + 4LL * (v27 - 1)) - *(float *)(v28 + 4 * v29);
        v105 = v27 - 1;
        if ( v34 < COERCE_FLOAT(LODWORD(v35) & _xmm) )
        {
          v36 = 1;
          if ( (unsigned __int64)((__int64)&v30[-v31] >> 2) > 1 )
            break;
        }
LABEL_90:
        v29 = ++v27;
        if ( v27 >= (unsigned __int64)((__int64)&v26[-v28] >> 2) )
          goto LABEL_93;
      }
      v37 = 1LL;
      while ( 1 )
      {
        v38 = *(float *)(v31 + 4 * v37);
        v39 = v36 - 1;
        if ( v34 < COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v31 + 4 * v39) - v38) & _xmm) )
        {
          v40 = *((_BYTE *)this + 569) == 0;
          v104.m128_i32[0] = *(_DWORD *)(v31 + 4 * v39);
          v104.m128_i32[3] = *(_DWORD *)(v28 + 4 * v29);
          v41 = *(_DWORD *)(v33 + 4 * v105);
          v26 = v115;
          v104.m128_i32[1] = *(_DWORD *)(v28 + 4 * v105);
          v98.m128_i32[0] = *(_DWORD *)(v32 + 4 * v39);
          *(unsigned __int64 *)((char *)v98.m128_u64 + 4) = __PAIR64__(*(_DWORD *)(v32 + 4 * v37), v41);
          v42 = *(_DWORD *)(v33 + 4 * v29);
          v104.m128_f32[2] = v38;
          v43 = v104.m128_f32[0];
          v98.m128_i32[3] = v42;
          v44 = v98.m128_f32[0];
          LODWORD(v102.left) = v104.m128_i32[0];
          LODWORD(v45) = _mm_shuffle_ps(v104, v104, 85).m128_u32[0];
          LODWORD(v46) = _mm_shuffle_ps(v98, v98, 85).m128_u32[0];
          LODWORD(v47) = _mm_shuffle_ps(v98, v98, 170).m128_u32[0];
          LODWORD(v48) = _mm_shuffle_ps(v98, v98, 255).m128_u32[0];
          LODWORD(v49) = _mm_shuffle_ps(v104, v104, 170).m128_u32[0];
          LODWORD(v50) = _mm_shuffle_ps(v104, v104, 255).m128_u32[0];
          v97.top = v46;
          v97.right = v47;
          v97.bottom = v48;
          v102.top = v45;
          v102.right = v49;
          v102.bottom = v50;
          LODWORD(v97.left) = v98.m128_i32[0];
          if ( v40
            || (float)(*((float *)this + 138) - v104.m128_f32[0]) > v34
            || (float)(*((float *)this + 139) - v45) > v34
            || (float)(v49 - *((float *)this + 140)) > v34
            || (float)(v50 - *((float *)this + 141)) > v34 )
          {
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
            if ( v36 == 1 )
              v52 = *((_DWORD *)this + 12) & 0x3000000;
            else
              v52 = 0;
            if ( v27 == 1 )
              v55 = *((_DWORD *)this + 12) & 3;
            else
              v55 = 0;
            v56 = v52 | v55;
            if ( v37 == ((v119 - (_BYTE *)v118) >> 2) - 1 )
              v57 = *((_DWORD *)this + 12) & 0x300;
            else
              v57 = 0;
            v58 = v57 | v56;
            if ( v29 == ((v115 - (_BYTE *)v114) >> 2) - 1 )
              v59 = *((_DWORD *)this + 12) & 0x30000;
            else
              v59 = 0;
            v60 = v59 | v58;
            if ( *((_BYTE *)this + 569) && v60 != 50529027 )
            {
              v61 = *((float *)this + 139);
              if ( v45 >= v61 && *((float *)this + 141) >= v50 )
              {
                if ( v43 == *((float *)this + 140) )
                  v60 |= 0x3000000u;
                if ( v49 == *((float *)this + 138) )
                  v60 |= 0x300u;
              }
              if ( v43 >= *((float *)this + 138) && *((float *)this + 140) >= v49 )
              {
                if ( v45 == *((float *)this + 141) )
                  v60 |= 3u;
                if ( v50 == v61 )
                  v60 |= 0x30000u;
              }
            }
            if ( v95 )
            {
              v62 = *((_QWORD *)this + 9);
              if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl)
                && v94 )
              {
                v64 = (float *)*((_QWORD *)this + 9);
                if ( (float)(v47 - v44) > 0.5
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v49 - v43) / (float)(v47 - v44)) * v96) - 1.0) & _xmm) >= 0.000081380211 )
                {
                  if ( v44 <= v64[8] )
                    v65 = 0.0;
                  else
                    v65 = FLOAT_0_5;
                  v66 = v44 + v65;
                  v67 = v64[10];
                  v97.left = v66;
                  if ( v67 <= v47 )
                    v68 = 0.0;
                  else
                    v68 = FLOAT_0_5;
                  v97.right = v47 - v68;
                }
                if ( (float)(v48 - v46) > 0.5
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v50 - v45) / (float)(v48 - v46)) * v103) - 1.0) & _xmm) >= 0.000081380211 )
                {
                  if ( v46 <= v64[9] )
                    v69 = 0.0;
                  else
                    v69 = FLOAT_0_5;
                  v70 = v46 + v69;
                  v71 = v64[11];
                  v97.top = v70;
                  if ( v71 <= v48 )
                    v72 = 0.0;
                  else
                    v72 = FLOAT_0_5;
                  v97.bottom = v48 - v72;
                }
              }
              D2DMatrixHelper::ComputeRectangleTransform(&v102, &v97, &v100, v63);
              v122.right = 0.0;
              v122.left = v100.left;
              v122.top = v100.top;
              v122.bottom = v100.right;
              *(_QWORD *)&v123 = LODWORD(v100.bottom);
              *((_QWORD *)&v123 + 1) = v101;
              LODWORD(v124) = 1065353216;
              v73 = Matrix3x3::operator*(&v122.left, &v108.left, (float *)(v62 + 108));
              v74 = v95;
              v75 = v106;
              *(_OWORD *)((char *)v95 + 108) = *(_OWORD *)v73;
              v76 = v102;
              *(_OWORD *)((char *)v74 + 124) = *((_OWORD *)v73 + 1);
              *((float *)v74 + 35) = v73[8];
              v77 = v95;
              *((_BYTE *)v95 + 52) = 1;
              *((struct D2D_RECT_F *)v77 + 2) = v76;
              *((_DWORD *)v77 + 12) = v60;
              v78 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v107)(v95, v75);
              v7 = v78;
              if ( v78 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v78, 0x1C0u, 0LL);
                break;
              }
            }
            else
            {
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v44 - v47) & _xmm) <= 0.0009765625 )
              {
                v80 = (float)(v47 + v44) * 0.5;
                v97.right = v80 + 0.00048828125;
                v97.left = v80 - 0.00048828125;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v46 - v48) & _xmm) <= 0.0009765625 )
              {
                v81 = (float)(v46 + v48) * 0.5;
                v97.bottom = v81 + 0.00048828125;
                v97.top = v81 - 0.00048828125;
              }
              D2DMatrixHelper::ComputeRectangleTransform(&v97, &v102, &v122, v51);
              v82 = *((_QWORD *)this + 9);
              v83 = v97;
              *(_BYTE *)(v82 + 52) = 1;
              *(struct D2D_RECT_F *)(v82 + 32) = v83;
              *(_DWORD *)(v82 + 48) = v60;
              D2D1::Matrix3x2F::SetProduct(
                (D2D1::Matrix3x2F *)&v100,
                (const struct D2D1::Matrix3x2F *)&v122,
                (CNineGridDrawListBrush *)((char *)this + 8));
              v85 = *((_QWORD *)this + 9);
              v86 = v101;
              *(struct D2D_RECT_F *)(v85 + 8) = v100;
              *(_QWORD *)(v85 + 24) = v86;
              if ( *((_BYTE *)this + 64) )
              {
                D2DMatrixHelper::ComputeRectangleTransform(&v102, &v97, &v100, v84);
                left_low = (__m128)LODWORD(v100.left);
                v88 = *((_QWORD *)this + 9);
                top_low = (__m128)LODWORD(v100.top);
                top_low.m128_f32[0] = v100.top * *((float *)this + 14);
                left_low.m128_f32[0] = (float)(v100.left * *((float *)this + 14))
                                     + (float)(v100.right * *((float *)this + 15));
                v90 = v100.bottom * *((float *)this + 15);
                *(_BYTE *)(v88 + 64) = 1;
                left_low.m128_f32[0] = left_low.m128_f32[0] + *(float *)&v101;
                top_low.m128_f32[0] = (float)(top_low.m128_f32[0] + v90) + *((float *)&v101 + 1);
                *(_QWORD *)(v88 + 56) = _mm_unpacklo_ps(left_low, top_low).m128_u64[0];
              }
              v91 = ((__int64 (__fastcall *)(_QWORD, void *))v107)(*((_QWORD *)this + 9), v106);
              v7 = v91;
              if ( v91 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, v91, 0x1F1u, 0LL);
                break;
              }
            }
            v30 = v119;
            v31 = (__int64)v118;
            v26 = v115;
            v28 = (__int64)v114;
            v32 = v129[0];
            v33 = v127[0];
            v34 = FLOAT_0_0000011920929;
          }
        }
        v37 = ++v36;
        if ( v36 >= (unsigned __int64)((__int64)&v30[-v31] >> 2) )
          goto LABEL_90;
      }
    }
LABEL_93:
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(v127);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(v129);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(&v114);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(&v118);
    goto LABEL_94;
  }
  *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 8);
  *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 3);
  v11 = v9(*((_QWORD *)this + 9), v10);
  v7 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA3u, 0LL);
  return (unsigned int)v7;
}
