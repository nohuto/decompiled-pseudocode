/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C000AEB4
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C000AD30 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01907C4 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 27);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 27) = 0LL;
    *((_DWORD *)this + 52) = 0;
  }
}
