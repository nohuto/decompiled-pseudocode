/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x14021BA28
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1405E5B68 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return MiProbeAndLockPages(a1, a2, 3LL);
}
