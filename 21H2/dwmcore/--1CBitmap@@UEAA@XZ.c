/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x18003CDF4
 * Callers:
 *     ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x180031F24 (--1CSystemMemoryBitmap@@MEAA@XZ.c)
 *     ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x18003D7D0 (--_GCWICBitmapWrapper@@UEAAPEAXI@Z.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x180217C30 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmap::~CBitmap(CBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx

  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 4) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 6) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 7) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 8) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CBitmap::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 224;
  operator delete(*((void **)this + 27));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  *((_QWORD *)this + 8) = &CMILResourceCache::`vftable';
LABEL_2:
  LODWORD(v3) = *((_DWORD *)this + 24);
  while ( (_DWORD)v3 )
  {
    v4 = *((_QWORD *)this + 9);
    v3 = (unsigned int)(v3 - 1);
    *((_DWORD *)this + 24) = v3;
    v5 = *(_QWORD *)(v4 + 8 * v3);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      goto LABEL_2;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 72);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
