/*
 * XREFs of ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18024F46C
 * Callers:
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18023DFD8 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@@Z @ 0x18024E094 (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x18024F990 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18024FA54 (-IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::Create(
        struct CD3DDevice *a1,
        struct IDXGISwapChainDWM1 *a2,
        enum DXGI_COLOR_SPACE_TYPE *a3,
        const struct RenderTargetInfo *a4,
        unsigned int a5,
        struct ILegacySwapChain **a6)
{
  CConversionSwapChain *v8; // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  CConversionSwapChain *v15; // rax
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-B8h]
  _BYTE v19[8]; // [rsp+50h] [rbp-88h] BYREF
  struct DXGI_RATIONAL v20; // [rsp+58h] [rbp-80h]
  unsigned int v21; // [rsp+78h] [rbp-60h]

  v8 = 0LL;
  *a6 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _BYTE *))(*(_QWORD *)a2 + 80LL))(a2, v19);
  v13 = v11;
  if ( v11 < 0 )
  {
    v18 = 56;
  }
  else
  {
    if ( !CConversionSwapChain::IsSupportedFakeOverlayColorSpace(a3[2]) )
    {
      v13 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003292288, 0x50u, 0LL);
      return v13;
    }
    v15 = (CConversionSwapChain *)DefaultHeap::Alloc(0x318uLL);
    if ( v15 )
      v8 = CConversionSwapChain::CConversionSwapChain(v15, a1, a2, (const struct PixelFormatInfo *)a3, a4, v21, a5, v20);
    if ( !v8 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x48u, 0LL);
      goto LABEL_13;
    }
    CMILCOMBase::InternalAddRef(v8);
    v11 = CConversionSwapChain::Initialize(v8);
    v13 = v11;
    if ( v11 >= 0 )
    {
      *a6 = (CConversionSwapChain *)((char *)v8 + *(int *)(*((_QWORD *)v8 + 3) + 16LL) + 24);
      return v13;
    }
    v18 = 74;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v18, 0LL);
LABEL_13:
  if ( v8 )
    CRenderTargetBitmap::Release(v8);
  return v13;
}
