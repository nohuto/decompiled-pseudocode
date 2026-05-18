/*
 * XREFs of sub_180106D74 @ 0x180106D74
 * Callers:
 *     sub_180106C78 @ 0x180106C78 (sub_180106C78.c)
 *     sub_180106FE0 @ 0x180106FE0 (sub_180106FE0.c)
 *     sub_180107484 @ 0x180107484 (sub_180107484.c)
 * Callees:
 *     memmove @ 0x180123982 (memmove.c)
 */

char *__fastcall sub_180106D74(char *Src, char *a2)
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
        if ( *(float *)Src <= COERCE_FLOAT(*(_OWORD *)v5) )
        {
          for ( i = v5 - 16; *(float *)i > *(float *)&v7; i -= 16 )
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
