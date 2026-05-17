/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x18010E550
 * Callers:
 *     RtlpHpHeapProtect @ 0x18010E094 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009D810 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
