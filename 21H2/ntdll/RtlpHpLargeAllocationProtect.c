/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x18010E900
 * Callers:
 *     RtlpHpHeapProtect @ 0x18010E444 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009DAA0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009E040 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
