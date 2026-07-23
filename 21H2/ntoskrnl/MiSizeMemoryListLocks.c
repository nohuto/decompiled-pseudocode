/*
 * XREFs of MiSizeMemoryListLocks @ 0x140622B08
 * Callers:
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 *     MiAddPartitionToCrashDump @ 0x140537D90 (MiAddPartitionToCrashDump.c)
 *     MiInitializeMirroring @ 0x140A55728 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140C4DF3C + 27);
}
