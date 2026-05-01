/*
 * XREFs of ??1?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x18026A57C
 * Callers:
 *     _TabViewManager::RecoverTabGroupsFromWindowGroups_::_1_::dtor$1 @ 0x18027675D (_TabViewManager--RecoverTabGroupsFromWindowGroups_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$6 @ 0x18035ACC8 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$6.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$15 @ 0x1803EA579 (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$15.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x180267ADC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositione.c)
 */

void __fastcall std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::~map<unsigned int,KeyboardHosting::RelativePositionOnScreen>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
