/*
 * XREFs of ?StopActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@MEAAXXZ @ 0x1803E68E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800489CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180144E84 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180144E84.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801733F8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StopActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // r9
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v7; // rcx
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rdi
  __int64 v10; // r8
  int v11; // [rsp+C0h] [rbp-80h] BYREF
  int v12; // [rsp+C4h] [rbp-7Ch] BYREF
  int v13; // [rsp+C8h] [rbp-78h] BYREF
  int v14; // [rsp+CCh] [rbp-74h] BYREF
  int v15; // [rsp+D0h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v17; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+100h] [rbp-40h] BYREF
  __int64 v22; // [rsp+108h] [rbp-38h] BYREF
  __int64 v23; // [rsp+110h] [rbp-30h] BYREF
  __int64 v24; // [rsp+118h] [rbp-28h] BYREF
  __int64 v25; // [rsp+120h] [rbp-20h] BYREF
  __int64 v26; // [rsp+128h] [rbp-18h] BYREF
  __int64 v27[6]; // [rsp+130h] [rbp-10h] BYREF
  WINBOOL fPending; // [rsp+170h] [rbp+30h] BYREF
  __int64 v29; // [rsp+178h] [rbp+38h] BYREF
  __int64 v30; // [rsp+180h] [rbp+40h] BYREF
  LPVOID v31; // [rsp+188h] [rbp+48h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CC298;
      qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
      qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v6);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
    }
    v7 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v7 > 5u )
    {
      v18 = *((_QWORD *)v4 + 5);
      LODWORD(v29) = v4[15];
      LODWORD(v30) = v4[2];
      v19 = *((_QWORD *)v4 + 14);
      v20 = *((_QWORD *)v4 + 13);
      LODWORD(v31) = v4[24];
      v21 = *((_QWORD *)v4 + 11);
      v22 = *((_QWORD *)v4 + 10);
      v11 = v4[18];
      v23 = *((_QWORD *)v4 + 8);
      v12 = v4[6];
      v24 = *((_QWORD *)v4 + 2);
      v13 = *v4;
      v25 = *((_QWORD *)v4 + 15);
      v14 = v4[14];
      v26 = *((_QWORD *)v4 + 6);
      v15 = v4[1];
      v27[0] = 0x1000000LL;
      v17 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v7,
        (unsigned __int8 *)dword_180520C70,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v5,
        (__int64)&v17,
        (__int64)v27,
        (__int64)&v15,
        (const wchar_t **)&v26,
        (__int64)&v14,
        (const wchar_t **)&v25,
        (__int64)&v13,
        (const WCHAR **)&v24,
        (__int64)&v12,
        (const wchar_t **)&v23,
        (__int64)&v11,
        (const wchar_t **)&v22,
        (const WCHAR **)&v21,
        (__int64)&v31,
        (const wchar_t **)&v20,
        (const WCHAR **)&v19,
        (__int64)&v30,
        (__int64)&v29,
        (const wchar_t **)&v18);
    }
  }
  else
  {
    v31 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &v31) && fPending )
    {
      v31 = qword_1805CC298;
      qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
      qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v8);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
    }
    v9 = (_DWORD *)*((_QWORD *)v31 + 1);
    if ( *v9 > 5u )
    {
      LODWORD(v29) = GetCurrentThreadId();
      v10 = *((_QWORD *)this + 6);
      LODWORD(v30) = *(_DWORD *)(v10 + 76);
      v17 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        byte_180520DD6,
        (const GUID *)(v10 + 8),
        0LL,
        (__int64)&v17,
        (__int64)&v30,
        (__int64)&v29);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)((char *)this + 8));
}
