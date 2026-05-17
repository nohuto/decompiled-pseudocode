/*
 * XREFs of RtlpTraceDatabaseFree @ 0x180102CCC
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x180102A10 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
