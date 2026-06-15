/*
 * XREFs of ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800D1914
 * Callers:
 *     ??_GDynamicAudioEndpointManager@@UEAAPEAXI@Z @ 0x1800D19F0 (--_GDynamicAudioEndpointManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18006A760 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800D15EC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@st.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800D1E64 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@.c)
 */

void __fastcall DynamicAudioEndpointManager::~DynamicAudioEndpointManager(DynamicAudioEndpointManager *this)
{
  void **v2; // rbx

  *(_QWORD *)this = &DynamicAudioEndpointManager::`vftable';
  v2 = (void **)((char *)this + 968);
  std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *>>>(
    (__int64)this + 968,
    (__int64)this + 968,
    *(_QWORD *)(*((_QWORD *)this + 121) + 8LL));
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x30);
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAll((char *)this + 920);
  `eh vector destructor iterator'(
    (char *)this + 56,
    48LL,
    18LL,
    (void (*)(void *))ATL::CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>::~CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
