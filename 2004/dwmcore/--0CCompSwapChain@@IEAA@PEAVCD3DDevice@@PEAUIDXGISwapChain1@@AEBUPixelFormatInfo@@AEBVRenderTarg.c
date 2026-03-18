/*
 * XREFs of ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x18024EDD4
 * Callers:
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18024F340 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderT.c)
 * Callees:
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800259F0 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CCompSwapChain *__fastcall CCompSwapChain::CCompSwapChain(
        CCompSwapChain *this,
        struct CD3DDevice *a2,
        struct IDXGISwapChain1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = &CCompSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 8) = &CCompSwapChain::`vbtable'{for `ISwapChain'};
  *((_QWORD *)this + 51) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 54) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_QWORD *)this + 2) = &CDeviceResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 20) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 7) = &Windows::Foundation::Collections::IMapView<_GUID,IInspectable *>::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CCompSwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CCompSwapChain::`vftable'{for `ICompositionSwapChain'};
  *((_QWORD *)this + 9) = &CCompSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CCompSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CCompSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CCompSwapChain::`vftable'{for `IPixelFormat'};
  v9 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v9 + 20) = v9 - 360;
  v10 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v10 + 20) = v10 - 376;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 20) = *(_DWORD *)(*((_QWORD *)this + 3) + 12LL)
                                                                          - 400;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
    (CMILCOMBase **)this + 10,
    a2);
  *((_QWORD *)this + 11) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct IDXGISwapChain1 *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = *(_QWORD *)a4;
  *((_DWORD *)this + 32) = *((_DWORD *)a4 + 2);
  v11 = *(_OWORD *)a5;
  v12 = *((_QWORD *)a5 + 2);
  *((_DWORD *)this + 39) = a6;
  *(_OWORD *)((char *)this + 132) = v11;
  *(_QWORD *)((char *)this + 148) = v12;
  *((_QWORD *)this + 20) = (char *)this + 168;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 29) = (char *)this + 240;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 38) = (char *)this + 312;
  *((_DWORD *)this + 78) = 0;
  return this;
}
