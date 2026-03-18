/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180011370
 * Callers:
 *     <none>
 * Callees:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180010C2C (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x180010E10 (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180011C50 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180011C78 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180011EFC (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800364EC (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18004AA40 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180051568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180070448 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800BC0E0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801F28A0 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  char *v3; // r14
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 (__fastcall *v7)(_QWORD, __int64); // r9
  __int64 v8; // r10
  __int64 v9; // r12
  __int64 v10; // rsi
  CSurfaceDrawListBrush *v11; // rcx
  CSurfaceDrawListBrush *v12; // rax
  __int64 v13; // rax
  __m128 v14; // xmm7
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  unsigned int v18; // r13d
  _BYTE *v19; // r8
  _BYTE *v20; // r9
  _BYTE *v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r15
  float v24; // xmm0_4
  unsigned int v25; // r11d
  unsigned __int64 v26; // rax
  __int64 v27; // r10
  float v28; // xmm2_4
  __int64 v29; // rsi
  char v30; // r11
  unsigned int v31; // xmm0_4
  __int32 v32; // xmm1_4
  FLOAT v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm12_4
  float v37; // xmm7_4
  float v38; // xmm5_4
  float v39; // xmm8_4
  struct D2D_MATRIX_3X2_F *v40; // r9
  int v41; // edx
  unsigned int v42; // edx
  int v43; // eax
  int v44; // edx
  int v45; // edi
  int v46; // edi
  __int64 v47; // r11
  __int64 v48; // rax
  CSurfaceDrawListBrush *v49; // rcx
  void *v50; // rdx
  struct D2D_RECT_F v51; // xmm0
  CSurfaceDrawListBrush *v52; // rax
  int v53; // eax
  unsigned int v54; // ecx
  void *v55; // rcx
  bool v56; // zf
  void *v57; // rcx
  void *v58; // rcx
  void *v59; // rcx
  CSurfaceDrawListBrush *v60; // rcx
  unsigned int v61; // edx
  float v63; // xmm3_4
  __int64 v64; // rax
  struct D2D_RECT_F v65; // xmm0
  struct D2D_MATRIX_3X2_F *v66; // r9
  __int64 v67; // rax
  __int64 v68; // xmm1_8
  int v69; // eax
  unsigned int v70; // ecx
  int v71; // eax
  unsigned int v72; // ecx
  float v73; // xmm0_4
  float v74; // xmm1_4
  __m128 left_low; // xmm2
  __int64 v76; // rax
  __m128 top_low; // xmm1
  float v78; // xmm0_4
  void *v79; // rcx
  void *v80; // rcx
  void *v81; // rcx
  void *v82; // rcx
  CSurfaceDrawListBrush *v83; // [rsp+48h] [rbp-C0h] BYREF
  int v84; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v85; // [rsp+68h] [rbp-A0h] BYREF
  char v86; // [rsp+78h] [rbp-90h]
  struct D2D_RECT_F v87; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_RECT_F v88; // [rsp+98h] [rbp-70h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-60h]
  struct D2D_RECT_F v90; // [rsp+B0h] [rbp-58h] BYREF
  __m128 v91; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-30h]
  void *v93; // [rsp+E0h] [rbp-28h]
  int (*v94)(const struct CDrawListBrush *, void *); // [rsp+E8h] [rbp-20h]
  _BYTE v95[40]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE *v96; // [rsp+118h] [rbp+10h] BYREF
  _BYTE *v97; // [rsp+120h] [rbp+18h]
  _BYTE **v98; // [rsp+128h] [rbp+20h]
  _BYTE v99[24]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE *v100; // [rsp+148h] [rbp+40h] BYREF
  _BYTE *v101; // [rsp+150h] [rbp+48h]
  _QWORD *v102; // [rsp+158h] [rbp+50h]
  _BYTE v103[24]; // [rsp+160h] [rbp+58h] BYREF
  _QWORD v104[3]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v105[24]; // [rsp+190h] [rbp+88h] BYREF
  _QWORD v106[3]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v107[24]; // [rsp+1C0h] [rbp+B8h] BYREF
  struct D2D_RECT_F v108; // [rsp+1D8h] [rbp+D0h] BYREF
  FLOAT bottom; // [rsp+1E8h] [rbp+E0h]
  int v110; // [rsp+1ECh] [rbp+E4h]
  __int64 v111; // [rsp+1F0h] [rbp+E8h]
  int v112; // [rsp+1F8h] [rbp+F0h]

  v93 = a3;
  v3 = (char *)this + 112;
  v94 = a2;
  v5 = 0;
  if ( CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    *(_OWORD *)(v6 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 3);
    v71 = v7(*((_QWORD *)this + 9), v8);
    v5 = v71;
    if ( v71 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x96u, 0LL);
    return v5;
  }
  v83 = 0LL;
  v9 = 1LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 2LL) )
  {
    v10 = *((_QWORD *)this + 9);
    v85.m128_u64[0] = (unsigned __int64)&v83;
    v86 = 1;
    v85.m128_u64[1] = 0LL;
    LOWORD(v84) = *(_WORD *)(v10 + 104);
    BYTE2(v84) = *(_BYTE *)(v10 + 106);
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v10 + 56, &v84, &Matrix3x3::Identity, &v85.m128_u16[4]);
    if ( v86 )
    {
      v11 = *(CSurfaceDrawListBrush **)v85.m128_u64[0];
      *(_QWORD *)v85.m128_u64[0] = v85.m128_u64[1];
      if ( v11 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v5, 0xA5u, 0LL);
      goto LABEL_44;
    }
    *((_OWORD *)v83 + 9) = *(_OWORD *)(v10 + 144);
    v12 = v83;
    *(_OWORD *)((char *)v83 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v12 + 3) = *((_QWORD *)this + 3);
    *((_BYTE *)v83 + 168) = 0;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v83, (const struct D2D_VECTOR_2F *)this + 7);
  }
  v96 = v99;
  v97 = v99;
  v98 = &v100;
  v100 = v103;
  v101 = v103;
  v102 = v104;
  CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (int)v3,
    (int)&v96,
    (int)&v100,
    (__int64)this + 32,
    SLODWORD(FLOAT_1_1920929eN7));
  v106[0] = v107;
  v106[1] = v107;
  v106[2] = &v108;
  v104[0] = v105;
  v104[1] = v105;
  v104[2] = v106;
  v13 = gsl::narrow<__int64,unsigned __int64>((v101 - v100) >> 2);
  v85.m128_u64[0] = v13;
  if ( v13 < 0
    || (v85.m128_u64[1] = (unsigned __int64)v100) == 0 && v13
    || (v14 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(&v90, &v85),
        v15 = gsl::narrow<__int64,unsigned __int64>((v97 - v96) >> 2),
        v85.m128_u64[0] = v15,
        v15 < 0)
    || (v85.m128_u64[1] = (unsigned __int64)v96) == 0 && v15 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v91 = v14;
  v85 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(&v87, &v85);
  CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (__int64)v3,
    v16,
    (__int128 *)&v85,
    (unsigned int *)&v91,
    (__int64)v106,
    (__int64)v104);
  v17 = v101;
  v18 = 1;
  v19 = v100;
  if ( (unsigned __int64)((v101 - v100) >> 2) > 1 )
  {
    v20 = v97;
    v21 = v96;
    v22 = v106[0];
    v23 = v104[0];
    do
    {
      v24 = *(float *)&v19[4 * v18 - 4] - *(float *)&v19[4 * v9];
      v92 = v18 - 1;
      if ( COERCE_FLOAT(LODWORD(v24) & _xmm) > 0.0000011920929 )
      {
        v25 = 1;
        v84 = 1;
        v26 = (v20 - v21) >> 2;
        if ( v26 > 1 )
        {
          v27 = 1LL;
          do
          {
            v28 = *(float *)&v21[4 * v27];
            v29 = v25 - 1;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v21[4 * v29] - v28) & _xmm) > 0.0000011920929 )
            {
              v91.m128_i32[0] = *(_DWORD *)&v21[4 * v29];
              v30 = *((_BYTE *)this + 569);
              v31 = *(_DWORD *)&v19[4 * v92];
              v91.m128_i32[3] = *(_DWORD *)&v19[4 * v9];
              v20 = v97;
              v85.m128_i32[1] = *(_DWORD *)(v23 + 4 * v92);
              v32 = *(_DWORD *)(v23 + 4 * v9);
              *(unsigned __int64 *)((char *)v91.m128_u64 + 4) = __PAIR64__(LODWORD(v28), v31);
              v33 = *(float *)(v22 + 4 * v29);
              v85.m128_i32[3] = v32;
              v85.m128_f32[0] = v33;
              v85.m128_i32[2] = *(_DWORD *)(v22 + 4 * v27);
              v87.left = v33;
              LODWORD(v34) = _mm_shuffle_ps(v85, v85, 85).m128_u32[0];
              LODWORD(v35) = _mm_shuffle_ps(v85, v85, 170).m128_u32[0];
              LODWORD(v36) = _mm_shuffle_ps(v85, v85, 255).m128_u32[0];
              LODWORD(v37) = _mm_shuffle_ps(v91, v91, 85).m128_u32[0];
              LODWORD(v38) = _mm_shuffle_ps(v91, v91, 170).m128_u32[0];
              LODWORD(v39) = _mm_shuffle_ps(v91, v91, 255).m128_u32[0];
              v87.top = v34;
              v87.right = v35;
              v87.bottom = v36;
              LODWORD(v90.left) = v91.m128_i32[0];
              v90.top = v37;
              v90.right = v38;
              v90.bottom = v39;
              if ( !v30
                || (float)(*((float *)this + 138) - v91.m128_f32[0]) > 0.0000011920929
                || (float)(*((float *)this + 139) - v37) > 0.0000011920929
                || (float)(v38 - *((float *)this + 140)) > 0.0000011920929
                || (float)(v39 - *((float *)this + 141)) > 0.0000011920929 )
              {
                if ( (_DWORD)v29 )
                  v40 = 0LL;
                else
                  v40 = (struct D2D_MATRIX_3X2_F *)(*((_DWORD *)this + 12) & 0x3000000);
                if ( v18 == 1 )
                  v41 = *((_DWORD *)this + 12) & 3;
                else
                  v41 = 0;
                v42 = (unsigned int)v40 | v41;
                if ( v27 == v26 - 1 )
                  v43 = *((_DWORD *)this + 12) & 0x300;
                else
                  v43 = 0;
                v44 = v43 | v42;
                if ( v9 == ((v17 - v19) >> 2) - 1 )
                  v45 = *((_DWORD *)this + 12) & 0x30000;
                else
                  v45 = 0;
                v46 = v44 | v45;
                if ( v30 && v46 != 50529027 )
                {
                  v63 = *((float *)this + 139);
                  if ( v37 >= v63 && *((float *)this + 141) >= v39 )
                  {
                    if ( v91.m128_f32[0] == *((float *)this + 140) )
                      v46 |= 0x3000000u;
                    if ( v38 == *((float *)this + 138) )
                      v46 |= 0x300u;
                  }
                  if ( v91.m128_f32[0] >= *((float *)this + 138) && *((float *)this + 140) >= v38 )
                  {
                    if ( v37 == *((float *)this + 141) )
                      v46 |= 3u;
                    if ( v39 == v63 )
                      v46 |= 0x30000u;
                  }
                }
                if ( v83 )
                {
                  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v90, &v87, &v88, v40);
                  v108.right = 0.0;
                  v110 = 0;
                  v108.left = v88.left;
                  v108.top = v88.top;
                  v108.bottom = v88.right;
                  bottom = v88.bottom;
                  v111 = v89;
                  v112 = 1065353216;
                  v48 = Matrix3x3::operator*(&v108, v95, v47 + 108);
                  v49 = v83;
                  v50 = v93;
                  *(_OWORD *)((char *)v83 + 108) = *(_OWORD *)v48;
                  v51 = v90;
                  *(_OWORD *)((char *)v49 + 124) = *(_OWORD *)(v48 + 16);
                  *((_DWORD *)v49 + 35) = *(_DWORD *)(v48 + 32);
                  v52 = v83;
                  *((_BYTE *)v83 + 52) = 1;
                  *((struct D2D_RECT_F *)v52 + 2) = v51;
                  *((_DWORD *)v52 + 12) = v46;
                  v53 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v94)(v83, v50);
                  v5 = v53;
                  if ( v53 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x13Du, 0LL);
LABEL_87:
                    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v104);
                    v79 = (void *)v104[0];
                    v56 = v104[0] == (_QWORD)v105;
                    v104[0] = 0LL;
                    if ( v56 )
                      v79 = 0LL;
                    operator delete(v79);
                    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v106);
                    v80 = (void *)v106[0];
                    v56 = v106[0] == (_QWORD)v107;
                    v106[0] = 0LL;
                    if ( v56 )
                      v80 = 0LL;
                    operator delete(v80);
                    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v100);
                    v81 = v100;
                    v56 = v100 == v103;
                    v100 = 0LL;
                    if ( v56 )
                      v81 = 0LL;
                    operator delete(v81);
                    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v96);
                    v82 = v96;
                    v56 = v96 == v99;
                    v96 = 0LL;
                    if ( v56 )
                      v82 = 0LL;
                    operator delete(v82);
                    v60 = v83;
                    if ( v83 )
                    {
                      v61 = 1;
LABEL_46:
                      CSurfaceDrawListBrush::`vector deleting destructor'(v60, v61);
                    }
                    return v5;
                  }
                }
                else
                {
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v85.m128_f32[0] - v35) & _xmm) <= 0.0009765625 )
                  {
                    v73 = (float)(v35 + v85.m128_f32[0]) * 0.5;
                    v87.right = v73 + 0.00048828125;
                    v87.left = v73 - 0.00048828125;
                  }
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v34 - v36) & _xmm) <= 0.0009765625 )
                  {
                    v74 = (float)(v34 + v36) * 0.5;
                    v87.bottom = v74 + 0.00048828125;
                    v87.top = v74 - 0.00048828125;
                  }
                  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v87, &v90, &v108, v40);
                  v64 = *((_QWORD *)this + 9);
                  v65 = v87;
                  *(_BYTE *)(v64 + 52) = 1;
                  *(struct D2D_RECT_F *)(v64 + 32) = v65;
                  *(_DWORD *)(v64 + 48) = v46;
                  D2D1::Matrix3x2F::SetProduct(
                    (D2D1::Matrix3x2F *)&v88,
                    (const struct D2D1::Matrix3x2F *)&v108,
                    (CNineGridDrawListBrush *)((char *)this + 8));
                  v67 = *((_QWORD *)this + 9);
                  v68 = v89;
                  *(struct D2D_RECT_F *)(v67 + 8) = v88;
                  *(_QWORD *)(v67 + 24) = v68;
                  if ( *((_BYTE *)this + 64) )
                  {
                    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v90, &v87, &v88, v66);
                    left_low = (__m128)LODWORD(v88.left);
                    v76 = *((_QWORD *)this + 9);
                    top_low = (__m128)LODWORD(v88.top);
                    top_low.m128_f32[0] = v88.top * *((float *)this + 14);
                    left_low.m128_f32[0] = (float)(v88.left * *((float *)this + 14))
                                         + (float)(v88.right * *((float *)this + 15));
                    v78 = v88.bottom * *((float *)this + 15);
                    *(_BYTE *)(v76 + 64) = 1;
                    left_low.m128_f32[0] = left_low.m128_f32[0] + *(float *)&v89;
                    top_low.m128_f32[0] = (float)(top_low.m128_f32[0] + v78) + *((float *)&v89 + 1);
                    *(_QWORD *)(v76 + 56) = _mm_unpacklo_ps(left_low, top_low).m128_u64[0];
                  }
                  v69 = ((__int64 (__fastcall *)(_QWORD, void *))v94)(*((_QWORD *)this + 9), v93);
                  v5 = v69;
                  if ( v69 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x16Eu, 0LL);
                    goto LABEL_87;
                  }
                }
                v20 = v97;
                v21 = v96;
                v17 = v101;
                v19 = v100;
                v22 = v106[0];
                v23 = v104[0];
              }
            }
            v25 = v84 + 1;
            v26 = (v20 - v21) >> 2;
            v27 = v25;
            ++v84;
          }
          while ( v25 < v26 );
        }
      }
      v9 = ++v18;
    }
    while ( v18 < (unsigned __int64)((v17 - v19) >> 2) );
    LODWORD(v9) = 1;
  }
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v104);
  v55 = (void *)v104[0];
  v56 = v104[0] == (_QWORD)v105;
  v104[0] = 0LL;
  if ( v56 )
    v55 = 0LL;
  operator delete(v55);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v106);
  v57 = (void *)v106[0];
  v56 = v106[0] == (_QWORD)v107;
  v106[0] = 0LL;
  if ( v56 )
    v57 = 0LL;
  operator delete(v57);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v100);
  v58 = v100;
  v56 = v100 == v103;
  v100 = 0LL;
  if ( v56 )
    v58 = 0LL;
  operator delete(v58);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v96);
  v59 = v96;
  v56 = v96 == v99;
  v96 = 0LL;
  if ( v56 )
    v59 = 0LL;
  operator delete(v59);
LABEL_44:
  v60 = v83;
  if ( v83 )
  {
    v61 = v9;
    goto LABEL_46;
  }
  return v5;
}
