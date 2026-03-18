/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x140256F38
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E0358 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return MiProbeAndLockPages(a1, a2, 3LL);
}
