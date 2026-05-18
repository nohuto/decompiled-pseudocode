/*
 * XREFs of sub_180097F5C @ 0x180097F5C
 * Callers:
 *     sub_180097A9C @ 0x180097A9C (sub_180097A9C.c)
 * Callees:
 *     sub_1800966B8 @ 0x1800966B8 (sub_1800966B8.c)
 */

_QWORD *__fastcall sub_180097F5C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    sub_1800966B8(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
