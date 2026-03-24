/*
 * XREFs of ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@@Z @ 0x18024E094
 * Callers:
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18024F46C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@W4Enum@FrontBufferRender@@@Z @ 0x18002591C (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0ILegacySwapChain@@QEAA@XZ @ 0x180025BD0 (--0ILegacySwapChain@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

CConversionSwapChain *__fastcall CConversionSwapChain::CConversionSwapChain(
        CConversionSwapChain *this,
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
  CConversionSwapChain *result; // rax

  *((_QWORD *)this + 3) = &CConversionSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 36) = &CConversionSwapChain::`vbtable';
  *((_QWORD *)this + 92) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 95) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 98) = &CConversionSwapChain::`vbtable'{for `ISwapChain'};
  ILegacySwapChain::ILegacySwapChain((CConversionSwapChain *)((char *)this + 776));
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
  *((_QWORD *)this + 35) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 36) + 4LL) + 288) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CConversionSwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CConversionSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CConversionSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 35) = &CConversionSwapChain::`vftable'{for `IConversionSwapChain'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CConversionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CConversionSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CConversionSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 24) = &CConversionSwapChain::`vftable'{for `ILegacySwapChain'};
  v12 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v12 + 20) = v12 - 688;
  v13 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v13 + 20) = v13 - 704;
  v14 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v14 + 20) = v14 - 728;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 20) = *(_DWORD *)(*((_QWORD *)this + 3) + 16LL)
                                                                          - 752;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 79) = 0;
  memset_0((char *)this + 320, 0, 0x110uLL);
  *((_QWORD *)this + 74) = (char *)this + 600;
  *((_DWORD *)this + 150) = 0;
  result = this;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_BYTE *)this + 696) = 0;
  *((_DWORD *)this + 76) = 10;
  *((_DWORD *)this + 77) = 3;
  *((_DWORD *)this + 78) = 1;
  return result;
}
