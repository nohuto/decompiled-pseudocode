/*
 * XREFs of MiShouldYieldProcessor @ 0x1405369D8
 * Callers:
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiInitializeMdlBatchPages @ 0x1402E38E4 (MiInitializeMdlBatchPages.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x14032DF30 (NtUnlockVirtualMemory.c)
 *     MiMapUserLargePages @ 0x14055E730 (MiMapUserLargePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 */

LOGICAL MiShouldYieldProcessor()
{
  return KeShouldYieldProcessor();
}
