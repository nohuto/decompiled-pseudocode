/*
 * XREFs of ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x18008D8B0
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18008BA2C (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180095750 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18008DB74 (-clear@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wi.c)
 *     ?equal_range@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x18008DE48 (-equal_range@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18008DF08 (-erase@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wi.c)
 */

void __fastcall MPCHeadUpdateListener::RemoveHeadEventOccurred(MPCHeadUpdateListener *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  char *v3; // rsi
  const char *v4; // r9
  _QWORD *v5; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  v3 = (char *)this + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::equal_range(
    v3,
    &v10,
    &v14);
  v5 = v10;
  v6 = 0LL;
  v7 = v10;
  while ( v7 != v11 )
  {
    v7 = (_QWORD *)*v7;
    ++v6;
  }
  v8 = (_QWORD *)*((_QWORD *)v3 + 1);
  if ( v10 == (_QWORD *)*v8 && v11 == v8 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::clear(v3);
  }
  else
  {
    while ( v5 != v11 )
    {
      v9 = v5;
      v5 = (_QWORD *)*v5;
      std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::erase(
        v3,
        &v13,
        v9);
    }
  }
  if ( v6 != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      137LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      v4);
    __debugbreak();
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
