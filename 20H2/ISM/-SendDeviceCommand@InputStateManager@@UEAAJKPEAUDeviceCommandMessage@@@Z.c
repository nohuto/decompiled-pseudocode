/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180087950
 * Callers:
 *     <none>
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@_K@Z @ 0x180003BB0 (-_End@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::SendDeviceCommand(
        InputStateManager *this,
        unsigned int a2,
        struct DeviceCommandMessage *a3)
{
  __int64 ***v6; // rdi
  __int64 **i; // rbx
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // r10
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = a2;
  if ( a2 )
  {
    v8 = *((_QWORD *)this + 17) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v12, 4uLL);
    while ( 1 )
    {
      v9 = std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_End(
             (__int64)this + 88,
             &v13,
             v8);
      if ( v10 == *v9 )
        break;
      if ( *(_DWORD *)(v10 + 16) == a2 )
        goto LABEL_10;
    }
    v10 = *((_QWORD *)this + 12);
LABEL_10:
    if ( v10 != *((_QWORD *)this + 12) )
      (*(void (__fastcall **)(_QWORD, _QWORD, struct DeviceCommandMessage *))(**(_QWORD **)(v10 + 24) + 24LL))(
        *(_QWORD *)(v10 + 24),
        a2,
        a3);
  }
  else
  {
    v6 = (__int64 ***)*((_QWORD *)this + 12);
    for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
      (*(void (__fastcall **)(__int64 *, _QWORD, struct DeviceCommandMessage *))(*i[3] + 24))(
        i[3],
        *((unsigned int *)i + 4),
        a3);
  }
  return 0LL;
}
