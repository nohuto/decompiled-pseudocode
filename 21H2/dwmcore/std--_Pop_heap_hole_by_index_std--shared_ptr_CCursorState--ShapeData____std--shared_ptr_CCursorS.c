/*
 * XREFs of std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x18026856C
 * Callers:
 *     std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268180 (std--_Make_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268690 (std--_Sort_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9.c)
 * Callees:
 *     std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802679EC (std--_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___--operator()_std--shared_ptr_CCursorStat.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180268CC4 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v5; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 i; // rdi
  __int64 v13; // rdi

  v5 = a3 - 1;
  v8 = (a3 - 1) >> 1;
  v9 = a2;
  for ( i = a2; i < v8; v9 = i )
  {
    i = 2 * i + 2;
    if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                            (__int64)&a5,
                            a1 + 16 * i,
                            (_QWORD *)(a1 + 16 * i - 16)) )
      --i;
    std::shared_ptr<CCursorState::ShapeData>::operator=(a1 + 16 * v9, a1 + 16 * i);
  }
  if ( i == v8 && (a3 & 1) == 0 )
  {
    std::shared_ptr<CCursorState::ShapeData>::operator=(a1 + 16 * v9, 16 * a3 + a1 - 16);
    v9 = v5;
  }
  if ( a2 < v9 )
  {
    do
    {
      v13 = (v9 - 1) >> 1;
      if ( !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                               (__int64)&a5,
                               a1 + 16 * v13,
                               a4) )
        break;
      std::shared_ptr<CCursorState::ShapeData>::operator=(a1 + 16 * v9, a1 + 16 * ((v9 - 1) >> 1));
      v9 = (v9 - 1) >> 1;
    }
    while ( a2 < v13 );
  }
  return std::shared_ptr<CCursorState::ShapeData>::operator=(a1 + 16 * v9, a4);
}
