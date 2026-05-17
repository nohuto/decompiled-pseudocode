/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x180101190
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x180101590 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
