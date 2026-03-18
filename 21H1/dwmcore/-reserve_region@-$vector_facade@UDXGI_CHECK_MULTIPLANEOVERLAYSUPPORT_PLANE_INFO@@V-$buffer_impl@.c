/*
 * XREFs of ?reserve_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K0@Z @ 0x1800EB134
 * Callers:
 *     ??$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@V?$basic_iterator@$$CBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x1800EAA10 (--$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector_facade@UDXGI_CHECK_MULTIPL.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V12@@Z @ 0x1800EAAC4 (--$move_backward@V-$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V-$c.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@detail@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@detail@@YAXV?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@Z @ 0x1800EAB74 (--$move_backward_uninitialized@V-$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800EAFD8 (-ensure_extra_capacity@-$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vlib.c)
 */

char *__fastcall detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  char *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  char *v11; // r13
  __int64 v12; // rax
  bool v13; // sf
  __int64 v14; // xmm1_8
  __int64 v15; // rbx
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int128 v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+50h] BYREF

  v22 = a3;
  detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v6 = (char *)*a1;
  v7 = (__int64)a1[1];
  *((_QWORD *)&v17 + 1) = 1LL;
  v8 = (unsigned __int128)((v7 - (__int64)v6) * (__int128)0xE38E38E38E38E39LL) >> 64;
  v9 = (v7 - (__int64)v6) / 144;
  v10 = v9 - a2;
  v11 = &v6[144 * v9];
  *(_QWORD *)&v17 = v11;
  if ( !v11 )
    goto LABEL_13;
  v22 = v7;
  v18 = 1LL;
  v12 = (v7 - (__int64)v6) / 144 - a2;
  v19 = v17;
  if ( v10 > 1 )
    v12 = 1LL;
  v20 = 1LL;
  *(_QWORD *)&v21 = v7 - 144 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>(
    &v21,
    &v22,
    (__int64 *)&v19);
  if ( v10 <= 1 )
  {
    v15 = 144 * a2;
    goto LABEL_12;
  }
  *(_QWORD *)&v17 = v6;
  *((_QWORD *)&v17 + 1) = v9;
  v13 = v9 < 0;
  if ( v9 )
  {
    if ( !v6 )
      goto LABEL_13;
    v13 = v9 < 0;
  }
  if ( v13 && v9 )
  {
LABEL_13:
    _o__invalid_parameter_noinfo_noreturn(v5, v8);
    __debugbreak();
    JUMPOUT(0x1800EB288LL);
  }
  v18 = v9;
  v14 = v9;
  v15 = 144 * a2;
  v19 = v17;
  v20 = v14;
  std::move_backward<std::move_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>(
    (__int64)&v17,
    &v6[144 * a2],
    (__int64)(v11 - 144),
    &v19);
LABEL_12:
  a1[1] = (char *)a1[1] + 144;
  return &v6[v15];
}
