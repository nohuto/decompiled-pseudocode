/*
 * XREFs of ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800DEF20
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18003BEE4 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180218078 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
