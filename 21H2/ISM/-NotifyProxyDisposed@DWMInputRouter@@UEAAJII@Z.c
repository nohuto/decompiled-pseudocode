/*
 * XREFs of ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x180138BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x1801392C8 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180139F3C (-erase@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHitTestClient@@@WRL@Mic.c)
 */

__int64 __fastcall DWMInputRouter::NotifyProxyDisposed(DWMInputRouter *this, int a2, int a3)
{
  __int64 v3; // rax
  __int64 *i; // rbx
  __int64 *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 7);
  while ( 1 )
  {
    v3 = *(_QWORD *)v3;
    if ( v3 == *((_QWORD *)this + 7) )
      break;
    if ( *(_DWORD *)(v3 + 16) == a2 && *(_DWORD *)(v3 + 20) == a3 )
      v3 = DWMInputRouter::RemoveTarget((char *)this - 32, &v9, v3);
  }
  i = (__int64 *)*((_QWORD *)this + 85);
LABEL_7:
  for ( i = (__int64 *)*i; i != *((__int64 **)this + 85); i = v9 )
  {
    if ( *((_DWORD *)i + 4) != a2 || *((_DWORD *)i + 5) != a3 )
      goto LABEL_7;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(i + 7);
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::erase(
      (char *)this + 672,
      &v9,
      i);
  }
  return 0LL;
}
