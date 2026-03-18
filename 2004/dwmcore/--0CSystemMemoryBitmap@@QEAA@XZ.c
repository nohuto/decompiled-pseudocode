/*
 * XREFs of ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18008FE7C
 * Callers:
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x18008FD84 (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18019D5F4 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18024753C (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x180090718 (--0CBitmap@@QEAA@XZ.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::CSystemMemoryBitmap(CSystemMemoryBitmap *this, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CSystemMemoryBitmap *result; // rax

  if ( a2 )
  {
    *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vbtable';
    *((_QWORD *)this + 30) = &CSystemMemoryBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
    *((_QWORD *)this + 38) = &CInk::`vbtable'{for `IContent'};
  }
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 29) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 30) + 4LL) + 240) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 30) + 8LL) + 240) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSystemMemoryBitmap::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 7) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 29) = &CSystemMemoryBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 31) = &CClientMemoryBitmap::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CSystemMemoryBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CSystemMemoryBitmap::`vftable'{for `IPixelFormat's `ID2DBitmapCacheSource'};
  v3 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 256;
  v4 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 272;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 32) = 0LL;
  return result;
}
