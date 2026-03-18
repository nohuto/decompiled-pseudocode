/*
 * XREFs of ?insert@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_VECTOR_2F@@@2@V?$basic_iterator@$$CBUD2D_VECTOR_2F@@@2@_KAEBUD2D_VECTOR_2F@@@Z @ 0x1801E7634
 * Callers:
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801E7254 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1800BA070 (-reserve_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_.c)
 */

_QWORD *__fastcall detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::insert(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *i; // rax

  v6 = (*a3 - *a1) >> 3;
  v7 = a4;
  for ( i = (_QWORD *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1,
                        v6,
                        a4); v7; --v7 )
    *i++ = *a5;
  *a2 = *a1 + 8 * v6;
  return a2;
}
