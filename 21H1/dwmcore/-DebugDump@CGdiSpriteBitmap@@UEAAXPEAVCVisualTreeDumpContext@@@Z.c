/*
 * XREFs of ?DebugDump@CGdiSpriteBitmap@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C5CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800CC9BC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E0DEC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E0E28 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??$AddLinkInternal@VIGDIBitmapRealization@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVIGDIBitmapRealization@@_N@Z @ 0x1801C557C (--$AddLinkInternal@VIGDIBitmapRealization@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$.c)
 */

void __fastcall CGdiSpriteBitmap::DebugDump(CGdiSpriteBitmap *this, void **a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rbx
  _QWORD v6[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-38h] BYREF

  std::string::string(v6, (__int64)"CGdiSpriteBitmap");
  if ( a2 != v6 )
  {
    v4 = v6;
    if ( v6[3] >= 0x10uLL )
      v4 = (_QWORD *)v6[0];
    std::string::assign(a2, v4, v6[2]);
  }
  std::string::_Tidy_deallocate((__int64)v6);
  v5 = *((_QWORD *)this + 60);
  std::string::string(v7, (__int64)"realization");
  CVisualTreeDumpContext::AddLinkInternal<IGDIBitmapRealization>((__int64 *)a2, (__int64)v7, v5);
  std::string::_Tidy_deallocate((__int64)v7);
}
