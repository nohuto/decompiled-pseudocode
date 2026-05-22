/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x1800353B8
 * Callers:
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180035198 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 *     ?MsgRoutingInfoToInputRoutingInfo@NonBamoInputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x18003558C (-MsgRoutingInfoToInputRoutingInfo@NonBamoInputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUt.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@_K@Z @ 0x180003BC0 (-_End@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035638 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::lower_bound(
        __int64 a1,
        __int64 a2,
        unsigned int *a3)
{
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r10
  _QWORD *v8; // r11
  __int64 v9; // r10
  __int64 v10; // r10
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 48) & (a3[1] | ((unsigned __int64)*a3 << 32));
  do
  {
    v6 = std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_End(
           a1,
           &v12,
           v5);
    if ( v7 == *v6 )
    {
      *v8 = *(_QWORD *)(a1 + 8);
      return v8;
    }
  }
  while ( !(unsigned __int8)operator==(v7 + 16, a3) );
  if ( !(unsigned __int8)operator==(a3, v9 + 16) )
    v10 = *(_QWORD *)(a1 + 8);
  *v8 = v10;
  return v8;
}
