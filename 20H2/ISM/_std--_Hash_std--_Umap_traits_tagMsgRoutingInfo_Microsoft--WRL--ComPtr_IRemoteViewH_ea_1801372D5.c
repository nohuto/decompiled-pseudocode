/*
 * XREFs of _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_Microsoft::WRL::ComPtr_IRemoteViewHitTestClient__std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient______0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____________::_1_::catch$56 @ 0x1801372D5
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180139B00 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsof.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_Microsoft::WRL::ComPtr_IRemoteViewHitTestClient__std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient______0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>::erase(
    *(_QWORD *)(a2 + 80) + 8LL,
    a2 + 80,
    *(_QWORD *)(a2 + 104));
  throw;
}
