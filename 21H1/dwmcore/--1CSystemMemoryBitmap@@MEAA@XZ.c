/*
 * XREFs of ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x1800270EC
 * Callers:
 *     ??1CClientMemoryBitmap@@MEAA@XZ @ 0x18002700C (--1CClientMemoryBitmap@@MEAA@XZ.c)
 *     ??_ECSystemMemoryBitmap@@MEAAPEAXI@Z @ 0x1802191B0 (--_ECSystemMemoryBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 */

void __fastcall CSystemMemoryBitmap::~CSystemMemoryBitmap(CSystemMemoryBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx

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
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 256;
  v3 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 272;
  v4 = (void *)*((_QWORD *)this + 32);
  if ( v4 )
    operator delete(v4);
  CBitmap::~CBitmap(this);
}
