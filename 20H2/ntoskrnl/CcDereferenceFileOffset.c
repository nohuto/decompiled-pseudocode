/*
 * XREFs of CcDereferenceFileOffset @ 0x1404E94B8
 * Callers:
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 * Callees:
 *     CcReleaseBcbLockAndVacbLock @ 0x140298304 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140298384 (CcAcquireBcbLockAndVacbLock.c)
 *     SetVacb @ 0x14029AF60 (SetVacb.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, __int64 a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
  }
}
