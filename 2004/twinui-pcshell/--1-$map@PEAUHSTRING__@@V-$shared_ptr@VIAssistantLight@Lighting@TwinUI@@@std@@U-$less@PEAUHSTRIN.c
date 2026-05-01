/*
 * XREFs of ??1?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x18044E4DC
 * Callers:
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$1 @ 0x18044E3F7 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$1.c)
 *     _std::_Ref_count_obj_Win32ProcessInfo_::_Ref_count_obj_Win32ProcessInfo__unsigned_int_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&__::_1_::dtor$1 @ 0x18045AD0C (_std--_Ref_count_obj_Win32ProcessInfo_--_Ref_count_obj_Win32ProcessInfo__unsigned_i_ea_18045AD0C.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x18044DB94 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@.c)
 */

void __fastcall std::map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::~map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x38);
}
