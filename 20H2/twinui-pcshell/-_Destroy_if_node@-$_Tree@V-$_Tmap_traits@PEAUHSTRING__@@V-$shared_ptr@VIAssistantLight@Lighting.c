/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@2@@Z @ 0x18044F328
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@1@1@Z @ 0x18044D4CC (--$_Insert_at@AEAU-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU-$_Tree_node@U-$p.c)
 *     _std::_Tree_std::_Tmap_traits_HSTRING_____std::shared_ptr_TwinUI::Lighting::IAssistantLight__std::less_HSTRING______std::allocator_std::pair_HSTRING_____const_std::shared_ptr_TwinUI::Lighting::IAssistantLight______0___::_Insert_hint_std::pair_HSTRING_____const_std::shared_ptr_TwinUI::Lighting::IAssistantLight____&_std::_Tree_node_std::pair_HSTRING_____const_std::shared_ptr_TwinUI::Lighting::IAssistantLight____void_______::_1_::catch$23 @ 0x18044D82A (_std--_Tree_std--_Tmap_traits_HSTRING_____std--shared_ptr_TwinUI--Lighting--IAssistantLight__std.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_____std::shared_ptr_Win32AppViewInfo__std::less_HWND______std::allocator_std::pair_HWND_____const_std::shared_ptr_Win32AppViewInfo______0___::_Insert_nohint_std::pair_HWND_____const_std::shared_ptr_Win32AppViewInfo____&_std::_Tree_node_std::pair_HWND_____const_std::shared_ptr_Win32AppViewInfo____void_______::_1_::catch$19 @ 0x18044D988 (_std--_Tree_std--_Tmap_traits_HWND_____std--shared_ptr_Win32AppViewInfo__std--less_HWND______std.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::shared_ptr_Win32ProcessInfo__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::shared_ptr_Win32ProcessInfo______0___::_Insert_nohint_std::pair_unsigned_int_const__std::shared_ptr_Win32ProcessInfo____&_std::_Tree_node_std::pair_unsigned_int_const__std::shared_ptr_Win32ProcessInfo____void_______::_1_::catch$19 @ 0x18045B302 (_std--_Tree_std--_Tmap_traits_unsigned_int_std--shared_ptr_Win32ProcessInfo__std--less_unsigned_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a2[6];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x38);
}
