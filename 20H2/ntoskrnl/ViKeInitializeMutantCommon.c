/*
 * XREFs of ViKeInitializeMutantCommon @ 0x1409DF000
 * Callers:
 *     VerifierKeInitializeMutant @ 0x1409DDBE0 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x1409DDC40 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C9B1C (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutantCommon(void *a1, char a2)
{
  __int64 v4; // rdx

  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(void *, __int64))pXdvKeInitializeMutant)(a1, v4);
}
