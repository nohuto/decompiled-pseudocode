/*
 * XREFs of ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002F9C0
 * Callers:
 *     ?erase_unchecked@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@0@Z @ 0x18002F934 (-erase_unchecked@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002FC44 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x180091D20 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 * Callees:
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x18002FA50 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??$move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180169DC8 (--$move@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_iterator@P.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 result; // rax
  bool v13; // sf
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v5 = a2;
  v6 = a1[1] - *a1;
  v8 = a2 + a3;
  v10 = v6 / 224;
  if ( v8 > v6 / 224 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_5:
    *(_QWORD *)&v14 = v4;
    *((_QWORD *)&v14 + 1) = v10;
    v13 = v5 < 0;
    if ( v5 )
    {
      if ( !v4 )
      {
LABEL_12:
        _o__invalid_parameter_noinfo_noreturn(v8, v10);
        __debugbreak();
LABEL_13:
        v15 = v5;
        v16 = v14;
        v17 = v5;
        std::move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
          &v14,
          v4 + 224 * v8,
          v3,
          &v16);
        goto LABEL_3;
      }
      v13 = v5 < 0;
    }
    if ( (!v13 || !v5) && (v5 <= 0 || v10 >= v5) )
      goto LABEL_13;
    goto LABEL_12;
  }
  v3 = v4 + 224 * v10;
  if ( v8 != v10 )
    goto LABEL_5;
LABEL_3:
  v11 = 224 * a3;
  result = detail::destruct_range<COverlayContext::OverlayPlaneInfo>((COverlayContext::OverlayPlaneInfo *)(v3 - v11));
  a1[1] -= v11;
  return result;
}
