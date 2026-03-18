/*
 * XREFs of ??0CDecodeBitmap@@QEAA@XZ @ 0x18001F514
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x180037BA4 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18003D940 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::CDecodeBitmap(CDecodeBitmap *this)
{
  CDecodeBitmap *result; // rax

  *((_QWORD *)this + 2) = &CDecodeBitmap::`vbtable';
  *((_QWORD *)this + 11) = &CDecodeBitmap::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CDecodeBitmap::`vbtable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 26) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 29) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 32) = &CRenderTargetBitmap::`vbtable'{for `IBitmapRealization'};
  CRenderTargetBitmap::CRenderTargetBitmap(this, 0);
  *(_QWORD *)this = &CDecodeBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 10) = &CDecodeBitmap::`vftable';
  *((_QWORD *)this + 15) = &CDecodeBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDecodeBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDecodeBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 12) = 0;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 12) = 0;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 12) = 0;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 12) = 0;
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 12) = 0;
  *((_BYTE *)this + 152) = 0;
  return result;
}
