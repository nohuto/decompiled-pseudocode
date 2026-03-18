/*
 * XREFs of VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x1409E4DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViResourceAcquireSanityChecks @ 0x1409E55E0 (ViResourceAcquireSanityChecks.c)
 */

__int64 __fastcall VerifierExAcquireSharedWaitForExclusiveNoReboot(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvExAcquireSharedWaitForExclusive)(a1, v4);
}
