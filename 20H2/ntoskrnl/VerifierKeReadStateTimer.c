/*
 * XREFs of VerifierKeReadStateTimer @ 0x1409DDFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateTimer()
{
  return ((__int64 (*)(void))pXdvKeReadStateTimer)();
}
