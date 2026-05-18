/*
 * XREFs of sub_1800A5E64 @ 0x1800A5E64
 * Callers:
 *     sub_1800A5EB0 @ 0x1800A5EB0 (sub_1800A5EB0.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 */

_QWORD *__fastcall sub_1800A5E64(__int64 a1, _QWORD *a2, int a3)
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
    sub_180020B7C(a2, a1 + 32 * (a3 + 1LL));
  }
  return a2;
}
