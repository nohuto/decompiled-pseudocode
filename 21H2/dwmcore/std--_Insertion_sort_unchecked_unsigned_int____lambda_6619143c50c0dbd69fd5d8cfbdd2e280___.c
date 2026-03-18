/*
 * XREFs of std::_Insertion_sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___ @ 0x18022C14C
 * Callers:
 *     std::_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___ @ 0x18022CAC4 (std--_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

char *__fastcall std::_Insertion_sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___(
        unsigned int *Src,
        char *a2,
        __int64 a3)
{
  char *v6; // rdi
  size_t v7; // rbp
  char *v8; // rdx
  __int64 v9; // r15
  char *v10; // rcx
  __int64 v11; // r8

  if ( Src != (unsigned int *)a2 )
  {
    v6 = (char *)(Src + 1);
    if ( Src + 1 != (unsigned int *)a2 )
    {
      v7 = 4LL;
      do
      {
        v8 = v6;
        v9 = *(unsigned int *)v6;
        v10 = v6;
        if ( *(float *)(*(_QWORD *)(a3 + 1088) + 4 * v9) <= *(float *)(*(_QWORD *)(a3 + 1088) + 4LL * *Src) )
        {
          while ( 1 )
          {
            v10 -= 4;
            v11 = *(unsigned int *)v10;
            if ( *(float *)(*(_QWORD *)(a3 + 1088) + 4 * v9) <= *(float *)(*(_QWORD *)(a3 + 1088) + 4 * v11) )
              break;
            *(_DWORD *)v8 = v11;
            v8 = v10;
          }
          *(_DWORD *)v8 = v9;
        }
        else
        {
          memmove_0(&v6[-v7 + 4], Src, v7);
          *Src = v9;
        }
        v6 += 4;
        v7 += 4LL;
      }
      while ( v6 != a2 );
    }
  }
  return a2;
}
