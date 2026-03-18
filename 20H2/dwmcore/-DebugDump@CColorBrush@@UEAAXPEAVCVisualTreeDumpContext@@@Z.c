/*
 * XREFs of ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180155260
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D421C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E259C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E25D8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180154134 (--$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801551E0 (-DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 */

void __fastcall CColorBrush::DebugDump(CColorBrush *this, void **a2)
{
  _QWORD *v3; // rdx
  _QWORD v4[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v5[4]; // [rsp+40h] [rbp-40h] BYREF

  CBrush::DebugDump(this, a2);
  std::string::string(v5, (__int64)"CColorBrush");
  if ( a2 != v5 )
  {
    v3 = v5;
    if ( v5[3] >= 0x10uLL )
      v3 = (_QWORD *)v5[0];
    std::string::assign(a2, v3, v5[2]);
  }
  std::string::_Tidy_deallocate((__int64)v5);
  std::string::string(v4, (__int64)"color_r");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"color_g");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"color_b");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"color_a");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
}
