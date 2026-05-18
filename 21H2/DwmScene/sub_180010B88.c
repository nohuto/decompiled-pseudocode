/*
 * XREFs of sub_180010B88 @ 0x180010B88
 * Callers:
 *     sub_18012AA15 @ 0x18012AA15 (sub_18012AA15.c)
 *     sub_18012AACC @ 0x18012AACC (sub_18012AACC.c)
 *     sub_180130A6F @ 0x180130A6F (sub_180130A6F.c)
 *     sub_180130B26 @ 0x180130B26 (sub_180130B26.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180010B88(__int64 a1, char *a2, char *a3, char *a4)
{
  signed __int64 v4; // rdx

  if ( a2 != a3 )
  {
    v4 = a2 - a4;
    do
    {
      *(_QWORD *)a4 = 0LL;
      *((_QWORD *)a4 + 1) = 0LL;
      *(_QWORD *)a4 = *(_QWORD *)&a4[v4];
      *((_QWORD *)a4 + 1) = *(_QWORD *)&a4[v4 + 8];
      *(_QWORD *)&a4[v4] = 0LL;
      *(_QWORD *)&a4[v4 + 8] = 0LL;
      a4 += 16;
    }
    while ( &a4[v4] != a3 );
  }
  return a4;
}
