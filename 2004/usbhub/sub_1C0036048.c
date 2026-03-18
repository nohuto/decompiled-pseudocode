/*
 * XREFs of sub_1C0036048 @ 0x1C0036048
 * Callers:
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C0004220 @ 0x1C0004220 (sub_1C0004220.c)
 *     sub_1C0034F64 @ 0x1C0034F64 (sub_1C0034F64.c)
 *     sub_1C00354A8 @ 0x1C00354A8 (sub_1C00354A8.c)
 *     sub_1C0035848 @ 0x1C0035848 (sub_1C0035848.c)
 * Callees:
 *     sub_1C0001648 @ 0x1C0001648 (sub_1C0001648.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 */

void __fastcall sub_1C0036048(__int64 a1, __int64 a2)
{
  if ( (unsigned int)sub_1C0001648(a1, a2) )
    sub_1C0034DE4(a1, a2, 1LL, 30);
}
