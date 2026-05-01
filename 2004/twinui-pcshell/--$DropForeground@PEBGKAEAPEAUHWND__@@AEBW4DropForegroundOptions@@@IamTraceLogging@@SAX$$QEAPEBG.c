/*
 * XREFs of ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x18018760C
 * Callers:
 *     _lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator() @ 0x180189630 (_lambda_6bdb0a767824ae94d9b9ef25c3406932_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1801880B0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTempl.c)
 */

LPVOID __fastcall IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
        __int64 *a1,
        int *a2,
        __int64 *a3,
        int *a4)
{
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID result; // rax
  _DWORD *v10; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+44h] [rbp-2Ch] BYREF
  int v13; // [rsp+48h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD110;
    qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v8);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
  }
  result = Context;
  v10 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v10 > 5u )
  {
    v12 = *a4;
    v15 = *a3;
    v13 = *a2;
    v16 = *a1;
    return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     (int)v10,
                     (int)&dword_1804FC0B5,
                     (__int64)&v16,
                     (__int64)&v13,
                     (__int64)&v15,
                     (__int64)&v12);
  }
  return result;
}
