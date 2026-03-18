/*
 * XREFs of MiSizeMemoryListLocks @ 0x1406EDD90
 * Callers:
 *     MmCreatePartition @ 0x1403C6584 (MmCreatePartition.c)
 *     MiAddPartitionToCrashDump @ 0x140532030 (MiAddPartitionToCrashDump.c)
 *     MiInitializeMirroring @ 0x140A4CDA0 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140C4DE3C + 27);
}
