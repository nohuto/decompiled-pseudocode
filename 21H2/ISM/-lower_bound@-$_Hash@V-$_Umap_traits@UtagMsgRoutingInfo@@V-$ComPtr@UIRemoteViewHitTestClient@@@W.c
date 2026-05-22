/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x18013A054
 * Callers:
 *     ?RegisterViewHitTestClient@DWMInputRouter@@UEAAJPEAUIRemoteViewHitTestClient@@@Z @ 0x180139040 (-RegisterViewHitTestClient@DWMInputRouter@@UEAAJPEAUIRemoteViewHitTestClient@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035628 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::lower_bound(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  __int64 appended; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // r10
  _QWORD *v11; // r11
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  int v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = *a3;
  LODWORD(v15) = a3[1];
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v15, 4uLL);
  v8 = *(_QWORD *)(a1 + 48) & (std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v16, v7) ^ appended);
  do
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           a1,
           &v15,
           v8);
    if ( v10 == *v9 )
    {
      *v11 = *(_QWORD *)(a1 + 8);
      return v11;
    }
  }
  while ( !operator==(v10 + 16, (__int64)a3) );
  if ( !operator==((__int64)a3, v12 + 16) )
    v13 = *(_QWORD *)(a1 + 8);
  *v11 = v13;
  return v11;
}
