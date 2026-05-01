/*
 * XREFs of ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180081610
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180015C24 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800489CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180144BBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 */

void __fastcall SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StopActivity(
        SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  _DWORD *v5; // rdi
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // edx
  int v15; // [rsp+A0h] [rbp-80h] BYREF
  int v16; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v17; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID v18; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v28[6]; // [rsp+100h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v30; // [rsp+148h] [rbp+28h] BYREF
  __int64 v31; // [rsp+150h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    v18 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &v18) && fPending )
    {
      v18 = &qword_1805CC2E8;
      qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
      qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v6);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
    }
    v7 = (_DWORD *)*((_QWORD *)v18 + 1);
    if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
    {
      v9 = *((_QWORD *)v4 + 14);
      v10 = *((_QWORD *)this + 6);
      v19 = 0LL;
      v20 = v9;
      v21 = *((_QWORD *)v4 + 13);
      LODWORD(v30) = v4[24];
      v22 = *((_QWORD *)v4 + 11);
      v23 = *((_QWORD *)v4 + 10);
      LODWORD(v31) = v4[18];
      v24 = *((_QWORD *)v4 + 8);
      LODWORD(Context) = v4[6];
      v25 = *((_QWORD *)v4 + 2);
      v15 = *v4;
      v26 = *((_QWORD *)v4 + 15);
      v16 = v4[14];
      v27 = *((_QWORD *)v4 + 6);
      LODWORD(v17) = v4[1];
      v28[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v8,
        (int)&dword_180527F54,
        v10 + 8,
        (__int64)&v19,
        (__int64)v28,
        (__int64)&v17,
        (__int64)&v27,
        (__int64)&v16,
        (__int64)&v26,
        (__int64)&v15,
        (__int64)&v25,
        (__int64)&Context,
        (__int64)&v24,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v20);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1805CC2E8;
      qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
      qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v11);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      v14 = *(_DWORD *)(v13 + 76);
      v19 = 0LL;
      LODWORD(v30) = CurrentThreadId;
      LODWORD(v31) = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        byte_1805283E4,
        (const GUID *)(v13 + 8),
        0LL,
        (__int64)&v19,
        (__int64)&v31,
        (__int64)&v30);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)((char *)this + 8));
}
