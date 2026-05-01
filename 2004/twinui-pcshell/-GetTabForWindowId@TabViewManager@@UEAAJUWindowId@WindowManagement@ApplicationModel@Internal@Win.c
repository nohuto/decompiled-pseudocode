/*
 * XREFs of ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x180270A40
 * Callers:
 *     ?GetWindowGroupInfo@TabViewManager@@UEAAJPEAUHWND__@@PEAUWINDOW_GROUP_INFO@@@Z @ 0x180271110 (-GetWindowGroupInfo@TabViewManager@@UEAAJPEAUHWND__@@PEAUWINDOW_GROUP_INFO@@@Z.c)
 *     ?MoveWindowToGroup@TabViewManager@@UEAAJPEAUHWND__@@AEBU_GUID@@I@Z @ 0x180272180 (-MoveWindowToGroup@TabViewManager@@UEAAJPEAUHWND__@@AEBU_GUID@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180268890 (--$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$com_ptr_t@UIShellTab@Tabs@Compos.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18026927C (--0-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18026A384 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_18026A384.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026E6B0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartActivity@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXI@Z @ 0x180278124 (-StartActivity@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXI@Z.c)
 *     ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x18027919C (-Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18027EDA4 (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18027F080 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180281B5C (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_180281B5C.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall TabViewManager::GetTabForWindowId(
        __int64 a1,
        int a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a3)
{
  __int64 v4; // rbx
  __int64 *TabForViewImpl; // rax
  __int64 v8; // [rsp+20h] [rbp-178h] BYREF
  __int64 v9; // [rsp+28h] [rbp-170h] BYREF
  void **v10; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-160h] BYREF
  int v12; // [rsp+50h] [rbp-148h]
  _BYTE v13[248]; // [rsp+68h] [rbp-130h] BYREF
  _BYTE v14[16]; // [rsp+160h] [rbp-38h] BYREF

  v4 = a2;
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v10);
  v10 = &TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::`vftable';
  TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)&v10,
    v4);
  *a3 = 0LL;
  ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(a1 + 1032, &v8, v4);
  if ( v8 )
  {
    TabForViewImpl = (__int64 *)TabViewManager::TryGetTabForViewImpl(a1 - 160, &v9, v8);
    wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<Windows::Internal::ComposableShell::Tabs::IShellTab>(
      TabForViewImpl,
      a3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  }
  TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::Stop(
    (TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)&v10,
    *a3,
    *a3 != 0LL);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  v10 = &TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v10);
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(v14);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  return 0LL;
}
