/*
 * XREFs of sub_1405CE5A8 @ 0x1405CE5A8
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405CE220 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405CE490 @ 0x1405CE490 (sub_1405CE490.c)
 *     sub_1409606F8 @ 0x1409606F8 (sub_1409606F8.c)
 *     sub_1409608E8 @ 0x1409608E8 (sub_1409608E8.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CE5D4 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406D8B78 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_1405CE5A8(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
