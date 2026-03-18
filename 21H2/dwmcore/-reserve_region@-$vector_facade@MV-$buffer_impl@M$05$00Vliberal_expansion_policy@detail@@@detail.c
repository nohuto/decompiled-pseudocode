/*
 * XREFs of ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18003BF30
 * Callers:
 *     ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18003BBE8 (--$GetAllPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@de.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18003BD54 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18003BFF4 (-ensure_extra_capacity@-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801E2CA4 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 */

__int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  _DWORD *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // r10
  __int64 v13; // r11
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v5 = *a1;
  v6 = (_DWORD *)a1[1];
  *((_QWORD *)&v14 + 1) = 1LL;
  v7 = ((__int64)v6 - v5) >> 2;
  v8 = v7 - a2;
  *(_QWORD *)&v14 = v5 + 4 * v7;
  if ( !(_QWORD)v14 )
    goto LABEL_17;
  v15 = 1LL;
  v9 = v7 - a2;
  if ( v8 > 1 )
    v9 = 1LL;
  v16 = v14;
  v10 = 4 * v9;
  v11 = &v6[v10 / 0xFFFFFFFFFFFFFFFCuLL];
  v17 = 1LL;
  if ( v6 != &v6[v10 / 0xFFFFFFFFFFFFFFFCuLL] )
  {
    v13 = v16;
    v4 = v17;
    do
    {
      --v6;
      if ( !v13 )
        goto LABEL_17;
      if ( !v4 )
        goto LABEL_17;
      if ( (unsigned __int64)--v4 >= *((_QWORD *)&v16 + 1) )
        goto LABEL_17;
      *(_DWORD *)(v13 + 4 * v4) = *v6;
    }
    while ( v6 != v11 );
  }
  if ( v8 > 1 )
  {
    *(_QWORD *)&v16 = v5;
    *((_QWORD *)&v16 + 1) = v7;
    if ( !v7 || v5 && v7 >= 0 )
    {
      v17 = v7;
      v14 = v16;
      v15 = v7;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>)(
        &v16,
        v5 + 4 * a2,
        v5 + 4 * (v7 - 1),
        &v14);
      goto LABEL_6;
    }
LABEL_17:
    _o__invalid_parameter_noinfo_noreturn(v4);
    __debugbreak();
    JUMPOUT(0x18012D4A2LL);
  }
LABEL_6:
  a1[1] += 4LL;
  return v5 + 4 * a2;
}
