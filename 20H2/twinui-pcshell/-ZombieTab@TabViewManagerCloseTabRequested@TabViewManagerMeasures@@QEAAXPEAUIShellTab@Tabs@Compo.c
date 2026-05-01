/*
 * XREFs of ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180280610
 * Callers:
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180272420 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800518B8 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026FFBC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::ZombieTab(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rbx
  struct _GUID *ShellTabGroupId; // rax
  __int64 v7; // r8
  struct _GUID v8; // xmm0
  struct _GUID v9; // [rsp+30h] [rbp-68h] BYREF
  struct _GUID v10; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-48h] BYREF
  struct _GUID *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    if ( tlgKeywordOn(v4[1], 0x400000000000LL) )
    {
      ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v9, a2);
      v7 = *((_QWORD *)this + 6);
      v14 = 0;
      v13 = 16;
      v8 = *ShellTabGroupId;
      v12 = &v10;
      v10 = v8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v5,
        (unsigned __int8 *)dword_18050BFA0,
        (const GUID *)(v7 + 8),
        0LL,
        3u,
        &v11);
    }
  }
}
