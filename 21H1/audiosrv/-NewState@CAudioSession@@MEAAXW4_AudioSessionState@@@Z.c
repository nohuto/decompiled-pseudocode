/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18002E730
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18002E6B0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800C9CA0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002EA90 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_Sdd @ 0x1800CBCC0 (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::NewState(CAudioSession *this, __int32 a2)
{
  int v4; // esi
  CAudioSessionManager *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r10
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  __int64 v12; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  enum _AudioSessionState v14; // [rsp+34h] [rbp-65h] BYREF
  int v15; // [rsp+38h] [rbp-61h] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v19; // [rsp+58h] [rbp-41h]
  void **v20; // [rsp+60h] [rbp-39h]
  CAudioSession *v21; // [rsp+68h] [rbp-31h]
  int v22; // [rsp+70h] [rbp-29h]
  enum _AudioSessionState v23; // [rsp+74h] [rbp-25h]
  unsigned __int16 *v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+8Ch] [rbp-Dh]
  void *v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  _WORD *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]
  int *v33; // [rsp+B0h] [rbp+17h]
  __int64 v34; // [rsp+B8h] [rbp+1Fh]
  enum _AudioSessionState *v35; // [rsp+C0h] [rbp+27h]
  __int64 v36; // [rsp+C8h] [rbp+2Fh]

  v4 = *((_DWORD *)this + 102);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      65,
      (unsigned int)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      *((_QWORD *)this + 91),
      v4,
      a2);
    v5 = WPP_GLOBAL_Control;
  }
  if ( v4 )
  {
    if ( v4 == 1 && !a2 )
    {
      GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
      *((_QWORD *)this + 49) = GetTickCount64();
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          67LL,
          &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
          *((_QWORD *)this + 91));
      }
      *((_BYTE *)this + 976) = 0;
      v12 = -10000LL * *((unsigned int *)this + 78);
      v16[0] = -10000 * *((_DWORD *)this + 78);
      v16[1] = HIDWORD(v12);
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _DWORD *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)this + 75),
        v16,
        0LL,
        100);
    }
  }
  else if ( a2 == 1 )
  {
    if ( *((_QWORD *)this + 75) )
    {
      v6 = *((_QWORD *)this + 75);
      if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v5 + 28) & 0x40) != 0
        && *((_BYTE *)v5 + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)v5 + 2), 72LL, &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, this);
        v6 = *((_QWORD *)this + 75);
      }
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v6,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
        ThreadPool,
        *((_QWORD *)this + 75),
        1LL);
    }
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        66LL,
        &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
        *((_QWORD *)this + 91));
    }
    *((_BYTE *)this + 976) = 1;
  }
  *((_DWORD *)this + 102) = a2;
  if ( a2 == 1 )
  {
    v11 = *((_DWORD *)this + 76);
    if ( (v11 & 0x200000) != 0 )
      *((_DWORD *)this + 76) = v11 & 0xFFDFFFFF;
  }
  if ( v4 != a2 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_18019F838;
      qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
      qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register(
        (wil::TraceLoggingProvider *)qword_18019F838,
        qword_18019F850,
        (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
    }
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 4u )
    {
      v14 = a2;
      v15 = v4;
      v8 = (_WORD *)*((_QWORD *)this + 91);
      v35 = &v14;
      v36 = 4LL;
      v33 = &v15;
      v34 = 4LL;
      if ( v8 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        v10 = 2 * v9 + 2;
      }
      else
      {
        v8 = &unk_18015D744;
        v10 = 2;
      }
      v30 = v8;
      v31 = v10;
      v32 = 0;
      v18[0] = 184549376;
      v18[1] = 4;
      v19 = 0LL;
      v24 = *(unsigned __int16 **)(v7 + 8);
      v25 = *v24;
      v26 = 2;
      v27 = &unk_18016793C;
      v28 = 67;
      v29 = 1;
      v16[0] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v7 + 32), v18, 0LL);
    }
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v20 = &CAudioSessionStateChanged::`vftable';
    v21 = this;
    v22 = v4;
    v23 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
}
