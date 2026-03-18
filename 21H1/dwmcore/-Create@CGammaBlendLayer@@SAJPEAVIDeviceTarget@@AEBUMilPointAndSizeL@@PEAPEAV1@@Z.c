/*
 * XREFs of ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x180195BE0
 * Callers:
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x18017C5F0 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800318DC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180032214 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGammaBlendLayer::Create(
        struct IDeviceTarget *a1,
        const struct MilPointAndSizeL *a2,
        struct CGammaBlendLayer **a3)
{
  int v3; // eax
  __int64 (__fastcall **v6)(struct IDeviceTarget *, _BYTE *); // rax
  struct _LUID *v7; // rax
  int Bitmap; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  CExternalLayer *v11; // rax
  __int64 v12; // rcx
  struct CGammaBlendLayer *v13; // rbx
  _DWORD v15[4]; // [rsp+30h] [rbp-40h] BYREF
  const char *v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  _BYTE v18[32]; // [rsp+50h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v19; // [rsp+90h] [rbp+20h] BYREF

  *a3 = 0LL;
  v3 = 28;
  v15[2] = 0;
  if ( CCommonRegistryData::GammaBlendWithFP16 )
    v3 = 10;
  v19 = 0LL;
  v15[0] = v3;
  v6 = *(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a1;
  v15[1] = 1;
  v7 = (struct _LUID *)(*v6)(a1, v18);
  v17 = 44;
  v16 = "DWM Scratch Rendertarget (gamma blend layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (const struct CResourceTag *)&v16,
             a2,
             (const struct PixelFormatInfo *)v15,
             v7,
             1,
             (CD3DDevice *)&v19);
  v10 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, Bitmap, 0x27u, 0LL);
  }
  else
  {
    v11 = (CExternalLayer *)operator new(0x78uLL);
    v13 = v11;
    if ( v11 )
    {
      CExternalLayer::CExternalLayer(v11, a2, v19);
      *(_QWORD *)v13 = &CGammaBlendLayer::`vftable';
    }
    else
    {
      v13 = 0LL;
    }
    *a3 = v13;
    if ( !v13 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x2Bu, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  return v10;
}
