/*
 * XREFs of ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x1800BA274
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1800B9CE4 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ?insert@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@I@2@V?$basic_iterator@$$CBI@2@_KAEBI@Z @ 0x1801E74E4 (-insert@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18003BFF4 (-ensure_extra_capacity@-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801E2CA4 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 */

char *__fastcall detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // rcx
  _BYTE *v7; // rdi
  char *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rcx
  unsigned int *v12; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r10
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity((void **)a1, a3);
  v7 = *(_BYTE **)a1;
  v8 = *(char **)(a1 + 8);
  *((_QWORD *)&v17 + 1) = a3;
  v9 = (v8 - v7) >> 2;
  v10 = v9 - a2;
  *(_QWORD *)&v17 = &v7[4 * v9];
  if ( a3 && (!&v7[4 * v9] || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v6);
    __debugbreak();
LABEL_20:
    v20 = v9;
    v17 = v19;
    v18 = v9;
    ((void (__fastcall *)(__int128 *, _BYTE *, _BYTE *, __int128 *))std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>)(
      &v19,
      &v7[4 * a2],
      &v7[4 * (v9 - a3)],
      &v17);
    goto LABEL_8;
  }
  v18 = a3;
  v11 = a3;
  if ( a3 >= v10 )
    v11 = v9 - a2;
  v19 = v17;
  v6 = 4 * v11;
  v12 = (unsigned int *)&v8[-v6];
  v20 = a3;
  if ( v8 != &v8[-v6] )
  {
    v14 = v19;
    v15 = a3;
    v16 = v20;
    do
    {
      v8 -= 4;
      if ( !v14 )
        goto LABEL_19;
      if ( !v15 )
        goto LABEL_19;
      v15 = v16 - 1;
      v16 = v15;
      if ( v15 >= *((_QWORD *)&v19 + 1) )
        goto LABEL_19;
      v6 = *(unsigned int *)v8;
      *(_DWORD *)(v14 + 4 * v15) = v6;
    }
    while ( v8 != (char *)v12 );
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
  *(_QWORD *)(a1 + 8) += 4 * a3;
  return &v7[4 * a2];
}
