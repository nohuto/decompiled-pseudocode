/*
 * XREFs of ??0CWICBitmapWrapper@@QEAA@XZ @ 0x18003CCC8
 * Callers:
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x18003D040 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x18003CED4 (--0CBitmap@@QEAA@XZ.c)
 */

CWICBitmapWrapper *__fastcall CWICBitmapWrapper::CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  CWICBitmapWrapper *result; // rax

  *((_QWORD *)this + 3) = &CWICBitmapWrapper::`vbtable';
  *((_QWORD *)this + 31) = &CWICBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 37) = &CWICBitmapRealization::`vbtable'{for `IPixelFormat'};
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 30) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 31) + 4LL) + 248) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 31) + 8LL) + 248) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 4) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 6) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 7) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 8) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 30) = &CWICBitmapWrapper::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 32) = &CWICBitmapWrapper::`vftable'{for `IWICDecoderBitmapSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CWICBitmapWrapper::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `ID2DBitmapCacheSource'};
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 20) = 0;
  *((_QWORD *)this + 33) = 0LL;
  return result;
}
