/*
 * XREFs of ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180012258
 * Callers:
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x180012438 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180011014 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645666@Z @ 0x18044F66C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18044F66C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x18044F994 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U3@@-$_tlgWriteTe.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int *v3; // rsi
  int v7; // eax
  int *v8; // rsi
  BOOL inited; // eax
  _DWORD *v10; // rdi
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rcx
  int v13; // ecx
  __int64 v14; // r8
  int v15; // eax
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // [rsp+B0h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-78h] BYREF
  int v22; // [rsp+C0h] [rbp-70h] BYREF
  int v23; // [rsp+C4h] [rbp-6Ch] BYREF
  int v24; // [rsp+C8h] [rbp-68h] BYREF
  int v25; // [rsp+CCh] [rbp-64h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33; // [rsp+108h] [rbp-28h] BYREF
  __int64 v34; // [rsp+110h] [rbp-20h] BYREF
  __int64 v35; // [rsp+118h] [rbp-18h] BYREF
  __int64 v36; // [rsp+120h] [rbp-10h] BYREF
  __int64 v37; // [rsp+128h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+160h] [rbp+30h] BYREF
  __int64 v39; // [rsp+178h] [rbp+48h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( v8 )
  {
    if ( inited && fPending )
    {
      Context = qword_18059FFB8;
      qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v11);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
    }
    v12 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v12 > 5u && (unsigned __int8)tlgKeywordOn(v12, 0x200000000000LL) )
    {
      v31 = *((_QWORD *)v8 + 14);
      v14 = *((_QWORD *)this + 6);
      v32 = *((_QWORD *)v8 + 13);
      v15 = v8[24];
      v28 = 0LL;
      LODWORD(v39) = v15;
      v33 = *((_QWORD *)v8 + 11);
      v34 = *((_QWORD *)v8 + 10);
      v22 = v8[18];
      v35 = *((_QWORD *)v8 + 8);
      v23 = v8[6];
      v36 = *((_QWORD *)v8 + 2);
      v24 = *v8;
      v37 = *((_QWORD *)v8 + 15);
      v25 = v8[14];
      v26 = *((_QWORD *)v8 + 6);
      LODWORD(v20) = v8[1];
      v29 = (__int64)a3;
      v30 = (__int64)a2;
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v13,
        (int)&dword_1804FFD88,
        v14 + 8,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v20,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v37,
        (__int64)&v24,
        (__int64)&v36,
        (__int64)&v23,
        (__int64)&v35,
        (__int64)&v22,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v39,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29);
    }
  }
  else
  {
    if ( inited && fPending )
    {
      Context = qword_18059FFB8;
      qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v16);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
    }
    v10 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v10 > 5u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 6);
      v28 = (__int64)a3;
      v27 = (__int64)a2;
      v19 = *(_DWORD *)(v18 + 76);
      v26 = 0LL;
      LODWORD(v39) = CurrentThreadId;
      LODWORD(v20) = v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (int)v10,
        (int)&dword_1804FFBD4,
        v18 + 8,
        (__int64)&v26,
        (__int64)&v20,
        (__int64)&v39,
        (__int64)&v27,
        (__int64)&v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)((char *)this + 8));
}
