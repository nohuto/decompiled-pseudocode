/*
 * XREFs of ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x180278020
 * Callers:
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18027F4E8 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800237B0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800518B8 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C048 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026FFBC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802702D8 (LoggingUtil--GetTabGroupSize.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802815FC (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  const GUID *v8; // rax
  const GUID *v9; // r8
  int TabGroupSize; // [rsp+30h] [rbp-99h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-95h] BYREF
  __int64 v12; // [rsp+38h] [rbp-91h] BYREF
  struct _GUID v13; // [rsp+40h] [rbp-89h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-79h] BYREF
  __int128 v15; // [rsp+60h] [rbp-69h] BYREF
  __int128 v16; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-49h] BYREF
  __int64 *v18; // [rsp+A0h] [rbp-29h]
  int v19; // [rsp+A8h] [rbp-21h]
  int v20; // [rsp+ACh] [rbp-1Dh]
  DWORD *p_CurrentThreadId; // [rsp+B0h] [rbp-19h]
  int v22; // [rsp+B8h] [rbp-11h]
  int v23; // [rsp+BCh] [rbp-Dh]
  __int128 *v24; // [rsp+C0h] [rbp-9h]
  int v25; // [rsp+C8h] [rbp-1h]
  int v26; // [rsp+CCh] [rbp+3h]
  int *p_TabGroupSize; // [rsp+D0h] [rbp+7h]
  int v28; // [rsp+D8h] [rbp+Fh]
  int v29; // [rsp+DCh] [rbp+13h]
  __int128 *v30; // [rsp+E0h] [rbp+17h]
  int v31; // [rsp+E8h] [rbp+1Fh]
  int v32; // [rsp+ECh] [rbp+23h]

  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   v6,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v15 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v13, a3);
    v16 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v14, a2);
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64 *)a2);
    v12 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v30 = &v15;
    v31 = 16;
    p_TabGroupSize = &TabGroupSize;
    v24 = &v16;
    p_CurrentThreadId = &CurrentThreadId;
    v18 = &v12;
    v25 = 16;
    v9 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    v28 = 4;
    v22 = 4;
    v19 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_18050CB32, v9, v8, 7u, &v17);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *)((char *)this + 8));
}
