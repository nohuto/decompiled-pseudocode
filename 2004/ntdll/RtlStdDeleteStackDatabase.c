/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x180100DE0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1801011E0 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D1D0 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
