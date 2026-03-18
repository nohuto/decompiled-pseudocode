/*
 * XREFs of MiShouldYieldProcessor @ 0x140531508
 * Callers:
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiInitializeMdlBatchPages @ 0x140313C8C (MiInitializeMdlBatchPages.c)
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 */

LOGICAL MiShouldYieldProcessor()
{
  return KeShouldYieldProcessor();
}
