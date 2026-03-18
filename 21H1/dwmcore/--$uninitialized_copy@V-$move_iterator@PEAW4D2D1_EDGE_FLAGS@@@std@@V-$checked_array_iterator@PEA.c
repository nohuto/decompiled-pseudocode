/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801A04E4
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180011310 (-ensure_extra_capacity@-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A1294 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A14C4 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801A526C (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 * Callees:
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  size_t v5; // rbp
  __int64 v7; // r10
  bool v8; // cc
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 2;
  v8 = v7 <= 0;
  if ( v7 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v7 )
    {
LABEL_6:
      _o__invalid_parameter_noinfo_noreturn(a1, a2);
      __debugbreak();
      goto LABEL_7;
    }
    v8 = v7 <= 0;
  }
  if ( !v8 && a4[1] - a4[2] < (unsigned __int64)v7 )
    goto LABEL_6;
LABEL_7:
  v9 = *a4;
  v10 = (void *)(*a4 + 4 * a4[2]);
  memmove_0(v10, a2, v5);
  result = a1;
  a4[2] = (__int64)((__int64)v10 + v5 - v9) >> 2;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
