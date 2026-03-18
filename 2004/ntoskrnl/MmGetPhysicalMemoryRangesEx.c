/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x1407C2AF0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14075D040 (MmGetPhysicalMemoryRangesEx2.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx(ULONG_PTR **a1)
{
  return MmGetPhysicalMemoryRangesEx2(a1, 0);
}
