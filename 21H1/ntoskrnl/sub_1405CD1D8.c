/*
 * XREFs of sub_1405CD1D8 @ 0x1405CD1D8
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405CCE50 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405CD0C0 @ 0x1405CD0C0 (sub_1405CD0C0.c)
 *     sub_14095F358 @ 0x14095F358 (sub_14095F358.c)
 *     sub_14095F548 @ 0x14095F548 (sub_14095F548.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CD204 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406EB818 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_1405CD1D8(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
