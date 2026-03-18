/*
 * XREFs of ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIUDXGI_RATIONAL@@@Z @ 0x1802910CC
 * Callers:
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18029257C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 * Callees:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x18001EEB4 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0ILegacySwapChain@@QEAA@XZ @ 0x18001F264 (--0ILegacySwapChain@@QEAA@XZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

CConversionSwapChain *__fastcall CConversionSwapChain::CConversionSwapChain(
        CConversionSwapChain *this,
        struct CD3DDevice *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct _LUID a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct DXGI_RATIONAL a10)
{
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CConversionSwapChain *result; // rax

  *((_QWORD *)this + 3) = &CConversionSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 42) = &CConversionSwapChain::`vbtable';
  *((_QWORD *)this + 98) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 101) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 104) = &CConversionSwapChain::`vbtable'{for `ISwapChain'};
  ILegacySwapChain::ILegacySwapChain((CConversionSwapChain *)((char *)this + 824));
  CLegacySwapChain::CLegacySwapChain(
    (__int64)this,
    (__int64)a2,
    (__int64)a3,
    v13,
    (__int64)a5,
    *(_QWORD *)&a6,
    a7,
    a8,
    a9,
    &a10,
    0LL,
    0LL,
    1u,
    0,
    0);
  *((_QWORD *)this + 41) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 4LL) + 336) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CConversionSwapChain::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CConversionSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CConversionSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 41) = &CConversionSwapChain::`vftable'{for `IConversionSwapChain'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CConversionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CConversionSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CConversionSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 24) = &CConversionSwapChain::`vftable'{for `ILegacySwapChain'};
  v14 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v14 + 20) = v14 - 736;
  v15 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v15 + 20) = v15 - 752;
  v16 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v16 + 20) = v16 - 776;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 20) = *(_DWORD *)(*((_QWORD *)this + 3) + 16LL)
                                                                          - 800;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 91) = 0;
  memset_0((char *)this + 368, 0, 0x110uLL);
  *((_QWORD *)this + 80) = (char *)this + 648;
  *((_DWORD *)this + 162) = 0;
  result = this;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_BYTE *)this + 744) = 0;
  *((_DWORD *)this + 88) = 10;
  *((_DWORD *)this + 89) = 3;
  *((_DWORD *)this + 90) = 1;
  return result;
}
