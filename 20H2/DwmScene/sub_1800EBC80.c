/*
 * XREFs of sub_1800EBC80 @ 0x1800EBC80
 * Callers:
 *     sub_1800EB700 @ 0x1800EB700 (sub_1800EB700.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800EBC80(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r10

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      *a3 = *(_QWORD *)(v4 - 8);
      a3 += 5;
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4 + 8] = 0LL;
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      *(_QWORD *)&v5[v4 + 8] = *(_QWORD *)(v4 + 8);
      *(_QWORD *)&v5[v4 + 16] = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_DWORD *)&v5[v4 + 24] = *(_DWORD *)(v4 + 24);
      v4 += 40LL;
    }
    while ( v4 - 8 != a2 );
  }
  return a3;
}
