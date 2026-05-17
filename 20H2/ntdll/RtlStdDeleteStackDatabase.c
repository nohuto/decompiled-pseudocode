/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x1801012F0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1801016F0 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
