/*
 * XREFs of sub_1800B3A5C @ 0x1800B3A5C
 * Callers:
 *     sub_180130CEE @ 0x180130CEE (sub_180130CEE.c)
 *     sub_180130DA6 @ 0x180130DA6 (sub_180130DA6.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1800B3A5C(__int64 a1, _QWORD *a2, _QWORD *a3, char *a4)
{
  _QWORD *v4; // rax
  char *v5; // r10

  if ( a2 != a3 )
  {
    v4 = a2 + 3;
    v5 = (char *)(a4 - (char *)a2);
    do
    {
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_OWORD *)a4 = *(_OWORD *)(v4 - 3);
      *((_OWORD *)a4 + 1) = *(_OWORD *)(v4 - 1);
      *(v4 - 1) = 0LL;
      a4 += 32;
      *v4 = 7LL;
      *((_WORD *)v4 - 12) = 0;
      v4 += 4;
    }
    while ( v4 - 3 != a3 );
  }
  return a4;
}
