/*
 * XREFs of std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEDC4
 * Callers:
 *     std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEDC4 (std--_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801E0C4C (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DE354 (std--_Insertion_sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 *     std::_Make_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DE4EC (std--_Make_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 *     std::_Partition_by_median_guess_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DE6A4 (std--_Partition_by_median_guess_unchecked_unsigned___int64____lambda_448b3feef23c663190309d63225.c)
 *     std::_Sort_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEC8C (std--_Sort_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 *     std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEDC4 (std--_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 */

__int64 __fastcall std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  char *v7; // rdi
  char *v8; // rsi
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  char *v10; // [rsp+28h] [rbp-10h]

  result = (a2 - a1) >> 3;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
      &v9,
      (unsigned __int64)v8,
      v7);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v9 - v8) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((v7 - v10) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(v10, v7, a3, a4);
      v7 = v9;
    }
    else
    {
      std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(v8, v9, a3, a4);
      v8 = v10;
    }
    result = (v7 - v8) >> 3;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_9:
    if ( result >= 2 )
      return (__int64)std::_Insertion_sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
                        v8,
                        v7,
                        a4);
  }
  else
  {
    std::_Make_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
      (__int64)v8,
      (__int64)v7,
      a4);
    return std::_Sort_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
             (__int64 *)v8,
             (__int64)v7,
             a4);
  }
  return result;
}
