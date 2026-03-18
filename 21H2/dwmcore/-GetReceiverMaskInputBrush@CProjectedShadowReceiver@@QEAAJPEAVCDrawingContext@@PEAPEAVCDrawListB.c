/*
 * XREFs of ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18023551C
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180233EB0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800D52C4 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9A0C (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadowReceiver::GetReceiverMaskInputBrush(
        CProjectedShadowReceiver *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  CBrush *v5; // rsi
  unsigned int v7; // ebx
  char *v8; // r15
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  void (__fastcall ***v17)(_QWORD, __int128 *); // rcx
  struct IBitmapRealization *v18; // rdx
  CSurfaceDrawListBrush *v19; // rcx
  __int16 v21; // [rsp+40h] [rbp-C0h] BYREF
  char v22; // [rsp+42h] [rbp-BEh]
  CSurfaceDrawListBrush *v23; // [rsp+50h] [rbp-B0h] BYREF
  const char *v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+60h] [rbp-A0h]
  float v26; // [rsp+64h] [rbp-9Ch]
  CSurfaceDrawListBrush **v27; // [rsp+68h] [rbp-98h]
  CSurfaceDrawListBrush *v28; // [rsp+70h] [rbp-90h] BYREF
  char v29; // [rsp+78h] [rbp-88h]
  _BYTE v30[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v32; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v33[40]; // [rsp+B0h] [rbp-50h] BYREF
  struct CDrawListBrush *v34; // [rsp+D8h] [rbp-28h]
  __int64 v35; // [rsp+E0h] [rbp-20h]

  *a3 = 0LL;
  v5 = (CBrush *)*((_QWORD *)this + 13);
  v7 = 0;
  if ( !v5 )
    v5 = *(CBrush **)(*((_QWORD *)this + 2) + 320LL);
  if ( !CBrush::GetBrushGraph(v5, (__int64)a2) )
  {
    v8 = (char *)this + 112;
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
      goto LABEL_12;
    v10 = (*(__int64 (__fastcall **)(CBrush *, struct CDrawingContext *, __int64))(*(_QWORD *)v5 + 312LL))(
            v5,
            a2,
            *((_QWORD *)this + 8) + 140LL);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xC0u);
      return v7;
    }
    CBrushDrawListGenerator::CBrushDrawListGenerator(
      (CBrushDrawListGenerator *)v33,
      a2,
      (const struct D2D_SIZE_F *)(*((_QWORD *)this + 8) + 140LL));
    v12 = (*(__int64 (__fastcall **)(CBrush *, _BYTE *))(*(_QWORD *)v5 + 320LL))(v5, v33);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xC4u);
      goto LABEL_15;
    }
    if ( v35 )
    {
      Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((__int64 *)this + 14);
      v14 = *((_QWORD *)this + 8);
      v24 = "DWM ProjectedShadow Mask";
      v25 = 24;
      v32 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v15 = ShadowHelpers::GenerateMaskIntermediate(&v24, a2, v14 + 140, v5, 0LL);
      v7 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0xD3u);
LABEL_15:
        CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v33);
        return v7;
      }
    }
    else
    {
      *a3 = v34;
      v34 = 0LL;
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v33);
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
    {
LABEL_12:
      v17 = (void (__fastcall ***)(_QWORD, __int128 *))(v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 16LL));
      (**v17)(v17, &v32);
      if ( *(_QWORD *)v8 )
        v18 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 16LL) + *(_QWORD *)v8 + 8LL);
      else
        v18 = 0LL;
      CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v30, v18);
      v24 = 0LL;
      v23 = 0LL;
      v28 = 0LL;
      v29 = 1;
      v27 = &v23;
      v21 = SamplerMode::k_ClampClampLinear;
      *(float *)&v25 = (float)(int)v32;
      v26 = (float)SDWORD1(v32);
      v22 = 1;
      v7 = CSurfaceDrawListBrush::CreateWithContentRect((CDrawListBitmap *)v30, &v21, (float *)&v24, (__int64 *)&v28);
      if ( v29 )
      {
        v19 = *v27;
        *v27 = v28;
        if ( v19 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1);
      }
      if ( (v7 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v19, 0LL, 0LL, v7, 0xEAu);
        if ( v23 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v23, 1);
      }
      else
      {
        *a3 = v23;
        v23 = 0LL;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v31);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v30);
    }
  }
  return v7;
}
