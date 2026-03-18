/*
 * XREFs of MiSizeMemoryListLocks @ 0x1406E4268
 * Callers:
 *     MmCreatePartition @ 0x1403C9FD4 (MmCreatePartition.c)
 *     MiAddPartitionToCrashDump @ 0x140536050 (MiAddPartitionToCrashDump.c)
 *     MiInitializeMirroring @ 0x140A53120 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140C4DD7C + 27);
}
