/*
 * XREFs of ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801F1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800CC9BC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E0DEC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E0E28 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180157C74 (--$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180159860 (-DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$AddLinkInternal@VCResource@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCResource@@_N@Z @ 0x1801F1D04 (--$AddLinkInternal@VCResource@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@.c)
 */

void __fastcall CSurfaceBrush::DebugDump(CSurfaceBrush *this, void **a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rbx
  _QWORD v6[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-40h] BYREF

  CBrush::DebugDump(this, a2);
  std::string::string(v7, (__int64)"CSurfaceBrush");
  if ( a2 != v7 )
  {
    v4 = v7;
    if ( v7[3] >= 0x10uLL )
      v4 = (_QWORD *)v7[0];
    std::string::assign(a2, v4, v7[2]);
  }
  std::string::_Tidy_deallocate((__int64)v7);
  v5 = *((_QWORD *)this + 12);
  std::string::string(v6, (__int64)"Resource");
  CVisualTreeDumpContext::AddLinkInternal<CResource>((__int64 *)a2, (__int64)v6, v5);
  std::string::_Tidy_deallocate((__int64)v6);
  std::string::string(v6, (__int64)"SurfaceRectLeft");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v6);
  std::string::_Tidy_deallocate((__int64)v6);
  std::string::string(v6, (__int64)"SurfaceRectRight");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v6);
  std::string::_Tidy_deallocate((__int64)v6);
  std::string::string(v6, (__int64)"SurfaceRectTop");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v6);
  std::string::_Tidy_deallocate((__int64)v6);
  std::string::string(v6, (__int64)"SurfaceRectBottom");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v6);
  std::string::_Tidy_deallocate((__int64)v6);
}
