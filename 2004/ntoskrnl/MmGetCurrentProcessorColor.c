/*
 * XREFs of MmGetCurrentProcessorColor @ 0x140329BA0
 * Callers:
 *     MiAddSecureEntry @ 0x1405FCED0 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
