/*
 * XREFs of sub_1405D4A4C @ 0x1405D4A4C
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D46C4 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405D4934 @ 0x1405D4934 (sub_1405D4934.c)
 *     sub_1409664C8 @ 0x1409664C8 (sub_1409664C8.c)
 *     sub_1409666B8 @ 0x1409666B8 (sub_1409666B8.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D4A78 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E1A68 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_1405D4A4C(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
