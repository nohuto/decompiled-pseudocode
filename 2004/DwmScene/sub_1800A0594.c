/*
 * XREFs of sub_1800A0594 @ 0x1800A0594
 * Callers:
 *     sub_1800A05E0 @ 0x1800A05E0 (sub_1800A05E0.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 */

_QWORD *__fastcall sub_1800A0594(__int64 a1, _QWORD *a2, int a3)
{
  a2[2] = 0LL;
  if ( a3 == -1 )
  {
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    a2[3] = 0LL;
    sub_18001CDF8(a2, a1 + 32 * (a3 + 1LL));
  }
  return a2;
}
