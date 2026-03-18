/*
 * XREFs of ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180234894
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180233EB0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18005A504 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18005A5C0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180201004 (--$_Find@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProject.c)
 */

__int64 __fastcall CProjectedShadow::GetCasterShadowInputBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  int v4; // ecx
  CSurfaceDrawListBrush *v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  struct IRenderTargetBitmap *v10; // rax
  struct IBitmapRealization *v11; // rdi
  __int64 v12; // rdx
  CSurfaceDrawListBrush *v13; // rcx
  CSurfaceDrawListBrush *v14; // rbx
  __m128 v15; // xmm1
  __int64 v16; // rcx
  __int64 v17; // rax
  float v18; // xmm2_4
  struct D2D_MATRIX_3X2_F *v19; // r9
  __int64 v20; // xmm1_8
  struct CDrawListBrush *v21; // r14
  FLOAT v22; // xmm0_4
  CNineGridDrawListBrush *v23; // rcx
  CSurfaceDrawListBrush *v24; // rcx
  FLOAT v26; // [rsp+30h] [rbp-59h] BYREF
  CSurfaceDrawListBrush *v27[2]; // [rsp+40h] [rbp-49h] BYREF
  struct D2D_RECT_F v28; // [rsp+50h] [rbp-39h] BYREF
  __int64 v29; // [rsp+60h] [rbp-29h]
  CSurfaceDrawListBrush *v30; // [rsp+68h] [rbp-21h] BYREF
  float left_low; // [rsp+70h] [rbp-19h]
  float top_low; // [rsp+74h] [rbp-15h]
  __m128i si128; // [rsp+78h] [rbp-11h] BYREF
  char v34; // [rsp+88h] [rbp-1h]
  struct D2D_RECT_F v35; // [rsp+90h] [rbp+7h] BYREF

  v4 = *((_DWORD *)this + 82);
  v7 = 0LL;
  if ( !v4 )
  {
    v12 = *((_QWORD *)this + 46);
    if ( v12 )
    {
      v11 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v12 + 8) + 16LL) + v12 + 8);
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v8 = (unsigned int)(v4 - 1);
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 != 4 )
    {
      v9 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147418113, 0x22Cu);
      return (unsigned int)v9;
    }
    v10 = CProjectedShadow::s_cp2xBlurAsset;
  }
  else
  {
    v10 = *(struct IRenderTargetBitmap **)&CProjectedShadow::s_cpFastShadowIntermediate;
  }
  if ( !v10 )
  {
LABEL_10:
    v11 = 0LL;
    goto LABEL_12;
  }
  v11 = (struct IRenderTargetBitmap *)((char *)v10 + *(int *)(*((_QWORD *)v10 + 1) + 16LL) + 8);
LABEL_12:
  (**(void (__fastcall ***)(struct IBitmapRealization *, struct D2D_RECT_F *))v11)(v11, &v35);
  v30 = 0LL;
  left_low = (float)SLODWORD(v35.left);
  top_low = (float)SLODWORD(v35.top);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v28, v11);
  v27[0] = 0LL;
  si128.m128i_i64[0] = (__int64)v27;
  LOWORD(v26) = SamplerMode::k_ClampClampLinear;
  BYTE2(v26) = 1;
  si128.m128i_i64[1] = 0LL;
  v34 = 1;
  v9 = CSurfaceDrawListBrush::CreateWithContentRect(
         (CDrawListBitmap *)&v28,
         (__int16 *)&v26,
         (float *)&v30,
         &si128.m128i_i64[1]);
  if ( v34 )
  {
    v13 = *(CSurfaceDrawListBrush **)si128.m128i_i64[0];
    *(_QWORD *)si128.m128i_i64[0] = si128.m128i_i64[1];
    if ( v13 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0LL, v9, 0x23Du);
    if ( v27[0] )
      CSurfaceDrawListBrush::`vector deleting destructor'(v27[0], 1);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28.right);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v28);
  }
  else
  {
    v14 = v27[0];
    v30 = v27[0];
    v27[0] = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28.right);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v28);
    if ( *((_DWORD *)this + 82) )
    {
      v16 = *((_QWORD *)this + 10) + 80LL;
      *(_QWORD *)&v35.left = *((_QWORD *)a2 + 991);
      v17 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
              v16,
              (__int64)&v35);
      v18 = *((float *)this + 24);
      v35 = *(struct D2D_RECT_F *)(v17 + 60);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v35.left, v18, v18);
      *(struct D2D_RECT_F *)v27 = v35;
      D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)v14 + 2, &v35, &v28, v19);
      v20 = v29;
      *(struct D2D_RECT_F *)((char *)v14 + 8) = v28;
      *((_QWORD *)v14 + 3) = v20;
    }
    else
    {
      v15 = _mm_xor_ps((__m128)*((unsigned int *)this + 24), (__m128)_xmm);
      *(_OWORD *)((char *)v14 + 8) = *(_OWORD *)&_xmm;
      *((_QWORD *)v14 + 3) = _mm_unpacklo_ps(v15, v15).m128_u64[0];
    }
    v21 = v14;
    if ( *((_DWORD *)this + 82) != 1 )
    {
LABEL_27:
      if ( *((float *)this + 24) > 0.0 )
      {
        *((_BYTE *)v14 + 52) = 1;
        *((_DWORD *)v14 + 12) = 0;
      }
      *a3 = v21;
      return (unsigned int)v9;
    }
    v22 = *((float *)this + 24) + *((float *)this + 24);
    *(_QWORD *)&v28.left = v27;
    v27[0] = 0LL;
    *(_QWORD *)&v28.right = 0LL;
    LOBYTE(v29) = 1;
    v26 = v22;
    v35.left = v22;
    v35.top = v22;
    v35.right = v22;
    v35.bottom = v22;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v9 = CNineGridDrawListBrush::Create(
           (struct CNineGridDrawListBrush *)&v30,
           (int)&si128,
           (int)&v35,
           0,
           (CNineGridDrawListBrush **)&v28.right);
    if ( (_BYTE)v29 )
    {
      v23 = **(CNineGridDrawListBrush ***)&v28.left;
      **(_QWORD **)&v28.left = *(_QWORD *)&v28.right;
      if ( v23 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v23, 1);
    }
    if ( v9 >= 0 )
    {
      v14 = v27[0];
      v21 = v27[0];
      v27[0] = 0LL;
      if ( v30 )
      {
        std::default_delete<CDrawListBrush>::operator()((__int64)v23, (__int64 (__fastcall ***)(_QWORD, __int64))v30);
        if ( v27[0] )
          CNineGridDrawListBrush::`scalar deleting destructor'(v27[0], 1);
      }
      goto LABEL_27;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0LL, v9, 0x267u);
    v24 = v27[0];
    if ( v27[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v27[0], 1);
    v7 = v30;
  }
  if ( v7 )
    std::default_delete<CDrawListBrush>::operator()((__int64)v24, (__int64 (__fastcall ***)(_QWORD, __int64))v7);
  return (unsigned int)v9;
}
