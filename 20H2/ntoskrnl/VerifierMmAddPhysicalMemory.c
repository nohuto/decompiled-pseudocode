/*
 * XREFs of VerifierMmAddPhysicalMemory @ 0x1409D6680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmAddPhysicalMemory()
{
  return ((__int64 (*)(void))pXdvMmAddPhysicalMemory)();
}
