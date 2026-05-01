/*
 * XREFs of ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803DF000
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1803DF3C4 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180113D80 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x1803D2398 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803D7218 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewPositionAdjusted(
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  unsigned __int16 **v8; // r8
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v10; // r9
  const WCHAR *v11; // rcx
  __int64 v12; // r8
  LONG bottom; // [rsp+70h] [rbp-9h] BYREF
  LONG right; // [rsp+74h] [rbp-5h] BYREF
  LONG top; // [rsp+78h] [rbp-1h] BYREF
  LONG left; // [rsp+7Ch] [rbp+3h] BYREF
  LONG v17; // [rsp+80h] [rbp+7h] BYREF
  LONG v18; // [rsp+84h] [rbp+Bh] BYREF
  LONG v19; // [rsp+88h] [rbp+Fh] BYREF
  LONG v20; // [rsp+8Ch] [rbp+13h] BYREF
  LPVOID v21; // [rsp+90h] [rbp+17h] BYREF
  const WCHAR *v22; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v23; // [rsp+A0h] [rbp+27h]
  __int64 v24; // [rsp+A8h] [rbp+2Fh]
  __int64 v25; // [rsp+B0h] [rbp+37h] BYREF
  WINBOOL fPending; // [rsp+E0h] [rbp+67h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
  v23 = -1LL;
  v24 = -1LL;
  ApplicationViewTraceLoggingHelpers::GetViewName(a2, (struct IApplicationView *)&v22, v8);
  v21 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &v21) && fPending )
  {
    v21 = &qword_18059FF68;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18059FF68);
    qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
    qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v9);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
  }
  if ( **((_DWORD **)v21 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v21 + 1), 0x400000000000LL) )
  {
    v11 = &word_1804BE2A8;
    v12 = *((_QWORD *)this + 6);
    bottom = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    v17 = a3->bottom;
    v18 = a3->right;
    v19 = a3->top;
    v20 = a3->left;
    if ( v22 )
      v11 = v22;
    v25 = (__int64)v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (unsigned __int8 *)dword_1804F9FE8,
      (const GUID *)(v12 + 8),
      v10,
      (const WCHAR **)&v25,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
}
