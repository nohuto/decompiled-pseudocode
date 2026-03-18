/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1801B7C48
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180008224 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180005C4C (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r8
  bool v7; // cf
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a3;
  v5 = a1;
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a3 - a2) >> 5);
  if ( v6 >= 0 )
  {
    if ( v6 <= 0 )
      goto LABEL_7;
    v7 = a4[1] - a4[2] < (unsigned __int64)v6;
  }
  else
  {
    v7 = a4[2] < (unsigned __int64)-v6;
  }
  if ( v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v8 = *a4 + 224LL * a4[2];
  while ( a2 != v4 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v8, a2);
    v8 = v9 + 224;
    a2 = v10 + 224;
  }
  result = v5;
  a4[2] = 0x6DB6DB6DB6DB6DB7LL * ((v8 - *a4) >> 5);
  v12 = a4[2];
  *(_OWORD *)v5 = *(_OWORD *)a4;
  *(_QWORD *)(v5 + 16) = v12;
  return result;
}
