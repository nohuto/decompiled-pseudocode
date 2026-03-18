/*
 * XREFs of ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x1800D6C18
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x1800D6B84 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18003268C (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(
        CScratchRenderTargetBitmap *this,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CScratchRenderTargetBitmap *result; // rax

  *((_QWORD *)this + 2) = &CScratchRenderTargetBitmap::`vbtable'{for `CRenderTargetBitmap'};
  LOBYTE(a2) = 1;
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 16) = &CScratchRenderTargetBitmap::`vbtable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 20) = &CScratchRenderTargetBitmap::`vbtable'{for `IScratchBitmap'};
  *((_QWORD *)this + 29) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 32) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 35) = &CRenderTargetBitmap::`vbtable'{for `IBitmapRealization'};
  CRenderTargetBitmap::CRenderTargetBitmap(this, a2, 0);
  *(_QWORD *)this = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 10) = &CScratchRenderTargetBitmap::`vftable';
  *((_QWORD *)this + 15) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 19) = &CScratchRenderTargetBitmap::`vftable'{for `IScratchBitmap'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  v3 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 176;
  v4 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 192;
  v5 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 208;
  v6 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 232;
  v7 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  result = this;
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 256;
  *((_QWORD *)this + 21) = 0LL;
  *((_WORD *)this + 88) = 257;
  return result;
}
