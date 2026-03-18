/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x1409D7D00
 * Callers:
 *     VerifierKeInitializeTimer @ 0x1409D7CE0 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x14051068C (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AFC (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter3, 0x40uLL);
  if ( (MmVerifierData & 0x400000) == 0 )
    KeCheckForTimer(BugCheckParameter3, 64LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeTimerEx)(BugCheckParameter3, a2);
}
