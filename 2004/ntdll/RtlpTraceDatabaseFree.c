/*
 * XREFs of RtlpTraceDatabaseFree @ 0x18010291C
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x180102660 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D1D0 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
