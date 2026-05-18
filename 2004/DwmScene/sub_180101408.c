/*
 * XREFs of sub_180101408 @ 0x180101408
 * Callers:
 *     sub_180101348 @ 0x180101348 (sub_180101348.c)
 *     sub_180101630 @ 0x180101630 (sub_180101630.c)
 *     sub_180101AE4 @ 0x180101AE4 (sub_180101AE4.c)
 * Callees:
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

char *__fastcall sub_180101408(char *Src, char *a2)
{
  char *v4; // r14
  char *v5; // rbx
  __int64 v6; // rbp
  __int128 v7; // xmm6
  char *v8; // rcx
  char *i; // rax

  if ( Src != a2 )
  {
    v4 = Src + 16;
    v5 = Src + 16;
    if ( Src + 16 != a2 )
    {
      v6 = 16LL - (_QWORD)Src;
      do
      {
        v7 = *(_OWORD *)v5;
        v8 = v5;
        if ( COERCE_FLOAT(*(_OWORD *)v5) <= *(float *)Src )
        {
          for ( i = v5 - 16; *(float *)&v7 > *(float *)i; i -= 16 )
          {
            *(_OWORD *)v8 = *(_OWORD *)i;
            v8 = i;
          }
          *(_OWORD *)v8 = v7;
        }
        else
        {
          memmove(v4, Src, (size_t)&v5[v6 - 16]);
          *(_OWORD *)Src = v7;
        }
        v5 += 16;
      }
      while ( v5 != a2 );
    }
  }
  return a2;
}
