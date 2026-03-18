/*
 * XREFs of MiShouldYieldProcessor @ 0x140534ED8
 * Callers:
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiInitializeMdlBatchPages @ 0x1403347C4 (MiInitializeMdlBatchPages.c)
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 */

LOGICAL MiShouldYieldProcessor()
{
  return KeShouldYieldProcessor();
}
