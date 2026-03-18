/*
 * XREFs of ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x180032870
 * Callers:
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x180032900 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180032D34 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     ??$swap_helper@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800328C0 (--$swap_helper@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@Q.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  v3 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 + 3 || (_QWORD *)*a2 == a2 + 3 )
  {
    if ( !(unsigned __int8)detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap_helper<16>(a1, a2) )
      return detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap_helper<16>(a2, a1);
  }
  else
  {
    *a1 = *a2;
    v6 = a2[1];
    *a2 = v3;
    v7 = a1[1];
    a1[1] = v6;
    v8 = a2[2];
    a2[1] = v7;
    v9 = a1[2];
    a1[2] = v8;
    a2[2] = v9;
  }
  return 1;
}
