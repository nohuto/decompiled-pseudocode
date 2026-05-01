/*
 * XREFs of ?HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@AEBU_GUID@@@Z @ 0x18027077C
 * Callers:
 *     ??$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@AEAU_GUID@@@TabViewManagerMeasures@@SAX$$QEAI$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@AEAU_GUID@@@Z @ 0x180270468 (--$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUI.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005EC48 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024EC2C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerMeasures::HotKeyHandlerMessageReceived_(
        TabViewManagerMeasures *this,
        int a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4,
        const struct _GUID *a5)
{
  _QWORD *v8; // rax
  _DWORD *v9; // rbx
  struct _GUID *ShellTabGroupId; // rax
  struct _GUID v11; // xmm0
  int v12; // [rsp+30h] [rbp-81h] BYREF
  struct _GUID v13; // [rsp+38h] [rbp-79h] BYREF
  struct _GUID v14; // [rsp+48h] [rbp-69h] BYREF
  __int128 v15; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v16; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-31h] BYREF
  int *v18; // [rsp+A0h] [rbp-11h]
  int v19; // [rsp+A8h] [rbp-9h]
  int v20; // [rsp+ACh] [rbp-5h]
  struct _GUID *v21; // [rsp+B0h] [rbp-1h]
  int v22; // [rsp+B8h] [rbp+7h]
  int v23; // [rsp+BCh] [rbp+Bh]
  __int128 *v24; // [rsp+C0h] [rbp+Fh]
  int v25; // [rsp+C8h] [rbp+17h]
  int v26; // [rsp+CCh] [rbp+1Bh]
  const struct _GUID *v27; // [rsp+D0h] [rbp+1Fh]
  int v28; // [rsp+D8h] [rbp+27h]
  int v29; // [rsp+DCh] [rbp+2Bh]

  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 5u )
  {
    if ( tlgKeywordOn(v8[1], 0x400000000000LL) )
    {
      v15 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v13, a4);
      ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v14, a3);
      v29 = 0;
      v26 = 0;
      v23 = 0;
      v11 = *ShellTabGroupId;
      v20 = 0;
      v27 = a5;
      v24 = &v15;
      v21 = &v16;
      v18 = &v12;
      v28 = 16;
      v25 = 16;
      v22 = 16;
      v16 = v11;
      v12 = a2;
      v19 = 4;
      tlgWriteTransfer_EventWriteTransfer((__int64)v9, (unsigned __int8 *)dword_1804E713D, 0LL, 0LL, 6u, &v17);
    }
  }
}
