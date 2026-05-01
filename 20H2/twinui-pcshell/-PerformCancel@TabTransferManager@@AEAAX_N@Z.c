/*
 * XREFs of ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x18028F130
 * Callers:
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x18028D3A8 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x18028E11C (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29b1e61fd492fda99432971a022098a6___::Run @ 0x18028FFA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_29b1e61fd492fda99432971a022098a6___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6173185157cfb5f97cdb06cbbf229380___::Run @ 0x180290020 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6173185157cfb5f97cdb06cbbf229380___--Run.c)
 *     ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802913CC (-ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802686A8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18026991C (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026DB18 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180278174 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18028F274 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?ResetTransferState@TabTransferManager@@AEAAXXZ @ 0x18028FEC8 (-ResetTransferState@TabTransferManager@@AEAAXXZ.c)
 *     ?StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x180290578 (-StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabTransferManager::PerformCancel(TabTransferManager *this, char a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // edx
  struct _GUID v8; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v9[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v4 = (__int64 *)*((_QWORD *)this + 11);
  v5 = *v4;
  v8 = (struct _GUID)*((_OWORD *)this + 12);
  v6 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *))(v5 + 80))(v4, &v8);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      419LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( (*((_BYTE *)this + 284) & 1) != 0 )
  {
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v9,
      (__int64)"TabViewManager_TabTransferCanceled");
    v9[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::`vftable';
    v8 = (struct _GUID)*((_OWORD *)this + 12);
    TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::StartActivity(
      (TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled *)v9,
      &v8);
    *((_BYTE *)this + 254) = 1;
    if ( a2 || (*((_DWORD *)this + 71) & 0x300) != 0x100 )
      TabTransferManager::PerformComplete(this);
    wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9, v7);
    v9[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::`vftable';
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v9);
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  }
  else
  {
    TabTransferManager::ResetTransferState(this);
  }
}
