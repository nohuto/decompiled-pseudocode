/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V12@@Z @ 0x1800EBEA4
 * Callers:
 *     ?reserve_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K0@Z @ 0x1800EC514 (-reserve_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@.c)
 * Callees:
 *     ??$_Get_unwrapped_n@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@_J$0A@@std@@YAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@_J@Z @ 0x1800EB6B8 (--$_Get_unwrapped_n@V-$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (__int64)((unsigned __int128)((a3 - (__int64)a2) * (__int128)(__int64)0xF1C71C71C71C71C7uLL) >> 64) >> 3;
  v9 = std::_Get_unwrapped_n<stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,__int64,0>(
         a4,
         (v8 >> 63) + v8);
  v10 = (__int64)memmove_0((void *)(v9 - v5), a2, v5) - *a4;
  result = a1;
  a4[2] = v10 / 144;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
