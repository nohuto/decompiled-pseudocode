/*
 * XREFs of _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x18028D890
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc___::Run @ 0x1802900A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802686A8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18026991C (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026DB18 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180278174 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x18028E11C (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?StartActivity@TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@U_GUID@@@Z @ 0x18029045C (-StartActivity@TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@U_GUID@.c)
 *     ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802913CC (-ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_63df1022615e5d58b392f54f931127cc_::operator()(_DWORD *a1)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v3; // rbx
  int v4; // edx
  struct _GUID v5; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v6; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v7[40]; // [rsp+48h] [rbp-C0h] BYREF

  v2 = a1[4];
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"TabViewManager_NewViewForTab");
  v7[0] = &TabViewManagerTraceLogging::TabViewManager_NewViewForTab::`vftable';
  v5 = *(struct _GUID *)(a1 + 5);
  TabViewManagerTraceLogging::TabViewManager_NewViewForTab::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_NewViewForTab *)v7,
    (HWND)v2,
    &v5);
  v3 = (RTL_SRWLOCK *)(*(_QWORD *)a1 + 48LL);
  AcquireSRWLockExclusive(v3);
  *(_QWORD *)&v5.Data1 = v3;
  v6 = *(_OWORD *)(a1 + 5);
  TabTransferManager::ValidateTabId(*(_QWORD *)a1, &v6);
  *(_DWORD *)(*(_QWORD *)a1 + 280LL) = ~a1[4];
  TabTransferManager::AdvanceTransfer(*(_QWORD *)a1, 2LL);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7, v4);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v7[0] = &TabViewManagerTraceLogging::TabViewManager_NewViewForTab::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v7);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
}
