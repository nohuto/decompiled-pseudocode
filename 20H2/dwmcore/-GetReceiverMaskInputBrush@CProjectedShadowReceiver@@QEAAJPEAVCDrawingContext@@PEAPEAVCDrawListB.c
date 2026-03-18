/*
 * XREFs of ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180007A70
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180008190 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180010AC4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x18004D4F4 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180061250 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800630A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180064774 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18009F53C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18009F57C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800BD548 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowReceiver::GetReceiverMaskInputBrush(
        CProjectedShadowReceiver *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  CBrush *v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ecx
  void (__fastcall ***v17)(_QWORD, __int128 *); // rcx
  __int64 v18; // rdx
  struct IBitmapRealization *v19; // rdx
  int v20; // eax
  unsigned int v21; // ecx
  CSurfaceDrawListBrush *v22; // rcx
  __int16 v23; // [rsp+40h] [rbp-89h] BYREF
  char v24; // [rsp+42h] [rbp-87h]
  CSurfaceDrawListBrush *v25; // [rsp+50h] [rbp-79h] BYREF
  const char *v26; // [rsp+58h] [rbp-71h] BYREF
  int v27; // [rsp+60h] [rbp-69h]
  float v28; // [rsp+64h] [rbp-65h]
  CSurfaceDrawListBrush **v29; // [rsp+68h] [rbp-61h]
  CSurfaceDrawListBrush *v30; // [rsp+70h] [rbp-59h] BYREF
  char v31; // [rsp+78h] [rbp-51h]
  __int128 v32; // [rsp+80h] [rbp-49h] BYREF
  __int128 v33; // [rsp+90h] [rbp-39h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-29h]
  int v35; // [rsp+A8h] [rbp-21h]
  __int64 v36; // [rsp+ACh] [rbp-1Dh]
  int v37; // [rsp+B4h] [rbp-15h]
  struct CDrawListBrush *v38; // [rsp+B8h] [rbp-11h]
  __int64 v39; // [rsp+C0h] [rbp-9h]

  *a3 = 0LL;
  v5 = (CBrush *)*((_QWORD *)this + 12);
  v7 = 0;
  if ( !v5 )
    v5 = *(CBrush **)(*((_QWORD *)this + 2) + 168LL);
  if ( !CBrush::GetBrushGraph(v5) )
  {
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
    {
LABEL_16:
      v17 = (void (__fastcall ***)(_QWORD, __int128 *))(v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 16LL));
      (**v17)(v17, &v32);
      v18 = *((_QWORD *)this + 13);
      v36 = 0LL;
      v37 = 0;
      v34 = 0LL;
      v35 = 0;
      LOBYTE(v38) = 0;
      v33 = 0LL;
      if ( v18 )
        v19 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v18 + 8) + 16LL) + v18 + 8);
      else
        v19 = 0LL;
      v20 = CDrawListBitmap::Initialize((CDrawListBitmap *)&v33, v19, a2);
      v7 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xE3u, 0LL);
      }
      else
      {
        v26 = 0LL;
        v25 = 0LL;
        v30 = 0LL;
        v31 = 1;
        v29 = &v25;
        v23 = SamplerMode::k_ClampClampLinear;
        *(float *)&v27 = (float)(int)v32;
        v28 = (float)SDWORD1(v32);
        v24 = 1;
        v7 = CSurfaceDrawListBrush::CreateWithContentRect(&v33, &v23, &v26, &v30);
        if ( v31 )
        {
          v22 = *v29;
          *v29 = v30;
          if ( v22 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1u);
        }
        if ( (v7 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, 0LL, 0, v7, 0xECu, 0LL);
          if ( v25 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1u);
        }
        else
        {
          *a3 = v25;
          v25 = 0LL;
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v33 + 8);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v33);
      return v7;
    }
    v9 = (*(__int64 (__fastcall **)(CBrush *, struct CDrawingContext *, __int64))(*(_QWORD *)v5 + 320LL))(
           v5,
           a2,
           *((_QWORD *)this + 7) + 132LL);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
      return v7;
    }
    CBrushDrawListGenerator::CBrushDrawListGenerator(
      (CBrushDrawListGenerator *)&v33,
      a2,
      (const struct D2D_SIZE_F *)(*((_QWORD *)this + 7) + 132LL));
    v11 = (*(__int64 (__fastcall **)(CBrush *, __int128 *))(*(_QWORD *)v5 + 328LL))(v5, &v33);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC4u, 0LL);
    }
    else
    {
      if ( !v39 )
      {
        *a3 = v38;
        v38 = 0LL;
        goto LABEL_9;
      }
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((char *)this + 104);
      v14 = *((_QWORD *)this + 7);
      v26 = "DWM ProjectedShadow Mask";
      v27 = 24;
      v32 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v15 = ShadowHelpers::GenerateMaskIntermediate(&v26, a2, v14 + 132, v5, 0LL, 0, &v32, (char *)this + 104);
      v7 = v15;
      if ( v15 >= 0 )
      {
LABEL_9:
        CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v33);
        v8 = *((_QWORD *)this + 13);
        if ( !v8 )
          return v7;
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xD3u, 0LL);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v33);
  }
  return v7;
}
