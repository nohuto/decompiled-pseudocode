/*
 * XREFs of ?StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802305C4
 * Callers:
 *     ?_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32ApplicationView@@_N@Z @ 0x180232FE4 (-_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32App.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015DD0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A660 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008BD90 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ??$com_query_failfast@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIWin32ApplicationView@@@Z @ 0x18009C750 (--$com_query_failfast@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA-AV-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x180169038 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x18023427C (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 *     ?zInternalStart@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802359A4 (-zInternalStart@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::SendViewToDesktop::StartActivity(
        Win32BackedViewHostItemTelemetry::SendViewToDesktop *this,
        struct IWin32ApplicationView *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, LPVOID *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rbx
  const GUID *v9; // rax
  LPVOID pv; // [rsp+50h] [rbp-20h] BYREF
  HWND hWnd; // [rsp+58h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp-8h] BYREF
  __int64 v14; // [rsp+98h] [rbp+28h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  v14 = (__int64)a2;
  hWnd = 0LL;
  if ( (*(int (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &hWnd) >= 0 )
  {
    pv = 0LL;
    v3 = wil::com_query_failfast<IApplicationView,IWin32ApplicationView * &>((__int64)&v15, &v14);
    v4 = *(_QWORD *)v3;
    v5 = *(int (__fastcall **)(__int64, LPVOID *))(**(_QWORD **)v3 + 136LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    LOBYTE(v5) = v5(v4, &pv) >= 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    if ( (_BYTE)v5 )
    {
      wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(this);
      v7 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
             v6,
             _lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
      v8 = *(_DWORD **)(v7 + 8);
      if ( *v8 > 5u && tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x200000000000LL) )
      {
        LODWORD(v14) = IsWindowVisible(hWnd);
        LODWORD(v15) = (_DWORD)hWnd;
        v12 = (__int64)pv;
        LODWORD(v16) = GetCurrentThreadId();
        v13 = 0x2000000LL;
        v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)v8,
          (unsigned __int8 *)dword_1804E1B71,
          (const GUID *)(*((_QWORD *)this + 6) + 8LL),
          v9,
          (__int64)&v13,
          (__int64)&v16,
          (const WCHAR **)&v12,
          (__int64)&v15,
          (__int64)&v14);
      }
      if ( !*((_DWORD *)this + 8) )
        wil::details::ThreadFailureCallbackHolder::StartWatching((Win32BackedViewHostItemTelemetry::SendViewToDesktop *)((char *)this + 8));
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
}
