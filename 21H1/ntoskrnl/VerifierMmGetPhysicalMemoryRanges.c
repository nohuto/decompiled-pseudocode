/*
 * XREFs of VerifierMmGetPhysicalMemoryRanges @ 0x1409D06B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmGetPhysicalMemoryRanges()
{
  return ((__int64 (*)(void))pXdvMmGetPhysicalMemoryRanges)();
}
