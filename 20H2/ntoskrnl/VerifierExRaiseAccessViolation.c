/*
 * XREFs of VerifierExRaiseAccessViolation @ 0x1409D4D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRaiseAccessViolation()
{
  return ((__int64 (*)(void))pXdvExRaiseAccessViolation)();
}
