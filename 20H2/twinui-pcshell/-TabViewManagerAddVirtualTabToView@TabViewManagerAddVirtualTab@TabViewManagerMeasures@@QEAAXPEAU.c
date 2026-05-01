/*
 * XREFs of ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027C374
 * Callers:
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18026BA70 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800518B8 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18016A4B0 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1802659A0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTem.c)
 *     LoggingUtil::GetGroupIdFromTab @ 0x18026F608 (LoggingUtil--GetGroupIdFromTab.c)
 *     LoggingUtil::GetGroupSizeFromTab @ 0x18026F664 (LoggingUtil--GetGroupSizeFromTab.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026FFBC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::TabViewManagerAddVirtualTabToView(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  _QWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // [rsp+40h] [rbp-39h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  __int64 v11; // [rsp+50h] [rbp-29h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-19h] BYREF
  GUID v14; // [rsp+68h] [rbp-11h] BYREF
  struct _GUID v15; // [rsp+78h] [rbp-1h] BYREF
  GUID v16; // [rsp+88h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+98h] [rbp+1Fh] BYREF

  v6 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u && tlgKeywordOn(v6[1], 0x400000000000LL) )
  {
    v16 = *LoggingUtil::GetGroupIdFromTab(&v14, (__int64)a3);
    v17 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v15, a3);
    v10 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&pv, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    LODWORD(v9) = LoggingUtil::GetGroupSizeFromTab((__int64)a3);
    v11 = (__int64)&v16;
    v12 = (__int64)&v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v7,
      (unsigned __int8 *)dword_18050B789,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v8,
      &v12,
      &v11,
      (__int64)&v9,
      (const WCHAR **)&v10);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
