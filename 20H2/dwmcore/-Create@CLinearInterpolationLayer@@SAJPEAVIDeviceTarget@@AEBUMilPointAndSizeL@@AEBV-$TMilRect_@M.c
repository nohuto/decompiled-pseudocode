/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180190B08
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180177E2C (-PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006AD90 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18006C2FC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        _OWORD *a3,
        CExternalLayer **a4)
{
  void (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  __int64 (__fastcall **v9)(__int64, char *); // rax
  struct _LUID *v10; // rax
  int Bitmap; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  CExternalLayer *v14; // rax
  __int64 v15; // rcx
  CExternalLayer *v16; // rbx
  struct IRenderTargetBitmap *v18; // [rsp+30h] [rbp-78h] BYREF
  const char *v19; // [rsp+38h] [rbp-70h] BYREF
  int v20; // [rsp+40h] [rbp-68h]
  char v21[24]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v22[4]; // [rsp+60h] [rbp-48h] BYREF
  int v23; // [rsp+64h] [rbp-44h]

  *a4 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, _BYTE *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v8)(v8, v22);
  v9 = *(__int64 (__fastcall ***)(__int64, char *))a1;
  v18 = 0LL;
  v23 = 1;
  v10 = (struct _LUID *)(*v9)(a1, v21);
  v20 = 52;
  v19 = "DWM Scratch Rendertarget (linear interpolation layer";
  Bitmap = CExternalLayer::CreateBitmap((__int64)&v19, a2, (__int64)v22, v10, 1, (CD3DDevice *)&v18);
  v13 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Bitmap, 0x18u, 0LL);
  }
  else
  {
    v14 = (CExternalLayer *)operator new(0x88uLL);
    v16 = v14;
    if ( v14 )
    {
      CExternalLayer::CExternalLayer(v14, a2, v18);
      *(_QWORD *)v16 = &CLinearInterpolationLayer::`vftable';
      *(_OWORD *)((char *)v16 + 120) = *a3;
    }
    else
    {
      v16 = 0LL;
    }
    *a4 = v16;
    if ( !v16 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x1Du, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
  return v13;
}
