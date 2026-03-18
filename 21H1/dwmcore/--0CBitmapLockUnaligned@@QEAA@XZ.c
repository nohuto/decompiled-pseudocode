/*
 * XREFs of ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x18021A3B4
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180219BF8 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180029740 (--0CBitmapLock@@QEAA@XZ.c)
 */

CBitmapLockUnaligned *__fastcall CBitmapLockUnaligned::CBitmapLockUnaligned(CBitmapLockUnaligned *this)
{
  __int64 v2; // rcx
  CBitmapLockUnaligned *result; // rax

  *((_QWORD *)this + 3) = &CBitmapLockUnaligned::`vbtable';
  CBitmapLock::CBitmapLock(this, 0);
  *(_QWORD *)this = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLockUnaligned::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 4) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CBitmapLockUnaligned::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 160;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
