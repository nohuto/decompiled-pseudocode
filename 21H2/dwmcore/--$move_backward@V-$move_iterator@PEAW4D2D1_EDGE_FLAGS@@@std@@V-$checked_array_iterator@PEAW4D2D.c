/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801E2CA4
 * Callers:
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18003BF30 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x1800BA274 (-reserve_region@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1800D1FA8 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vli.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  size_t v6; // r9
  __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v6 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 2;
  if ( v7 <= 0 )
  {
    if ( v7 >= 0 )
      goto LABEL_7;
    v8 = a4[1] - a4[2] < (unsigned __int64)-v7;
  }
  else
  {
    v8 = a4[2] < (unsigned __int64)v7;
  }
  if ( v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v9 = *a4;
  a4[2] = ((__int64)memmove_0((void *)(*a4 + 4 * a4[2] - v6), a2, v6) - v9) >> 2;
  result = a1;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
