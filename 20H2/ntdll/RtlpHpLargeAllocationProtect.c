/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x18010EA60
 * Callers:
 *     RtlpHpHeapProtect @ 0x18010E5A4 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D510 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009DAB0 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
