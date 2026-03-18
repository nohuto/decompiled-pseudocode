/*
 * XREFs of std::_Insertion_sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C08C
 * Callers:
 *     std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C960 (std--_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

char *__fastcall std::_Insertion_sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
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
        if ( *(float *)(*(_QWORD *)(a3 + 1088) + 4LL * *Src) <= *(float *)(*(_QWORD *)(a3 + 1088) + 4 * v9) )
        {
          while ( 1 )
          {
            v10 -= 4;
            v11 = *(unsigned int *)v10;
            if ( *(float *)(*(_QWORD *)(a3 + 1088) + 4 * v11) <= *(float *)(*(_QWORD *)(a3 + 1088) + 4 * v9) )
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
