/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x1407D12F0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076B7A0 (MmGetPhysicalMemoryRangesEx2.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx(ULONG_PTR **a1)
{
  return MmGetPhysicalMemoryRangesEx2(a1, 0);
}
