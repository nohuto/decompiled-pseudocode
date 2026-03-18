/*
 * XREFs of ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x180170268
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800BE144 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x1800BE490 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1800BE504 (--$_Swap_ranges_unchecked@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x18017DC50 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801780E4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo(COverlayContext::OverlayPlaneInfo *this)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 21);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
