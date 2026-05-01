/*
 * XREFs of ?StopActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18001C900
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001B224 (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801208F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801208F0.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::StopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // eax
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v14; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v15; // [rsp+CCh] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+D0h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D8h] [rbp-70h] BYREF
  WINBOOL v18; // [rsp+E0h] [rbp-68h] BYREF
  int v19; // [rsp+E4h] [rbp-64h] BYREF
  int v20; // [rsp+E8h] [rbp-60h] BYREF
  int v21; // [rsp+ECh] [rbp-5Ch] BYREF
  int v22; // [rsp+F0h] [rbp-58h] BYREF
  int v23; // [rsp+F4h] [rbp-54h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+100h] [rbp-48h] BYREF
  __int64 v26; // [rsp+108h] [rbp-40h] BYREF
  __int64 v27; // [rsp+110h] [rbp-38h] BYREF
  __int64 v28; // [rsp+118h] [rbp-30h] BYREF
  __int64 v29; // [rsp+120h] [rbp-28h] BYREF
  __int64 v30; // [rsp+128h] [rbp-20h] BYREF
  __int64 v31; // [rsp+130h] [rbp-18h] BYREF
  __int64 v32; // [rsp+138h] [rbp-10h] BYREF
  __int64 v33; // [rsp+140h] [rbp-8h] BYREF
  __int64 v34; // [rsp+148h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+158h] [rbp+10h] BYREF
  __int64 *v36; // [rsp+178h] [rbp+30h]
  int v37; // [rsp+180h] [rbp+38h]
  int v38; // [rsp+184h] [rbp+3Ch]
  int *v39; // [rsp+188h] [rbp+40h]
  int v40; // [rsp+190h] [rbp+48h]
  int v41; // [rsp+194h] [rbp+4Ch]
  DWORD *v42; // [rsp+198h] [rbp+50h]
  int v43; // [rsp+1A0h] [rbp+58h]
  int v44; // [rsp+1A4h] [rbp+5Ch]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v18, &Context) && v18 )
    {
      Context = qword_18059FF90;
      qword_18059FF90[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFA8 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FF90, qword_18059FFA8, v9);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_18059FF90);
    }
    v10 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v10 > 5u )
    {
      v25 = *((_QWORD *)v4 + 5);
      v19 = v4[15];
      v20 = v4[2];
      v26 = *((_QWORD *)v4 + 14);
      v27 = *((_QWORD *)v4 + 13);
      v11 = *((_QWORD *)this + 6);
      v21 = v4[24];
      v12 = *((_QWORD *)v4 + 11);
      v24 = 0LL;
      v28 = v12;
      v29 = *((_QWORD *)v4 + 10);
      v22 = v4[18];
      v30 = *((_QWORD *)v4 + 8);
      v23 = v4[6];
      v31 = *((_QWORD *)v4 + 2);
      v14 = *v4;
      v32 = *((_QWORD *)v4 + 15);
      v15 = v4[14];
      v33 = *((_QWORD *)v4 + 6);
      LODWORD(v16) = v4[1];
      v34 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v10,
        (int)&dword_1804D73F4,
        v11 + 8,
        (__int64)&v24,
        (__int64)&v34,
        (__int64)&v16,
        (__int64)&v33,
        (__int64)&v15,
        (__int64)&v32,
        (__int64)&v14,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v30,
        (__int64)&v22,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v21,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v25);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v16, &Context)
      && (_DWORD)v16 )
    {
      Context = qword_18059FF90;
      qword_18059FF90[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFA8 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FF90, qword_18059FFA8, v13);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_18059FF90);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v44 = 0;
      v41 = 0;
      v38 = 0;
      v15 = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 76);
      v24 = 0LL;
      v14 = v8;
      v42 = &v15;
      v39 = &v14;
      v36 = &v24;
      v43 = 4;
      v40 = 4;
      v37 = 8;
      tlgWriteTransfer_EventWriteTransfer((int)v5, (int)&dword_1804D7545, v7 + 8, 0, 5u, &v35);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity *)((char *)this + 8));
}
