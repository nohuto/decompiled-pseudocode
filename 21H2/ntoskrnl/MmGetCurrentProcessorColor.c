/*
 * XREFs of MmGetCurrentProcessorColor @ 0x140214350
 * Callers:
 *     MiAddSecureEntry @ 0x140689430 (MiAddSecureEntry.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
