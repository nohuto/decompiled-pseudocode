/*
 * XREFs of ??$distance@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@@std@@YA_JV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@0@0@Z @ 0x180246C7C
 * Callers:
 *     ?GetNumTabsForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEA_K@Z @ 0x18024E710 (-GetNumTabsForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEA_K@Z.c)
 *     ?GetTabDragType@TabViewManager@@UEAAJPEAUIInspectable@@PEAW4TAB_DRAG_TYPE@@@Z @ 0x18024ECA0 (-GetTabDragType@TabViewManager@@UEAAJPEAUIInspectable@@PEAW4TAB_DRAG_TYPE@@@Z.c)
 *     ?OnTabbedWindowMisbehaving@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180252890 (-OnTabbedWindowMisbehaving@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18025FB24 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna_ea_18025FB24.c)
 *     ?ContainsView@ViewGroup@@UEAA_NPEAUIApplicationView@@@Z @ 0x1802752A0 (-ContainsView@ViewGroup@@UEAA_NPEAUIApplicationView@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180277648 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_polic_ea_180277648.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A9AC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 */

__int64 __fastcall std::distance<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v6 = a1;
  v4 = 0LL;
  while ( a1 != v3 )
  {
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      &v6,
      a2,
      a3,
      v3);
    a1 = v6;
  }
  return v4;
}
