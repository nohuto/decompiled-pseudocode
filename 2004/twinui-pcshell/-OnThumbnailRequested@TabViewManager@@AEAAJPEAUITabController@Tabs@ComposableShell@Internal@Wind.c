/*
 * XREFs of ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x1802746B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007F7A4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UITabControllerThumbnailEventArgsInternal@@AEAPEAUITabControllerThumbnailEventArgs@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITabControllerThumbnailEventArgsInternal@@Uerr_exception_policy@wil@@@0@AEAPEAUITabControllerThumbnailEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1800AB2DC (--$com_query@UITabControllerThumbnailEventArgsInternal@@AEAPEAUITabControllerThumbnailEventArgs@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@@Z @ 0x180265C78 (--$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@.c)
 *     ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x18026D460 (-CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA-AU-$pair@V-$com_ptr_t@UIVisual@Composition@.c)
 *     ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x18026D788 (-CreateStaticThumbnailVisual@TabViewManager@@AEAA-AV-$com_ptr_t@UIVisual@Composition@UI@Windows@.c)
 *     ?GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18027041C (-GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027F168 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180280E54 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TabViewManager::OnThumbnailRequested(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *a3)
{
  __int64 (*v5)(void); // rbx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v14; // bl
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v15; // rbx
  __int64 (__fastcall *v16)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct IApplicationView **); // rdi
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  const char *v24; // r9
  __int64 result; // rax
  _BYTE v26[8]; // [rsp+30h] [rbp-B8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v27; // [rsp+38h] [rbp-B0h] BYREF
  struct IApplicationView *v28; // [rsp+40h] [rbp-A8h] BYREF
  struct Windows::UI::Composition::ICompositor *v29; // [rsp+48h] [rbp-A0h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v30; // [rsp+50h] [rbp-98h] BYREF
  int v31[2]; // [rsp+58h] [rbp-90h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v32; // [rsp+60h] [rbp-88h] BYREF
  __int64 v33; // [rsp+68h] [rbp-80h]
  unsigned int v34[4]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v35[32]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v36[24]; // [rsp+A0h] [rbp-48h] BYREF
  int v37; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *v39; // [rsp+100h] [rbp+18h] BYREF
  char v40; // [rsp+108h] [rbp+20h] BYREF

  v39 = a3;
  TabViewManagerTraceLogging::WatchCurrentThread(v35, "TabViewManager_OnThumbnailRequested");
  v27 = 0LL;
  v5 = *(__int64 (**)(void))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v27);
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2876LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v6);
    v30 = 0LL;
    v7 = *(_QWORD *)v27;
    v30 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(v7 + 168))(
           v27,
           &v30);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2879LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    if ( v30 )
    {
      v32 = v27;
      v28 = v30;
      TabViewManagerTraceLogging::TabViewManager_OnThumbnailRequested<Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *>(
        &v28,
        &v32);
      v29 = 0LL;
      v9 = *(_QWORD *)a3;
      v29 = 0LL;
      v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, struct Windows::UI::Composition::ICompositor **))(v9 + 56))(
              a3,
              &v29);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2885LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, unsigned int *))(*(_QWORD *)a3 + 72LL))(
              a3,
              v34);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2888LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v11);
      v26[0] = 0;
      v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, _BYTE *))(*(_QWORD *)v27 + 176LL))(
              v27,
              v26);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2891LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v12);
      v40 = 0;
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, char *))(*(_QWORD *)v27 + 336LL))(
              v27,
              &v40);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2894LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v13);
      v14 = 0;
      if ( v40 )
        goto LABEL_31;
      TabViewManager::TryGetViewForTab(this, &v28, v27);
      if ( v28 )
        v14 = (unsigned int)TabViewManager::GetNumTabsInGroupForView(this, v30, v28) == 1;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
      if ( v40 || v26[0] || v14 )
      {
LABEL_31:
        v21 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs **))(*(_QWORD *)a3 + 64LL))(
                a3,
                &v39);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2913LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v21);
        TabViewManager::CreateDwmSharedThumbnailVisual(
          (__int64)this,
          &v32,
          (__int64)v29,
          (__int64)v27,
          (int)v39,
          (float *)v34);
        v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(*(_QWORD *)a3 + 104LL))(
                a3,
                v32);
        if ( v22 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2916LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v22);
        v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, __int64))(*(_QWORD *)a3 + 88LL))(
                a3,
                v33);
        if ( v23 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2917LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v23);
        v33 = 0LL;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
      }
      else
      {
        wil::com_query<ITabControllerThumbnailEventArgsInternal,Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs * &>(
          (__int64)&v32,
          &v39);
        v28 = 0LL;
        v15 = v32;
        v16 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct IApplicationView **))(*(_QWORD *)v32 + 24LL);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v28);
        v17 = v16(v15, &v28);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2925LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v17);
        *(_QWORD *)v31 = 0LL;
        v18 = *(_QWORD *)v27;
        *(_QWORD *)v31 = 0LL;
        v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, int *))(v18 + 152))(
                v27,
                v31);
        if ( v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2929LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v19);
        if ( *(_QWORD *)v31 )
        {
          TabViewManager::CreateStaticThumbnailVisual(
            (TabViewManager *)this,
            &v39,
            v29,
            (struct IUnknown *)v28,
            *(__int64 **)v31,
            v34);
          v20 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *))(*(_QWORD *)a3 + 104LL))(
                  a3,
                  v39);
          if ( v20 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2934LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v20);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v31);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
        if ( v32 )
          (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(*(_QWORD *)v32 + 16LL))(v32);
      }
      if ( v29 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositor *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
    if ( v37 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v36);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v35);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v39) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xB81,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v24);
    return (unsigned int)v39;
  }
  return result;
}
