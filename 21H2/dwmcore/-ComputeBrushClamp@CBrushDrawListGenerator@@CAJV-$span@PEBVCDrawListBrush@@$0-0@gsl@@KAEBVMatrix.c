/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180095690
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094B70 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019E008 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007474 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180059390 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180067C40 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800805D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180098544 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800E1D40 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800E6104 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18025D7A0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(
        __int64 *a1,
        int a2,
        __int64 a3,
        struct CRectanglesShape **a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  signed int v8; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // xmm6_4
  int v12; // xmm7_4
  int v13; // xmm8_4
  int v14; // xmm9_4
  struct CRectanglesShape *v15; // r9
  unsigned __int8 v16; // cf
  unsigned __int32 v17; // xmm1_4
  unsigned int v18; // xmm2_4
  unsigned int v19; // xmm3_4
  __int32 v20; // xmm4_4
  unsigned int v21; // xmm5_4
  struct CRectanglesShape *v22; // rbx
  __int64 v23; // rcx
  int v24; // r15d
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  _BYTE *v26; // rcx
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 (__fastcall ***v33)(_QWORD, __int64); // rdx
  struct CRectanglesShape *v34; // rcx
  struct CRectanglesShape *v35; // rax
  __int64 v36; // rcx
  __int32 v37; // xmm0_4
  unsigned int v38; // xmm1_4
  unsigned int v39; // xmm0_4
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  __m128 v47; // xmm0
  __m128 v48; // xmm0
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct CRectanglesShape *v52; // [rsp+38h] [rbp-D0h] BYREF
  struct CRectanglesShape *v53; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v54; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v55[2]; // [rsp+58h] [rbp-B0h]
  int v56; // [rsp+68h] [rbp-A0h]
  __m128 v57; // [rsp+78h] [rbp-90h]
  __int64 v58; // [rsp+90h] [rbp-78h]
  __m128 v59; // [rsp+98h] [rbp-70h] BYREF
  __m128 v60; // [rsp+A8h] [rbp-60h]
  __int128 v61; // [rsp+B8h] [rbp-50h]
  __m128 v62; // [rsp+C8h] [rbp-40h]
  int v63; // [rsp+D8h] [rbp-30h]
  float v64[10]; // [rsp+E8h] [rbp-20h] BYREF
  struct CRectanglesShape **v65; // [rsp+110h] [rbp+8h]
  void **v66; // [rsp+118h] [rbp+10h] BYREF
  __int64 v67; // [rsp+120h] [rbp+18h]
  void *lpMem; // [rsp+128h] [rbp+20h] BYREF
  _BYTE *v69; // [rsp+130h] [rbp+28h]
  int v70; // [rsp+138h] [rbp+30h]
  __int64 v71; // [rsp+13Ch] [rbp+34h]
  _BYTE v72[16]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v73; // [rsp+158h] [rbp+50h]
  _DWORD v74[4]; // [rsp+168h] [rbp+60h] BYREF

  v4 = *a1;
  v65 = a4;
  v58 = a3;
  v6 = a3;
  v52 = 0LL;
  v8 = 0;
  if ( v4 <= 0 )
  {
LABEL_25:
    v24 = 0;
    *a4 = v52;
    return (unsigned int)v24;
  }
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= v4 )
    {
      `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)&CRectanglesShape::`vftable');
      __debugbreak();
    }
    v10 = *(_QWORD *)(a1[1] + 8 * v9);
    if ( !v10 || !*(_BYTE *)(v10 + 52) )
      goto LABEL_23;
    v66 = &CRectanglesShape::`vftable';
    lpMem = v72;
    v67 = 0LL;
    v69 = v72;
    v70 = 1;
    v71 = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v72);
    v73 = 0LL;
    v11 = *(_DWORD *)(v10 + 32);
    v12 = *(_DWORD *)(v10 + 36);
    v13 = *(_DWORD *)(v10 + 40);
    v14 = *(_DWORD *)(v10 + 44);
    HIDWORD(v71) = 0;
    if ( lpMem != v69 )
    {
      operator delete(lpMem);
      lpMem = v69;
      LODWORD(v71) = v70;
      if ( v73 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
        v73 = 0LL;
      }
    }
    v74[0] = v11;
    v74[1] = v12;
    v74[2] = v13;
    v74[3] = v14;
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)&lpMem,
      v74,
      1LL);
    v15 = 0LL;
    v16 = _bittest(&a2, v8);
    v63 = 0;
    v17 = *(_DWORD *)(v10 + 12);
    if ( v16 )
    {
      v54.m128_i32[0] = *(_DWORD *)(v10 + 8);
      v37 = *(_DWORD *)(v10 + 16);
      *(unsigned __int64 *)((char *)v54.m128_u64 + 4) = v17;
      v38 = *(_DWORD *)(v10 + 20);
      v54.m128_i32[3] = v37;
      v39 = *(_DWORD *)(v10 + 24);
      v55[0] = (struct CShape *)v38;
      v55[1] = (struct CShape *)__PAIR64__(*(_DWORD *)(v10 + 28), v39);
      v56 = 1065353216;
      Matrix3x3::operator*(&v54, v64, v6);
      v54.m128_i32[2] = (int)v15;
      v40 = v54;
      LODWORD(v55[1]) = (_DWORD)v15;
      v57.m128_i32[2] = (int)v15;
      v40.m128_f32[0] = v64[0];
      v61 = _xmm;
      v41 = *(__m128 *)v55;
      v63 = (int)v15;
      v42 = _mm_shuffle_ps(v40, v40, 225);
      v42.m128_f32[0] = v64[1];
      v41.m128_f32[0] = v64[3];
      v43 = _mm_shuffle_ps(v42, v42, 135);
      v43.m128_f32[0] = v64[2];
      v44 = _mm_shuffle_ps(v41, v41, 225);
      v44.m128_f32[0] = v64[4];
      v54 = _mm_shuffle_ps(v43, v43, 57);
      v59 = v54;
      v45 = v57;
      v46 = _mm_shuffle_ps(v44, v44, 135);
      v45.m128_f32[0] = v64[6];
      v46.m128_f32[0] = v64[5];
      v47 = _mm_shuffle_ps(v45, v45, 225);
      v47.m128_f32[0] = v64[7];
      v48 = _mm_shuffle_ps(v47, v47, 135);
      v48.m128_f32[0] = v64[8];
      v60 = _mm_shuffle_ps(v46, v46, 57);
      v57 = _mm_shuffle_ps(v48, v48, 57);
      v62 = v57;
      *(__m128 *)v55 = v60;
    }
    else
    {
      v18 = *(_DWORD *)(v10 + 16);
      v19 = *(_DWORD *)(v10 + 20);
      v20 = *(_DWORD *)(v10 + 24);
      v21 = *(_DWORD *)(v10 + 28);
      v59.m128_i32[0] = *(_DWORD *)(v10 + 8);
      v61 = _xmm;
      v59.m128_i32[1] = v17;
      v60 = (__m128)__PAIR64__(v19, v18);
      v62.m128_i32[0] = v20;
      *(unsigned __int64 *)((char *)v62.m128_u64 + 4) = v21;
      v59.m128_u64[1] = 0LL;
      v62.m128_i32[3] = 1065353216;
    }
    v22 = v52;
    v54.m128_u64[1] = (unsigned __int64)v15;
    LOBYTE(v55[0]) = 1;
    if ( !v52 )
    {
      v54.m128_u64[0] = (unsigned __int64)&v52;
      v24 = CShape::CopyShape((CShape *)&v66, (const struct CMILMatrix *)&v59, (struct CShape **)&v54.m128_u64[1]);
      if ( LOBYTE(v55[0]) )
      {
        v23 = v54.m128_i64[1];
        v25 = *(__int64 (__fastcall ****)(_QWORD, __int64))v54.m128_u64[0];
        *(_QWORD *)v54.m128_u64[0] = v54.m128_u64[1];
        if ( v25 )
          std::default_delete<CShape>::operator()(v23, v25);
      }
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v24, 0x61u, 0LL);
        goto LABEL_45;
      }
      goto LABEL_14;
    }
    v53 = v15;
    v54.m128_u64[0] = (unsigned __int64)&v53;
    v30 = CShape::TryOptimizedCombinePaths(
            v52,
            0LL,
            (CShape *)&v66,
            v59.m128_f32,
            1,
            (struct CShape **)&v54.m128_u64[1]);
    v24 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v30, 0x170u, 0LL);
    }
    else if ( !v54.m128_u64[1] )
    {
      v49 = CShape::D2DCombine(v22, v31, &v66, &v59, 1, &v54.m128_u16[4]);
      v24 = v49;
      if ( v49 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v49, 0x17Bu, 0LL);
    }
    if ( LOBYTE(v55[0]) )
    {
      v32 = v54.m128_u64[0];
      v33 = *(__int64 (__fastcall ****)(_QWORD, __int64))v54.m128_u64[0];
      *(_QWORD *)v54.m128_u64[0] = v54.m128_u64[1];
      if ( v33 )
        std::default_delete<CShape>::operator()(v32, v33);
    }
    if ( v24 < 0 )
      break;
    v34 = v52;
    v35 = v53;
    v53 = 0LL;
    v52 = v35;
    if ( v34 )
    {
      (**(void (__fastcall ***)(struct CRectanglesShape *, __int64))v34)(v34, 1LL);
      if ( v53 )
        std::default_delete<CShape>::operator()(v36, (__int64 (__fastcall ***)(_QWORD, __int64))v53);
    }
LABEL_14:
    v26 = lpMem;
    v27 = v69;
    v66 = &CRectanglesShape::`vftable';
    HIDWORD(v71) = 0;
    if ( lpMem != v69 )
    {
      operator delete(lpMem);
      v27 = v69;
      v26 = v69;
      lpMem = v69;
      LODWORD(v71) = v70;
    }
    if ( v73 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
      v27 = v69;
      v26 = lpMem;
      v73 = 0LL;
    }
    if ( v26 != v27 )
    {
      operator delete(v26);
      lpMem = 0LL;
    }
    v28 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v6 = v58;
LABEL_23:
    ++v8;
    ++v9;
    if ( v8 >= v4 )
    {
      a4 = v65;
      goto LABEL_25;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v24, 0x6Cu, 0LL);
  if ( v53 )
    std::default_delete<CShape>::operator()(v50, (__int64 (__fastcall ***)(_QWORD, __int64))v53);
LABEL_45:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v66);
  if ( v52 )
    std::default_delete<CShape>::operator()(v51, (__int64 (__fastcall ***)(_QWORD, __int64))v52);
  return (unsigned int)v24;
}
