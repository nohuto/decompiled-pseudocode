/*
 * XREFs of ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x1802524C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAX$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x180243F08 (--$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@Composabl.c)
 *     ?DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x18024CC20 (-DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024CE40 (-EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024D2B4 (-ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?MinimizeView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025047C (-MinimizeView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180253FD8 (-PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@C.c)
 *     ?SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180255C74 (-SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@.c)
 *     ?SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z @ 0x180255DBC (-SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z.c)
 *     ?SwitchToTitleBar@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025AF28 (-SwitchToTitleBar@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025BF74 (-ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025D4E8 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x18025F1D4 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::OnTabViewOperationRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **); // rbx
  int v8; // eax
  TabViewManager *v9; // rcx
  struct IApplicationView *v10; // rbx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rdx
  int v15; // eax
  int v17; // eax
  __int64 v18; // rdx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v19; // [rsp+20h] [rbp-49h] BYREF
  struct IApplicationView *v20; // [rsp+28h] [rbp-41h] BYREF
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  int v22; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v23[32]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v24[24]; // [rsp+60h] [rbp-9h] BYREF
  int v25; // [rsp+78h] [rbp+Fh]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v26; // [rsp+90h] [rbp+27h] BYREF
  struct _GUID v27; // [rsp+98h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  TabViewManagerTraceLogging::WatchCurrentThread(v23, "TabViewManager_OnTabViewOperationRequested");
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v22);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3D,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v19 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v19);
  v8 = v7(a3, &v19);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA40,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v8);
LABEL_5:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
LABEL_6:
    if ( v25 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
    goto LABEL_34;
  }
  TabViewManager::TryGetViewForTab(this, &v20, v19);
  v10 = v20;
  if ( !v20 )
    goto LABEL_31;
  v11 = v22;
  if ( v22 != 7 )
  {
    LODWORD(v21) = v22;
    v26 = v19;
    *(_QWORD *)&v27.Data1 = v20;
    TabViewManagerTraceLogging::TabViewManager_OnTabViewOperationRequested<IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab *,unsigned int>(
      (struct IApplicationView **)&v27,
      &v26,
      (unsigned int *)&v21);
    TabViewManager::SetViewTransitionsEnabled(v10, 1);
    v11 = v22;
  }
  if ( v11 == 1 )
  {
    v17 = TabViewManager::MinimizeView(v9, (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v10);
    v6 = v17;
    if ( v17 >= 0 )
      goto LABEL_31;
    v18 = 2645LL;
    goto LABEL_49;
  }
  if ( v11 <= 1 )
    goto LABEL_31;
  if ( v11 <= 3 )
  {
    v17 = TabViewManager::PerformWindowPlacementOperation(v9, v10);
    v6 = v17;
    if ( v17 >= 0 )
      goto LABEL_31;
    v18 = 2650LL;
    goto LABEL_49;
  }
  switch ( v11 )
  {
    case 5:
      v17 = TabViewManager::EnterFullScreen(this, v10);
      v6 = v17;
      if ( v17 >= 0 )
        break;
      v18 = 2654LL;
      goto LABEL_49;
    case 6:
      v17 = TabViewManager::ExitFullScreen(this, v10);
      v6 = v17;
      if ( v17 >= 0 )
        break;
      v18 = 2658LL;
      goto LABEL_49;
    case 7:
      v17 = TabViewManager::SetTabGroupForeground(this, v19);
      v6 = v17;
      if ( v17 >= 0 )
        break;
      v18 = 2662LL;
      goto LABEL_49;
    case 8:
      v17 = TabViewManager::ToggleVerticalMaximize(this, v10);
      v6 = v17;
      if ( v17 >= 0 )
        break;
      v18 = 2666LL;
      goto LABEL_49;
    case 9:
      v17 = TabViewManager::SwitchToTitleBar(this, v10);
      v6 = v17;
      if ( v17 >= 0 )
        break;
      v18 = 2670LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_50;
    case 10:
      v27 = 0LL;
      v12 = *(_QWORD *)v19;
      v21 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(v12 + 168))(
              v19,
              &v21);
      if ( v13 < 0 )
      {
        v14 = 2677LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
        if ( v25 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
        v6 = v13;
        goto LABEL_34;
      }
      if ( v21 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v21 + 48LL))(v21, &v27);
        if ( v13 < 0 )
        {
          v14 = 2680LL;
          goto LABEL_22;
        }
        v15 = TabViewManager::DuplicateTab((TabViewManager *)((char *)this + 136), v10, &v27);
        v6 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA79,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v15);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
LABEL_50:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
          goto LABEL_5;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
      break;
  }
LABEL_31:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
  v6 = 0;
LABEL_34:
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v23);
  return v6;
}
