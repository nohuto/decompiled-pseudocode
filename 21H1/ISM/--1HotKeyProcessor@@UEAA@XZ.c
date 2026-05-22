/*
 * XREFs of ??1HotKeyProcessor@@UEAA@XZ @ 0x18019F4A8
 * Callers:
 *     ??_GHotKeyProcessor@@UEAAPEAXI@Z @ 0x18019FAE0 (--_GHotKeyProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x18019DAF8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@1@@Z @ 0x18019DC08 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@@Z @ 0x18019DC88 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_T.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x18019DCFC (--$_Free_non_head@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HotKeyProcessor::~HotKeyProcessor(HotKeyProcessor *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &HotKeyProcessor::`vftable'{for `IRemoteHotKeyProcessor'};
  *((_QWORD *)this + 1) = &HotKeyProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  v2 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  v3 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 16);
  std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
    (__int64)this + 104,
    (__int64)this + 104,
    *(char **)(*((_QWORD *)this + 13) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 13), (const struct std::nothrow_t *)0x30);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (__int64)this + 56,
    (__int64)this + 56,
    *(_QWORD *)(*((_QWORD *)this + 7) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 7), (const struct std::nothrow_t *)0x20);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>,void *>>>(
    (__int64)this + 40,
    (__int64)this + 40,
    *(void ***)(*((_QWORD *)this + 5) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 5), (const struct std::nothrow_t *)0x38);
  std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Free_non_head<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
    v6,
    *((_QWORD ***)this + 3));
  std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)0x18);
  *((_DWORD *)this + 5) = -1073741823;
}
