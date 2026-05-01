/*
 * XREFs of ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180274808
 * Callers:
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180271F70 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180166DE8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x180168F58 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016D730 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_6daf7fcbe5dae3ed1785fcd042bd9f2b___ @ 0x1802642A4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_6daf7fcbe5dae3ed1785fcd042bd9f2b___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_747d28f0200701c03cb3e0ff96e7cdfa___ @ 0x180264574 (ShellPositionerHelpers--PerformCallbackOnView__lambda_747d28f0200701c03cb3e0ff96e7cdfa___.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180269994 (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026DC68 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_P.c)
 *     ?DisablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ @ 0x18026DF04 (-DisablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?EnablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ @ 0x18026E160 (-EnablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180277C30 (-StartActivity@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicat.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18027D420 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18027E4B4 (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18027E8F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabViewManager::OnViewCanTabChanged(TabViewManager *this, struct IApplicationView *a2)
{
  bool v3; // bl
  const char *v4; // r9
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  struct IApplicationView *v9; // rsi
  void (__fastcall *v10)(char *, GUID *, IUnknown **); // rbx
  int v11; // ebx
  __int64 result; // rax
  int v13; // eax
  struct IApplicationView *v14; // rsi
  void (__fastcall *v15)(char *, GUID *, IUnknown **); // rbx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct IApplicationView *v20; // [rsp+28h] [rbp-1B0h] BYREF
  IUnknown *punk; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-1A0h] BYREF
  int v23; // [rsp+40h] [rbp-198h] BYREF
  struct IUnknown *v24; // [rsp+48h] [rbp-190h] BYREF
  __int128 v25; // [rsp+50h] [rbp-188h] BYREF
  struct _GUID v26; // [rsp+60h] [rbp-178h] BYREF
  _QWORD v27[40]; // [rsp+70h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v20 = a2;
  try
  {
    (**(void (***)(void))a2)();
    v3 = v22 != 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    if ( v3 )
    {
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v27,
        (__int64)"TabViewManager_OnViewCanTabChanged");
      v27[0] = &TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::`vftable';
      TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::StartActivity(
        (TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)v27,
        v20);
      v23 = 0;
      v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v20 + 408LL))(v20, &v23);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2241LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v5);
      TabViewManager::TryGetTabForViewImpl(this, &v22, v20);
      if ( v23 )
      {
        if ( !v22 )
        {
          TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::EnablingTabs((TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)v27);
          v24 = 0LL;
          v7 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v24);
          if ( v7 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2250LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v7);
          v8 = TabViewManager::TryAssignViewToTabGroup((TabViewManager *)((char *)this + 136), v20, v24, &v26);
          if ( v8 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2253LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v8);
          *(_QWORD *)&v25 = &v20;
          *((_QWORD *)&v25 + 1) = &v26;
          v9 = v20;
          punk = 0LL;
          v10 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
          v10((char *)this + 8, &GUID_00000000_0000_0000_c000_000000000046, &punk);
          v11 = ShellPositionerHelpers::PerformCallbackOnView__lambda_6daf7fcbe5dae3ed1785fcd042bd9f2b___(
                  punk,
                  (__int64)v9,
                  &v25);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
          if ( v11 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2264LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v11);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        }
      }
      else if ( v22 )
      {
        TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::DisablingTabs((TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)v27);
        v13 = TabViewManager::TryRemoveViewFromTabGroup((TabViewManager *)((char *)this + 136), v20);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2271LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v13);
        v24 = (struct IUnknown *)&v20;
        v14 = v20;
        punk = 0LL;
        v15 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
        v15((char *)this + 8, &GUID_00000000_0000_0000_c000_000000000046, &punk);
        v16 = ShellPositionerHelpers::PerformCallbackOnView__lambda_747d28f0200701c03cb3e0ff96e7cdfa___(
                punk,
                (__int64)v14,
                &v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2282LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v16);
          __debugbreak();
          return TabViewManager::OnViewCanTabChanged_::_1_::dtor_1(v18, v17, v19);
        }
      }
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v27,
        v6);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
      v27[0] = &TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::`vftable';
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v27);
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v27);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8F1,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v4);
  }
  return result;
}
