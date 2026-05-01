/*
 * XREFs of ?OnTabMovedGroups@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180273DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_70a964b454178176402e73f40db94080___ @ 0x180264D2C (ShellPositionerHelpers--PerformCallbackOnView__lambda_70a964b454178176402e73f40db94080___.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027F168 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall TabViewManager::OnTabMovedGroups(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *, __int64 *); // rbx
  int v6; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  void (__fastcall *v16)(char *, GUID *, IUnknown **); // rbx
  int v17; // ebx
  int v18; // [rsp+20h] [rbp-98h] BYREF
  int v19; // [rsp+24h] [rbp-94h]
  __int64 *v20; // [rsp+28h] [rbp-90h] BYREF
  __int64 v21; // [rsp+30h] [rbp-88h] BYREF
  __int64 v22; // [rsp+38h] [rbp-80h] BYREF
  BOOL v23; // [rsp+40h] [rbp-78h] BYREF
  IUnknown *punk[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v25[4]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v26; // [rsp+80h] [rbp-38h] BYREF
  _BYTE v27[16]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v19 = 0;
  v20 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *, __int64 *))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v20);
  v6 = v5(a3, (__int64 *)&v20);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2696LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v6);
  TabViewManager::TryGetViewForTab(this, &v21, v20);
  if ( v21 )
  {
    v22 = 0LL;
    v8 = *v20;
    v22 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 168))(v20, &v22);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2706LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 48LL))(v22, v27);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2709LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v20 + 48))(v20, &v26);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2712LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v11);
    LOBYTE(v18) = 0;
    v12 = (__int64 *)*((_QWORD *)this + 172);
    v13 = *v12;
    *(_OWORD *)punk = v26;
    v14 = (*(__int64 (__fastcall **)(__int64 *, IUnknown **, int *))(v13 + 24))(v12, punk, &v18);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2715LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v14);
    v23 = (_BYTE)v18 != 0;
    v25[0] = &v21;
    v25[1] = v27;
    v25[2] = &v23;
    v15 = v21;
    punk[0] = 0LL;
    v19 = 2;
    v16 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)punk);
    v16((char *)this + 8, &GUID_00000000_0000_0000_c000_000000000046, punk);
    v17 = ShellPositionerHelpers::PerformCallbackOnView__lambda_70a964b454178176402e73f40db94080___(
            punk[0],
            v15,
            (__int64)v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)punk);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2727LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    return 0LL;
  }
  else
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    return 0LL;
  }
}
