/*
 * XREFs of std::_Insertion_sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DE420
 * Callers:
 *     std::_Sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DEECC (std--_Sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___.c)
 * Callees:
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

char *__fastcall std::_Insertion_sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___(
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
        if ( *(float *)(*(_QWORD *)(a3 + 976) + 4LL * *(_QWORD *)v7) <= *(float *)(*(_QWORD *)(a3 + 976)
                                                                                 + 4LL * *(_QWORD *)Src) )
        {
          for ( i = v7; ; v9 = i )
          {
            i -= 8;
            if ( *(float *)(*(_QWORD *)(a3 + 976) + 4 * v10) <= *(float *)(*(_QWORD *)(a3 + 976) + 4LL * *(_QWORD *)i) )
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
