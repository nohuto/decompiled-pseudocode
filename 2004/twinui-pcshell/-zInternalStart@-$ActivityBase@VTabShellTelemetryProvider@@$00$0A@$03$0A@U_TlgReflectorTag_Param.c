/*
 * XREFs of ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180281E78
 * Callers:
 *     ?StartActivity@TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180277E54 (-StartActivity@TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@.c)
 *     ?StartActivity@TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180277F44 (-StartActivity@TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationV.c)
 *     ?StartActivity@TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180278034 (-StartActivity@TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180278794 (-StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIAppl.c)
 *     ?StartActivity@TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@U_GUID@@@Z @ 0x180290D4C (-StartActivity@TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@U_GUID@.c)
 *     ?StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x180290E68 (-StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x180290F1C (-StartActivity@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x180290FD0 (-StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005F678 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18016B5E8 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                    v3,
                    _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1] <= 4u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
