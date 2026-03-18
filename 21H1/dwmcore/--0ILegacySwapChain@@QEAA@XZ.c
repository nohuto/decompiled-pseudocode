/*
 * XREFs of ??0ILegacySwapChain@@QEAA@XZ @ 0x1800D57B8
 * Callers:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@W4Enum@FrontBufferRender@@@Z @ 0x1800D5538 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@@Z @ 0x18024E4D0 (--0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEB.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@@Z @ 0x18024EE04 (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ??0IOverlaySwapChain@@QEAA@XZ @ 0x1800D581C (--0IOverlaySwapChain@@QEAA@XZ.c)
 */

ILegacySwapChain *__fastcall ILegacySwapChain::ILegacySwapChain(ILegacySwapChain *this)
{
  ILegacySwapChain *v1; // r9
  __int64 v2; // rax

  IOverlaySwapChain::IOverlaySwapChain(this);
  v2 = *((_QWORD *)v1 + 1);
  *(_QWORD *)v1 = &ILegacySwapChain::`vftable';
  *(_QWORD *)((char *)v1 + *(int *)(v2 + 4) + 8) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 1) + 12LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  return v1;
}
