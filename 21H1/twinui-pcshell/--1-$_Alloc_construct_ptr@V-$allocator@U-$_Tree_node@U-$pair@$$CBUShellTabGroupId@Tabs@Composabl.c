/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802DB200
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::shared_ptr_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator_std::allocator_std::pair_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___const_std::shared_ptr_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState______0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___const_&__std::tuple_____::_1_::dtor$4 @ 0x1802D82A4 (_std--_Tree_std--_Tmap_traits_Windows--Internal--ComposableShell--Multitasking--ISw_ea_1802D82A4.c)
 *     _std::_Tree_std::_Tmap_traits_HMONITOR_____KeyboardHosting::ScreenSizeAndDpi_std::less_HMONITOR______std::allocator_std::pair_HMONITOR_____const_KeyboardHosting::ScreenSizeAndDpi____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_HMONITOR_____const_&__std::tuple_____::_1_::dtor$4 @ 0x18034CC79 (_std--_Tree_std--_Tmap_traits_HMONITOR_____KeyboardHosting--ScreenSizeAndDpi_std--l_ea_18034CC79.c)
 *     _std::_Tree_std::_Tmap_traits_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_Microsoft::WRL::ComPtr_IViewGroup__std::less_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId__std::allocator_std::pair_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const__Microsoft::WRL::ComPtr_IViewGroup______0___::emplace_std::pair_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_Microsoft::WRL::ComPtr_IViewGroup______::_1_::dtor$4 @ 0x1803C8FF1 (_std--_Tree_std--_Tmap_traits_Windows--Internal--ComposableShell--Tabs--ShellTabGro_ea_1803C8FF1.c)
 *     _std::_Tree_std::_Tmap_traits_HSTRING_____std::shared_ptr_TwinUI::Lighting::IAssistantLight__std::less_HSTRING______std::allocator_std::pair_HSTRING_____const_std::shared_ptr_TwinUI::Lighting::IAssistantLight______0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_HSTRING_____const_&__std::tuple_____::_1_::dtor$4 @ 0x18042A72B (_std--_Tree_std--_Tmap_traits_HSTRING_____std--shared_ptr_TwinUI--Lighting--IAssist_ea_18042A72B.c)
 *     _std::_Tree_node_std::pair_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const__std::shared_ptr_UwpAppViewInfo____void___::_Buynode_std::allocator_std::_Tree_node_std::pair_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const__std::shared_ptr_UwpAppViewInfo____void______IWinRTApplicationView___&_std::shared_ptr_UwpAppViewInfo__&__::_1_::dtor$0 @ 0x180434D5D (_std--_Tree_node_std--pair_wil--com_ptr_t_IWinRTApplicationView_wil--err_exception_policy__const.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::shared_ptr_Win32ProcessInfo__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::shared_ptr_Win32ProcessInfo______0___::emplace_unsigned_int_&_std::shared_ptr_Win32ProcessInfo__&__::_1_::dtor$4 @ 0x180438096 (_std--_Tree_std--_Tmap_traits_unsigned_int_std--shared_ptr_Win32ProcessInfo__std--l_ea_180438096.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_____std::shared_ptr_Win32AppViewInfo__std::less_HWND______std::allocator_std::pair_HWND_____const_std::shared_ptr_Win32AppViewInfo______0___::emplace_HWND_____&_std::shared_ptr_Win32AppViewInfo__&__::_1_::dtor$4 @ 0x18043815B (_std--_Tree_std--_Tmap_traits_HWND_____std--shared_ptr_Win32AppViewInfo__std--less__ea_18043815B.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x38);
}
