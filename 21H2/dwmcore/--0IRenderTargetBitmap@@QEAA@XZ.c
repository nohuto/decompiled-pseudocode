/*
 * XREFs of ??0IRenderTargetBitmap@@QEAA@XZ @ 0x1800671DC
 * Callers:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x180067244 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ??0CStereoRenderTargetBitmap@@IEAA@PEAVIRenderTargetBitmap@@@Z @ 0x1802A7410 (--0CStereoRenderTargetBitmap@@IEAA@PEAVIRenderTargetBitmap@@@Z.c)
 * Callees:
 *     <none>
 */

IRenderTargetBitmap *__fastcall IRenderTargetBitmap::IRenderTargetBitmap(IRenderTargetBitmap *this)
{
  *(_QWORD *)this = &IRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 8) = &IRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  return this;
}
