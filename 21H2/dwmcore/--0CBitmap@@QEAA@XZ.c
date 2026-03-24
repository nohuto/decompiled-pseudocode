/*
 * XREFs of ??0CBitmap@@QEAA@XZ @ 0x18003CED4
 * Callers:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18003210C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x18003CCC8 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBitmap *__fastcall CBitmap::CBitmap(CBitmap *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  CBitmap *result; // rax

  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  v2 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 32) = 1;
  *(_QWORD *)((char *)this + *(int *)(v2 + 4) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 4) = &IBitmapDest::`vftable';
  *((_QWORD *)this + 5) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 6) = &IBitmapUnlock::`vftable';
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)((char *)this + 92) = 2LL;
  *((_QWORD *)this + 8) = &CMILResourceCache::`vftable';
  *((_DWORD *)this + 30) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  *((_DWORD *)this + 44) = 0;
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 4) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 6) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 7) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 8) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  v3 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 45) = 0;
  *(_QWORD *)((char *)this + *(int *)(v3 + 4) + 24) = &CBitmap::`vftable'{for `IUnknown'};
  v4 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 224;
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_BYTE *)this + 236) = 0;
  *((_DWORD *)this + 58) = 0;
  return result;
}
