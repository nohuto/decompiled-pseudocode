/*
 * XREFs of std::_Make_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DE4EC
 * Callers:
 *     std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEDC4 (std--_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEA64 (std--_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6.c)
 */

__int64 __fastcall std::_Make_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = (a2 - a1) >> 3;
  for ( i = (a2 - a1) >> 4;
        i > 0;
        result = std::_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6322577307___(
                   a1,
                   i,
                   v5,
                   (unsigned int)&v8,
                   a3) )
  {
    --i;
    v8 = *(_QWORD *)(a1 + 8 * i);
  }
  return result;
}
