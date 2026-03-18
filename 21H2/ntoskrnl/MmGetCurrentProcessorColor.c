/*
 * XREFs of MmGetCurrentProcessorColor @ 0x140221E50
 * Callers:
 *     MiProcessCrcList @ 0x1406F2C30 (MiProcessCrcList.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
