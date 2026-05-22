/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x180139A28
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget___std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget______0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__IInputTarget____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__IInputTarget____________::_1_::catch$69 @ 0x1800512B8 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_IInputTarget___std--_Uhash_compare__ea_1800512B8.c)
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget___std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget______0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__IInputTarget____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__IInputTarget____________::_1_::catch$69 @ 0x1801371D3 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_IInputTarget___std--_Uhash_compare__ea_1801371D3.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x180138E68 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x18009A800 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$allocator@U-$pair@$$CBU.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 appended; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = *(_DWORD *)(a3 + 16);
  v14 = *(_DWORD *)(a3 + 20);
  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)&v14, 4uLL);
  v8 = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v15, v7);
  v10 = a1[3];
  v11 = 2 * (a1[6] & (v8 ^ appended));
  if ( *(__int64 **)(v10 + 8 * v11 + 8) == v9 )
  {
    if ( *(__int64 **)(v10 + 8 * v11) == v9 )
    {
      *(_QWORD *)(v10 + 8 * v11) = a1[1];
      v10 = a1[3];
      v12 = a1[1];
    }
    else
    {
      v12 = v9[1];
    }
    *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
  }
  else if ( *(__int64 **)(v10 + 8 * v11) == v9 )
  {
    *(_QWORD *)(v10 + 8 * v11) = *v9;
  }
  std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::erase((__int64)(a1 + 1), a2, v9);
  return a2;
}
