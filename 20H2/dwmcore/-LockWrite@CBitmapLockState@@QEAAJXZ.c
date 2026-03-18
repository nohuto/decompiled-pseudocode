/*
 * XREFs of ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800DA2F0
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180048A84 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802153C8 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLockState::LockWrite(CBitmapLockState *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this, 0x80000000, 0) )
  {
    v1 = -2003292403;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292403, 0x58u, 0LL);
  }
  return v1;
}
