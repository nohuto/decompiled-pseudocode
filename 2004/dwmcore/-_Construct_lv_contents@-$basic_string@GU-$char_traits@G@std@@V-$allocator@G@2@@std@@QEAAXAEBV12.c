/*
 * XREFs of ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEBV12@@Z @ 0x1801994E0
 * Callers:
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18019799C (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180198CCC (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 */

void __fastcall std::wstring::_Construct_lv_contents(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v5; // rbp
  SIZE_T v6; // rcx
  void *v7; // rax

  v2 = (_OWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  v5 = 7LL;
  if ( v3 >= 8 )
  {
    v5 = v3 | 7;
    if ( (v3 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = 2 * (v5 + 1);
    if ( (unsigned __int64)(v5 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      v6 = -1LL;
    v7 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
    *a1 = v7;
    memcpy_0(v7, v2, 2 * v3 + 2);
  }
  else
  {
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v3;
  a1[3] = v5;
}
