/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x18019DB78
 * Callers:
 *     ?AddLine@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x18019CD20 (-AddLine@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?AddLines@CDrawListPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18019CD60 (-AddLines@CDrawListPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18019CDC0 (-BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801A2BE0 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180154F00 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180163EB0 (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 */

char *__fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2,
        signed __int64 a3)
{
  unsigned __int64 v6; // rcx
  _BYTE *v7; // rdi
  char *v8; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  _QWORD *v11; // rdx
  bool v12; // sf
  signed __int64 v13; // rcx
  char *v14; // rax
  bool v15; // sf
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  signed __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity((const void **)a1, a3);
  v7 = *(_BYTE **)a1;
  v8 = *(char **)(a1 + 8);
  *((_QWORD *)&v17 + 1) = a3;
  v9 = (v8 - v7) >> 3;
  v10 = v9 - a2;
  v11 = &v7[8 * v9];
  *(_QWORD *)&v17 = v11;
  v12 = a3 < 0;
  if ( a3 )
  {
    if ( !v11 )
      goto LABEL_20;
    v12 = a3 < 0;
  }
  if ( v12 && a3 )
    goto LABEL_20;
  v18 = a3;
  v13 = a3;
  if ( a3 >= v10 )
    v13 = v9 - a2;
  v19 = v17;
  v6 = 8 * v13;
  v14 = &v8[-v6];
  v20 = a3;
  if ( v8 != &v8[-v6] )
  {
    v6 = v20;
    v11 += a3;
    do
    {
      v8 -= 8;
      if ( !(_QWORD)v19 )
        goto LABEL_20;
      if ( !v6 )
        goto LABEL_20;
      --v6;
      --v11;
      if ( v6 >= *((_QWORD *)&v19 + 1) )
        goto LABEL_20;
      *v11 = *(_QWORD *)v8;
    }
    while ( v8 != v14 );
  }
  if ( v10 > a3 )
  {
    *(_QWORD *)&v19 = v7;
    *((_QWORD *)&v19 + 1) = v9;
    v15 = v9 < 0;
    if ( !v9 )
    {
LABEL_18:
      if ( !v15 || !v9 )
        goto LABEL_21;
      goto LABEL_20;
    }
    if ( v7 )
    {
      v15 = v9 < 0;
      goto LABEL_18;
    }
LABEL_20:
    _o__invalid_parameter_noinfo_noreturn(v6, v11);
    __debugbreak();
LABEL_21:
    v20 = v9;
    v17 = v19;
    v18 = v9;
    std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
      (__int64)&v19,
      &v7[8 * a2],
      (__int64)&v7[8 * (v9 - a3)],
      (__int64 *)&v17);
  }
  *(_QWORD *)(a1 + 8) += 8 * a3;
  return &v7[8 * a2];
}
