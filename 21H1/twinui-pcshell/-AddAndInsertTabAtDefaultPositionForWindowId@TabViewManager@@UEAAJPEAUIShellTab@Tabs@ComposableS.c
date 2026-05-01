/*
 * XREFs of ?AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationViewTabInsertionContext@ViewManagement@5UI@6@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18024A190
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180246BE0 (--$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$com_ptr_t@UIShellTab@Tabs@Compos.c)
 *     ?AddTabAndViewToMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18024A5E0 (-AddTabAndViewToMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Wi.c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18024A6E0 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabIdStability@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802554A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabIdStability@@@details@wil@@QEAAX_NW4Re.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18025C620 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ?TryGetTabGroupForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18025D200 (-TryGetTabGroupForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18025D400 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x18025F1D4 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabViewManager::AddAndInsertTabAtDefaultPositionForWindowId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5)
{
  __int64 v5; // rdi
  int v9; // eax
  int v10; // eax
  int TabGroupForView; // eax
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  void *v16; // [rsp+20h] [rbp-88h] BYREF
  __int64 v17; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v18[32]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v22; // [rsp+B0h] [rbp+8h] BYREF
  struct IApplicationView *v23; // [rsp+C0h] [rbp+18h] BYREF

  v5 = a4;
  TabViewManagerTraceLogging::WatchCurrentThread(v18, "TabViewManager_AddAndInsertTabAtDefaultPositionForWindowId");
  v17 = *(_QWORD *)(a3 + 64);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  try
  {
    ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(a1 + 1032, &v23, v5);
    TabViewManager::TryFindAndNotifyReplacementTab((TabViewManager *)(a1 - 160));
    if ( v22 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabIdStability>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_TabIdStability>::GetImpl'::`2'::impl,
        0LL);
      v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64))(*(_QWORD *)v22 + 352LL))(
             v22,
             a2);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1885LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      TabViewManager::AddTabAndViewToMapsLockHeld((TabViewManager *)(a1 - 160), v22, v23);
      v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(*(_QWORD *)v22 + 360LL))(v22);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1887LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<Windows::Internal::ComposableShell::Tabs::IShellTab>(
        (__int64 *)&v22,
        a5);
    }
    else
    {
      v16 = 0LL;
      TabGroupForView = TabViewManager::TryGetTabGroupForView(
                          (TabViewManager *)(a1 - 24),
                          v23,
                          &GUID_f264283f_b510_4555_80ed_4c7216018854,
                          &v16);
      if ( TabGroupForView < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1896LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)TabGroupForView);
      v12 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v16 + 64LL))(v16, a2, 0LL);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1897LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v12);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v22);
      v13 = TabViewManager::AddVirtualTabForWindow(a1, a2, (unsigned int)v5, &v22);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1898LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<Windows::Internal::ComposableShell::Tabs::IShellTab>(
        (__int64 *)&v22,
        a5);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x770,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v14);
  }
  return result;
}
