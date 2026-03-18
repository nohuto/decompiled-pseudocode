/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1800BA070
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1800B9CE4 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ?insert@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_VECTOR_2F@@@2@V?$basic_iterator@$$CBUD2D_VECTOR_2F@@@2@_KAEBUD2D_VECTOR_2F@@@Z @ 0x1801E7634 (-insert@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansio.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800BA144 (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

__int64 __fastcall detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v15; // r11
  _QWORD *v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v7 = *a1;
  v8 = (_QWORD *)a1[1];
  *((_QWORD *)&v17 + 1) = a3;
  v9 = ((__int64)v8 - v7) >> 3;
  v10 = v9 - a2;
  v11 = v7 + 8 * v9;
  *(_QWORD *)&v17 = v11;
  if ( a3 && (!v11 || a3 < 0) )
  {
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v6);
    __debugbreak();
LABEL_20:
    v20 = v9;
    v17 = v19;
    v18 = v9;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v19,
      v7 + 8 * a2,
      v7 + 8 * (v9 - a3),
      &v17);
    goto LABEL_8;
  }
  v18 = a3;
  v12 = a3;
  if ( a3 >= v10 )
    v12 = v9 - a2;
  v19 = v17;
  v6 = 8 * v12;
  v13 = (_QWORD *)((char *)v8 - v6);
  v20 = a3;
  if ( v8 != (_QWORD *)((char *)v8 - v6) )
  {
    v15 = v20;
    v16 = (_QWORD *)(v11 + 8 * a3);
    v6 = a3;
    do
    {
      --v8;
      if ( !(_QWORD)v19 )
        goto LABEL_19;
      if ( !v6 )
        goto LABEL_19;
      v6 = v15 - 1;
      --v16;
      v15 = v6;
      if ( v6 >= *((_QWORD *)&v19 + 1) )
        goto LABEL_19;
      *v16 = *v8;
    }
    while ( v8 != v13 );
  }
  if ( v10 > a3 )
  {
    *(_QWORD *)&v19 = v7;
    *((_QWORD *)&v19 + 1) = v9;
    if ( !v9 || v7 && v9 >= 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_8:
  a1[1] += 8 * a3;
  return v7 + 8 * a2;
}
