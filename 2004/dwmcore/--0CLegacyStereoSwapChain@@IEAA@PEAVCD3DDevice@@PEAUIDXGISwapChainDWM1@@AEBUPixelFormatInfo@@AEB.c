/*
 * XREFs of ??0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@@Z @ 0x18024BA40
 * Callers:
 *     ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18024BD88 (-Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@.c)
 * Callees:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@W4Enum@FrontBufferRender@@@Z @ 0x180025768 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0ILegacySwapChain@@QEAA@XZ @ 0x180025A1C (--0ILegacySwapChain@@QEAA@XZ.c)
 */

CLegacyStereoSwapChain *__fastcall CLegacyStereoSwapChain::CLegacyStereoSwapChain(
        CLegacyStereoSwapChain *this,
        struct CD3DDevice *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        unsigned int a7,
        struct DXGI_RATIONAL a8)
{
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  CLegacyStereoSwapChain *result; // rax

  *((_QWORD *)this + 3) = &CLegacyStereoSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 36) = &CLegacyStereoSwapChain::`vbtable';
  *((_QWORD *)this + 42) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 45) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 48) = &CConversionSwapChain::`vbtable'{for `ISwapChain'};
  ILegacySwapChain::ILegacySwapChain((CLegacyStereoSwapChain *)((char *)this + 376));
  CLegacySwapChain::CLegacySwapChain(
    (__int64)this,
    (__int64)a2,
    (__int64)a3,
    v11,
    (__int64)a5,
    a6,
    a7,
    *(_QWORD *)&a8,
    0,
    0);
  *((_QWORD *)this + 35) = &IYUVSwapChainRealization::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 36) + 4LL) + 288) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 36) + 8LL) + 288) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 36) + 12LL) + 288) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 36) + 16LL) + 288) = &ILegacyStereoSwapChain::`vftable'{for `ILegacySwapChain'};
  *(_QWORD *)this = &CLegacyStereoSwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CLegacyStereoSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CLegacyStereoSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 35) = &CLegacyStereoSwapChain::`vftable'{for `ILegacyStereoSwapChain'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CLegacyStereoSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CLegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CLegacyStereoSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 24) = &CLegacyStereoSwapChain::`vftable'{for `ILegacySwapChain'};
  v12 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v12 + 20) = v12 - 288;
  v13 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v13 + 20) = v13 - 304;
  v14 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v14 + 20) = v14 - 328;
  v15 = *(int *)(*((_QWORD *)this + 3) + 16LL);
  result = this;
  *(_DWORD *)((char *)this + v15 + 20) = v15 - 352;
  *((_QWORD *)this + 37) = 0LL;
  return result;
}
