/*
 * XREFs of ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801A14E0
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801A031C (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801A00A8 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@detail@@YAXV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@0@0V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@Z @ 0x1801A01A8 (--$move_backward_uninitialized@V-$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V-$checked_array_it.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801A12AC (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 */

char *__fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  char *v11; // r13
  __int64 v12; // rcx
  bool v13; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+50h] BYREF

  v20 = a3;
  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v7 = (char *)*a1;
  v8 = (__int64)a1[1];
  *((_QWORD *)&v15 + 1) = 1LL;
  v9 = (v8 - (__int64)v7) >> 2;
  v10 = v9 - a2;
  v11 = &v7[4 * v9];
  *(_QWORD *)&v15 = v11;
  if ( !v11 )
    goto LABEL_12;
  v20 = v8;
  v16 = 1LL;
  v12 = v9 - a2;
  v17 = v15;
  if ( v10 > 1 )
    v12 = 1LL;
  v18 = 1LL;
  v19 = v8 - 4 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<enum D2D1_EDGE_FLAGS>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
    (unsigned __int64)&v19,
    &v20,
    (__int64 *)&v17);
  if ( v10 > 1 )
  {
    *(_QWORD *)&v15 = v7;
    *((_QWORD *)&v15 + 1) = v9;
    v13 = v9 < 0;
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_12;
      v13 = v9 < 0;
    }
    if ( !v13 || !v9 )
    {
      v16 = v9;
      v17 = v15;
      v18 = v9;
      std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        (__int64)&v15,
        &v7[4 * a2],
        (__int64)(v11 - 4),
        (__int64 *)&v17);
      goto LABEL_11;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v6, v5);
    __debugbreak();
    JUMPOUT(0x1801A15FALL);
  }
LABEL_11:
  a1[1] = (char *)a1[1] + 4;
  return &v7[4 * a2];
}
