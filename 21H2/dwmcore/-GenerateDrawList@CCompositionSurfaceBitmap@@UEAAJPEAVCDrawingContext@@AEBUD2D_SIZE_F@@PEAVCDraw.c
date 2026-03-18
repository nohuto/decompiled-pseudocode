/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180005720
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006798 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18000687C (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x18005692C (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180058350 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18008EE08 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B0B20 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v8; // r15
  int v9; // edi
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rcx
  CSurfaceDrawListBrush *v13; // rcx
  int v14; // ebx
  int DrawList; // eax
  unsigned int v16; // ecx
  CGeometryOnlyDrawListBrush *v18; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CGeometryOnlyDrawListBrush *v21; // rax
  __int128 v22; // xmm0
  CGeometryOnlyDrawListBrush *v23; // rcx
  CSurfaceDrawListBrush *v24; // rax
  unsigned __int64 v25; // xmm1_8
  _BYTE v26[16]; // [rsp+30h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v27; // [rsp+40h] [rbp-C0h] BYREF
  struct CGeometryOnlyDrawListBrush *v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  char v29; // [rsp+58h] [rbp-A8h]
  CSurfaceDrawListBrush *v30; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v32[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v33[6]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp-50h]
  unsigned int v35; // [rsp+B4h] [rbp-4Ch]
  int v36; // [rsp+C0h] [rbp-40h]
  _QWORD v37[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  char v40; // [rsp+130h] [rbp+30h]
  __int128 v41; // [rsp+140h] [rbp+40h] BYREF
  char v42; // [rsp+150h] [rbp+50h]
  __int128 v43; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v44[16]; // [rsp+170h] [rbp+70h] BYREF
  int v45; // [rsp+180h] [rbp+80h]
  int v46; // [rsp+184h] [rbp+84h]
  int v47; // [rsp+188h] [rbp+88h]
  int v48; // [rsp+18Ch] [rbp+8Ch]
  int v49; // [rsp+190h] [rbp+90h]
  _BYTE v50[4432]; // [rsp+1C0h] [rbp+C0h] BYREF

  v36 = 0;
  v43 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a3, (CMILMatrix *)v33);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v43) )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v44, a2);
    v27 = 0LL;
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3) )
    {
      v28[1] = 0LL;
      v28[0] = (struct CGeometryOnlyDrawListBrush *)&v27;
      v29 = 1;
      v14 = CGeometryOnlyDrawListBrush::Create(&v28[1]);
      if ( v29 )
      {
        v18 = *(CGeometryOnlyDrawListBrush **)v28[0];
        *(_QWORD *)v28[0] = v28[1];
        if ( v18 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v18, 1u);
      }
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v18, 0LL, 0, v14, 0x1C9u, 0LL);
        v23 = v27;
        if ( !v27 )
        {
LABEL_32:
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v44);
          return (unsigned int)v14;
        }
LABEL_31:
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v23, 1u);
        goto LABEL_32;
      }
      width = a3->width;
      height = a3->height;
      v21 = v27;
      v28[0] = 0LL;
      v28[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v22 = *(_OWORD *)v28;
      *((_BYTE *)v27 + 52) = 1;
      *((_DWORD *)v21 + 12) = 50529027;
      *((_OWORD *)v21 + 2) = v22;
    }
    CDrawListBitmap::CDrawListBitmap(
      (CDrawListBitmap *)v31,
      (struct IBitmapResource *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v31) && *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = (int)FLOAT_1_0;
      v45 = 4;
      goto LABEL_18;
    }
    v9 = 512;
    v10 = !CDrawListBitmap::IsProtected((CDrawListBitmap *)v31);
    v11 = *((_DWORD *)a2 + 75);
    if ( !v10 )
      v9 = 514;
    v12 = 0LL;
    if ( v11 == 1 )
    {
      v12 = 1LL;
      goto LABEL_8;
    }
    if ( v11 <= 1 )
      goto LABEL_8;
    if ( v11 <= 3 )
    {
      v12 = 2LL;
    }
    else
    {
      if ( v11 == 4 )
      {
LABEL_39:
        v12 = 3LL;
        goto LABEL_8;
      }
      if ( v11 != 5 )
      {
        if ( v11 != 6 )
          goto LABEL_8;
        goto LABEL_39;
      }
      v12 = 4LL;
    }
LABEL_8:
    v26[0] = InterpolationMode::FromD2D1InterpolationMode(v12);
    v26[1] = 1;
    *(_QWORD *)&v41 = &v30;
    v30 = 0LL;
    *(_OWORD *)v28 = v43;
    *((_QWORD *)&v41 + 1) = 0LL;
    v42 = 1;
    v26[2] = 1;
    v14 = CSurfaceDrawListBrush::CreateWithContentRect(v31, v26, v28, (char *)&v41 + 8);
    if ( v42 )
    {
      v13 = *(CSurfaceDrawListBrush **)v41;
      *(_QWORD *)v41 = *((_QWORD *)&v41 + 1);
      if ( v13 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1u);
    }
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v14, 0x1EBu, 0LL);
      if ( v30 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v30, 1u);
      goto LABEL_45;
    }
    if ( v8 )
    {
      v24 = v30;
      *(_QWORD *)&v41 = v33[0];
      *((_QWORD *)&v41 + 1) = v33[2];
      v25 = _mm_unpacklo_ps((__m128)v34, (__m128)v35).m128_u64[0];
      *(_OWORD *)((char *)v30 + 8) = v41;
      *((_QWORD *)v24 + 3) = v25;
    }
    v28[0] = v30;
    v30 = 0LL;
    CBrushDrawListGenerator::AttachInput(v44, 0LL, v28);
    if ( v28[0] )
      std::default_delete<CDrawListBrush>::operator()();
    v45 = v9;
    if ( v30 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v30, 1u);
LABEL_18:
    v37[0] = v27;
    v37[1] = 0LL;
    v38 = 0;
    v39 = 257;
    v40 = 0;
    CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v50);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v44,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v37,
                 (struct CDrawListEntryBuilder *)v50);
    v14 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v50);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v50);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v32);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v31);
      if ( v27 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v27, 1u);
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v44);
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, DrawList, 0x204u, 0LL);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v50);
LABEL_45:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v32);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v31);
    v23 = v27;
    if ( !v27 )
      goto LABEL_32;
    goto LABEL_31;
  }
  return 0;
}
