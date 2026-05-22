/*
 * XREFs of _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget___std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget______0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__IInputTarget____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__IInputTarget____________::_1_::catch$70 @ 0x1800512E6
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x18009A800 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$allocator@U-$pair@$$CBU.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget___std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget______0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__IInputTarget____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__IInputTarget____________::_1_::catch_70(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::erase(
    *(_QWORD *)(a2 + 80) + 8LL,
    a2 + 80,
    *(_QWORD *)(a2 + 104));
  throw;
}
