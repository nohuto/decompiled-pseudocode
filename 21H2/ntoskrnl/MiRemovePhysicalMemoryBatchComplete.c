/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x140419138
 * Callers:
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiRemoveMdlPages @ 0x14096AF9C (MiRemoveMdlPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405531C0 (IoUpdateDumpPhysicalRanges.c)
 */

__int64 MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140C50744;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
