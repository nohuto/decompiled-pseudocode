/*
 * XREFs of sub_180058330 @ 0x180058330
 * Callers:
 *     sub_18005821C @ 0x18005821C (sub_18005821C.c)
 * Callees:
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 */

_QWORD *__fastcall sub_180058330(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // r8

  while ( a1 != a2 )
  {
    v5 = *a1;
    *a1 = 0LL;
    *a3++ = v5;
    ++a1;
  }
  sub_1800583E4(a3, a3);
  return a3;
}
