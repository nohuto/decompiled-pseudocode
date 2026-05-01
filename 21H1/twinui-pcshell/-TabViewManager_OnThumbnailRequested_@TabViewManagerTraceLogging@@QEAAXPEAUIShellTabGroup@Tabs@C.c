/*
 * XREFs of ?TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18025BB30
 * Callers:
 *     ??$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@@Z @ 0x180243FC8 (--$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005EC48 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x1801B836C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024EC2C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnThumbnailRequested_(
        TabViewManagerTraceLogging *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  _DWORD *v5; // rbx
  __int128 v6; // xmm0
  __int64 v7; // r9
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  struct _GUID v10; // [rsp+40h] [rbp-58h] BYREF
  struct _GUID v11; // [rsp+50h] [rbp-48h] BYREF
  __int128 v12; // [rsp+60h] [rbp-38h] BYREF
  __int128 v13; // [rsp+70h] [rbp-28h] BYREF

  v5 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    v12 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v10, a3);
    v6 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v11, a2);
    v8 = (__int64)&v12;
    v9 = (__int64)&v13;
    v13 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
      (__int64)v5,
      byte_1804E5D00,
      0LL,
      v7,
      &v9,
      &v8);
  }
}
