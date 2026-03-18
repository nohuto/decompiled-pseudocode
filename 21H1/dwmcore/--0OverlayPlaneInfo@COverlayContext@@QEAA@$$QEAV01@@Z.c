/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18017E090
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800BE144 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ??$move@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@0@0V12@@Z @ 0x1800BE4B4 (--$move@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V-$.c)
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1800BE504 (--$_Swap_ranges_unchecked@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std.c)
 *     ??$swap_helper@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800BE5BC (--$swap_helper@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@Q.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x18017DC50 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??$insert@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@1@Z @ 0x18017DDA0 (--$insert@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18017DFC0 (--$uninitialized_copy@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_ar.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x18018183C (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  v3 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_QWORD *)(a2 + 168) = 0LL;
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  *(_BYTE *)(a1 + 177) = *(_BYTE *)(a2 + 177);
  *(_BYTE *)(a1 + 178) = *(_BYTE *)(a2 + 178);
  *(_BYTE *)(a1 + 179) = *(_BYTE *)(a2 + 179);
  *(_BYTE *)(a1 + 180) = *(_BYTE *)(a2 + 180);
  *(_BYTE *)(a1 + 181) = *(_BYTE *)(a2 + 181);
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a2 + 184);
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 192);
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
  *(_BYTE *)(a1 + 216) = *(_BYTE *)(a2 + 216);
  *(_BYTE *)(a1 + 217) = *(_BYTE *)(a2 + 217);
  *(_BYTE *)(a1 + 218) = *(_BYTE *)(a2 + 218);
  *(_BYTE *)(a1 + 219) = *(_BYTE *)(a2 + 219);
  *(_BYTE *)(a1 + 220) = *(_BYTE *)(a2 + 220);
  *(_BYTE *)(a1 + 221) = *(_BYTE *)(a2 + 221);
  return a1;
}
