/*
 * XREFs of ?StopActivity@GetImmersiveMonitor@StartWindowTelemetry@@MEAAXXZ @ 0x180012040
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001154C (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180144E84 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180144E84.c)
 */

void __fastcall StartWindowTelemetry::GetImmersiveMonitor::StopActivity(
        StartWindowTelemetry::GetImmersiveMonitor *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // eax
  REGHANDLE v9; // rcx
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  unsigned int v15; // [rsp+C8h] [rbp-80h] BYREF
  WINBOOL v16; // [rsp+CCh] [rbp-7Ch] BYREF
  int v17; // [rsp+D0h] [rbp-78h] BYREF
  int v18; // [rsp+D4h] [rbp-74h] BYREF
  int v19; // [rsp+D8h] [rbp-70h] BYREF
  int v20; // [rsp+DCh] [rbp-6Ch] BYREF
  int v21; // [rsp+E0h] [rbp-68h] BYREF
  int v22; // [rsp+E4h] [rbp-64h] BYREF
  int v23; // [rsp+E8h] [rbp-60h] BYREF
  WINBOOL v24; // [rsp+ECh] [rbp-5Ch] BYREF
  DWORD v25; // [rsp+F0h] [rbp-58h] BYREF
  int v26; // [rsp+F4h] [rbp-54h] BYREF
  LPVOID v27; // [rsp+F8h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+100h] [rbp-48h] BYREF
  __int64 v29; // [rsp+108h] [rbp-40h] BYREF
  __int64 v30; // [rsp+110h] [rbp-38h] BYREF
  __int64 v31; // [rsp+118h] [rbp-30h] BYREF
  __int64 v32; // [rsp+120h] [rbp-28h] BYREF
  __int64 v33; // [rsp+128h] [rbp-20h] BYREF
  __int64 v34; // [rsp+130h] [rbp-18h] BYREF
  __int64 v35; // [rsp+138h] [rbp-10h] BYREF
  __int64 v36; // [rsp+140h] [rbp-8h] BYREF
  __int64 v37; // [rsp+148h] [rbp+0h] BYREF
  __int64 v38; // [rsp+150h] [rbp+8h] BYREF
  __int64 v39; // [rsp+158h] [rbp+10h] BYREF
  __int64 v40; // [rsp+160h] [rbp+18h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+168h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+30h] BYREF
  void *v43; // [rsp+188h] [rbp+40h]
  int v44; // [rsp+190h] [rbp+48h]
  int v45; // [rsp+194h] [rbp+4Ch]
  __int64 *v46; // [rsp+198h] [rbp+50h]
  int v47; // [rsp+1A0h] [rbp+58h]
  int v48; // [rsp+1A4h] [rbp+5Ch]
  int *v49; // [rsp+1A8h] [rbp+60h]
  int v50; // [rsp+1B0h] [rbp+68h]
  int v51; // [rsp+1B4h] [rbp+6Ch]
  DWORD *v52; // [rsp+1B8h] [rbp+70h]
  int v53; // [rsp+1C0h] [rbp+78h]
  int v54; // [rsp+1C4h] [rbp+7Ch]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    v27 = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v16, &v27) && v16 )
    {
      v27 = &qword_1805CC668;
      qword_1805CC668 = &ShellScreenClippingLogging::`vftable';
      qword_1805CC680 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC668, qword_1805CC680, v10);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805CC668);
    }
    v11 = (_DWORD *)*((_QWORD *)v27 + 1);
    if ( *v11 > 5u )
    {
      v29 = *((_QWORD *)v4 + 5);
      v17 = v4[15];
      v18 = v4[2];
      v30 = *((_QWORD *)v4 + 14);
      v31 = *((_QWORD *)v4 + 13);
      v12 = *((_QWORD *)this + 6);
      v19 = v4[24];
      v13 = *((_QWORD *)v4 + 11);
      v39 = 0LL;
      v32 = v13;
      v33 = *((_QWORD *)v4 + 10);
      v20 = v4[18];
      v34 = *((_QWORD *)v4 + 8);
      v21 = v4[6];
      v35 = *((_QWORD *)v4 + 2);
      v22 = *v4;
      v36 = *((_QWORD *)v4 + 15);
      v23 = v4[14];
      v37 = *((_QWORD *)v4 + 6);
      v15 = v4[1];
      v38 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&dword_180516ED6,
        v12 + 8,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v15,
        (__int64)&v37,
        (__int64)&v23,
        (__int64)&v36,
        (__int64)&v22,
        (__int64)&v35,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v20,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v19,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v29);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v24, &Context) && v24 )
    {
      Context = &qword_1805CC668;
      qword_1805CC668 = &ShellScreenClippingLogging::`vftable';
      qword_1805CC680 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC668, qword_1805CC680, v14);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805CC668);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v54 = 0;
      v51 = 0;
      v48 = 0;
      EventDescriptor.Keyword = 0LL;
      v25 = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 76);
      v40 = 0LL;
      v26 = v8;
      v52 = &v25;
      v49 = &v26;
      v46 = &v40;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      v53 = 4;
      v50 = 4;
      v47 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v43 = &unk_18051702F;
      UserData.Reserved = 2;
      v9 = *(_QWORD *)(v5 + 32);
      v44 = 72;
      v45 = 1;
      v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v9, &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((StartWindowTelemetry::GetImmersiveMonitor *)((char *)this + 8));
}
