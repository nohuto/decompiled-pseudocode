/*
 * XREFs of ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1800081F0
 * Callers:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x1800068D8 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007474 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800084F8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180008598 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180008640 (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18003A848 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18004FF64 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054550 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800563A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x1800989E0 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x1802695F0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
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
  __int64 v12; // r11
  unsigned __int64 v13; // xmm0_8
  unsigned __int64 v14; // rax
  _DWORD *v15; // rdx
  _DWORD *v16; // r8
  char v17; // al
  __int64 v18; // rdx
  __m128i *v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // xmm0_8
  unsigned __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  CSurfaceDrawListBrush *v25; // rcx
  __int64 (__fastcall ***v26)(_QWORD, __int64); // rdx
  __int64 v27; // rax
  const struct CRegion *ContentRegion; // rax
  int v30; // eax
  __int16 v31; // [rsp+30h] [rbp-79h] BYREF
  char v32; // [rsp+32h] [rbp-77h]
  struct D2D_MATRIX_3X2_F *v33; // [rsp+40h] [rbp-69h] BYREF
  __int64 v34; // [rsp+48h] [rbp-61h] BYREF
  char v35; // [rsp+50h] [rbp-59h]
  struct D2D_MATRIX_3X2_F v36; // [rsp+58h] [rbp-51h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v38; // [rsp+88h] [rbp-21h]
  __int64 v39; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v40; // [rsp+94h] [rbp-15h]
  int v41; // [rsp+98h] [rbp-11h]
  _BYTE v42[23]; // [rsp+A9h] [rbp+0h] BYREF
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
  D2DMatrixHelper::TransformRectConservative((D2DMatrixHelper *)a3, (const struct D2D_RECT_F *)&matrix, &v36, v10);
  v11 = (__m128i *)CMilRectLFromMilRectF(&v33, &v36);
  v12 = v11->m128i_i64[0];
  v13 = _mm_srli_si128(*v11, 8).m128i_u64[0];
  v14 = HIDWORD(v11->m128i_i64[0]);
  if ( (int)v14 >= SHIDWORD(v13) || (int)v12 >= (int)v13 )
  {
    **(_DWORD **)v4 = 0;
  }
  else
  {
    v15 = *(_DWORD **)v4;
    v16 = (_DWORD *)(*(_QWORD *)v4 + 28LL);
    *v15 = 2;
    *v16 = v12;
    v15[3] = v14;
    v16[1] = v13;
    v15[4] = (_DWORD)v16 - ((_DWORD)v15 + 12);
    v15[1] = v12;
    v15[2] = v13;
    v15[6] = (_DWORD)v16 - ((_DWORD)v15 + 20) + 8;
    v15[5] = HIDWORD(v13);
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), 4LL);
  v18 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    ContentRegion = CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v18 + 72));
    if ( ContentRegion )
    {
      v30 = FastRegion::CRegion::Subtract(v4, ContentRegion);
      if ( v30 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v30, retaddr);
    }
  }
  else
  {
    if ( *(_BYTE *)(v18 + 52) )
    {
      matrix.m21 = 0.0;
      *(_QWORD *)&matrix.m11 = matrix.m[1];
      v19 = (__m128i *)CMilRectLFromMilRectF(&v33, v18 + 32);
      v20 = v19->m128i_i64[0];
      v21 = _mm_srli_si128(*v19, 8).m128i_u64[0];
      v22 = HIDWORD(v19->m128i_i64[0]);
      if ( (int)v22 < SHIDWORD(v21) && (int)v20 < (int)v21 )
      {
        LODWORD(matrix.m21) = 2;
        LODWORD(matrix.m22) = v20;
        *(_QWORD *)&matrix.m[2][0] = __PAIR64__(v22, v21);
        v38 = (unsigned int)v42 - 21 - (unsigned int)&matrix.dy;
        v40 = v20;
        v41 = v21;
        HIDWORD(v39) = (unsigned int)v42 - 21 - (unsigned int)&v39 + 8;
        LODWORD(v39) = HIDWORD(v21);
      }
      v23 = FastRegion::CRegion::Subtract(v4, (const struct CRegion *)&matrix);
      if ( v23 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v23, retaddr);
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
      v24 = *((_QWORD *)this + 9);
      if ( (-(__int64)(*(_BYTE *)(v24 + 569) != 0) & (v24 + 552)) != 0 )
      {
        *(_OWORD *)&v36.m11 = *(_OWORD *)CMilRectLFromMilRectF(
                                           &v33,
                                           (v24 + 552) & -(__int64)(*(_BYTE *)(v24 + 569) != 0));
        CRegion::AppendRects<tagRECT>(v4);
      }
    }
  }
  if ( **(_DWORD **)v4 )
  {
    v38 = 0;
    v39 = 0LL;
    v40 = 0;
    memset(&matrix, 0, sizeof(matrix));
    LOBYTE(v41) = 0;
    CDrawListBitmap::SetTransparent((CDrawListBitmap *)&matrix, a2);
    *(_QWORD *)&v36.m11 = 0LL;
    v33 = &v36;
    v31 = SamplerMode::k_ClampClampLinear;
    v32 = 1;
    v34 = 0LL;
    v35 = 1;
    v8 = CSurfaceDrawListBrush::CreateWithTextureTransform(&matrix, &v31, &Matrix3x3::Zero, &v34);
    if ( v35 )
    {
      v25 = *(CSurfaceDrawListBrush **)&v33->m11;
      *(_QWORD *)&v33->m11 = v34;
      if ( v25 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1u);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v8, 0x70u, 0LL);
    }
    else
    {
      v26 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
      v27 = *(_QWORD *)&v36.m11;
      *(_QWORD *)&v36.m11 = 0LL;
      *((_QWORD *)this + 10) = v27;
      if ( !v26 )
      {
LABEL_20:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(matrix.m[1]);
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&matrix);
        return (unsigned int)v8;
      }
      std::default_delete<CShape>::operator()((__int64)v25, v26);
    }
    if ( *(_QWORD *)&v36.m11 )
      CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v36.m11, 1u);
    goto LABEL_20;
  }
  return (unsigned int)v8;
}
