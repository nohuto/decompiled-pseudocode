/*
 * XREFs of MiShouldYieldProcessor @ 0x140530EB8
 * Callers:
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiInitializeMdlBatchPages @ 0x140342FCC (MiInitializeMdlBatchPages.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 */

LOGICAL MiShouldYieldProcessor()
{
  return KeShouldYieldProcessor();
}
