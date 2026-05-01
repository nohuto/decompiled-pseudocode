/*
 * XREFs of ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18000F1E0
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800136E0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180010F7C (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A660 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004FB94 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008BD90 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@543@Z @ 0x18044FCC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U1@@-$_tlgWrit.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::StartActivity(
        SingleViewExperienceTelemetry::Show *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        void *a5)
{
  _DWORD *v9; // rdi
  _DWORD *v10; // rcx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // eax
  int v13; // eax
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v15; // ecx
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h] BYREF
  LPVOID v22; // [rsp+B0h] [rbp+30h] BYREF
  WINBOOL fPending; // [rsp+C8h] [rbp+48h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v11);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v21 = 0LL;
    v18 = (__int64)a5;
    LODWORD(v22) = a4;
    v19 = (__int64)a3;
    v20 = (__int64)a2;
    LODWORD(v16) = CurrentThreadId;
    v13 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)v9,
      (int)&dword_180500895,
      *((_QWORD *)this + 6) + 8,
      v13,
      (__int64)&v21,
      (__int64)&v16,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v22,
      (__int64)&v18);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::Show *)((char *)this + 8));
  if ( a4 != 2 )
  {
    v22 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &v22) && fPending )
    {
      v22 = qword_18059FFB8;
      qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v14);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
    }
    v10 = (_DWORD *)*((_QWORD *)v22 + 1);
    if ( *v10 > 5u )
    {
      if ( (unsigned __int8)tlgKeywordOn(v10, 0x400000000000LL) )
      {
        v21 = (__int64)a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v15,
          (int)&dword_180500290,
          (__int64)&v21);
      }
    }
  }
}
