/*
 * XREFs of ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18024F340
 * Callers:
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x18023C050 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x18024EDD4 (--0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x18024F6C8 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::Create(
        struct CD3DDevice *a1,
        struct IDXGISwapChain1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct ICompositionSwapChain **a5)
{
  CCompSwapChain *v7; // rbx
  struct IDXGISwapChain1Vtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetDesc1)(IDXGISwapChain1 *, DXGI_SWAP_CHAIN_DESC1 *); // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  CCompSwapChain *v15; // rax
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-88h]
  __int128 v19; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v20[4]; // [rsp+50h] [rbp-58h]
  __int128 v21; // [rsp+60h] [rbp-48h]

  v7 = 0LL;
  *a5 = 0LL;
  lpVtbl = a2->lpVtbl;
  v19 = 0LL;
  *(_OWORD *)v20 = 0LL;
  GetDesc1 = lpVtbl->GetDesc1;
  v21 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IDXGISwapChain1 *, __int128 *))GetDesc1)(a2, &v19);
  v14 = v12;
  if ( v12 < 0 )
  {
    v18 = 28;
  }
  else
  {
    v15 = (CCompSwapChain *)DefaultHeap::Alloc(0x1B8uLL);
    if ( v15 )
      v7 = CCompSwapChain::CCompSwapChain(v15, a1, a2, a3, a4, v20[3]);
    if ( !v7 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x26u, 0LL);
      goto LABEL_11;
    }
    CMILCOMBase::InternalAddRef(v7);
    v12 = CCompSwapChain::Initialize(v7);
    v14 = v12;
    if ( v12 >= 0 )
    {
      *a5 = (CCompSwapChain *)((char *)v7 + 56);
      return v14;
    }
    v18 = 40;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v18, 0LL);
LABEL_11:
  if ( v7 )
    CRenderTargetBitmap::Release(v7);
  return v14;
}
