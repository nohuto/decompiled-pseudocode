/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x14029E4C8
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140686A08 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(__int64 a1)
{
  MiProbeAndLockPages(a1, 1, 3u);
}
