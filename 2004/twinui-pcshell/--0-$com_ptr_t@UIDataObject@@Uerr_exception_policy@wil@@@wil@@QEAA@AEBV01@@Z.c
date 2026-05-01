/*
 * XREFs of ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008858C
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800264A0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18005EF50 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ??$AsWeak@VShellFeedsExperienceManagerImpl@@@WRL@Microsoft@@YAJPEAVShellFeedsExperienceManagerImpl@@PEAVWeakRef@01@@Z @ 0x18009793C (--$AsWeak@VShellFeedsExperienceManagerImpl@@@WRL@Microsoft@@YAJPEAVShellFeedsExperienceManagerIm.c)
 *     ??$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVShellFeedsExperienceManagerImpl@@P84@EAAJI_K_J@Z@Z @ 0x1800981A0 (--$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotification.c)
 *     ?__clone@?$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJI_K_J@Z@23@@Z @ 0x18009E380 (-__clone@-$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UE.c)
 *     std::_Func_impl_no_alloc__lambda_b2aba72d894720c5d602d9e6e4035ef3__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy @ 0x1800AC930 (std--_Func_impl_no_alloc__lambda_b2aba72d894720c5d602d9e6e4035ef3__wil--com_ptr_t_W_ea_1800AC930.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_8a554fbb7eeadbc5b1f812b57a7003ed___ @ 0x1800AD390 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Internal--Composable.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_d6b8a9b1aa1c57c7c343e283d3e0fd07___ @ 0x1800AD480 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1800AD480.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_bad564a0731865a81e67c1ef81fa054c___ @ 0x1800AD570 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1800AD570.c)
 *     _lambda_1a95d3552be03f68d729c728809b4115_::_lambda_1a95d3552be03f68d729c728809b4115_ @ 0x1800AEB6C (_lambda_1a95d3552be03f68d729c728809b4115_--_lambda_1a95d3552be03f68d729c728809b4115_.c)
 *     _lambda_5096affdfa8dd9dd59ff190700218634_::_lambda_5096affdfa8dd9dd59ff190700218634_ @ 0x1800AEBD8 (_lambda_5096affdfa8dd9dd59ff190700218634_--_lambda_5096affdfa8dd9dd59ff190700218634_.c)
 *     _lambda_da08d54169002be5ece525bde89b0b7d_::_lambda_da08d54169002be5ece525bde89b0b7d_ @ 0x1800AEC78 (_lambda_da08d54169002be5ece525bde89b0b7d_--_lambda_da08d54169002be5ece525bde89b0b7d_.c)
 *     _lambda_e127833a80797c5d08a14d2b9986789f_::_lambda_e127833a80797c5d08a14d2b9986789f_ @ 0x1800AECD0 (_lambda_e127833a80797c5d08a14d2b9986789f_--_lambda_e127833a80797c5d08a14d2b9986789f_.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800BD260 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800BD260.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802B34A0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802B3A00 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802B3DC0 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18034D8B0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18034DA60 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18034E59C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18034EA00 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x180391A30 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
