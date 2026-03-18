/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x140322010
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406EB818 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(_DWORD *a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
