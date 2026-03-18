/*
 * XREFs of ??0CBitmapLock@@QEAA@XZ @ 0x180048D88
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180048180 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180048A84 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18004A500 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x180215B84 (--0CBitmapLockUnaligned@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBitmapLock *__fastcall CBitmapLock::CBitmapLock(CBitmapLock *this, int a2)
{
  __int64 v3; // rcx
  CBitmapLock *result; // rax

  if ( a2 )
    *((_QWORD *)this + 3) = &CCompositionSurfaceBitmap::`vbtable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 1);
  *((_QWORD *)this + 2) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 4) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CBitmapLock::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 136;
  *((_WORD *)this + 40) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
