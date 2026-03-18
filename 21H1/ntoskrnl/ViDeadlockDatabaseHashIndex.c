/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x1409DC1B4
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14059C668 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14059C7C8 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
