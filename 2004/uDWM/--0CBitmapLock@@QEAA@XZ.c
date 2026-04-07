/*
 * XREFs of ??0CBitmapLock@@QEAA@XZ @ 0x180050214
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18004F510 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 * Callees:
 *     ??0CMTALock@@QEAA@XZ @ 0x180050E58 (--0CMTALock@@QEAA@XZ.c)
 */

CBitmapLock *__fastcall CBitmapLock::CBitmapLock(CBitmapLock *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  CMTALock::CMTALock((CBitmapLock *)((char *)this + 16));
  *((_WORD *)this + 44) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 10) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  return this;
}
