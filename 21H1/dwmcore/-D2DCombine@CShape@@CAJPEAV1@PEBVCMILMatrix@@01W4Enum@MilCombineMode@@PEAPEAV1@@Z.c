/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18025E340
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180052DF0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800549E0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800198E0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180019CB0 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033C58 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180035ADC (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180036940 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800950D4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?CreateCombinedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@01W4D2D1_COMBINE_MODE@@PEAPEAU2@@Z @ 0x18024BD1C (-CreateCombinedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@01W4D2D1_COMB.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18025EA24 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CShape::D2DCombine(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, CComplexShape **a6)
{
  int D2DGeometry; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  enum D2D1_COMBINE_MODE v12; // eax
  struct D2D_MATRIX_3X2_F *v13; // rcx
  unsigned int v14; // xmm1_4
  int v15; // eax
  __int64 v16; // rcx
  struct CRectanglesShape *v17; // rcx
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v19; // rax
  int v20; // r8d
  int v21; // r9d
  CComplexShape *v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v25; // [rsp+40h] [rbp-C0h] BYREF
  struct ID2D1Geometry *v26; // [rsp+48h] [rbp-B8h] BYREF
  struct ID2D1Geometry *v27; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_MATRIX_3X2_F v28; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[80]; // [rsp+D0h] [rbp-30h] BYREF

  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v31);
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v30);
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  if ( a1 )
  {
    D2DGeometry = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL))(
                    a1,
                    0LL,
                    &v26);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v24 = 439;
LABEL_36:
      v21 = D2DGeometry;
      goto LABEL_37;
    }
  }
  else
  {
    D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v31, 0LL, &v26);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v24 = 443;
      goto LABEL_36;
    }
  }
  if ( a3 )
  {
    D2DGeometry = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL))(
                    a3,
                    0LL,
                    &v27);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v24 = 448;
      goto LABEL_36;
    }
  }
  else
  {
    D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v30, 0LL, &v27);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v24 = 452;
      goto LABEL_36;
    }
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v12 = D2D1_COMBINE_MODE_INTERSECT;
    else
      v12 = D2D1_COMBINE_MODE_EXCLUDE;
  }
  else
  {
    v12 = D2D1_COMBINE_MODE_UNION;
  }
  if ( a4 )
  {
    v13 = &v28;
    v14 = *(_DWORD *)(a4 + 4);
    v28.m11 = *(FLOAT *)a4;
    *(_QWORD *)&v28.m[0][1] = __PAIR64__(*(_DWORD *)(a4 + 16), v14);
    *(_QWORD *)&v28.m[1][1] = __PAIR64__(*(_DWORD *)(a4 + 48), *(_DWORD *)(a4 + 20));
    v28.dy = *(FLOAT *)(a4 + 52);
  }
  else
  {
    v13 = 0LL;
  }
  v15 = CD2DFactory::CreateCombinedGeometry((CD2DFactory *)v13, v26, 0LL, v27, v13, v12, &v25);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1CCu, 0LL);
    goto LABEL_38;
  }
  D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v25 + 32LL))(
                  v25,
                  0LL,
                  &v29);
  v11 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v24 = 466;
    goto LABEL_36;
  }
  *(_OWORD *)&v28.m11 = v29;
  if ( !IsRectEmptyOrInvalid(&v28.m11) )
  {
    v22 = (CComplexShape *)DefaultHeap::Alloc(0x18uLL);
    if ( v22 )
      v22 = CComplexShape::CComplexShape(v22, v25);
    if ( v22 )
    {
      *a6 = v22;
      goto LABEL_38;
    }
    v21 = -2147024882;
    v11 = -2147024882;
    v24 = 477;
    goto LABEL_37;
  }
  ObjectCache = CThreadContext::GetObjectCache(v17);
  v19 = 0LL;
  v20 = *((_DWORD *)ObjectCache + 1);
  if ( v20 )
  {
    v19 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v19;
    *((_DWORD *)ObjectCache + 1) = v20 - 1;
  }
  if ( v19 || (v19 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    v19 = CRectanglesShape::CRectanglesShape(v19);
  *a6 = v19;
  if ( !v19 )
  {
    v21 = -2147024882;
    v11 = -2147024882;
    v24 = 472;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v21, v24, 0LL);
  }
LABEL_38:
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v25);
  if ( v26 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v27 + 16LL))(v27);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v30);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v31);
  return v11;
}
