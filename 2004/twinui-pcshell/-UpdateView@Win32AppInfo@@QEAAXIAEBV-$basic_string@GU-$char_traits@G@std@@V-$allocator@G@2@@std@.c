/*
 * XREFs of ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045E664
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18045DEF4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1802561B4 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     ??$emplace@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@std@@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@1@@Z @ 0x18045BD78 (--$emplace@AEAIAEAV-$shared_ptr@VWin32ProcessInfo@@@std@@@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr.c)
 *     ??$make_shared@VWin32ProcessInfo@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32ProcessInfo@@@0@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x18045C160 (--$make_shared@VWin32ProcessInfo@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045E714 (-UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppInfo::UpdateView(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v6; // rdi
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v6 = (__int64 *)(a1 + 32);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
    (__int64 **)(a1 + 32),
    &v10,
    (unsigned int *)&v11);
  if ( v10 == (__int64 *)*v6 )
  {
    std::make_shared<Win32ProcessInfo,unsigned int &,std::wstring const &>(&v7, &v11);
    Win32ProcessInfo::UpdateView(v7, a4, a5);
    std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::emplace<unsigned int &,std::shared_ptr<Win32ProcessInfo> &>(
      v6,
      (__int64)v9,
      &v11,
      &v7);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  else
  {
    Win32ProcessInfo::UpdateView(v10[5], a4, a5);
  }
}
