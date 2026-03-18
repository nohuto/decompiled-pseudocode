/*
 * XREFs of std::_Insertion_sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DC4C4
 * Callers:
 *     std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DCF34 (std--_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 * Callees:
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

char *__fastcall std::_Insertion_sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
        char *Src,
        char *a2,
        __int64 a3)
{
  char *v6; // r12
  char *v7; // rdi
  size_t v8; // r14
  char *v9; // rdx
  __int64 v10; // r15
  char *i; // rcx

  if ( Src != a2 )
  {
    v6 = Src + 8;
    v7 = Src + 8;
    if ( Src + 8 != a2 )
    {
      v8 = 8LL;
      do
      {
        v9 = v7;
        v10 = *(_QWORD *)v7;
        if ( *(float *)(*(_QWORD *)(a3 + 976) + 4LL * *(_QWORD *)Src) <= *(float *)(*(_QWORD *)(a3 + 976)
                                                                                  + 4LL * *(_QWORD *)v7) )
        {
          for ( i = v7; ; v9 = i )
          {
            i -= 8;
            if ( *(float *)(*(_QWORD *)(a3 + 976) + 4LL * *(_QWORD *)i) <= *(float *)(*(_QWORD *)(a3 + 976) + 4 * v10) )
              break;
            *(_QWORD *)v9 = *(_QWORD *)i;
          }
          *(_QWORD *)v9 = v10;
        }
        else
        {
          memmove_0(v6, Src, v8);
          *(_QWORD *)Src = v10;
        }
        v7 += 8;
        v8 += 8LL;
      }
      while ( v7 != a2 );
    }
  }
  return a2;
}
