/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V12@@Z @ 0x1800EB038
 * Callers:
 *     ?clear_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EB2D8 (-clear_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@UD.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800EBCE8 (-ensure_extra_capacity@-$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vlib.c)
 * Callees:
 *     ??$_Get_unwrapped_n@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@_J$0A@@std@@YAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@_J@Z @ 0x1800EAFE8 (--$_Get_unwrapped_n@V-$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v7; // rsi
  unsigned __int64 v8; // rdx
  void *v9; // rdi
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v7 = a3 - (_QWORD)a2;
  v8 = (__int64)((unsigned __int128)((a3 - (__int64)a2) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 3;
  v9 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,__int64,0>(
                 a4,
                 (v8 >> 63) + v8);
  memmove_0(v9, a2, v7);
  result = a1;
  a4[2] = (__int64)((__int64)v9 + v7 - *a4) / 144;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
