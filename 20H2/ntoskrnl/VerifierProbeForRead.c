/*
 * XREFs of VerifierProbeForRead @ 0x1409D6AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierProbeForRead()
{
  return ((__int64 (*)(void))pXdvProbeForRead)();
}
