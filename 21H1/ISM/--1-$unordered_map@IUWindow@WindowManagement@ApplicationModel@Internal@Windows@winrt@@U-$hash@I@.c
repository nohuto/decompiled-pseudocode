/*
 * XREFs of ??1?$unordered_map@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@U?$hash@I@std@@U?$equal_to@I@8@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@@std@@QEAA@XZ @ 0x1800BDA04
 * Callers:
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$2 @ 0x18004F468 (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$3 @ 0x18004F47E (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045A74 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BD7B0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUAppView@WindowManagement@ApplicationM.c)
 */

void __fastcall std::unordered_map<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::~unordered_map<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 24);
  std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
