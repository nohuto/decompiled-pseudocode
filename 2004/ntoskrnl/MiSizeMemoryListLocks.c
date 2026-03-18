/*
 * XREFs of MiSizeMemoryListLocks @ 0x140711720
 * Callers:
 *     MmCreatePartition @ 0x1403C7394 (MmCreatePartition.c)
 *     MiAddPartitionToCrashDump @ 0x140532680 (MiAddPartitionToCrashDump.c)
 *     MiInitializeMirroring @ 0x140A52AA0 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140C4DCFC + 27);
}
