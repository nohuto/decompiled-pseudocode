/*
 * XREFs of ??0CBitmapLock@@QEAA@XZ @ 0x18006EA24
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180020D10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18006D370 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18006EC34 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x180271CFC (--0CBitmapLockUnaligned@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBitmapLock *__fastcall CBitmapLock::CBitmapLock(CBitmapLock *this, int a2)
{
  int *v3; // rax
  __int64 v4; // rcx
  CBitmapLock *result; // rax

  if ( a2 )
  {
    v3 = (int *)&CBitmapLock::`vbtable';
    *((_QWORD *)this + 1) = &CBitmapLock::`vbtable';
  }
  else
  {
    v3 = (int *)*((_QWORD *)this + 1);
  }
  *(_QWORD *)this = &IBitmapDest2::`vftable';
  *(_QWORD *)((char *)this + v3[1] + 8) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *((_DWORD *)this + 4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 3) = &CBitmapLock::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CBitmapLock::`vftable'{for `IUnknown'};
  v4 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 144;
  *((_WORD *)this + 36) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
