/*
 * XREFs of sub_180010AA8 @ 0x180010AA8
 * Callers:
 *     sub_1801250FD @ 0x1801250FD (sub_1801250FD.c)
 *     sub_1801251B4 @ 0x1801251B4 (sub_1801251B4.c)
 *     sub_18012B157 @ 0x18012B157 (sub_18012B157.c)
 *     sub_18012B20E @ 0x18012B20E (sub_18012B20E.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180010AA8(__int64 a1, char *a2, char *a3, char *a4)
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
