/*
 * XREFs of ?ViewDidNotMatchTemplate@GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAAXAEBUtagRECT@@0NPEAUIApplicationView@@@Z @ 0x180277498
 * Callers:
 *     ?IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplateAppliedToView@TabViewManagerMeasures@@@Z @ 0x180275848 (-IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005EC48 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180146150 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444444AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18027400C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$07@.c)
 */

void __fastcall TabViewManagerMeasures::GroupWindowTemplateAppliedToView::ViewDidNotMatchTemplate(
        TabViewManagerMeasures::GroupWindowTemplateAppliedToView *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        double a4,
        struct IApplicationView *a5)
{
  _QWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 *AppNameFromView; // rax
  const GUID *v11; // r8
  __int64 v12; // r9
  LONG right; // [rsp+70h] [rbp-1h] BYREF
  LONG top; // [rsp+74h] [rbp+3h] BYREF
  LONG left; // [rsp+78h] [rbp+7h] BYREF
  LONG bottom; // [rsp+7Ch] [rbp+Bh] BYREF
  LONG v17; // [rsp+80h] [rbp+Fh] BYREF
  LONG v18; // [rsp+84h] [rbp+13h] BYREF
  LONG v19; // [rsp+88h] [rbp+17h] BYREF
  __int64 v20; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+98h] [rbp+27h] BYREF
  LPVOID pv[2]; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v24; // [rsp+E8h] [rbp+77h]

  v24 = *(_QWORD *)&a4;
  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 3u && tlgKeywordOn(v8[1], 0x400000000000LL) )
  {
    v20 = v24;
    LODWORD(v23) = a3->bottom;
    right = a3->right;
    top = a3->top;
    left = a3->left;
    bottom = a2->bottom;
    v17 = a2->right;
    v18 = a2->top;
    v19 = a2->left;
    AppNameFromView = (__int64 *)LoggingUtil::GetAppNameFromView(
                                   (HWND)pv,
                                   (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a5);
    v11 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    v21 = *AppNameFromView;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v9,
      (unsigned __int8 *)dword_1804E72E8,
      v11,
      v12,
      (const WCHAR **)&v21,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&bottom,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v23,
      (__int64)&v20);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}
