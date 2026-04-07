/*
 * XREFs of ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x18004F508
 * Callers:
 *     ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x18004F4C0 (--_ECCompressedSourceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompressedSourceBitmap::~CCompressedSourceBitmap(CCompressedSourceBitmap *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 34);
  *(_QWORD *)this = &CCompressedSourceBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompressedSourceBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CCompressedSourceBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CCompressedSourceBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CCompressedSourceBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CCompressedSourceBitmap::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 30) = &CCompressedSourceBitmap::`vftable'{for `IBitmapCompressedPixels'};
  *((_QWORD *)this + 31) = &CCompressedSourceBitmap::`vftable'{for `IWICDecoderBitmapSource'};
  if ( v1 )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 32);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CBitmap::~CBitmap(this);
}
