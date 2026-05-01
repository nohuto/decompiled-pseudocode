/*
 * XREFs of ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x18005E318
 * Callers:
 *     _lambda_3d1fcc114f22629400696f1d7422949c_::operator() @ 0x18005DCD8 (_lambda_3d1fcc114f22629400696f1d7422949c_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18005E3E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

LPVOID __fastcall ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  int v8; // r8d
  int v9; // r9d
  LPVOID result; // rax
  _DWORD *v11; // rcx
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+44h] [rbp-1Ch] BYREF
  int v15; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+4Ch] [rbp-14h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD530;
    qword_1805CD530[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD548 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD530, qword_1805CD548, v12);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CD530);
  }
  result = Context;
  v11 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v11 > 5u )
  {
    v14 = *a4;
    v15 = *a3;
    v18 = *a2;
    v16 = *a1;
    return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (_DWORD)v11,
                     (unsigned int)&unk_180514A38,
                     v8,
                     v9,
                     (__int64)&v16,
                     (__int64)&v18,
                     (__int64)&v15,
                     (__int64)&v14);
  }
  return result;
}
