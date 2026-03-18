/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18017B3C0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18017EA44 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18017B490 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v4 = a2;
  v5 = a3;
  v7 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x4924924924924925LL) >> 64) >> 6;
  v8 = (v7 >> 63) + v7;
  if ( v8 < 0 && a4[2] < (unsigned __int64)-v8 || v8 > 0 && a4[1] - a4[2] < (unsigned __int64)v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v8);
    __debugbreak();
  }
  v9 = *a4 + 224LL * a4[2];
  while ( v4 != v5 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v9, v4, a3, a4);
    v9 = v10 + 224;
    v4 = v11 + 224;
  }
  result = a1;
  a4[2] = (v9 - *a4) / 224;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
