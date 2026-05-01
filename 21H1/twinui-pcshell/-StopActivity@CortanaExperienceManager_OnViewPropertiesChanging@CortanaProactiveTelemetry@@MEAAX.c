/*
 * XREFs of ?StopActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180019AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180019F8C (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801208F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801208F0.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StopActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  REGHANDLE v8; // rcx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  __int64 v11; // r8
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  unsigned int v13; // [rsp+C8h] [rbp-80h] BYREF
  WINBOOL v14; // [rsp+CCh] [rbp-7Ch] BYREF
  int v15; // [rsp+D0h] [rbp-78h] BYREF
  int v16; // [rsp+D4h] [rbp-74h] BYREF
  int v17; // [rsp+D8h] [rbp-70h] BYREF
  int v18; // [rsp+DCh] [rbp-6Ch] BYREF
  int v19; // [rsp+E0h] [rbp-68h] BYREF
  int v20; // [rsp+E4h] [rbp-64h] BYREF
  int v21; // [rsp+E8h] [rbp-60h] BYREF
  WINBOOL v22; // [rsp+ECh] [rbp-5Ch] BYREF
  DWORD v23; // [rsp+F0h] [rbp-58h] BYREF
  int v24; // [rsp+F4h] [rbp-54h] BYREF
  LPVOID v25; // [rsp+F8h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+100h] [rbp-48h] BYREF
  __int64 v27; // [rsp+108h] [rbp-40h] BYREF
  __int64 v28; // [rsp+110h] [rbp-38h] BYREF
  __int64 v29; // [rsp+118h] [rbp-30h] BYREF
  __int64 v30; // [rsp+120h] [rbp-28h] BYREF
  __int64 v31; // [rsp+128h] [rbp-20h] BYREF
  __int64 v32; // [rsp+130h] [rbp-18h] BYREF
  __int64 v33; // [rsp+138h] [rbp-10h] BYREF
  __int64 v34; // [rsp+140h] [rbp-8h] BYREF
  __int64 v35; // [rsp+148h] [rbp+0h] BYREF
  __int64 v36; // [rsp+150h] [rbp+8h] BYREF
  __int64 v37; // [rsp+158h] [rbp+10h] BYREF
  __int64 v38; // [rsp+160h] [rbp+18h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+168h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+30h] BYREF
  void *v41; // [rsp+188h] [rbp+40h]
  int v42; // [rsp+190h] [rbp+48h]
  int v43; // [rsp+194h] [rbp+4Ch]
  __int64 *v44; // [rsp+198h] [rbp+50h]
  int v45; // [rsp+1A0h] [rbp+58h]
  int v46; // [rsp+1A4h] [rbp+5Ch]
  int *v47; // [rsp+1A8h] [rbp+60h]
  int v48; // [rsp+1B0h] [rbp+68h]
  int v49; // [rsp+1B4h] [rbp+6Ch]
  DWORD *v50; // [rsp+1B8h] [rbp+70h]
  int v51; // [rsp+1C0h] [rbp+78h]
  int v52; // [rsp+1C4h] [rbp+7Ch]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  if ( v4 )
  {
    v25 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v14, &v25) && v14 )
    {
      v25 = qword_18059FFE0;
      qword_18059FFE0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFF8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFE0, qword_18059FFF8, v9);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18059FFE0);
    }
    v10 = (_DWORD *)*((_QWORD *)v25 + 1);
    if ( *v10 > 4u )
    {
      v27 = *((_QWORD *)v4 + 5);
      v15 = v4[15];
      v16 = v4[2];
      v28 = *((_QWORD *)v4 + 14);
      v29 = *((_QWORD *)v4 + 13);
      v17 = v4[24];
      v11 = *((_QWORD *)this + 6);
      v30 = *((_QWORD *)v4 + 11);
      v31 = *((_QWORD *)v4 + 10);
      v18 = v4[18];
      v32 = *((_QWORD *)v4 + 8);
      v19 = v4[6];
      v33 = *((_QWORD *)v4 + 2);
      v20 = *v4;
      v34 = *((_QWORD *)v4 + 15);
      v21 = v4[14];
      v35 = *((_QWORD *)v4 + 6);
      v13 = v4[1];
      v36 = 0x1000000LL;
      v37 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v10,
        (int)&dword_1804D811C,
        v11 + 8,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v13,
        (__int64)&v35,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v20,
        (__int64)&v33,
        (__int64)&v19,
        (__int64)&v32,
        (__int64)&v18,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v17,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v27);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v22, &Context) && v22 )
    {
      Context = qword_18059FFE0;
      qword_18059FFE0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFF8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFE0, qword_18059FFF8, v12);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18059FFE0);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v52 = 0;
      v49 = 0;
      v46 = 0;
      EventDescriptor.Keyword = 0LL;
      v23 = CurrentThreadId;
      v24 = *(_DWORD *)(v7 + 76);
      v38 = 0x1000000LL;
      v50 = &v23;
      v47 = &v24;
      v44 = &v38;
      *(_DWORD *)&EventDescriptor.Level = 516;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      v51 = 4;
      v48 = 4;
      v45 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v41 = &unk_1804D8293;
      UserData.Reserved = 2;
      v8 = *(_QWORD *)(v5 + 32);
      v42 = 102;
      v43 = 1;
      v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v8, &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)((char *)this + 8));
}
