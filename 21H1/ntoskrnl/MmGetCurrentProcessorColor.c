/*
 * XREFs of MmGetCurrentProcessorColor @ 0x1402EFAD0
 * Callers:
 *     MiAddSecureEntry @ 0x140631F10 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
