/*
 * XREFs of RtlpTraceDatabaseFree @ 0x180102E2C
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x180102B70 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
