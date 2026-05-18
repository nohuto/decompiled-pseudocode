/*
 * XREFs of sub_18010662C @ 0x18010662C
 * Callers:
 *     sub_180105DA4 @ 0x180105DA4 (sub_180105DA4.c)
 *     sub_180105E8C @ 0x180105E8C (sub_180105E8C.c)
 * Callees:
 *     sub_18010731C @ 0x18010731C (sub_18010731C.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

char *__fastcall sub_18010662C(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, char *Src, __int64 a7)
{
  char *v7; // rbx
  char *v10; // rsi
  char *v11; // rax
  __int128 v12; // xmm0
  signed __int64 v13; // rbx
  char *v14; // rsi
  char *i; // rax
  __int128 v16; // xmm0
  size_t v17; // rsi

  v7 = a3;
  if ( !a4 )
    return v7;
  if ( !a5 )
    return a1;
  if ( a4 <= a5 && a4 <= a7 )
  {
    v10 = Src;
    if ( a1 != a2 )
    {
      v11 = a1;
      do
      {
        v12 = *(_OWORD *)v11;
        v11 += 16;
        *(_OWORD *)v10 = v12;
        v10 += 16;
      }
      while ( v11 != a2 );
    }
    v13 = a3 - a2;
    memmove(a1, a2, a3 - a2);
    v7 = &a1[v13];
    memmove(v7, Src, v10 - Src);
    return v7;
  }
  if ( a5 > a7 )
    return (char *)sub_18010731C();
  v14 = Src;
  for ( i = a2; i != a3; v14 += 16 )
  {
    v16 = *(_OWORD *)i;
    i += 16;
    *(_OWORD *)v14 = v16;
  }
  memmove(&a3[-(a2 - a1)], a1, a2 - a1);
  v17 = v14 - Src;
  memmove(a1, Src, v17);
  return &a1[v17];
}
