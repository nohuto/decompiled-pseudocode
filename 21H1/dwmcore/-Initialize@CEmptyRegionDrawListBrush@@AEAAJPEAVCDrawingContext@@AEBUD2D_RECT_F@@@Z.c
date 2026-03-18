/*
 * XREFs of ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013828
 * Callers:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180013754 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180013B38 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180013BD8 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180013C80 (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800364EC (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18004AA40 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800765F4 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180078100 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18026A190 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Initialize(
        CEmptyRegionDrawListBrush *this,
        struct CDrawingContext *a2,
        struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  FastRegion::CRegion *v4; // rdi
  int v8; // r14d
  __int64 v9; // xmm1_8
  struct D2D_RECT_F *v10; // r9
  __m128i *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r11
  unsigned __int64 v14; // xmm0_8
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v17; // rdx
  __m128i *v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  CSurfaceDrawListBrush *v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  __int64 v26; // rax
  _DWORD *v28; // rdx
  _DWORD *v29; // r8
  const struct CRegion *ContentRegion; // rax
  int v31; // eax
  __int16 v32; // [rsp+30h] [rbp-79h] BYREF
  char v33; // [rsp+32h] [rbp-77h]
  struct D2D_MATRIX_3X2_F *v34; // [rsp+40h] [rbp-69h] BYREF
  __int64 v35; // [rsp+48h] [rbp-61h] BYREF
  char v36; // [rsp+50h] [rbp-59h]
  struct D2D_MATRIX_3X2_F v37; // [rsp+58h] [rbp-51h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-21h]
  __int64 v40; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v41; // [rsp+94h] [rbp-15h]
  int v42; // [rsp+98h] [rbp-11h]
  _BYTE v43[23]; // [rsp+A9h] [rbp+0h] BYREF
  void *retaddr; // [rsp+108h] [rbp+5Fh]

  v3 = *((_QWORD *)this + 9);
  v4 = (CEmptyRegionDrawListBrush *)((char *)this + 88);
  v8 = 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v3 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 24);
  *(_OWORD *)&matrix.m11 = *(_OWORD *)(v3 + 8);
  *(_QWORD *)&matrix.m[2][0] = v9;
  D2D1InvertMatrix(&matrix);
  D2DMatrixHelper::TransformRectConservative((D2DMatrixHelper *)a3, (const struct D2D_RECT_F *)&matrix, &v37, v10);
  v11 = (__m128i *)CMilRectLFromMilRectF(&v34, &v37);
  v13 = v11->m128i_i64[0];
  v14 = _mm_srli_si128(*v11, 8).m128i_u64[0];
  v15 = HIDWORD(v11->m128i_i64[0]);
  if ( (int)v13 >= (int)v14 || (int)v15 >= SHIDWORD(v14) )
  {
    **(_DWORD **)v4 = 0;
  }
  else
  {
    v28 = *(_DWORD **)v4;
    v29 = (_DWORD *)(*(_QWORD *)v4 + 28LL);
    *v28 = 2;
    *v29 = v13;
    v28[3] = v15;
    v29[1] = v14;
    v28[4] = (_DWORD)v29 - ((_DWORD)v28 + 12);
    v28[1] = v13;
    v12 = (unsigned int)((_DWORD)v29 - ((_DWORD)v28 + 20) + 8);
    v28[2] = v14;
    v28[6] = v12;
    v28[5] = HIDWORD(v14);
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64))(**((_QWORD **)this + 9) + 8LL))(
          *((_QWORD *)this + 9),
          4LL,
          v12,
          HIDWORD(v14));
  v17 = *((_QWORD *)this + 9);
  if ( v16 )
  {
    ContentRegion = CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v17 + 72));
    if ( ContentRegion )
    {
      v31 = FastRegion::CRegion::Subtract(v4, ContentRegion);
      if ( v31 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v31, retaddr);
    }
  }
  else
  {
    if ( *(_BYTE *)(v17 + 52) )
    {
      matrix.m21 = 0.0;
      *(_QWORD *)&matrix.m11 = matrix.m[1];
      v18 = (__m128i *)CMilRectLFromMilRectF(&v34, v17 + 32);
      v19 = v18->m128i_i64[0];
      v20 = _mm_srli_si128(*v18, 8).m128i_u64[0];
      v21 = HIDWORD(v18->m128i_i64[0]);
      if ( (int)v19 < (int)v20 && (int)v21 < SHIDWORD(v20) )
      {
        LODWORD(matrix.m21) = 2;
        LODWORD(matrix.m22) = v19;
        *(_QWORD *)&matrix.m[2][0] = __PAIR64__(v21, v20);
        v39 = (unsigned int)v43 - 21 - (unsigned int)&matrix.dy;
        v41 = v19;
        v42 = v20;
        HIDWORD(v40) = (unsigned int)v43 - 21 - (unsigned int)&v40 + 8;
        LODWORD(v40) = HIDWORD(v20);
      }
      v22 = FastRegion::CRegion::Subtract(v4, (const struct CRegion *)&matrix);
      if ( v22 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v22, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&matrix);
    }
    else
    {
      **(_DWORD **)v4 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(
           *((_QWORD *)this + 9),
           5LL) )
    {
      v23 = *((_QWORD *)this + 9);
      if ( (-(__int64)(*(_BYTE *)(v23 + 569) != 0) & (v23 + 552)) != 0 )
      {
        *(_OWORD *)&v37.m11 = *(_OWORD *)CMilRectLFromMilRectF(
                                           &v34,
                                           (v23 + 552) & -(__int64)(*(_BYTE *)(v23 + 569) != 0));
        CRegion::AppendRects<tagRECT>(v4);
      }
    }
  }
  if ( **(_DWORD **)v4 )
  {
    v39 = 0;
    v40 = 0LL;
    v41 = 0;
    memset(&matrix, 0, sizeof(matrix));
    LOBYTE(v42) = 0;
    CDrawListBitmap::SetTransparent((CDrawListBitmap *)&matrix, a2);
    *(_QWORD *)&v37.m11 = 0LL;
    v34 = &v37;
    v32 = SamplerMode::k_ClampClampLinear;
    v33 = 1;
    v35 = 0LL;
    v36 = 1;
    v8 = CSurfaceDrawListBrush::CreateWithTextureTransform(&matrix, &v32, &Matrix3x3::Zero, &v35);
    if ( v36 )
    {
      v24 = *(CSurfaceDrawListBrush **)&v34->m11;
      *(_QWORD *)&v34->m11 = v35;
      if ( v24 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1u);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v24, 0LL, 0, v8, 0x70u, 0LL);
    }
    else
    {
      v25 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
      v26 = *(_QWORD *)&v37.m11;
      *(_QWORD *)&v37.m11 = 0LL;
      *((_QWORD *)this + 10) = v26;
      if ( !v25 )
      {
LABEL_17:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(matrix.m[1]);
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&matrix);
        return (unsigned int)v8;
      }
      std::default_delete<CShape>::operator()((__int64)v24, v25);
    }
    if ( *(_QWORD *)&v37.m11 )
      CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v37.m11, 1u);
    goto LABEL_17;
  }
  return (unsigned int)v8;
}
