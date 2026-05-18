/*
 * XREFs of sub_180106CD8 @ 0x180106CD8
 * Callers:
 *     sub_180106C18 @ 0x180106C18 (sub_180106C18.c)
 *     sub_180106F00 @ 0x180106F00 (sub_180106F00.c)
 *     sub_1801073B4 @ 0x1801073B4 (sub_1801073B4.c)
 * Callees:
 *     memmove @ 0x180123982 (memmove.c)
 */

char *__fastcall sub_180106CD8(char *Src, char *a2)
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
