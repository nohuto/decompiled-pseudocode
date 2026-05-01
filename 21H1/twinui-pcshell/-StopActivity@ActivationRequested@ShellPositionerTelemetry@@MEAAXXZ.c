/*
 * XREFs of ?StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x180024AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180024EE8 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180085BA4 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801208F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801208F0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::ActivationRequested::StopActivity(
        ShellPositionerTelemetry::ActivationRequested *this)
{
  int *v2; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r8
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  unsigned int v10; // [rsp+C8h] [rbp-80h] BYREF
  WINBOOL v11; // [rsp+CCh] [rbp-7Ch] BYREF
  int v12; // [rsp+D0h] [rbp-78h] BYREF
  int v13; // [rsp+D4h] [rbp-74h] BYREF
  int v14; // [rsp+D8h] [rbp-70h] BYREF
  int v15; // [rsp+DCh] [rbp-6Ch] BYREF
  int v16; // [rsp+E0h] [rbp-68h] BYREF
  int v17; // [rsp+E4h] [rbp-64h] BYREF
  int v18; // [rsp+E8h] [rbp-60h] BYREF
  WINBOOL v19; // [rsp+ECh] [rbp-5Ch] BYREF
  DWORD CurrentThreadId; // [rsp+F0h] [rbp-58h] BYREF
  int v21; // [rsp+F4h] [rbp-54h] BYREF
  LPVOID v22; // [rsp+F8h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+100h] [rbp-48h] BYREF
  __int64 v24; // [rsp+108h] [rbp-40h] BYREF
  __int64 v25; // [rsp+110h] [rbp-38h] BYREF
  __int64 v26; // [rsp+118h] [rbp-30h] BYREF
  __int64 v27; // [rsp+120h] [rbp-28h] BYREF
  __int64 v28; // [rsp+128h] [rbp-20h] BYREF
  __int64 v29; // [rsp+130h] [rbp-18h] BYREF
  __int64 v30; // [rsp+138h] [rbp-10h] BYREF
  __int64 v31; // [rsp+140h] [rbp-8h] BYREF
  __int64 v32; // [rsp+148h] [rbp+0h] BYREF
  __int64 v33; // [rsp+150h] [rbp+8h] BYREF
  __int64 v34; // [rsp+158h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+160h] [rbp+18h] BYREF
  __int64 v36; // [rsp+168h] [rbp+20h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+170h] [rbp+28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+188h] [rbp+40h] BYREF
  void *v39; // [rsp+198h] [rbp+50h]
  int v40; // [rsp+1A0h] [rbp+58h]
  int v41; // [rsp+1A4h] [rbp+5Ch]
  __int64 *v42; // [rsp+1A8h] [rbp+60h]
  int v43; // [rsp+1B0h] [rbp+68h]
  int v44; // [rsp+1B4h] [rbp+6Ch]
  int *v45; // [rsp+1B8h] [rbp+70h]
  int v46; // [rsp+1C0h] [rbp+78h]
  int v47; // [rsp+1C4h] [rbp+7Ch]
  DWORD *p_CurrentThreadId; // [rsp+1C8h] [rbp+80h]
  int v49; // [rsp+1D0h] [rbp+88h]
  int v50; // [rsp+1D4h] [rbp+8Ch]

  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v22 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v11, &v22) && v11 )
    {
      v22 = &qword_18059FF68;
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v7);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v8 = (_DWORD *)*((_QWORD *)v22 + 1);
    if ( *v8 > 5u )
    {
      v24 = *((_QWORD *)v4 + 5);
      v12 = v4[15];
      v13 = v4[2];
      v25 = *((_QWORD *)v4 + 14);
      v26 = *((_QWORD *)v4 + 13);
      v14 = v4[24];
      v27 = *((_QWORD *)v4 + 11);
      v28 = *((_QWORD *)v4 + 10);
      v15 = v4[18];
      v29 = *((_QWORD *)v4 + 8);
      v16 = v4[6];
      v30 = *((_QWORD *)v4 + 2);
      v17 = *v4;
      v31 = *((_QWORD *)v4 + 15);
      v18 = v4[14];
      v32 = *((_QWORD *)v4 + 6);
      v10 = v4[1];
      v33 = 0x1000000LL;
      v34 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v8,
        (int)&dword_1804F6756,
        *((_QWORD *)this + 6) + 8,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v10,
        (__int64)&v32,
        (__int64)&v18,
        (__int64)&v31,
        (__int64)&v17,
        (__int64)&v30,
        (__int64)&v16,
        (__int64)&v29,
        (__int64)&v15,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v14,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v24);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      this,
      &SRWLock);
    **((_DWORD **)this + 6) = 2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v19, &Context) && v19 )
    {
      Context = &qword_18059FF68;
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v9);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 6);
      v21 = *(_DWORD *)(v6 + 76);
      v36 = 0LL;
      p_CurrentThreadId = &CurrentThreadId;
      v49 = 4;
      v50 = 0;
      v45 = &v21;
      v46 = 4;
      v47 = 0;
      v42 = &v36;
      v43 = 8;
      v44 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v39 = &unk_1804F68AF;
      v40 = 72;
      v41 = 1;
      v10 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, (LPCGUID)(v6 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ShellPositionerTelemetry::ActivationRequested *)((char *)this + 8));
}
