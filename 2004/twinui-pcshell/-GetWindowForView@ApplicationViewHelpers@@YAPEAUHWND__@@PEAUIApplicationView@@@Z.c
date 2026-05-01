/*
 * XREFs of ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039250
 * Callers:
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18000B480 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180018AB8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180024BE8 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180025180 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18003E6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800438BC (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180043DC0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180046658 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180048A50 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x18006CEE4 (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800B418C (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1800B7C30 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1800B8190 (-InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800BA098 (-_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800CA0C8 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800CAEE0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1800CC5B0 (-ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUI.c)
 *     ?OnViewClosing@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1801A6E80 (-OnViewClosing@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     _lambda_98ae2f8acbcd0270b071efd378e5a46f_::operator() @ 0x180230058 (_lambda_98ae2f8acbcd0270b071efd378e5a46f_--operator().c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x18023A868 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 *     ??0ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIApplicationView@@PEAUIShellTab@1234@@Z @ 0x18026A134 (--0ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIApplicationView@@PEAUIShell.c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18026C360 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x18026CF8C (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 *     ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x18026D460 (-CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA-AU-$pair@V-$com_ptr_t@UIVisual@Composition@.c)
 *     ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18026EC30 (-EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     LoggingUtil::GetViewIdFromView @ 0x180270F74 (LoggingUtil--GetViewIdFromView.c)
 *     _anonymous_namespace_::IsTabGroupAppManaged @ 0x180271C18 (_anonymous_namespace_--IsTabGroupAppManaged.c)
 *     ?MinimizeView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802720FC (-MinimizeView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180272860 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 *     ?PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180275C58 (-PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@C.c)
 *     ?SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z @ 0x180277A3C (-SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z.c)
 *     ?ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18027DBF4 (-ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18027DD10 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180280550 (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableSh.c)
 *     _lambda_bdc3f85b4bc9e929848d1767baf75ca3_::operator() @ 0x1802965E0 (_lambda_bdc3f85b4bc9e929848d1767baf75ca3_--operator().c)
 *     ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180296750 (-AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?Begin@ViewAnimationStoryboardHelper@@QEAAJPEAUIApplicationView@@W4DWMTRANSITION_TARGET@@@Z @ 0x180296D04 (-Begin@ViewAnimationStoryboardHelper@@QEAAJPEAUIApplicationView@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?RemoveView@ViewGroup@@UEAAJPEAUIApplicationView@@W4SelectedViewRemovalBehavior@@@Z @ 0x180298240 (-RemoveView@ViewGroup@@UEAAJPEAUIApplicationView@@W4SelectedViewRemovalBehavior@@@Z.c)
 *     ?SelectView@ViewGroup@@UEAAJPEAUIApplicationView@@W4ViewGroupSelectViewReason@@@Z @ 0x180298400 (-SelectView@ViewGroup@@UEAAJPEAUIApplicationView@@W4ViewGroupSelectViewReason@@@Z.c)
 *     ?StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180298988 (-StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@.c)
 *     ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x18029CE70 (-TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicat.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180340570 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x180395180 (-_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18039C760 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1803A5260 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1803A54F0 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803C6290 (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x1803C69B8 (-_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C83E0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C8760 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1803C8BA8 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1803DC510 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803E04F4 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1803EC4C4 (-InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1803ECA80 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803F06A8 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x1803F7EF4 (-GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1803F98B8 (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1803FA3B0 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1803FB810 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1804166E8 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x180419558 (TabletModeDragPattern--GetWindowTitleWithMap.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x18041D1B4 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x18041D548 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z @ 0x18041F0B4 (-UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z.c)
 *     ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180420208 (-GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180426460 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18042B6A0 (-RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DET.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180471D84 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetWindowForView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  __int64 (__fastcall **v2)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  __int64 (__fastcall **v4)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // [rsp+20h] [rbp-20h]
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v20; // [rsp+60h] [rbp+20h] BYREF
  __int64 v21; // [rsp+68h] [rbp+28h] BYREF
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+38h] BYREF

  v2 = *this;
  v18[0] = 0LL;
  v23 = 0LL;
  if ( (int)(*v2)((ApplicationViewHelpers *)this, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v23) < 0 )
  {
    v4 = *this;
    v22 = 0LL;
    v5 = (*v4)((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v22);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v5,
        v17);
LABEL_12:
      v10 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      goto LABEL_14;
    }
    v21 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v21);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v6,
        v17);
LABEL_10:
      v9 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      goto LABEL_12;
    }
    v20 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v21 + 24LL))(
           v21,
           5LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v20);
    if ( v7 == -2147023728 )
    {
      v16 = v21;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v16 + 24LL))(
             v16,
             0LL,
             &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
             &v20);
    }
    if ( v7 < 0 )
    {
      v15 = 45LL;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 32LL))(v20, v18);
      if ( v7 >= 0 )
        goto LABEL_8;
      v15 = 47LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v7,
      v17);
LABEL_8:
    v8 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_10;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v23 + 24LL))(v23, v18);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v14,
      v17);
LABEL_14:
  v11 = v23;
  v12 = v18[0];
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v12;
}
