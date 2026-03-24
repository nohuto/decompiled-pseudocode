/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x1407D5770
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076F700 (MmGetPhysicalMemoryRangesEx2.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx(ULONG_PTR **a1)
{
  return MmGetPhysicalMemoryRangesEx2(a1, 0);
}
