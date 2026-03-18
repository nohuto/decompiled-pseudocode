/*
 * XREFs of ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180090520
 * Callers:
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x180090238 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x180090718 (--0CBitmap@@QEAA@XZ.c)
 */

CWICBitmapWrapper *__fastcall CWICBitmapWrapper::CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  CWICBitmapWrapper *result; // rax

  *((_QWORD *)this + 3) = &CWICBitmapWrapper::`vbtable';
  *((_QWORD *)this + 30) = &CWICBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 36) = &CWICBitmapRealization::`vbtable'{for `IPixelFormat'};
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 29) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 30) + 4LL) + 240) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 30) + 8LL) + 240) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 4) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 7) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 29) = &CWICBitmapWrapper::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 31) = &CWICBitmapWrapper::`vftable'{for `IWICDecoderBitmapSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CWICBitmapWrapper::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `ID2DBitmapCacheSource'};
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 20) = 0;
  *((_QWORD *)this + 32) = 0LL;
  return result;
}
