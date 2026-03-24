/*
 * XREFs of ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180008BC4
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180006A70 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180007318 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x1800073D0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007474 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@AEBQEBVCVisualTree@@@Z @ 0x18000A454 (-find@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$le.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x180040954 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054550 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800563A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180057A74 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18006A9DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6E88 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GetCasterShadowInputBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  int v4; // ecx
  CSurfaceDrawListBrush *v7; // rbx
  unsigned int v8; // ecx
  struct IRenderTargetBitmap *v9; // rax
  struct IBitmapRealization *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
  CSurfaceDrawListBrush *v14; // rcx
  CSurfaceDrawListBrush *v15; // rbx
  __int64 v16; // rcx
  struct D2D_MATRIX_3X2_F *v17; // r9
  __int64 v18; // xmm1_8
  struct CDrawListBrush *v19; // r14
  FLOAT v20; // xmm0_4
  CNineGridDrawListBrush *v21; // rcx
  __int64 v23; // rdx
  __m128 v24; // xmm1
  CSurfaceDrawListBrush *v25; // rcx
  FLOAT v26; // [rsp+30h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v27[2]; // [rsp+40h] [rbp-59h] BYREF
  CSurfaceDrawListBrush *v28; // [rsp+50h] [rbp-49h] BYREF
  float left_low; // [rsp+58h] [rbp-41h]
  float top_low; // [rsp+5Ch] [rbp-3Dh]
  struct D2D_RECT_F v31; // [rsp+60h] [rbp-39h] BYREF
  __int64 v32; // [rsp+70h] [rbp-29h]
  int v33; // [rsp+78h] [rbp-21h]
  __int64 v34; // [rsp+7Ch] [rbp-1Dh]
  int v35; // [rsp+84h] [rbp-15h]
  char v36; // [rsp+88h] [rbp-11h]
  __m128i si128; // [rsp+90h] [rbp-9h] BYREF
  char v38; // [rsp+A0h] [rbp+7h]
  struct D2D_RECT_F v39; // [rsp+A8h] [rbp+Fh] BYREF

  v4 = *((_DWORD *)this + 80);
  v7 = 0LL;
  if ( v4 )
  {
    v8 = v4 - 1;
    if ( v8 )
    {
      if ( v8 != 4 )
      {
        v13 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147418113, 0x22Cu, 0LL);
        return (unsigned int)v13;
      }
      v9 = CProjectedShadow::s_cp2xBlurAsset;
    }
    else
    {
      v9 = *(struct IRenderTargetBitmap **)&CProjectedShadow::s_cpFastShadowIntermediate;
    }
    if ( v9 )
    {
      v10 = (struct IRenderTargetBitmap *)((char *)v9 + *(int *)(*((_QWORD *)v9 + 1) + 16LL) + 8);
      goto LABEL_6;
    }
  }
  else
  {
    v23 = *((_QWORD *)this + 45);
    if ( v23 )
    {
      v10 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v23 + 8) + 16LL) + v23 + 8);
      goto LABEL_6;
    }
  }
  v10 = 0LL;
LABEL_6:
  (**(void (__fastcall ***)(struct IBitmapRealization *, struct D2D_RECT_F *))v10)(v10, &v39);
  v28 = 0LL;
  v33 = 0;
  v36 = 0;
  v34 = 0LL;
  v35 = 0;
  v32 = 0LL;
  left_low = (float)SLODWORD(v39.left);
  v31 = 0LL;
  top_low = (float)SLODWORD(v39.top);
  v11 = CDrawListBitmap::Initialize((CDrawListBitmap *)&v31, v10, a2);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x238u, 0LL);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v31.right);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v31);
LABEL_39:
    if ( v7 )
      std::default_delete<CShape>::operator()((__int64)v25, (__int64 (__fastcall ***)(_QWORD, __int64))v7);
    return (unsigned int)v13;
  }
  v27[0] = 0LL;
  si128.m128i_i64[0] = (__int64)v27;
  LOWORD(v26) = SamplerMode::k_ClampClampLinear;
  BYTE2(v26) = 1;
  si128.m128i_i64[1] = 0LL;
  v38 = 1;
  v13 = CSurfaceDrawListBrush::CreateWithContentRect(&v31, &v26, &v28, &si128.m128i_u64[1]);
  if ( v38 )
  {
    v14 = *(CSurfaceDrawListBrush **)si128.m128i_i64[0];
    *(_QWORD *)si128.m128i_i64[0] = si128.m128i_i64[1];
    if ( v14 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1u);
  }
  if ( v13 >= 0 )
  {
    v15 = v27[0];
    v28 = v27[0];
    v27[0] = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v31.right);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v31);
    if ( *((_DWORD *)this + 80) )
    {
      v16 = *((_QWORD *)this + 9) + 72LL;
      *(_QWORD *)&v39.left = *((_QWORD *)a2 + 741);
      v39 = *(struct D2D_RECT_F *)(*(_QWORD *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::find(
                                                v16,
                                                v27,
                                                &v39)
                                 + 60LL);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v39);
      *(struct D2D_RECT_F *)v27 = v39;
      D2DMatrixHelper::ComputeRectangleTransform((CSurfaceDrawListBrush *)((char *)v15 + 32), &v39, &v31, v17);
      v18 = v32;
      *(struct D2D_RECT_F *)((char *)v15 + 8) = v31;
      *((_QWORD *)v15 + 3) = v18;
    }
    else
    {
      v24 = _mm_xor_ps((__m128)*((unsigned int *)this + 22), (__m128)_xmm);
      *(_OWORD *)((char *)v15 + 8) = _xmm;
      *((_QWORD *)v15 + 3) = _mm_unpacklo_ps(v24, v24).m128_u64[0];
    }
    v19 = v15;
    if ( *((_DWORD *)this + 80) != 1 )
    {
LABEL_19:
      if ( *((float *)this + 22) > 0.0 )
      {
        *((_BYTE *)v15 + 52) = 1;
        *((_DWORD *)v15 + 12) = 0;
      }
      *a3 = v19;
      return (unsigned int)v13;
    }
    v20 = *((float *)this + 22) + *((float *)this + 22);
    *(_QWORD *)&v31.left = v27;
    v27[0] = 0LL;
    *(_QWORD *)&v31.right = 0LL;
    LOBYTE(v32) = 1;
    v26 = v20;
    v39.left = v20;
    v39.top = v20;
    v39.right = v20;
    v39.bottom = v20;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v13 = CNineGridDrawListBrush::Create(
            (struct CNineGridDrawListBrush *)&v28,
            (int)&si128,
            (int)&v39,
            0,
            (CNineGridDrawListBrush **)&v31.right);
    if ( (_BYTE)v32 )
    {
      v21 = **(CNineGridDrawListBrush ***)&v31.left;
      **(_QWORD **)&v31.left = *(_QWORD *)&v31.right;
      if ( v21 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v21, 1);
    }
    if ( v13 >= 0 )
    {
      v15 = v27[0];
      v19 = v27[0];
      v27[0] = 0LL;
      if ( v28 )
      {
        std::default_delete<CShape>::operator()((__int64)v21, (__int64 (__fastcall ***)(_QWORD, __int64))v28);
        if ( v27[0] )
          CNineGridDrawListBrush::`scalar deleting destructor'(v27[0], 1);
      }
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, 0LL, 0, v13, 0x268u, 0LL);
    v25 = v27[0];
    if ( v27[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v27[0], 1);
    v7 = v28;
    goto LABEL_39;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, v13, 0x23Eu, 0LL);
  if ( v27[0] )
    CSurfaceDrawListBrush::`vector deleting destructor'(v27[0], 1u);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v31.right);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v31);
  return (unsigned int)v13;
}
