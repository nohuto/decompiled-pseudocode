/*
 * XREFs of ??$move@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V12@@Z @ 0x180279E40
 * Callers:
 *     ?clear_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800122C0 (-clear_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@UD.c)
 *     ?reserve_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K0@Z @ 0x180012734 (-reserve_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v4; // rsi
  signed __int64 v7; // r10
  bool v8; // cf
  void *v9; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a3 - (_QWORD)a2;
  v7 = 0x8E38E38E38E38E39uLL * ((a3 - (__int64)a2) >> 4);
  if ( v7 >= 0 )
  {
    if ( v7 <= 0 )
      goto LABEL_7;
    v8 = a4[1] - a4[2] < (unsigned __int64)v7;
  }
  else
  {
    v8 = a4[2] < (unsigned __int64)(0x71C71C71C71C71C7LL * ((a3 - (__int64)a2) >> 4));
  }
  if ( v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v9 = (void *)(*a4 + 144LL * a4[2]);
  memmove_0(v9, a2, v4);
  result = a1;
  a4[2] = 0x8E38E38E38E38E39uLL * ((__int64)((__int64)v9 + v4 - *a4) >> 4);
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
