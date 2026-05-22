/*
 * XREFs of ?RegisterViewHitTestClient@DWMInputRouter@@UEAAJPEAUIRemoteViewHitTestClient@@@Z @ 0x1801390A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagMsgRoutingInfo@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013744C (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUtagMsgRoutingInfo@@@2@V-$tuple@$$V@2@@-$l.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1801376C4 (--$_Insert_unverified@AEAU-$pair@$$CBUtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHitTestClient@@@W.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x18013A0B4 (-lower_bound@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHitTestClient@@@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::RegisterViewHitTestClient(DWMInputRouter *this, struct IRemoteViewHitTestClient *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rdi
  __int64 v9; // r8
  __int64 ***v10; // r14
  __int64 *v11; // rdx
  _OWORD *v12; // rbx
  struct IRemoteViewHitTestClient *v13; // rax
  __int64 v15; // [rsp+30h] [rbp-19h] BYREF
  _OWORD *v16[2]; // [rsp+38h] [rbp-11h] BYREF
  _DWORD v17[4]; // [rsp+48h] [rbp-1h] BYREF
  _DWORD v18[10]; // [rsp+58h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v15 = 0LL;
  v4 = *((_QWORD *)this + 16);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
  v6 = v5(v4, &v15);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1995LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v15 + 24LL))(v15, v17);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1997LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v18[0] = v17[0];
  v18[1] = v17[1];
  v8 = (_QWORD *)((char *)this + 688);
  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::lower_bound(
    (char *)this + 688,
    v16,
    v18);
  v10 = (__int64 ***)((char *)this + 696);
  v11 = (__int64 *)v8[1];
  v12 = v16[0];
  if ( (__int64 *)v16[0] == v11 )
  {
    v16[0] = v18;
    std::list<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>::_Insert<std::piecewise_construct_t const &,std::tuple<tagMsgRoutingInfo const &>,std::tuple<>>(
      (__int64)(v8 + 1),
      *v11,
      v9,
      v16);
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Insert_unverified<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>>>>(
      v8,
      (__int64)v16,
      (_DWORD *)**v10 + 4,
      **v10);
    v12 = v16[0];
  }
  v13 = (struct IRemoteViewHitTestClient *)*((_QWORD *)v12 + 7);
  if ( v13 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRemoteViewHitTestClient *))(*(_QWORD *)a2 + 8LL))(a2);
      v13 = (struct IRemoteViewHitTestClient *)*((_QWORD *)v12 + 7);
    }
    v16[0] = v13;
    *((_QWORD *)v12 + 7) = a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v16);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
  return 0LL;
}
