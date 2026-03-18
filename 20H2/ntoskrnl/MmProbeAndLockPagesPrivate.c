/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x140330710
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E1A68 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(__int64 a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
