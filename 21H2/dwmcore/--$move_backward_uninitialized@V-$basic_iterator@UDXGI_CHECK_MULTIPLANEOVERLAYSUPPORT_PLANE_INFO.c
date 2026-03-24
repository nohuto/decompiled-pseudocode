/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@detail@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@detail@@YAXV?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@Z @ 0x1800F1D44
 * Callers:
 *     ?reserve_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K0@Z @ 0x1800F2304 (-reserve_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>(
        _OWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v5; // r10
  __int64 v6; // r11
  _OWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax

  result = *a2;
  v5 = a1;
  if ( *a2 != *(_QWORD *)a1 )
  {
    v6 = *a3;
    do
    {
      v7 = (_OWORD *)(result - 144);
      *a2 = result - 144;
      if ( !v6 || (v8 = a3[2]) == 0 || (v9 = v8 - 1, a3[2] = v9, v9 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1, v7);
        __debugbreak();
        JUMPOUT(0x1800F1DF8LL);
      }
      a1 = (_OWORD *)(v6 + 144 * v9);
      *a1 = *v7;
      a1[1] = v7[1];
      a1[2] = v7[2];
      a1[3] = v7[3];
      a1[4] = v7[4];
      a1[5] = v7[5];
      a1[6] = v7[6];
      a1[7] = v7[7];
      a1[8] = v7[8];
      result = *a2;
    }
    while ( *a2 != *v5 );
  }
  return result;
}
