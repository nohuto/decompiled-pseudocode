/*
 * XREFs of ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801BFD20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D8FEC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E692C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E6968 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801558C0 (-DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18019655C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x180197710 (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 *     ??$AddLinkInternal@VCBrush@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCBrush@@_N@Z @ 0x1801B7358 (--$AddLinkInternal@VCBrush@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@D@s.c)
 */

void __fastcall CEffectBrush::DebugDump(CEffectBrush *this, void **a2)
{
  _QWORD *v4; // rdx
  __int64 i; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v9[4]; // [rsp+20h] [rbp-39h] BYREF
  void *v10[4]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v11[53]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v12[3]; // [rsp+95h] [rbp+3Ch] BYREF

  CBrush::DebugDump(this, a2);
  std::string::string(v9, (__int64)"CEffectBrush");
  if ( a2 != v9 )
  {
    v4 = v9;
    if ( v9[3] >= 0x10uLL )
      v4 = (_QWORD *)v9[0];
    std::string::assign(a2, v4, v9[2]);
  }
  std::string::_Tidy_deallocate((__int64)v9);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 34); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i);
    v7 = std::_UIntegral_to_buff<char,unsigned int>((__int64)v12, i);
    v10[2] = 0LL;
    v10[3] = (void *)15;
    LOBYTE(v10[0]) = 0;
    if ( (_BYTE *)v7 != v12 )
      std::string::assign(v10, (const void *)v7, (size_t)&v12[-v7]);
    v8 = std::operator+<char>((__int64)v11, (__int64)"Input", v10);
    CVisualTreeDumpContext::AddLinkInternal<CBrush>((__int64 *)a2, v8, v6);
    std::string::_Tidy_deallocate((__int64)v11);
    std::string::_Tidy_deallocate((__int64)v10);
  }
}
