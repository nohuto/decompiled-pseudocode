/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x1409E2234
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405A07F8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405A0958 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
