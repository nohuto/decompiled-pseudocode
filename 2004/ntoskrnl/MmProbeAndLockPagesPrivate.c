/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x14032F040
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406D8B78 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(_DWORD *a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
