/*
 * XREFs of ??0HotKeyProcessor@@QEAA@XZ @ 0x18019EFCC
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@@Z @ 0x18017FF90 (--$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180012DD0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008A590 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUHotKeyInfo@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUHotKeyInfo@@PEAX@1@@Z @ 0x180129688 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x18019DAA8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@1@@Z @ 0x18019DB04 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@UHotKeyInfo@@V-$allocator@UHotKey.c)
 */

// Hidden C++ exception states: #wind=11
HotKeyProcessor *__fastcall HotKeyProcessor::HotKeyProcessor(HotKeyProcessor *this)
{
  size_t size_of; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  void *v11[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v14[2]; // [rsp+50h] [rbp-10h] BYREF

  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::`vftable'{for `IRemoteHotKeyProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &HotKeyProcessor::`vftable'{for `IRemoteHotKeyProcessor'};
  *((_QWORD *)this + 1) = &HotKeyProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 3) = v3;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 5) = v4;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 7) = v5;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 13) = v6;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v13 = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *(_QWORD *)&v13 = v7;
  v12 = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *(_QWORD *)&v12 = v8;
  *((_BYTE *)this + 76) = 1;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 20) = 0;
  v11[1] = 0LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  v11[0] = v9;
  *(_OWORD *)v14 = 0LL;
  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
    (_QWORD *)this + 11,
    (__int64 *)v14);
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
  *((_WORD *)this + 60) = 0;
  std::_Tree_val<std::_Tree_simple_types<HotKeyInfo *>>::_Erase_tree<std::allocator<std::_Tree_node<HotKeyInfo *,void *>>>(
    (__int64)v11,
    (__int64)v11,
    *((_QWORD *)v11[0] + 1));
  std::_Deallocate<16,0>(v11[0], (const struct std::nothrow_t *)0x28);
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (__int64)&v12,
    (__int64)&v12,
    *(_QWORD *)(v12 + 8));
  std::_Deallocate<16,0>((void *)v12, (const struct std::nothrow_t *)0x20);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<HotKeyInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<HotKeyInfo>>,void *>>>(
    (__int64)&v13,
    (__int64)&v13,
    *(void ***)(v13 + 8));
  std::_Deallocate<16,0>((void *)v13, (const struct std::nothrow_t *)0x38);
  return this;
}
