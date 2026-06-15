/*
 * XREFs of sub_180016AA0 @ 0x180016AA0
 * Callers:
 *     sub_180012044 @ 0x180012044 (sub_180012044.c)
 * Callees:
 *     sub_1800298F4 @ 0x1800298F4 (sub_1800298F4.c)
 */

__m128 __fastcall sub_180016AA0(__int64 a1)
{
  __int128 v2; // xmm6

  v2 = 0x3F800000u;
  if ( !(unsigned int)sub_1800298F4(*(_DWORD *)(a1 + 180)) && (!dword_18004FE64 || !*(_DWORD *)(a1 + 440)) )
    return (__m128)0LL;
  return (__m128)v2;
}
