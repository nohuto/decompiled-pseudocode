/*
 * XREFs of ?StartActivity@GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@KKAEBUtagRECT@@1@Z @ 0x180297EEC
 * Callers:
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x180296DD0 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800237B0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800518B8 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C048 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18016A4B0 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801732E8 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4444444444@Z @ 0x1802954DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2.c)
 */

void __fastcall TabViewManagerMeasures::GroupWindowTemplateAppliedToView::StartActivity(
        TabViewManagerMeasures::GroupWindowTemplateAppliedToView *this,
        struct IApplicationView *a2,
        int a3,
        int a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6)
{
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _DWORD *v12; // rdi
  const GUID *v13; // rax
  LONG right; // [rsp+98h] [rbp-9h] BYREF
  LONG top; // [rsp+9Ch] [rbp-5h] BYREF
  LONG left; // [rsp+A0h] [rbp-1h] BYREF
  LONG bottom; // [rsp+A4h] [rbp+3h] BYREF
  LONG v18; // [rsp+A8h] [rbp+7h] BYREF
  LONG v19; // [rsp+ACh] [rbp+Bh] BYREF
  LONG v20; // [rsp+B0h] [rbp+Fh] BYREF
  int v21; // [rsp+B4h] [rbp+13h] BYREF
  int v22; // [rsp+B8h] [rbp+17h] BYREF
  DWORD CurrentThreadId; // [rsp+BCh] [rbp+1Bh] BYREF
  const WCHAR *v24; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+C8h] [rbp+27h] BYREF
  LPVOID pv; // [rsp+D0h] [rbp+2Fh] BYREF
  __int64 v27; // [rsp+F8h] [rbp+57h] BYREF

  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v11 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
          v10,
          _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v12 = (_DWORD *)v11[1];
  if ( *v12 > 5u )
  {
    if ( tlgKeywordOn(v11[1], 0x200000000000LL) )
    {
      v21 = a4;
      v22 = a3;
      LODWORD(v27) = a6->bottom;
      right = a6->right;
      top = a6->top;
      left = a6->left;
      bottom = a5->bottom;
      v18 = a5->right;
      v19 = a5->top;
      v20 = a5->left;
      v24 = *(const WCHAR **)LoggingUtil::GetAppNameFromView(
                               (HWND)&pv,
                               (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
      v25 = 0LL;
      CurrentThreadId = GetCurrentThreadId();
      v13 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (unsigned __int8 *)dword_18050F6D2,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v13,
        (__int64)&v25,
        (__int64)&CurrentThreadId,
        &v24,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&bottom,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&v27);
      if ( pv )
        CoTaskMemFree(pv);
    }
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerMeasures::GroupWindowTemplateAppliedToView *)((char *)this + 8));
}
