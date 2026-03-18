/*
 * XREFs of ViKeInitializeMutexCommon @ 0x1409D8FBC
 * Callers:
 *     VerifierKeInitializeMutex @ 0x1409D7BE0 (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x1409D7C10 (VerifierKeInitializeMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AEC (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutexCommon(void *a1, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  return ((__int64 (__fastcall *)(void *, _QWORD))pXdvKeInitializeMutex)(a1, a2);
}
