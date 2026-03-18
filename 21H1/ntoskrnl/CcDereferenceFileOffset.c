/*
 * XREFs of CcDereferenceFileOffset @ 0x1404E5978
 * Callers:
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 * Callees:
 *     CcReleaseBcbLockAndVacbLock @ 0x14022B9F8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14022BA78 (CcAcquireBcbLockAndVacbLock.c)
 *     SetVacb @ 0x14022E8F0 (SetVacb.c)
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
