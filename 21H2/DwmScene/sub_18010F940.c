/*
 * XREFs of sub_18010F940 @ 0x18010F940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 */

_QWORD *__fastcall sub_18010F940(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v4; // rdx

  a2[2] = 0LL;
  switch ( a3 )
  {
    case 0:
      a2[3] = 0LL;
      v4 = &qword_1802126F8;
      goto LABEL_12;
    case 1:
      a2[3] = 0LL;
      v4 = &qword_180212738;
      goto LABEL_12;
    case 2:
      a2[3] = 0LL;
      v4 = &qword_180212718;
      goto LABEL_12;
    case 3:
      a2[3] = 0LL;
      v4 = &qword_1802126D8;
      goto LABEL_12;
    case 5:
      a2[3] = 0LL;
      v4 = &qword_180212758;
LABEL_12:
      sub_180020B7C(a2, (__int64)v4);
      return a2;
  }
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
