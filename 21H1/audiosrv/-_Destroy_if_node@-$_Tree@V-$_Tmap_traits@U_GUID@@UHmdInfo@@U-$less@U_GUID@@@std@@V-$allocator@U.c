/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@Z @ 0x18010EF4C
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@1@Z @ 0x18010C9C8 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdIn.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_HmdInfo_std::less__GUID__std::allocator_std::pair__GUID_const__HmdInfo____0___::_Insert_hint_std::pair__GUID_const__HmdInfo__&_std::_Tree_node_std::pair__GUID_const__HmdInfo__void_______::_1_::catch$23 @ 0x18010CE31 (_std--_Tree_std--_Tmap_traits__GUID_HmdInfo_std--less__GUID__std--allocator_std--pair__GUID_cons.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_HmdInfo_std::less__GUID__std::allocator_std::pair__GUID_const__HmdInfo____0___::_Insert_nohint_std::pair__GUID_const__HmdInfo__&_std::_Tree_node_std::pair__GUID_const__HmdInfo__void_______::_1_::catch$20 @ 0x18010D00C (_std--_Tree_std--_Tmap_traits__GUID_HmdInfo_std--less__GUID__std--allocator_std--pa_ea_18010D00C.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a2 + 6);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x48);
}
