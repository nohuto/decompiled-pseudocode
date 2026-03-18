/*
 * XREFs of ??0CBitmap@@QEAA@XZ @ 0x180090718
 * Callers:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18008FE7C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180090520 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBitmap *__fastcall CBitmap::CBitmap(CBitmap *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  CBitmap *result; // rax

  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 30) = 1;
  *((_QWORD *)this + 2) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 4) = &IBitmapDest::`vftable';
  *((_QWORD *)this + 5) = &IBitmapUnlock::`vftable';
  *((_QWORD *)this + 8) = (char *)this + 96;
  *((_QWORD *)this + 9) = (char *)this + 96;
  *((_DWORD *)this + 20) = 2;
  *(_QWORD *)((char *)this + 84) = 2LL;
  *((_QWORD *)this + 7) = &CMILResourceCache::`vftable';
  *((_DWORD *)this + 28) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  *((_DWORD *)this + 42) = 0;
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 4) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 7) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  v2 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 43) = 0;
  *(_QWORD *)((char *)this + *(int *)(v2 + 4) + 24) = &CBitmap::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 216;
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 228) = 0;
  *((_DWORD *)this + 56) = 0;
  return result;
}
