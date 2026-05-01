/*
 * XREFs of ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x18027FE34
 * Callers:
 *     ?OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180273290 (-OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagREC.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800243D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@11@Z @ 0x1802651B4 (--$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@T.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802767AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate@@@details@wi.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027E0E4 (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18027E174 (-TryGetLastSelectedTabForView@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027FCB8 (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall TabViewManager::ViewPosChanged(
        __int64 a1,
        ApplicationViewHelpers *a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  ApplicationViewHelpers *v5; // r8
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  struct IApplicationView *v10; // rdx
  HWND CoreWindowForView; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // [rsp+30h] [rbp-B8h] BYREF
  ApplicationViewHelpers *v17; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-A8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v19; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v20[7]; // [rsp+50h] [rbp-98h] BYREF
  __int16 v21; // [rsp+88h] [rbp-60h]
  struct tagRECT Rect; // [rsp+90h] [rbp-58h] BYREF
  struct tagRECT v23; // [rsp+A0h] [rbp-48h] BYREF
  struct tagRECT v24; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v5 = a2;
  v17 = a2;
  v16 = a4;
  if ( a4 == 1 )
  {
    v18 = 0LL;
    v7 = *(_QWORD *)a2;
    v18 = 0LL;
    v8 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(v7 + 80))(a2, &v18);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1968LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    v24 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v18 + 88LL))(v18, &v24);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1971LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
    Rect = 0LL;
    CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(
                                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v17,
                                v10);
    if ( CoreWindowForView )
      GetWindowRect(CoreWindowForView, &Rect);
    v23 = 0LL;
    v12 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, struct tagRECT *))(*(_QWORD *)v17 + 128LL))(v17, &v23);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1981LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v12);
    TabViewManagerTraceLogging::TabViewManager_MaximizedWindowInfo<IApplicationView * &,tagRECT &,tagRECT const &,tagRECT &,tagRECT &>(
      &v17,
      &v24,
      a3,
      &v23,
      &Rect);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    v5 = v17;
  }
  TabViewManager::TryGetLastSelectedTabForView(a1, &v19, (unsigned __int64)v5);
  TabViewManager::TryGetGroup(v13, v20, (__int64 *)v19);
  if ( v19 && v20[0] )
  {
    TabViewManager::UpdateViewAnimationStateForTab(
      (RTL_SRWLOCK *)a1,
      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v17,
      v19);
    (*(void (__fastcall **)(_QWORD, ApplicationViewHelpers *, _QWORD))(**(_QWORD **)(a1 + 1368) + 32LL))(
      *(_QWORD *)(a1 + 1368),
      v17,
      v16);
    v20[1] = a1;
    v20[2] = (__int64)&v17;
    v20[3] = (__int64)&v16;
    v20[4] = (__int64)retaddr;
    v20[5] = (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp";
    v20[6] = 0LL;
    v21 = 1994;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate>::GetImpl'::`2'::impl,
      0,
      v14);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  return 0LL;
}
