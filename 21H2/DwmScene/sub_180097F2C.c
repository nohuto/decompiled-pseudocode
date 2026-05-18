/*
 * XREFs of sub_180097F2C @ 0x180097F2C
 * Callers:
 *     sub_1800972FC @ 0x1800972FC (sub_1800972FC.c)
 *     sub_180097618 @ 0x180097618 (sub_180097618.c)
 *     sub_180097A9C @ 0x180097A9C (sub_180097A9C.c)
 * Callees:
 *     sub_1800966B8 @ 0x1800966B8 (sub_1800966B8.c)
 */

_QWORD *__fastcall sub_180097F2C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 272);
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
