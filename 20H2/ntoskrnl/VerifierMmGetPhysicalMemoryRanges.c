/*
 * XREFs of VerifierMmGetPhysicalMemoryRanges @ 0x1409D66E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmGetPhysicalMemoryRanges()
{
  return ((__int64 (*)(void))pXdvMmGetPhysicalMemoryRanges)();
}
