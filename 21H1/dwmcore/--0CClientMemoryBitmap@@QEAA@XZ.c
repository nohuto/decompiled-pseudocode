/*
 * XREFs of ??0CClientMemoryBitmap@@QEAA@XZ @ 0x1800271C4
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180027CA8 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800272BC (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::CClientMemoryBitmap(CClientMemoryBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CClientMemoryBitmap *result; // rax

  *((_QWORD *)this + 3) = &CClientMemoryBitmap::`vbtable';
  *((_QWORD *)this + 30) = &CClientMemoryBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 39) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  CSystemMemoryBitmap::CSystemMemoryBitmap(this);
  *(_QWORD *)this = &CClientMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSystemMemoryBitmap::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 7) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 29) = &CSystemMemoryBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 31) = &CClientMemoryBitmap::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CClientMemoryBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CClientMemoryBitmap::`vftable'{for `IPixelFormat's `ID2DBitmapCacheSource'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 264;
  v3 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 280;
  *((_QWORD *)this + 34) = 0LL;
  return result;
}
