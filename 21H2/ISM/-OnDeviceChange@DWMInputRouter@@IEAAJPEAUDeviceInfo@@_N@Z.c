/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x180036DD8
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180036D40 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180138C90 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180138D20 (-OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@_K@Z @ 0x180003BB0 (-_End@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KPEAUDeviceInfo@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180029328 (--$_Try_emplace@AEBK$$V@-$unordered_map@KPEAUDeviceInfo@@U-$hash@K@std@@U-$equal_to@K@3@V-$alloc.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x1801392C8 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180139E00 (-erase@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceChange(DWMInputRouter *this, struct DeviceInfo *a2, char a3)
{
  char v6; // r15
  __int64 appended; // rax
  __int64 v8; // r11
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD **); // rsi
  __int64 (__fastcall *v16)(_QWORD, GUID *, _QWORD **); // rdi
  int v17; // eax
  __int64 (__fastcall **v18)(_QWORD, _QWORD); // rax
  int v19; // eax
  int v20[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v22; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  if ( a3 )
  {
    appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)a2, 4uLL);
    v9 = appended & *(_QWORD *)(v8 + 48);
    do
    {
      v10 = std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_End(
              v8,
              &v22,
              v9);
      if ( v11 == *v10 )
      {
        v11 = *(_QWORD *)(v8 + 8);
        v12 = v11;
        goto LABEL_5;
      }
    }
    while ( *(_DWORD *)(v11 + 16) != *(_DWORD *)a2 );
    v12 = *(_QWORD *)(v8 + 8);
LABEL_5:
    if ( v11 == v12 )
    {
      std::unordered_map<unsigned long,DeviceInfo *>::_Try_emplace<unsigned long const &,>(
        v8,
        (__int64)v20,
        (const unsigned __int8 *)a2);
      *(_QWORD *)(*(_QWORD *)v20 + 24LL) = a2;
    }
    else
    {
      v6 = 1;
    }
  }
  else if ( !std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::erase((char *)this + 192) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x42E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004005LL,
      v20[0]);
    __debugbreak();
  }
  v13 = (_QWORD *)**((_QWORD **)this + 11);
  while ( v13 != *((_QWORD **)this + 11) )
  {
    v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v13[7];
    v22 = 0LL;
    v16 = **v15;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v22);
    v17 = v16(v15, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v22);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v17,
        v20[0]);
      JUMPOUT(0x180062302LL);
    }
    if ( !v22 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x442,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)0x8000FFFFLL,
        v20[0]);
      __debugbreak();
    }
    v18 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v22;
    if ( a3 )
    {
      if ( v6 )
        v19 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v18)[4](v22, a2);
      else
        v19 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v18)[3](v22, a2);
    }
    else
    {
      v19 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v18)[5](v22, a2);
    }
    if ( v19 >= 0 )
      v13 = (_QWORD *)*v13;
    else
      v13 = *(_QWORD **)DWMInputRouter::RemoveTarget(this, v20, v13);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v22);
  }
  return 0LL;
}
