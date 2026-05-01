/*
 * XREFs of ??$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEA_K@Z @ 0x18029A1E4
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18029EBB8 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801E62AC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsStandaloneAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 *a6)
{
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v12; // r9
  const GUID *v13; // r8
  int v14; // ecx
  int v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+54h] [rbp-1Ch] BYREF
  int v17; // [rsp+58h] [rbp-18h] BYREF
  int v18; // [rsp+5Ch] [rbp-14h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-10h] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+90h] [rbp+20h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805A0260;
    qword_1805A0260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0278 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0260, qword_1805A0278, v10);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805A0260);
  }
  result = (unsigned int)Context;
  v12 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v12 > 5u )
  {
    v13 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    v20 = *a6;
    v14 = *a5;
    v16 = *a4;
    v17 = *a3;
    v18 = *a2;
    v15 = v14;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
             (__int64)v12,
             byte_1804E8FC3,
             v13,
             (__int64)v12,
             (__int64)&v18,
             (__int64)&v17,
             (__int64)&v16,
             (__int64)&v15,
             (__int64)&v20);
  }
  return result;
}
