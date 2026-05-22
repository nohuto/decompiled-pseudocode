/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18006DCA4
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor____std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor________0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x180051318 (_std--_Tree_std--_Tmap_traits_unsigned_long_std--pair_DeviceInfo___Microsoft--WRL--ComPtr_ICurso.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_char_std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps__std::less_unsigned_char__std::allocator_std::pair_unsigned_char_const__std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps______0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_unsigned_char_const_&__std::tuple_____::_1_::dtor$4 @ 0x1800C8CE6 (_std--_Tree_std--_Tmap_traits_unsigned_char_std--shared_ptr_SpatialInteractionDevic_ea_1800C8CE6.c)
 *     _std::_Tree_std::_Tmap_traits___int64_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__std::less___int64__std::allocator_std::pair___int64_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice______0___::emplace___int64_&_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__&__::_1_::dtor$4 @ 0x1800CD9BF (_std--_Tree_std--_Tmap_traits___int64_std--shared_ptr_Windows--Internal--SpatialInt_ea_1800CD9BF.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_wil::com_ptr_t_PenDevice_wil::err_exception_policy__PenDeviceManager::GUIDComparer_std::allocator_std::pair__GUID_const__wil::com_ptr_t_PenDevice_wil::err_exception_policy______0___::emplace__GUID_const_&_wil::com_ptr_t_PenDevice_wil::err_exception_policy__&__::_1_::dtor$4 @ 0x18012E505 (_std--_Tree_std--_Tmap_traits__GUID_wil--com_ptr_t_PenDevice_wil--err_exception_pol_ea_18012E505.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::shared_ptr_CustomCursorApplication__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::shared_ptr_CustomCursorApplication______0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$4 @ 0x18013AF92 (_std--_Tree_std--_Tmap_traits_unsigned_int_std--shared_ptr_CustomCursorApplication__ea_18013AF92.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned___int64_std::shared_ptr_SystemCursorShape__std::less_unsigned___int64__std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursorShape______0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_unsigned___int64_const_&__std::tuple_____::_1_::dtor$4 @ 0x18013DEEB (_std--_Tree_std--_Tmap_traits_unsigned___int64_std--shared_ptr_SystemCursorShape__s_ea_18013DEEB.c)
 *     _std::_Tree_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_std::weak_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__wil::hstring_insensitive_less_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__std::weak_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper______0___::emplace_std::pair_Microsoft::WRL::Wrappers::HString_std::shared_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper______::_1_::dtor$4 @ 0x180155D2B (_std--_Tree_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_std--weak_ptr_Windo_ea_180155D2B.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::dtor$34 @ 0x180164C58 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--dtor$34.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo______std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo__________0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x18019E68A (_std--_Tree_std--_Tmap_traits_unsigned_long_std--list_std--shared_ptr_HotKeyInfo__s_ea_18019E68A.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x38);
}
