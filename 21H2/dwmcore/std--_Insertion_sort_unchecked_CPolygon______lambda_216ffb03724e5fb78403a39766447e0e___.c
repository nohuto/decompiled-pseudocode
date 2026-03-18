/*
 * XREFs of std::_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180246718
 * Callers:
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180246B18 (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

char *__fastcall std::_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        char *Src,
        char *a2)
{
  char *v4; // rbx
  size_t v5; // rbp
  char *v6; // rdx
  __int64 v7; // r14
  char *v8; // rcx

  if ( Src != a2 )
  {
    v4 = Src + 8;
    if ( Src + 8 != a2 )
    {
      v5 = 8LL;
      do
      {
        v6 = v4;
        v7 = *(_QWORD *)v4;
        v8 = v4;
        if ( *(_DWORD *)(*(_QWORD *)v4 + 264LL) >= *(_DWORD *)(*(_QWORD *)Src + 264LL) )
        {
          while ( 1 )
          {
            v8 -= 8;
            if ( *(_DWORD *)(v7 + 264) >= *(_DWORD *)(*(_QWORD *)v8 + 264LL) )
              break;
            *(_QWORD *)v6 = *(_QWORD *)v8;
            v6 = v8;
          }
          *(_QWORD *)v6 = v7;
        }
        else
        {
          memmove_0(&v4[-v5 + 8], Src, v5);
          *(_QWORD *)Src = v7;
        }
        v4 += 8;
        v5 += 8LL;
      }
      while ( v4 != a2 );
    }
  }
  return a2;
}
