/*
 * XREFs of ??$ViewToViewInstanceIdMapping@PEAUIShellView@Server@Navigation@@AEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAI@Z @ 0x18029A828
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18029DDF0 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180018994 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::ViewToViewInstanceIdMapping<Navigation::Server::IShellView *,unsigned int &>(
        __int64 *a1,
        int *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v6; // rcx
  _QWORD *v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  WINBOOL v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v7) && v9 )
  {
    v7 = qword_1805A0260;
    qword_1805A0260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0278 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0260, qword_1805A0278, v4);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805A0260);
  }
  result = (unsigned int)v7;
  v6 = (_DWORD *)v7[1];
  if ( *v6 > 5u )
  {
    v10 = *a2;
    v8 = *a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
             (__int64)v6,
             byte_1804E905D,
             0LL,
             0LL,
             (__int64)&v8,
             (__int64)&v10);
  }
  return result;
}
