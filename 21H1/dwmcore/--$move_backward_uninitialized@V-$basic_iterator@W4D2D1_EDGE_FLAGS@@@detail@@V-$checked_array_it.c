/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@detail@@YAXV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@0@0V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@Z @ 0x1801A4168
 * Callers:
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801A54A0 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibe.c)
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801A739C (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<enum D2D1_EDGE_FLAGS>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r9
  __int64 v5; // r10
  _DWORD *v6; // rax

  result = *a2;
  v4 = (_QWORD *)a1;
  if ( *a2 != *(_QWORD *)a1 )
  {
    v5 = *a3;
    do
    {
      v6 = (_DWORD *)(result - 4);
      *a2 = (__int64)v6;
      if ( !v5 || (a1 = a3[2]) == 0 || (--a1, a3[2] = a1, a1 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1, a2);
        __debugbreak();
        JUMPOUT(0x1801A41BDLL);
      }
      *(_DWORD *)(v5 + 4 * a1) = *v6;
      result = *a2;
    }
    while ( *a2 != *v4 );
  }
  return result;
}
