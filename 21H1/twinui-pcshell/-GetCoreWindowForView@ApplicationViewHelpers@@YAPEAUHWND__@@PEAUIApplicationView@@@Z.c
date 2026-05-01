/*
 * XREFs of ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180070C98
 * Callers:
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002AFF0 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180184DC0 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x18024B30C (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 *     LoggingUtil::GetViewIdFromView @ 0x18024F2F4 (LoggingUtil--GetViewIdFromView.c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180251090 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x18025CCA8 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabM_ea_18025CCA8.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18025D400 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 *     ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x18025EAA4 (-ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@.c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x18026C008 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18026DED4 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180276CF8 (-StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetCoreWindowForView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  __int64 (__fastcall **v2)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+48h] [rbp+18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF

  v2 = *this;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v3 = (*v2)((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v11);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v12);
    v3 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v4);
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  if ( v3 >= 0 )
  {
    v11 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 24LL))(
           v12,
           1LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v11) >= 0 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, &v13);
    v6 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = v12;
  v8 = v13;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v8;
}
