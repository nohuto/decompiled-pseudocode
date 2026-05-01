/*
 * XREFs of ?StopActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800208A0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001B224 (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F1DC (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801208F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801208F0.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StopActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  REGHANDLE v9; // rcx
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rcx
  __int64 v12; // r8
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  unsigned int v14; // [rsp+C8h] [rbp-80h] BYREF
  WINBOOL v15; // [rsp+CCh] [rbp-7Ch] BYREF
  int v16; // [rsp+D0h] [rbp-78h] BYREF
  int v17; // [rsp+D4h] [rbp-74h] BYREF
  int v18; // [rsp+D8h] [rbp-70h] BYREF
  int v19; // [rsp+DCh] [rbp-6Ch] BYREF
  int v20; // [rsp+E0h] [rbp-68h] BYREF
  int v21; // [rsp+E4h] [rbp-64h] BYREF
  int v22; // [rsp+E8h] [rbp-60h] BYREF
  WINBOOL v23; // [rsp+ECh] [rbp-5Ch] BYREF
  DWORD v24; // [rsp+F0h] [rbp-58h] BYREF
  int v25; // [rsp+F4h] [rbp-54h] BYREF
  LPVOID v26; // [rsp+F8h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+100h] [rbp-48h] BYREF
  __int64 v28; // [rsp+108h] [rbp-40h] BYREF
  __int64 v29; // [rsp+110h] [rbp-38h] BYREF
  __int64 v30; // [rsp+118h] [rbp-30h] BYREF
  __int64 v31; // [rsp+120h] [rbp-28h] BYREF
  __int64 v32; // [rsp+128h] [rbp-20h] BYREF
  __int64 v33; // [rsp+130h] [rbp-18h] BYREF
  __int64 v34; // [rsp+138h] [rbp-10h] BYREF
  __int64 v35; // [rsp+140h] [rbp-8h] BYREF
  __int64 v36; // [rsp+148h] [rbp+0h] BYREF
  __int64 v37; // [rsp+150h] [rbp+8h] BYREF
  __int64 v38; // [rsp+158h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+160h] [rbp+18h] BYREF
  __int64 v40; // [rsp+168h] [rbp+20h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+170h] [rbp+28h] BYREF
  void (__stdcall *v42)(PSRWLOCK); // [rsp+180h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+188h] [rbp+40h] BYREF
  void *v44; // [rsp+198h] [rbp+50h]
  int v45; // [rsp+1A0h] [rbp+58h]
  int v46; // [rsp+1A4h] [rbp+5Ch]
  __int64 *v47; // [rsp+1A8h] [rbp+60h]
  int v48; // [rsp+1B0h] [rbp+68h]
  int v49; // [rsp+1B4h] [rbp+6Ch]
  int *v50; // [rsp+1B8h] [rbp+70h]
  int v51; // [rsp+1C0h] [rbp+78h]
  int v52; // [rsp+1C4h] [rbp+7Ch]
  DWORD *v53; // [rsp+1C8h] [rbp+80h]
  int v54; // [rsp+1D0h] [rbp+88h]
  int v55; // [rsp+1D4h] [rbp+8Ch]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v26 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v15, &v26) && v15 )
    {
      v26 = qword_18059FFE0;
      qword_18059FFE0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFF8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFE0, qword_18059FFF8, v10);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18059FFE0);
    }
    v11 = (_DWORD *)*((_QWORD *)v26 + 1);
    if ( *v11 > 5u )
    {
      v28 = *((_QWORD *)v4 + 5);
      v16 = v4[15];
      v17 = v4[2];
      v29 = *((_QWORD *)v4 + 14);
      v30 = *((_QWORD *)v4 + 13);
      v18 = v4[24];
      v12 = *((_QWORD *)this + 6);
      v31 = *((_QWORD *)v4 + 11);
      v32 = *((_QWORD *)v4 + 10);
      v19 = v4[18];
      v33 = *((_QWORD *)v4 + 8);
      v20 = v4[6];
      v34 = *((_QWORD *)v4 + 2);
      v21 = *v4;
      v35 = *((_QWORD *)v4 + 15);
      v22 = v4[14];
      v36 = *((_QWORD *)v4 + 6);
      v14 = v4[1];
      v37 = 0x1000000LL;
      v38 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&dword_1804D85F4,
        v12 + 8,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v14,
        (__int64)&v36,
        (__int64)&v22,
        (__int64)&v35,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v20,
        (__int64)&v33,
        (__int64)&v19,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v18,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v28);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v5 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
    {
      v42 = ReleaseSRWLockExclusive;
      ReleaseSRWLockExclusive(v5);
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v23, &Context) && v23 )
    {
      Context = qword_18059FFE0;
      qword_18059FFE0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFF8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFE0, qword_18059FFF8, v13);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18059FFE0);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 6);
      v55 = 0;
      v52 = 0;
      v49 = 0;
      EventDescriptor.Keyword = 0LL;
      v24 = CurrentThreadId;
      v25 = *(_DWORD *)(v8 + 76);
      v40 = 0x1000000LL;
      v53 = &v24;
      v50 = &v25;
      v47 = &v40;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      v54 = 4;
      v51 = 4;
      v48 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v44 = &unk_1804D8760;
      UserData.Reserved = 2;
      v9 = *(_QWORD *)(v6 + 32);
      v45 = 91;
      v46 = 1;
      v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v9, &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)((char *)this + 8));
}
