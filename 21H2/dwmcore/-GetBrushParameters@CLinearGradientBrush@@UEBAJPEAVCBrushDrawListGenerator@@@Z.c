/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18003EEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800198A8 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18003F220 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUM.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F5F8 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180058350 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180088C60 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B0B20 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800BCC70 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  CDrawListBitmap *v7; // rax
  bool v8; // zf
  float *v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  __int64 v15; // rcx
  unsigned int v16; // ecx
  float *v17; // rax
  float v18; // xmm1_4
  float v19; // xmm6_4
  struct D2D_SIZE_U Size; // rax
  int v21; // ecx
  CSurfaceDrawListBrush *v22; // rcx
  CSurfaceDrawListBrush *v23; // rax
  __int64 v24; // rcx
  unsigned int v26; // [rsp+28h] [rbp-89h]
  _BYTE v27[16]; // [rsp+38h] [rbp-79h] BYREF
  struct IBitmapResource *v28; // [rsp+48h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v29; // [rsp+50h] [rbp-61h] BYREF
  __int128 v30; // [rsp+58h] [rbp-59h] BYREF
  char v31; // [rsp+68h] [rbp-49h]
  CSurfaceDrawListBrush **v32; // [rsp+70h] [rbp-41h] BYREF
  CSurfaceDrawListBrush *v33; // [rsp+78h] [rbp-39h] BYREF
  float v34; // [rsp+80h] [rbp-31h]
  float v35; // [rsp+84h] [rbp-2Dh]
  __int128 v36; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v37[5]; // [rsp+98h] [rbp-19h] BYREF
  float v38; // [rsp+ACh] [rbp-5h]
  float v39; // [rsp+B0h] [rbp-1h] BYREF
  float v40; // [rsp+B4h] [rbp+3h]
  float v41; // [rsp+B8h] [rbp+7h]
  float v42; // [rsp+BCh] [rbp+Bh]
  float v43; // [rsp+C0h] [rbp+Fh]
  float v44; // [rsp+C4h] [rbp+13h]
  int v45; // [rsp+C8h] [rbp+17h]
  float v46; // [rsp+CCh] [rbp+1Bh]
  int v47; // [rsp+D0h] [rbp+1Fh]

  v29 = 0LL;
  v28 = 0LL;
  v31 = 0;
  v30 = 0LL;
  v36 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v26 = 123;
    goto LABEL_21;
  }
  v7 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v32, v28);
  CDrawListBitmap::operator=(&v30, v7);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v32);
  CBrushDrawListGenerator::Reset(a2);
  v8 = *((_DWORD *)this + 39) == 1;
  v9 = (float *)((char *)a2 + 8);
  v10 = *((float *)this + 58);
  v11 = *((float *)this + 59);
  v12 = *((float *)this + 60);
  v13 = *((float *)this + 61);
  v39 = v10;
  v40 = v11;
  v41 = v12;
  v42 = v13;
  if ( v8 )
  {
    v14 = *((float *)a2 + 3);
    v10 = v10 * *v9;
    v12 = v12 * *v9;
    v11 = v11 * v14;
    v39 = v10;
    v40 = v11;
    v42 = v14 * v13;
    v13 = v14 * v13;
    v41 = v12;
  }
  v15 = *((_QWORD *)this + 27);
  v43 = v10 - (float)(v13 - v11);
  v44 = (float)(v12 - v10) + v11;
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v15 + 208LL))(v15, v9, &v32);
    v16 = 0;
    v17 = &v39;
    do
    {
      ++v16;
      v18 = (float)(*((float *)&v32 + 1) * *v17) + (float)(*((float *)&v33 + 1) * v17[1]);
      *v17 = (float)((float)(*(float *)&v33 * v17[1]) + (float)(*(float *)&v32 * *v17)) + v34;
      v17[1] = v18 + v35;
      v17 += 2;
    }
    while ( v16 < 3 );
  }
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform(this, &v39, &v36, v37);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v26 = 164;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(
      v5,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      CurrentSurface,
      v26,
      0LL);
    goto LABEL_22;
  }
  v19 = *((float *)&v36 + 1) + 0.5;
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v30);
  v33 = 0LL;
  v40 = 0.0;
  v21 = *(_DWORD *)(*(_QWORD *)&Size + 4LL);
  v37[1] = 0;
  v37[3] = 0;
  v41 = 0.0;
  v43 = 0.0;
  v44 = 0.0;
  v32 = &v29;
  LOBYTE(v34) = 1;
  v47 = (int)FLOAT_1_0;
  v39 = *(float *)v37;
  v42 = *(float *)&v37[2];
  v38 = v19 / (float)v21;
  v46 = v38;
  v45 = v37[4];
  v27[0] = InterpolationMode::FromD2D1InterpolationMode(1LL);
  v27[1] = *((_BYTE *)this + 152);
  v27[2] = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(&v30, v27, &v39, &v33);
  if ( LOBYTE(v34) )
  {
    v22 = *v32;
    *v32 = v33;
    if ( v22 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)v22,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v6,
      0xB5u,
      0LL);
LABEL_22:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_15;
  }
  v23 = v29;
  v29 = 0LL;
  *(_QWORD *)&v36 = v23;
  CBrushDrawListGenerator::AttachInput(a2, 0LL, &v36);
  if ( (_QWORD)v36 )
    std::default_delete<CDrawListBrush>::operator()(v24, v36);
  v6 = 0;
LABEL_15:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v30);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
  if ( v29 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v29, 1u);
  return (unsigned int)v6;
}
