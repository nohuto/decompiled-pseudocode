/*
 * XREFs of sub_180005048 @ 0x180005048
 * Callers:
 *     sub_180002A40 @ 0x180002A40 (sub_180002A40.c)
 *     sub_18000419C @ 0x18000419C (sub_18000419C.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 */

char *__fastcall sub_180005048(char *a1, char *a2, _WORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  size_t v8; // rdx

  if ( a1 == a2 )
    goto LABEL_10;
  if ( !a3 )
    goto LABEL_10;
  if ( !*a3 )
    goto LABEL_10;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = 2 * v6 + 2;
  v8 = a2 - a1;
  if ( v8 >= v7 )
  {
    sub_180001FD0(a1, v8, a3, 2 * v6 + 2);
    if ( a4 )
      *a4 = a1;
    return &a1[v7];
  }
  else
  {
LABEL_10:
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
