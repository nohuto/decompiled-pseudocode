/*
 * XREFs of ?TabViewManager_RecoverTabForWindow@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18027CF94
 * Callers:
 *     _lambda_63ca7660cb234c8b240bf7ee4218e0e9_::operator() @ 0x18026A6EC (_lambda_63ca7660cb234c8b240bf7ee4218e0e9_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004A580 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800518B8 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::TabViewManager_RecoverTabForWindow(
        TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups *this,
        HWND a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  HWND v9; // [rsp+58h] [rbp+20h] BYREF

  GetWindowGroupId(a2, &v7);
  v5 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   v4,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    v6 = *((_QWORD *)this + 6);
    v8 = v7;
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_18050E50B,
      (const GUID *)(v6 + 8),
      0LL,
      (__int64)&v9,
      (__int64)&v8);
  }
}
