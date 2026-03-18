/*
 * XREFs of ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1802ACC78
 * Callers:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x1802ACA10 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 * Callees:
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x18001501C (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180088C60 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801133BE (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18026F754 (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x1802ABB00 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?RECTFromD2DRectF@@YA?AUtagRECT@@AEBUD2D_RECT_F@@@Z @ 0x1802ABC2C (-RECTFromD2DRectF@@YA-AUtagRECT@@AEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Initialize(
        CEmptyRegionDrawListBrush *this,
        CD3DDevice **a2,
        struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  const struct FastRegion::Internal::CRgnData **v4; // rdi
  int v8; // r14d
  __int64 v9; // xmm1_8
  struct D2D_RECT_F *v10; // r9
  __m128i *v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // xmm0_8
  unsigned __int64 v14; // rax
  const struct FastRegion::Internal::CRgnData *v15; // rdx
  _DWORD *v16; // r8
  char v17; // al
  __int64 v18; // rdx
  const struct FastRegion::Internal::CRgnData **ContentRegion; // rax
  CSurfaceDrawListBrush *v20; // rcx
  __int64 v21; // rax
  __int64 (__fastcall ***v22)(_QWORD, __int64); // rdx
  __m128i *v23; // rax
  __int64 v24; // r9
  unsigned __int64 v25; // xmm0_8
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int16 v30; // [rsp+30h] [rbp-79h] BYREF
  char v31; // [rsp+32h] [rbp-77h]
  struct tagRECT v32; // [rsp+40h] [rbp-69h] BYREF
  char v33; // [rsp+50h] [rbp-59h]
  _BYTE v34[40]; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v35; // [rsp+80h] [rbp-29h] BYREF
  _DWORD v36[3]; // [rsp+88h] [rbp-21h] BYREF
  _DWORD v37[2]; // [rsp+94h] [rbp-15h] BYREF
  _DWORD v38[3]; // [rsp+9Ch] [rbp-Dh] BYREF
  _DWORD v39[10]; // [rsp+A8h] [rbp-1h] BYREF
  const void *retaddr; // [rsp+108h] [rbp+5Fh]

  v3 = *((_QWORD *)this + 9);
  v4 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 88);
  v8 = 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v3 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 24);
  *(_OWORD *)&v34[16] = *(_OWORD *)(v3 + 8);
  *(_QWORD *)&v34[32] = v9;
  D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)&v34[16]);
  D2DMatrixHelper::TransformRectConservative(
    (D2DMatrixHelper *)a3,
    (const struct D2D_RECT_F *)&v34[16],
    (const struct D2D_MATRIX_3X2_F *)v34,
    v10);
  v11 = (__m128i *)RECTFromD2DRectF(&v32, (const struct D2D_RECT_F *)v34);
  v12 = v11->m128i_i64[0];
  v13 = _mm_srli_si128(*v11, 8).m128i_u64[0];
  v14 = HIDWORD(v11->m128i_i64[0]);
  if ( (int)v12 >= (int)v13 || (int)v14 >= SHIDWORD(v13) )
  {
    *(_DWORD *)*v4 = 0;
  }
  else
  {
    v15 = *v4;
    v16 = (_DWORD *)((char *)*v4 + 28);
    *(_DWORD *)v15 = 2;
    *v16 = v12;
    *((_DWORD *)v15 + 3) = v14;
    v16[1] = v13;
    *((_DWORD *)v15 + 4) = (_DWORD)v16 - ((_DWORD)v15 + 12);
    *((_DWORD *)v15 + 1) = v12;
    *((_DWORD *)v15 + 2) = v13;
    *((_DWORD *)v15 + 6) = (_DWORD)v16 - ((_DWORD)v15 + 20) + 8;
    *((_DWORD *)v15 + 5) = HIDWORD(v13);
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), 4LL);
  v18 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    ContentRegion = (const struct FastRegion::Internal::CRgnData **)CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v18 + 72));
    if ( ContentRegion )
      CRegion::Subtract(v4, ContentRegion);
  }
  else
  {
    if ( *(_BYTE *)(v18 + 52) )
    {
      v36[0] = 0;
      v35 = v36;
      v23 = (__m128i *)RECTFromD2DRectF(&v32, (const struct D2D_RECT_F *)(v18 + 32));
      v24 = v23->m128i_i64[0];
      v25 = _mm_srli_si128(*v23, 8).m128i_u64[0];
      v26 = HIDWORD(v23->m128i_i64[0]);
      if ( (int)v24 < (int)v25 && (int)v26 < SHIDWORD(v25) )
      {
        v37[0] = v26;
        v36[0] = 2;
        v36[1] = v24;
        v36[2] = v25;
        v37[1] = (unsigned int)v39 + 1 - 5 - (unsigned int)v37;
        v38[2] = v24;
        v39[0] = v25;
        v38[1] = (unsigned int)v39 + 1 - 5 - (unsigned int)v38 + 8;
        v38[0] = HIDWORD(v25);
      }
      CRegion::Subtract(v4, (const struct FastRegion::Internal::CRgnData **)&v35);
      FastRegion::CRegion::FreeMemory((void **)&v35);
    }
    else
    {
      *(_DWORD *)*v4 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(
           *((_QWORD *)this + 9),
           5LL) )
    {
      v27 = *((_QWORD *)this + 9);
      if ( (-(__int64)(*(_BYTE *)(v27 + 569) != 0) & (v27 + 552)) != 0 )
      {
        *(struct tagRECT *)v34 = *RECTFromD2DRectF(
                                    &v32,
                                    (const struct D2D_RECT_F *)((v27 + 552) & -(__int64)(*(_BYTE *)(v27 + 569) != 0)));
        v28 = CRegion::TryAddRectangle((CRegion *)v4, (const struct tagRECT *)v34);
        if ( v28 < 0 )
          ModuleFailFastForHRESULT(v28, retaddr);
      }
    }
  }
  if ( *(_DWORD *)*v4 )
  {
    v33 = 0;
    v32 = 0LL;
    CDrawListBitmap::SetTransparent((CDrawListBitmap *)&v32, a2);
    *(_QWORD *)v34 = 0LL;
    *(_QWORD *)&v34[24] = 0LL;
    *(_QWORD *)&v34[16] = v34;
    v30 = SamplerMode::k_ClampClampLinear;
    v31 = 1;
    v34[32] = 1;
    v8 = CSurfaceDrawListBrush::CreateWithTextureTransform(
           (struct CSurfaceDrawListBrush *)&v32,
           &v30,
           Matrix3x3::Zero,
           &v34[24]);
    if ( v34[32] )
    {
      v20 = **(CSurfaceDrawListBrush ***)&v34[16];
      **(_QWORD **)&v34[16] = *(_QWORD *)&v34[24];
      if ( v20 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v20, 1);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0LL, v8, 0x70u);
    }
    else
    {
      v21 = *(_QWORD *)v34;
      v22 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
      *(_QWORD *)v34 = 0LL;
      *((_QWORD *)this + 10) = v21;
      if ( !v22 )
      {
LABEL_28:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32.right);
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v32);
        return (unsigned int)v8;
      }
      std::default_delete<CDrawListBrush>::operator()((__int64)v20, v22);
    }
    if ( *(_QWORD *)v34 )
      CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)v34, 1);
    goto LABEL_28;
  }
  return (unsigned int)v8;
}
