/*
 * XREFs of ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18026C374
 * Callers:
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::operator() @ 0x18026AA30 (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--operator().c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180272420 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180166DE8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016D730 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ @ 0x18026A0C8 (--1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18026C4CC (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18026FB2C (-GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@.c)
 *     ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802761A0 (-RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 *     ?StartActivity@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXXZ @ 0x1802772B4 (-StartActivity@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXXZ.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x18027C5D4 (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 */

__int64 __fastcall TabViewManager::CloseTab(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        struct IApplicationView *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // edx
  unsigned int NumTabsInGroupForView; // ebx
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"TabViewManagerCloseTab");
  v14[0] = &TabViewManagerMeasures::TabViewManagerCloseTab::`vftable';
  TabViewManagerMeasures::TabViewManagerCloseTab::StartActivity((TabViewManagerMeasures::TabViewManagerCloseTab *)v14);
  v6 = *(_QWORD *)a2;
  v13[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(v6 + 168))(
         a2,
         v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (int)v13[0];
    if ( v13[0] )
    {
      NumTabsInGroupForView = TabViewManager::GetNumTabsInGroupForView(this, v13[0], a3);
      TabViewManagerMeasures::TabViewManagerCloseTab::TabViewManagerClosingTab(
        (TabViewManagerMeasures::TabViewManagerCloseTab *)v14,
        a3,
        v13[0],
        a2,
        NumTabsInGroupForView);
      if ( NumTabsInGroupForView <= 1 )
      {
        if ( NumTabsInGroupForView == 1 )
        {
          v7 = TabViewManager::CloseView(this, a3);
          v8 = v7;
          if ( v7 < 0 )
          {
            v9 = 3460LL;
            goto LABEL_7;
          }
        }
      }
      else
      {
        v7 = TabViewManager::RemoveVirtualTab((TabViewManager *)((char *)this + 160), a2);
        v8 = v7;
        if ( v7 < 0 )
        {
          v9 = 3456LL;
          goto LABEL_7;
        }
      }
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v14,
      v10);
    v8 = 0;
    goto LABEL_12;
  }
  v9 = 3444LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v7);
LABEL_12:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v13);
  TabViewManagerMeasures::TabViewManagerCloseTab::~TabViewManagerCloseTab((TabViewManagerMeasures::TabViewManagerCloseTab *)v14);
  return v8;
}
