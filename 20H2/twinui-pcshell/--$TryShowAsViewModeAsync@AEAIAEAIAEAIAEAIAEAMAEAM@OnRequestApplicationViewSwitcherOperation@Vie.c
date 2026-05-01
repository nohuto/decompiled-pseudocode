/*
 * XREFs of ??$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEAM1@Z @ 0x1802BB5DC
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802BFE68 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x1802BBD08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 */

LPVOID __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsViewModeAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,float &,float &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        float *a6,
        float *a7)
{
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID result; // rax
  _DWORD *v13; // r9
  int v14; // r8d
  int v15; // ecx
  int v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch] BYREF
  int v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+5Ch] [rbp-14h] BYREF
  int v20; // [rsp+60h] [rbp-10h] BYREF
  int v21; // [rsp+64h] [rbp-Ch] BYREF
  LPVOID Context; // [rsp+68h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+90h] [rbp+20h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC5B0;
    qword_1805CC5B0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC5C8 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC5B0, qword_1805CC5C8, v11);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CC5B0);
  }
  result = Context;
  v13 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v13 > 5u )
  {
    v14 = *(_QWORD *)(a1 + 48) + 8;
    v16 = (int)*a7;
    v17 = (int)*a6;
    v15 = *a5;
    v19 = *a4;
    v20 = *a3;
    v21 = *a2;
    v18 = v15;
    return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (_DWORD)v13,
                     (unsigned int)&unk_1805113E9,
                     v14,
                     (_DWORD)v13,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16);
  }
  return result;
}
