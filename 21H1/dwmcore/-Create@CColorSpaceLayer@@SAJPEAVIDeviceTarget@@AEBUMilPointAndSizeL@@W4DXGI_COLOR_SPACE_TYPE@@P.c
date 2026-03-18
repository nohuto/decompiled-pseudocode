/*
 * XREFs of ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180193DFC
 * Callers:
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017C314 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800318DC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180032214 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008BE50 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorSpaceLayer::Create(
        struct IDeviceTarget *a1,
        const struct MilPointAndSizeL *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        struct CColorSpaceLayer **a4)
{
  bool v6; // cf
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // r11
  __int64 (__fastcall **v8)(_QWORD, _BYTE *); // rax
  int v9; // r8d
  __int64 (__fastcall *v10)(_QWORD, _BYTE *); // rax
  struct _LUID *v11; // rax
  int Bitmap; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  CExternalLayer *v15; // rax
  __int64 v16; // rcx
  CExternalLayer *v17; // rbx
  _DWORD v19[4]; // [rsp+30h] [rbp-40h] BYREF
  const char *v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  _BYTE v22[32]; // [rsp+50h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v23; // [rsp+90h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = IsDXGIColorSpaceHDR(a3) != 0;
  v19[1] = 1;
  v8 = *v7;
  v19[2] = v9;
  v23 = 0LL;
  v10 = *v8;
  v19[0] = v6 ? 10 : 28;
  v11 = (struct _LUID *)v10(v7, v22);
  v21 = 43;
  v20 = "DWM Scratch Rendertarget (colorspace layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (const struct CResourceTag *)&v20,
             a2,
             (const struct PixelFormatInfo *)v19,
             v11,
             1,
             (CD3DDevice *)&v23);
  v14 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Bitmap, 0x20u, 0LL);
  }
  else
  {
    v15 = (CExternalLayer *)operator new(0x80uLL);
    v17 = v15;
    if ( v15 )
    {
      CExternalLayer::CExternalLayer(v15, a2, v23);
      *((_BYTE *)v17 + 120) = 1;
      *(_QWORD *)v17 = &CColorSpaceLayer::`vftable';
    }
    else
    {
      v17 = 0LL;
    }
    *a4 = v17;
    if ( !v17 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x24u, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
  return v14;
}
