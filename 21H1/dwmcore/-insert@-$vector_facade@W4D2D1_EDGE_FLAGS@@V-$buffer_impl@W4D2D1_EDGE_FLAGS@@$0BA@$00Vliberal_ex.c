/*
 * XREFs of ?insert@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@2@V?$basic_iterator@$$CBW4D2D1_EDGE_FLAGS@@@2@_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1801A7180
 * Callers:
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801A6ED8 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801A739C (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vli.c)
 */

_QWORD *__fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        int *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  int *v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int v15; // eax
  int *v16; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v18; // rbx

  v6 = (__int64)(*a3 - *a1) >> 2;
  v9 = detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v6,
         a4);
  v10 = 0LL;
  v11 = (int *)v9;
  if ( a4 )
  {
    if ( a4 >= 4 )
    {
      v12 = v9 + 4 * (a4 - 1);
      if ( v11 > a5 || v12 < (unsigned __int64)a5 )
      {
        v13 = a4 & 0xFFFFFFFFFFFFFFFCuLL;
        do
          v10 += 4LL;
        while ( v10 < v13 );
        v14 = 4 * v13;
        v15 = *a5;
        v16 = v11;
        for ( i = v14 >> 2; i; --i )
          *v16++ = v15;
        v11 = (int *)((char *)v11 + v14);
      }
    }
    if ( v10 < a4 )
    {
      v18 = a4 - v10;
      do
      {
        *v11++ = *a5;
        --v18;
      }
      while ( v18 );
    }
  }
  *a2 = *a1 + 4 * v6;
  return a2;
}
