/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@Z @ 0x18043AA80
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@1@Z @ 0x1804377F4 (--$_Insert_at@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExeDa.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Insert_hint_std::pair_HWND_____const_ExeData__&_std::_Tree_node_std::pair_HWND_____const_ExeData__void_______::_1_::catch$23 @ 0x180437B52 (_std--_Tree_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--allocator_std--pair_HWND.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Insert_nohint_std::pair_HWND_____const_ExeData__&_std::_Tree_node_std::pair_HWND_____const_ExeData__void_______::_1_::catch$26 @ 0x180437FBC (_std--_Tree_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--allocator_s_ea_180437FBC.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  std::wstring::_Tidy_deallocate(a2 + 10);
  std::wstring::_Tidy_deallocate(a2 + 6);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x70);
}
