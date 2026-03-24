/*
 * XREFs of ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x18003D828
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18003DBC0 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::CSecondarySysmemBitmap(
        CSecondarySysmemBitmap *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3)
{
  struct D2D_SIZE_U v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CSecondarySysmemBitmap *result; // rax

  *((_QWORD *)this + 3) = &CSecondarySysmemBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 25) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  v4 = *a2;
  *((_DWORD *)this + 12) = *a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 13) = v4.height;
  *((_QWORD *)this + 7) = (char *)this + 64;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 2) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondarySysmemBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 4) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CSecondarySysmemBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CSecondarySysmemBitmap::`vftable'{for `IPixelFormat'};
  v5 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v5 + 20) = v5 - 152;
  v6 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v6 + 20) = v6 - 168;
  *((struct D2D_SIZE_U *)this + 16) = *a2;
  *((_DWORD *)this + 34) = 0;
  *(_QWORD *)((char *)this + 140) = *(_QWORD *)a3;
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 2);
  result = this;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_BYTE *)this + 164) = 0;
  return result;
}
