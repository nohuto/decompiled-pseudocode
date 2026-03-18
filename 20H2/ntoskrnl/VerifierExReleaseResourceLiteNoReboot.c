/*
 * XREFs of VerifierExReleaseResourceLiteNoReboot @ 0x1409E5470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViResourceReleaseSanityChecks @ 0x1409E56A8 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceLiteNoReboot(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseResourceLite)(a1);
}
