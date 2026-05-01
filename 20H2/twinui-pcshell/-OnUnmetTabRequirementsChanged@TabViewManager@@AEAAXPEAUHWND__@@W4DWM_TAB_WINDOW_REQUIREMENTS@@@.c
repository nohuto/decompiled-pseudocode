/*
 * XREFs of ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180274628
 * Callers:
 *     ?OnMessage@TabViewManager@@UEAAJI_K_J@Z @ 0x1802728E0 (-OnMessage@TabViewManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802688B4 (--0-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180269958 (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026DE58 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartActivity@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180277B6C (-StartActivity@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXPEA.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180278258 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18027E790 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 *     ?UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXW4DWM_TAB_WINDOW_REQUIREMENTS@@0AEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x18027EEF0 (-UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLog.c)
 *     ?GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x18029162C (-GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z.c)
 */

void __fastcall TabViewManager::OnUnmetTabRequirementsChanged(__int64 a1, HWND a2, unsigned int a3)
{
  char v6; // di
  __int64 v7; // rbx
  bool v8; // si
  struct TelemetryHelpers::WindowCharacteristics *v9; // r8
  int v10; // eax
  int v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  void (__fastcall ***v12)(_QWORD, GUID *, int *); // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[40]; // [rsp+30h] [rbp-D0h] BYREF
  struct HWND__ v14; // [rsp+170h] [rbp+70h] BYREF
  LPVOID pv; // [rsp+398h] [rbp+298h]
  wil::details::in1diag3 *retaddr; // [rsp+3E8h] [rbp+2E8h]

  v6 = 0;
  v11[0] = 0;
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"TabViewManager_OnUnmetTabRequirementsChanged");
  v13[0] = &TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::`vftable';
  TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::StartActivity(v13, a2, a3);
  ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(a1 + 1192, &v12, a2);
  v7 = (__int64)v12;
  v8 = 0;
  if ( v12 )
  {
    (**v12)(v12, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v11);
    v6 = 1;
    if ( *(_QWORD *)v11 )
      v8 = 1;
  }
  if ( (v6 & 1) != 0 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v11);
  if ( v8 )
  {
    v11[0] = 0;
    if ( (int)DwmGetUnmetTabRequirements(a2, v11) >= 0 )
    {
      memset_0(&v14, 0, 0x226uLL);
      pv = 0LL;
      TelemetryHelpers::GetWindowCharacteristicsPartial(a2, &v14, v9);
      TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::UnmetTabRequirementsChanged(
        v13,
        a3,
        (unsigned int)v11[0],
        &v14);
      if ( pv )
        CoTaskMemFree(pv);
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 440LL))(v7);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x888,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v10);
  }
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  v13[0] = &TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
}
