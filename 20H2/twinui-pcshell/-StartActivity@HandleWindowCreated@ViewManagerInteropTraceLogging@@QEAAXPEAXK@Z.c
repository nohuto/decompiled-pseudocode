/*
 * XREFs of ?StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z @ 0x1802A5F98
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1802AB8A0 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800237B0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800793C0 (-zInternalStart@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C048 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@34@Z @ 0x180266A30 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall ViewManagerInteropTraceLogging::HandleWindowCreated::StartActivity(
        ViewManagerInteropTraceLogging::HandleWindowCreated *this,
        void *a2,
        int a3)
{
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  DWORD v10; // [rsp+40h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-18h] BYREF
  void *v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC5B0;
    qword_1805CC5B0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC5C8 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC5B0, qword_1805CC5C8, v6);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CC5B0);
  }
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v7 > 5u )
  {
    v15 = a3;
    v12 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v13 = 0LL;
    v10 = CurrentThreadId;
    v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_1805103AD,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v9,
      (__int64)&v13,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v15);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ViewManagerInteropTraceLogging::HandleWindowCreated *)((char *)this + 8));
}
