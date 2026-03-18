/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x180059634
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18005C274 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_18005C274.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB360 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x18005692C (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180058350 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x18005C210 (-IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18008EE08 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *this,
        const struct CVisualTree **a2,
        struct CDrawListEntryBuilder *a3,
        struct CImageSource *a4,
        const struct D2D_RECT_F *a5,
        const struct D2D_RECT_F *a6,
        float a7)
{
  int v7; // ebx
  struct IBitmapResource *v12; // rdx
  int v13; // esi
  struct D2D_MATRIX_3X2_F *v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  char v20; // al
  CSurfaceDrawListBrush *v21; // rcx
  CSurfaceDrawListBrush *v22; // rax
  __int64 v23; // xmm1_8
  __int64 v24; // rcx
  int DrawList; // eax
  unsigned int v26; // ecx
  CSurfaceDrawListBrush *v28[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v29; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+42h] [rbp-BEh]
  struct D2D_RECT_F v31; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v32[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+DCh] [rbp-24h]
  char v37; // [rsp+E0h] [rbp-20h]
  _BYTE v38[64]; // [rsp+F0h] [rbp-10h] BYREF
  int v39; // [rsp+130h] [rbp+30h]
  struct D2D_RECT_F v40; // [rsp+140h] [rbp+40h] BYREF
  __int64 v41; // [rsp+150h] [rbp+50h]
  struct D2D_RECT_F v42; // [rsp+158h] [rbp+58h] BYREF
  char v43; // [rsp+168h] [rbp+68h]
  _BYTE v44[16]; // [rsp+170h] [rbp+70h] BYREF
  int v45; // [rsp+180h] [rbp+80h]
  int v46; // [rsp+184h] [rbp+84h]
  int v47; // [rsp+188h] [rbp+88h]
  int v48; // [rsp+18Ch] [rbp+8Ch]
  float v49; // [rsp+190h] [rbp+90h]

  v7 = 0;
  if ( a4 )
    v12 = (struct CImageSource *)((char *)a4 + *(int *)(*((_QWORD *)a4 + 8) + 8LL) + 64);
  else
    v12 = 0LL;
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v32, v12);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v44, (struct CDrawingContext *)a2);
  v36 = 257;
  v35 = 0;
  v34 = 0LL;
  v37 = 0;
  if ( v33[0] )
  {
    if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v32) && *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = *(float *)&FLOAT_1_0;
      v45 = 4;
    }
    else
    {
      v49 = a7;
      v13 = 512;
      v46 = 1065353216;
      v47 = 1065353216;
      v48 = 1065353216;
      if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v32) )
        v13 = 514;
      if ( (*(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(*(_QWORD *)a4 + 56LL))(a4, 16LL)
        && CCachedVisualImage::IsSameVisualTree(a4, a2[991]) )
      {
        v13 |= 0x100u;
      }
      v45 = v13;
      if ( a5 && a6 )
        goto LABEL_30;
      v15 = *((_QWORD *)a4 + 8);
      v39 = 0;
      v40 = 0LL;
      v16 = (__int64 *)((char *)a4 + *(int *)(v15 + 8) + 64);
      v17 = *v16;
      v28[0] = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64 *, CSurfaceDrawListBrush **))(v17 + 56))(v16, v28);
      v7 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x470u, 0LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v28);
        goto LABEL_28;
      }
      v20 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _BYTE *, struct D2D_RECT_F *))(*(_QWORD *)v28[0] + 8LL))(
              v28[0],
              v38,
              &v40);
      v31 = v40;
      if ( v20 )
        CMILMatrix::Transform2DBoundsHelper<0>(v38, &v40, &v42);
      else
        v42 = v40;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v28);
      if ( a5 )
LABEL_30:
        v31 = *a5;
      if ( a6 )
        v42 = *a6;
      if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v31, &v42, &v40, v14) )
      {
        v28[0] = 0LL;
        *(_QWORD *)&v42.left = v28;
        v29 = SamplerMode::k_ClampClampLinear;
        v30 = 1;
        *(_QWORD *)&v42.right = 0LL;
        v43 = 1;
        v7 = CSurfaceDrawListBrush::CreateWithContentRect(
               (CDrawListBitmap *)v32,
               &v29,
               &v31.left,
               (__int64 *)&v42.right);
        if ( v43 )
        {
          v21 = **(CSurfaceDrawListBrush ***)&v42.left;
          **(_QWORD **)&v42.left = *(_QWORD *)&v42.right;
          if ( v21 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1u);
        }
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, 0LL, 0, v7, 0x498u, 0LL);
        }
        else
        {
          v22 = v28[0];
          v23 = v41;
          *(struct D2D_RECT_F *)((char *)v28[0] + 8) = v40;
          *((_QWORD *)v22 + 3) = v23;
          *(CSurfaceDrawListBrush **)&v40.left = v28[0];
          v28[0] = 0LL;
          CBrushDrawListGenerator::AttachInput(v44, 0LL, &v40);
          if ( *(_QWORD *)&v40.left )
            std::default_delete<CDrawListBrush>::operator()(v24, *(_QWORD *)&v40.left);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)v44,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v34,
                       a3);
          v7 = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, DrawList, 0x49Du, 0LL);
        }
        if ( v28[0] )
          CSurfaceDrawListBrush::`vector deleting destructor'(v28[0], 1u);
      }
    }
  }
LABEL_28:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v44);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v33);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v32);
  return (unsigned int)v7;
}
