/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x180102C80
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1801028D0 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180102D04 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
