/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C76EC
 * Callers:
 *     _std::list_winrt::guid_std::allocator_winrt::guid___::_Insert_winrt::guid_const_&__::_1_::dtor$0 @ 0x1800C486F (_std--list_winrt--guid_std--allocator_winrt--guid___--_Insert_winrt--guid_const_-__--_1_--dtor$0.c)
 *     _std::list_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____std::allocator_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_______::_Insert_Microsoft::WRL::ComPtr_IVirtualDesktop__&_Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__&__::_1_::dtor$0 @ 0x180373D07 (_std--list_std--pair_Microsoft--WRL--ComPtr_IVirtualDesktop__const__Microsoft--WRL--ComPtr_Windo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x20);
}
