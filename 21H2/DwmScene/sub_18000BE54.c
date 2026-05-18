/*
 * XREFs of sub_18000BE54 @ 0x18000BE54
 * Callers:
 *     sub_18000DF30 @ 0x18000DF30 (sub_18000DF30.c)
 *     sub_18000E160 @ 0x18000E160 (sub_18000E160.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 */

__int64 __fastcall sub_18000BE54(__int64 a1, __int64 a2, _WORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx

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
    sub_18000F088(a1, v8, a3, 2 * v6 + 2);
    if ( a4 )
      *a4 = a1;
    return v7 + a1;
  }
  else
  {
LABEL_10:
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
