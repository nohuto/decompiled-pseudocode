/*
 * XREFs of MmGetCurrentProcessorColor @ 0x1403001F0
 * Callers:
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiAddSecureEntry @ 0x140623880 (MiAddSecureEntry.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
