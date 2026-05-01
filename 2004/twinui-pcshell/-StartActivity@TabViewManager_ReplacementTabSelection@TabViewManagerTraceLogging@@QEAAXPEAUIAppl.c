/*
 * XREFs of ?StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180278794
 * Callers:
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18027E2A0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002AEA0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005F678 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C450 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18016A6D0 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1802677B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U-$_tlgWrapper.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802708AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180281E78 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  const GUID *v11; // rax
  unsigned int v12; // [rsp+50h] [rbp-41h] BYREF
  DWORD CurrentThreadId; // [rsp+54h] [rbp-3Dh] BYREF
  __int64 v14; // [rsp+58h] [rbp-39h] BYREF
  __int64 v15; // [rsp+60h] [rbp-31h] BYREF
  __int64 v16; // [rsp+68h] [rbp-29h] BYREF
  __int64 v17; // [rsp+70h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-19h] BYREF
  LPVOID v19; // [rsp+80h] [rbp-11h] BYREF
  struct _GUID v20; // [rsp+88h] [rbp-9h] BYREF
  __int128 v21; // [rsp+98h] [rbp+7h] BYREF

  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v10 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                    v9,
                    _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 4u )
  {
    v21 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v20, a4);
    v14 = (__int64)&v21;
    v12 = a5;
    v15 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&v19, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a3);
    v16 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&pv, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    CurrentThreadId = GetCurrentThreadId();
    v17 = 0LL;
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      (__int64)v10,
      (unsigned __int8 *)dword_18050E97A,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v11,
      (__int64)&v17,
      (__int64)&CurrentThreadId,
      (const WCHAR **)&v16,
      (const WCHAR **)&v15,
      (__int64)&v12,
      &v14);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v19 )
      CoTaskMemFree(v19);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection *)((char *)this + 8));
}
