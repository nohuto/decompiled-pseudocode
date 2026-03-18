/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x1409DDD20
 * Callers:
 *     VerifierKeInitializeTimer @ 0x1409DDD00 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140513FBC (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C9B1C (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter3, 0x40uLL);
  if ( (MmVerifierData & 0x400000) == 0 )
    KeCheckForTimer(BugCheckParameter3, 64LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeTimerEx)(BugCheckParameter3, a2);
}
