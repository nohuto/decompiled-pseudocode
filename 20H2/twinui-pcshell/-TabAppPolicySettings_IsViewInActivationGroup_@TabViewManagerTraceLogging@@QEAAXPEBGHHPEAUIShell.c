/*
 * XREFs of ?TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180283CD8
 * Callers:
 *     ??$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAGAEAH$$QEAH$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@Z @ 0x180282DB4 (--$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180041DB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800518B8 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x180168694 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026FFBC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180282EA0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperB.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup_(
        TabViewManagerTraceLogging *this,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a5,
        bool a6)
{
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  void *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // [rsp+58h] [rbp-19h] BYREF
  int v15; // [rsp+5Ch] [rbp-15h] BYREF
  __int64 v16; // [rsp+60h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-9h] BYREF
  __int64 v18; // [rsp+70h] [rbp-1h] BYREF
  __int64 v19; // [rsp+78h] [rbp+7h] BYREF
  struct _GUID v20; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v21; // [rsp+90h] [rbp+1Fh] BYREF

  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)&pv);
  v10 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                    v9,
                    _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  v11 = pv;
  if ( *v10 > 4u )
  {
    v21 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v20, a5);
    v14 = a6;
    v18 = (__int64)&v21;
    v15 = a3;
    LODWORD(v16) = a4;
    v19 = (__int64)v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
      (__int64)v10,
      (unsigned __int8 *)dword_18050EBB1,
      v12,
      v13,
      (const WCHAR **)&v19,
      (__int64)&v16,
      (__int64)&v15,
      &v18,
      (__int64)&v14);
  }
  if ( v11 )
    CoTaskMemFree(v11);
}
