/*
 * XREFs of ??$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@V?$basic_iterator@$$CBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x1800EBDF0
 * Callers:
 *     ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EC010 (--0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K0@Z @ 0x1800EC514 (-reserve_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@.c)
 */

_QWORD *__fastcall detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::emplace<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 v7; // rbx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _QWORD *result; // rax

  v7 = (*a3 - *a1) / 144LL;
  v8 = (_OWORD *)detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::reserve_region(
                   a1,
                   v7);
  v9 = a4[1];
  *v8 = *a4;
  v10 = a4[2];
  v8[1] = v9;
  v11 = a4[3];
  v8[2] = v10;
  v12 = a4[4];
  v8[3] = v11;
  v13 = a4[5];
  v8[4] = v12;
  v14 = a4[6];
  v8[5] = v13;
  v15 = a4[8];
  v8[6] = v14;
  v8[7] = a4[7];
  v8[8] = v15;
  result = a2;
  *a2 = *a1 + 144 * v7;
  return result;
}
