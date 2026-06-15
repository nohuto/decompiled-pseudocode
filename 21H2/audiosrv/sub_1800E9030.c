/*
 * XREFs of sub_1800E9030 @ 0x1800E9030
 * Callers:
 *     sub_1800089E4 @ 0x1800089E4 (sub_1800089E4.c)
 *     sub_180075F04 @ 0x180075F04 (sub_180075F04.c)
 *     sub_1800E7406 @ 0x1800E7406 (sub_1800E7406.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_1800E9030(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx

  sub_1800461B8(a2 + 8);
  v3 = a2[7];
  if ( v3 >= 8 )
    sub_1800472E0(a2[4], 2 * v3 + 2);
  a2[7] = 7LL;
  a2[6] = 0LL;
  *((_WORD *)a2 + 16) = 0;
  return sub_1800472E0((__int64)a2, 0x48uLL);
}
