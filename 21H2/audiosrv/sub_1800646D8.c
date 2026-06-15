/*
 * XREFs of sub_1800646D8 @ 0x1800646D8
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 * Callees:
 *     sub_180055F74 @ 0x180055F74 (sub_180055F74.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800646D8(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( !*(_QWORD *)a1 && !sub_180055F74(a1, *(_DWORD *)(a1 + 16), 1) )
    sub_1800B8610(2147942414LL);
  return sub_18006473C(a1, a2, a3, a4);
}
