/*
 * XREFs of ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803FFEA0
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180400740 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x1803F2860 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803F7CD4 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceEvicted(
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  unsigned __int16 **v8; // r8
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v10; // r9
  const WCHAR *v11; // rcx
  LONG bottom; // [rsp+70h] [rbp-9h] BYREF
  LONG right; // [rsp+74h] [rbp-5h] BYREF
  LONG top; // [rsp+78h] [rbp-1h] BYREF
  LONG left; // [rsp+7Ch] [rbp+3h] BYREF
  LONG v16; // [rsp+80h] [rbp+7h] BYREF
  LONG v17; // [rsp+84h] [rbp+Bh] BYREF
  LONG v18; // [rsp+88h] [rbp+Fh] BYREF
  LONG v19; // [rsp+8Ch] [rbp+13h] BYREF
  _QWORD *v20; // [rsp+90h] [rbp+17h] BYREF
  const WCHAR *v21; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  __int64 v24; // [rsp+B0h] [rbp+37h] BYREF
  WINBOOL fPending; // [rsp+E0h] [rbp+67h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
  v22 = -1LL;
  v23 = -1LL;
  ApplicationViewTraceLoggingHelpers::GetViewName(a2, (struct IApplicationView *)&v21, v8);
  v20 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&v20)
    && fPending )
  {
    v20 = qword_1805CC298;
    qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
    qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v9);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
  }
  if ( *(_DWORD *)v20[1] > 5u && tlgKeywordOn(v20[1], 0x400000000000LL) )
  {
    bottom = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    v16 = a3->bottom;
    v17 = a3->right;
    v18 = a3->top;
    v19 = a3->left;
    v11 = &szAgent;
    if ( v21 )
      v11 = v21;
    v24 = (__int64)v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (unsigned __int8 *)dword_180522396,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v10,
      (const WCHAR **)&v24,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
}
