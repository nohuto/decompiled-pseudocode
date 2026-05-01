/*
 * XREFs of ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180272420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800243D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088A68 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801409F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180166DE8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016D730 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_92d3fc369c3cea5b70dbdb6349205bce___ @ 0x1802648F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_92d3fc369c3cea5b70dbdb6349205bce___.c)
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::_lambda_92d3fc369c3cea5b70dbdb6349205bce_ @ 0x18026858C (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--_lambda_92d3fc369c3cea5b70dbdb6349205bce_.c)
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::__lambda_92d3fc369c3cea5b70dbdb6349205bce_ @ 0x1802698D8 (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--__lambda_92d3fc369c3cea5b70dbdb6349205bce_.c)
 *     ??1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x18026A0F4 (--1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18026C374 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180275F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180275F60.c)
 *     ?StartActivity@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXXZ @ 0x180277360 (-StartActivity@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXXZ.c)
 *     ?Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z @ 0x180278664 (-Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027E878 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180280610 (-ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 */

__int64 __fastcall TabViewManager::OnCloseTabRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **); // rbx
  int v6; // eax
  int v7; // ebx
  struct IApplicationView *v8; // rdx
  ApplicationViewHelpers *v9; // rbx
  int v10; // eax
  int v11; // edx
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  volatile int *v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v21; // [rsp+30h] [rbp-D0h] BYREF
  ApplicationViewHelpers *v22; // [rsp+38h] [rbp-C8h] BYREF
  TabViewManager *v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 CoreWindowForView; // [rsp+48h] [rbp-B8h] BYREF
  void **v25; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[24]; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+70h] [rbp-90h]
  __int64 v28[44]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v25,
    (__int64)"TabViewManagerCloseTabRequested");
  v25 = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::StartActivity((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v25);
  v21 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v21);
  v6 = v5(a3, &v21);
  v7 = v6;
  if ( v6 >= 0 )
  {
    TabViewManager::TryGetViewForTab(this, &v22, v21);
    v9 = v22;
    if ( v22 )
    {
      CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v22,
                            v8);
      if ( CoreWindowForView )
      {
        v23 = this;
        if ( this )
        {
          v15 = *((_QWORD *)this + 30);
          while ( v15 >= 0 )
          {
            if ( (_DWORD)v15 != 0x7FFFFFFF )
            {
              v16 = v15;
              v15 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 30, v15 + 1, v15);
              if ( v16 != v15 )
                continue;
            }
            goto LABEL_17;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
            (Microsoft::WRL::Details *)(2 * v15 + 16),
            v14);
        }
LABEL_17:
        v17 = (_QWORD *)lambda_92d3fc369c3cea5b70dbdb6349205bce_::_lambda_92d3fc369c3cea5b70dbdb6349205bce_(
                          (__int64)v28,
                          &v23,
                          (__int64 *)&v22,
                          (__int64 *)&v21,
                          &CoreWindowForView);
        v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_92d3fc369c3cea5b70dbdb6349205bce___(
               v19,
               v18,
               *((_DWORD *)this + 356),
               v17);
        lambda_92d3fc369c3cea5b70dbdb6349205bce_::__lambda_92d3fc369c3cea5b70dbdb6349205bce_(v28);
        if ( v23 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabDragHandler,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v23);
        if ( v7 < 0 )
        {
          v13 = (unsigned int)v7;
          v12 = 2571LL;
          goto LABEL_7;
        }
        if ( v27 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v26);
      }
      else
      {
        v10 = TabViewManager::CloseTab(this, v21, v9);
        v7 = v10;
        if ( v10 < 0 )
        {
          v12 = 2577LL;
          goto LABEL_6;
        }
        TabViewManagerMeasures::TabViewManagerCloseTabRequested::Stop(
          (TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v25,
          0);
      }
    }
    else
    {
      TabViewManagerMeasures::TabViewManagerCloseTabRequested::ZombieTab(
        (TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v25,
        v21);
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(**((_QWORD **)this + 151) + 80LL))(
              *((_QWORD *)this + 151),
              v21);
      v7 = v10;
      if ( v10 < 0 )
      {
        v12 = 2524LL;
LABEL_6:
        v13 = (unsigned int)v10;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)v13);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
        goto LABEL_27;
      }
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)&v25,
        v11);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    v7 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D3,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v6);
LABEL_27:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::~TabViewManagerCloseTabRequested((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v25);
  return (unsigned int)v7;
}
