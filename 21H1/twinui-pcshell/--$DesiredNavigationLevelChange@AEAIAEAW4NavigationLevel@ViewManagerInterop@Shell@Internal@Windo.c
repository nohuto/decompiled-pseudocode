/*
 * XREFs of ??$DesiredNavigationLevelChange@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@AEAW412345@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@1@Z @ 0x1802A9DE4
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802AE864 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18004F128 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::DesiredNavigationLevelChange<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
        int *a1,
        int *a2,
        int *a3)
{
  __int64 v6; // r9
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v9; // rcx
  int v10; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+44h] [rbp-1Ch] BYREF
  int v12; // [rsp+48h] [rbp-18h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-10h] BYREF
  WINBOOL fPending; // [rsp+98h] [rbp+38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805A0260;
    qword_1805A0260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0278 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0260, qword_1805A0278, v7);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805A0260);
  }
  result = (unsigned int)Context;
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u )
  {
    v10 = *a3;
    v11 = *a2;
    v12 = *a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (__int64)v9,
             byte_1804EBD70,
             0LL,
             v6,
             (__int64)&v12,
             (__int64)&v11,
             (__int64)&v10);
  }
  return result;
}
