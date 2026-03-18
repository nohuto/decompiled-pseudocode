/*
 * XREFs of VerifierMmGetPhysicalMemoryRanges @ 0x1409D06C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmGetPhysicalMemoryRanges()
{
  return ((__int64 (*)(void))pXdvMmGetPhysicalMemoryRanges)();
}
