/*
 * XREFs of ??0CColorKeyBitmap@@IEAA@AEBVCColorKey@@@Z @ 0x180264A78
 * Callers:
 *     ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x180264EF8 (-Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CColorKeyBitmap *__fastcall CColorKeyBitmap::CColorKeyBitmap(CColorKeyBitmap *this, const struct CColorKey *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CColorKeyBitmap *result; // rax

  *((_QWORD *)this + 3) = &CColorKeyBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 24) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_QWORD *)this + 2) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CColorKeyBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 4) = &CColorKeyBitmap::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CColorKeyBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CColorKeyBitmap::`vftable'{for `IPixelFormat'};
  v3 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 144;
  v4 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 160;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 1);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 8);
  result = this;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  return result;
}
