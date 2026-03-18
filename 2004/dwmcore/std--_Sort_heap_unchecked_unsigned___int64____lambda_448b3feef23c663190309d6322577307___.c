/*
 * XREFs of std::_Sort_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEC8C
 * Callers:
 *     std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEDC4 (std--_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEA64 (std--_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6.c)
 */

__int64 __fastcall std::_Sort_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  result = (a2 - (__int64)a1) >> 3;
  if ( result >= 2 )
  {
    v6 = (__int64 *)(a2 - 8);
    v7 = 8LL - (_QWORD)a1;
    do
    {
      v8 = *v6;
      *v6 = *a1;
      std::_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6322577307___(
        (__int64)a1,
        0LL,
        v6 - a1,
        (int)&v8,
        a3);
      result = ((__int64)--v6 + v7) >> 3;
    }
    while ( result >= 2 );
  }
  return result;
}
