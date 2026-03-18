/*
 * XREFs of std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268760
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268760 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 *     ?SortShapeCache@CCursorState@@AEAAXIW4DXGI_MODE_ROTATION@@_N@Z @ 0x18026AF94 (-SortShapeCache@CCursorState@@AEAAXIW4DXGI_MODE_ROTATION@@_N@Z.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268098 (std--_Insertion_sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4.c)
 *     std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268180 (std--_Make_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9.c)
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802682F4 (std--_Partition_by_median_guess_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_f.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268690 (std--_Sort_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9.c)
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268760 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 */

_QWORD *__fastcall std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v5; // rax
  char *v7; // rdi
  char *i; // rsi
  char *v10; // [rsp+20h] [rbp-18h] BYREF
  char *v11; // [rsp+28h] [rbp-10h]

  v5 = a2 - a1;
  v7 = a2;
  for ( i = a1; ; v5 = v7 - i )
  {
    if ( (__int64)(v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 512 )
      return std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
               i,
               v7,
               a4);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
      &v10,
      (unsigned __int64)i,
      v7,
      a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v10 - i) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((v7 - v11) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        v11,
        v7,
        a3,
        a4);
      v7 = v10;
    }
    else
    {
      std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        i,
        v10,
        a3,
        a4);
      i = v11;
    }
  }
  std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
    (__int64)i,
    (__int64)v7,
    a4);
  return (_QWORD *)std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
                     (__int64)i,
                     (__int64)v7,
                     a4);
}
