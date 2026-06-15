/*
 * XREFs of sub_1800462E4 @ 0x1800462E4
 * Callers:
 *     sub_180046210 @ 0x180046210 (sub_180046210.c)
 *     sub_18006EE20 @ 0x18006EE20 (sub_18006EE20.c)
 *     sub_1800DD8C0 @ 0x1800DD8C0 (sub_1800DD8C0.c)
 *     sub_1800DDC10 @ 0x1800DDC10 (sub_1800DDC10.c)
 *     sub_1800DDD90 @ 0x1800DDD90 (sub_1800DDD90.c)
 *     sub_1800DE1D0 @ 0x1800DE1D0 (sub_1800DE1D0.c)
 *     sub_1800DF3B0 @ 0x1800DF3B0 (sub_1800DF3B0.c)
 *     sub_1800DF480 @ 0x1800DF480 (sub_1800DF480.c)
 *     sub_1800E0070 @ 0x1800E0070 (sub_1800E0070.c)
 *     sub_1800E0120 @ 0x1800E0120 (sub_1800E0120.c)
 *     sub_1800E01F0 @ 0x1800E01F0 (sub_1800E01F0.c)
 *     sub_1800E03A0 @ 0x1800E03A0 (sub_1800E03A0.c)
 *     sub_1800E0470 @ 0x1800E0470 (sub_1800E0470.c)
 *     sub_1800E0550 @ 0x1800E0550 (sub_1800E0550.c)
 *     sub_1800E05F0 @ 0x1800E05F0 (sub_1800E05F0.c)
 *     sub_1800E0690 @ 0x1800E0690 (sub_1800E0690.c)
 *     sub_1800E0770 @ 0x1800E0770 (sub_1800E0770.c)
 *     sub_1800E0860 @ 0x1800E0860 (sub_1800E0860.c)
 *     sub_1800E0920 @ 0x1800E0920 (sub_1800E0920.c)
 *     sub_1800E0AB0 @ 0x1800E0AB0 (sub_1800E0AB0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int128 *__fastcall sub_1800462E4(__int128 *a1, __int64 a2)
{
  __int128 v3; // xmm0

  if ( a2 )
    v3 = *(_OWORD *)(a2 + 280);
  else
    v3 = xmmword_18015B730;
  *a1 = v3;
  a1[1] = v3;
  EtwEventActivityIdControl(4LL, a1 + 1);
  return a1;
}
