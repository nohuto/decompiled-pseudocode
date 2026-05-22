/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180139F3C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_Microsoft::WRL::ComPtr_IRemoteViewHitTestClient__std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient______0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____________::_1_::catch$55 @ 0x1801377F1 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_Microsoft--WRL--ComPtr_IRemoteViewH_ea_1801377F1.c)
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x180138BE0 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180139FF0 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsof.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 appended; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // r11
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
  if ( *(_QWORD **)(v10 + 8 * v11 + 8) == v9 )
  {
    if ( *(_QWORD **)(v10 + 8 * v11) == v9 )
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
  else if ( *(_QWORD **)(v10 + 8 * v11) == v9 )
  {
    *(_QWORD *)(v10 + 8 * v11) = *v9;
  }
  std::list<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>::erase(a1 + 1, a2, v9);
  return a2;
}
