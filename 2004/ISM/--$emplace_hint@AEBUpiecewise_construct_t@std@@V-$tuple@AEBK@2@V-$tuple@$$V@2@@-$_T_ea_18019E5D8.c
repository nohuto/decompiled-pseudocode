/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18019E5D8
 * Callers:
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A03AC (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801A0C00 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801A1AC0 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@1@@Z @ 0x18019E000 (--$_Insert_hint@AEAU-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+38h] [rbp-20h]

  v8 = *a1;
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *((_DWORD *)v11 + 8) = **a5;
  v11[5] = 0LL;
  v11[6] = 0LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v9 = v9;
  v9[1] = v9;
  v11[5] = v9;
  *v11 = v8;
  v11[1] = v8;
  v11[2] = v8;
  *((_WORD *)v11 + 12) = 0;
  std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::_Insert_hint<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>> &,std::_Tree_node<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned int *)v11 + 8,
    (__int64)v11);
  return a2;
}
