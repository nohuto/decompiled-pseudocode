/*
 * XREFs of ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18003D940
 * Callers:
 *     ??0CDecodeBitmap@@QEAA@XZ @ 0x18001F514 (--0CDecodeBitmap@@QEAA@XZ.c)
 *     ?CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003ADB8 (-CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x180090CB4 (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800D4B9C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ??0CD2DBitmapCache@@IEAA@XZ @ 0x18003DDF8 (--0CD2DBitmapCache@@IEAA@XZ.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::CRenderTargetBitmap(CRenderTargetBitmap *this, __int64 a2, int a3)
{
  __int64 v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CRenderTargetBitmap *result; // rax
  char v10; // r11

  if ( a3 )
  {
    *((_QWORD *)this + 2) = &CRenderTargetBitmap::`vbtable';
    *((_QWORD *)this + 11) = &CRenderTargetBitmap::`vbtable'{for `CDeviceResource'};
    *((_QWORD *)this + 16) = &CRenderTargetBitmap::`vbtable'{for `IRenderTargetBitmap'};
    *((_QWORD *)this + 25) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 28) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 31) = &CRenderTargetBitmap::`vbtable'{for `IBitmapRealization'};
  }
  CD2DBitmapCache::CD2DBitmapCache(this);
  *(_QWORD *)(v3 + 80) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 88) + 4LL) + v3 + 88) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 88) + 8LL) + v3 + 88) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(v3 + 88) + 8LL) + v3 + 84) = 0;
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  *(_QWORD *)(v3 + 112) = 0LL;
  *(_QWORD *)(v3 + 120) = &IRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 128) + 4LL) + v3 + 128) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 128) + 8LL) + v3 + 128) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 128) + 12LL) + v3 + 128) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 128) + 16LL) + v3 + 128) = &IRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)v3 = &CRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v3 + 80) = &CRenderTargetBitmap::`vftable';
  *(_QWORD *)(v3 + 120) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 16) + 4LL) + v3 + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 16) + 8LL) + v3 + 16) = &CRenderTargetBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 16) + 12LL) + v3 + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 16) + 16LL) + v3 + 16) = &CRenderTargetBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 16) + 20LL) + v3 + 16) = &CRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  v4 = *(int *)(*(_QWORD *)(v3 + 16) + 4LL);
  *(_DWORD *)(v4 + v3 + 12) = v4 - 144;
  v5 = *(int *)(*(_QWORD *)(v3 + 16) + 8LL);
  *(_DWORD *)(v5 + v3 + 12) = v5 - 160;
  v6 = *(int *)(*(_QWORD *)(v3 + 16) + 12LL);
  *(_DWORD *)(v6 + v3 + 12) = v6 - 176;
  v7 = *(int *)(*(_QWORD *)(v3 + 16) + 16LL);
  *(_DWORD *)(v7 + v3 + 12) = v7 - 200;
  v8 = *(int *)(*(_QWORD *)(v3 + 16) + 20LL);
  *(_DWORD *)(v8 + v3 + 12) = v8 - 224;
  result = (CRenderTargetBitmap *)v3;
  *(_QWORD *)(v3 + 136) = 0LL;
  *(_BYTE *)(v3 + 144) = v10;
  *(_BYTE *)(v3 + 145) = 0;
  return result;
}
