/*
 * XREFs of ViKeInitializeMutantCommon @ 0x1409D8F80
 * Callers:
 *     VerifierKeInitializeMutant @ 0x1409D7B60 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x1409D7BC0 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AEC (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutantCommon(void *a1, char a2)
{
  __int64 v4; // rdx

  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(void *, __int64))pXdvKeInitializeMutant)(a1, v4);
}
