/*
 * XREFs of ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000F284
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000EF60 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x18000F9CC (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18005A504 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18005A5C0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18005C248 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        struct CDrawListBrush **a5)
{
  FLOAT width; // xmm0_4
  CSurfaceDrawListBrush *v6; // rbx
  FLOAT height; // xmm1_4
  void (__fastcall ***v9)(_QWORD, _DWORD *); // rcx
  void (__fastcall **v11)(_QWORD, _DWORD *); // rax
  float v12; // xmm8_4
  float v13; // xmm7_4
  CSurfaceDrawListBrush *v14; // rcx
  int v15; // edi
  struct D2D_MATRIX_3X2_F *v16; // r9
  CSurfaceDrawListBrush *v17; // r11
  __int64 v18; // xmm1_8
  CSurfaceDrawListBrush *v19; // rbx
  struct CDrawListBrush *v20; // rdi
  float v21; // xmm3_4
  __int32 v22; // xmm3_4
  __int64 v23; // rax
  float v24; // xmm6_4
  CNineGridDrawListBrush *v25; // rcx
  CSurfaceDrawListBrush *v26; // rcx
  _DWORD v28[2]; // [rsp+38h] [rbp-61h] BYREF
  __m128 v29; // [rsp+40h] [rbp-59h] BYREF
  struct D2D_RECT_F v30; // [rsp+50h] [rbp-49h] BYREF
  struct D2D_RECT_F v31; // [rsp+60h] [rbp-39h] BYREF
  __int64 v32; // [rsp+70h] [rbp-29h]
  char v33[8]; // [rsp+78h] [rbp-21h] BYREF
  char v34[72]; // [rsp+80h] [rbp-19h] BYREF
  CNineGridDrawListBrush *v35; // [rsp+F8h] [rbp+5Fh] BYREF
  CSurfaceDrawListBrush *v36; // [rsp+100h] [rbp+67h] BYREF
  CSurfaceDrawListBrush *v37; // [rsp+108h] [rbp+6Fh] BYREF

  v36 = a2;
  width = a3->width;
  v6 = 0LL;
  height = a3->height;
  v29.m128_u64[0] = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, _DWORD *))*((_QWORD *)this + 5);
  v36 = 0LL;
  v29.m128_u64[1] = __PAIR64__(LODWORD(height), LODWORD(width));
  v11 = *v9;
  v30.left = 0.0 - a4;
  v30.top = _mm_shuffle_ps(v29, v29, 85).m128_f32[0] - a4;
  v30.right = _mm_shuffle_ps(v29, v29, 170).m128_f32[0] + a4;
  v30.bottom = _mm_shuffle_ps(v29, v29, 255).m128_f32[0] + a4;
  (*v11)(v9, v28);
  v12 = (float)v28[0];
  v13 = (float)v28[1];
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v33, *((struct IBitmapRealization **)this + 5));
  v29.m128_u64[0] = 0LL;
  *(_QWORD *)&v31.right = 0LL;
  *(_QWORD *)&v31.left = &v36;
  v29.m128_u64[1] = __PAIR64__(LODWORD(v13), LODWORD(v12));
  LOWORD(v35) = SamplerMode::k_ClampClampLinear;
  BYTE2(v35) = 1;
  LOBYTE(v32) = 1;
  v15 = CSurfaceDrawListBrush::CreateWithContentRect(v33, &v35, &v29, &v31.right);
  if ( (_BYTE)v32 )
  {
    v14 = **(CSurfaceDrawListBrush ***)&v31.left;
    **(_QWORD **)&v31.left = *(_QWORD *)&v31.right;
    if ( v14 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1u);
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, v15, 0x448u, 0LL);
  }
  else
  {
    D2DMatrixHelper::ComputeRectangleTransform((CSurfaceDrawListBrush *)((char *)v36 + 32), &v30, &v31, v16);
    v17 = v36;
    v18 = v32;
    *(struct D2D_RECT_F *)((char *)v36 + 8) = v31;
    *((_QWORD *)v17 + 3) = v18;
    v19 = v36;
    v36 = 0LL;
    v20 = v19;
    v37 = v19;
    if ( !CDropShadow::ShadowIntermediates::IsRectangularShadow(this) )
      goto LABEL_19;
    v21 = *((float *)this + 8);
    if ( v21 <= 0.0 )
      goto LABEL_19;
    *(float *)&v22 = v21 + v21;
    v29 = 0LL;
    if ( v12 > (float)(*(float *)&v22 + *(float *)&v22) )
    {
      v29.m128_i32[0] = v22;
      v29.m128_i32[2] = v22;
    }
    if ( v13 > (float)(*(float *)&v22 + *(float *)&v22) )
    {
      v29.m128_i32[1] = v22;
      v29.m128_i32[3] = v22;
    }
    if ( Insets::IsEmpty((const struct Insets *)&v29) )
      goto LABEL_19;
    v23 = 0LL;
    v24 = (float)(a4 + a4) / *(float *)&v22;
    do
    {
      *(float *)((char *)&v30.left + v23 * 4) = v24 * v29.m128_f32[v23];
      ++v23;
    }
    while ( v23 < 4 );
    v35 = 0LL;
    *(_QWORD *)&v31.right = 0LL;
    *(_QWORD *)&v31.left = &v35;
    LOBYTE(v32) = 1;
    v15 = CNineGridDrawListBrush::Create(
            (unsigned int)&v37,
            (unsigned int)&v29,
            (unsigned int)&v30,
            0,
            (__int64)&v31.right);
    if ( (_BYTE)v32 )
    {
      v25 = **(CNineGridDrawListBrush ***)&v31.left;
      **(_QWORD **)&v31.left = *(_QWORD *)&v31.right;
      if ( v25 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v25, 1u);
    }
    if ( v15 >= 0 )
    {
      v20 = v35;
      v35 = 0LL;
      if ( v37 )
      {
        std::default_delete<CDrawListBrush>::operator()(v25, v37);
        if ( v35 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v35, 1u);
      }
LABEL_19:
      v6 = 0LL;
      *a5 = v20;
      v15 = 0;
      goto LABEL_20;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v15, 0x474u, 0LL);
    if ( v35 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v35, 1u);
    v6 = v37;
  }
LABEL_20:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v34);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v33);
  v26 = v36;
  if ( v36 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v36, 1u);
  if ( v6 )
    std::default_delete<CDrawListBrush>::operator()(v26, v6);
  return (unsigned int)v15;
}
