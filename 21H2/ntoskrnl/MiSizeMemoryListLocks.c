/*
 * XREFs of MiSizeMemoryListLocks @ 0x1406C3F48
 * Callers:
 *     MmCreatePartition @ 0x1403CA974 (MmCreatePartition.c)
 *     MiAddPartitionToCrashDump @ 0x140537B50 (MiAddPartitionToCrashDump.c)
 *     MiInitializeMirroring @ 0x140A54728 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140C4DEFC + 27);
}
