/*
 * XREFs of ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x180067244
 * Callers:
 *     ??0CDecodeBitmap@@QEAA@XZ @ 0x180014730 (--0CDecodeBitmap@@QEAA@XZ.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x18006565C (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006590C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??0CStereoRenderTargetBitmap@@IEAA@PEAVIRenderTargetBitmap@@@Z @ 0x1802A7410 (--0CStereoRenderTargetBitmap@@IEAA@PEAVIRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ??0IRenderTargetBitmap@@QEAA@XZ @ 0x1800671DC (--0IRenderTargetBitmap@@QEAA@XZ.c)
 *     ??0CD2DBitmapCache@@IEAA@XZ @ 0x180068108 (--0CD2DBitmapCache@@IEAA@XZ.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::CRenderTargetBitmap(CRenderTargetBitmap *this, __int64 a2, int a3)
{
  _QWORD *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CRenderTargetBitmap *result; // rax
  char v11; // r11

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
  v3[10] = &CDeviceResource::`vftable';
  *(_QWORD *)((char *)v3 + *(int *)(v3[11] + 4LL) + 88) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v3 + *(int *)(v3[11] + 8LL) + 88) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)((char *)v3 + *(int *)(v3[11] + 8LL) + 84) = 0;
  v3[12] = 0LL;
  v3[13] = 0LL;
  v3[14] = 0LL;
  IRenderTargetBitmap::IRenderTargetBitmap((IRenderTargetBitmap *)(v3 + 15));
  *(_QWORD *)v4 = &CRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(v4 + 80) = &CRenderTargetBitmap::`vftable';
  *(_QWORD *)(v4 + 120) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v4 + 16) + 4LL) + v4 + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v4 + 16) + 8LL) + v4 + 16) = &CRenderTargetBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v4 + 16) + 12LL) + v4 + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v4 + 16) + 16LL) + v4 + 16) = &CRenderTargetBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v4 + 16) + 20LL) + v4 + 16) = &CRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  v5 = *(int *)(*(_QWORD *)(v4 + 16) + 4LL);
  *(_DWORD *)(v5 + v4 + 12) = v5 - 144;
  v6 = *(int *)(*(_QWORD *)(v4 + 16) + 8LL);
  *(_DWORD *)(v6 + v4 + 12) = v6 - 160;
  v7 = *(int *)(*(_QWORD *)(v4 + 16) + 12LL);
  *(_DWORD *)(v7 + v4 + 12) = v7 - 176;
  v8 = *(int *)(*(_QWORD *)(v4 + 16) + 16LL);
  *(_DWORD *)(v8 + v4 + 12) = v8 - 200;
  v9 = *(int *)(*(_QWORD *)(v4 + 16) + 20LL);
  result = (CRenderTargetBitmap *)v4;
  *(_DWORD *)(v9 + v4 + 12) = v9 - 224;
  *(_QWORD *)(v4 + 136) = 0LL;
  *(_BYTE *)(v4 + 144) = v11;
  *(_BYTE *)(v4 + 145) = 0;
  return result;
}
