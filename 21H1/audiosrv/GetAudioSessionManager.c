/*
 * XREFs of GetAudioSessionManager @ 0x180011AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180011E70 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006D68C (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D15F0 (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 */

__int64 __fastcall GetAudioSessionManager(
        __int64 a1,
        const unsigned __int16 *a2,
        struct CAudioSessionManager ***a3,
        _DWORD *a4)
{
  struct CAudioSessionManager *v8; // rsi
  void *v9; // rbx
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int AudioSessionManager; // edi
  int *v14; // rbx
  __int64 v15; // rdx
  struct CAudioSessionManager **v16; // rax
  struct CAudioSessionManager **v17; // rbx
  struct CAudioSessionManager *v18; // rcx
  struct CAudioSessionManager *v19; // rcx
  struct CAudioSessionManager *v21; // [rsp+20h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-58h] BYREF
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct CAudioSessionManager *v25; // [rsp+40h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-38h] BYREF
  DWORD v27; // [rsp+58h] [rbp-28h]
  const wchar_t *v28; // [rsp+60h] [rbp-20h]
  void *v29; // [rsp+68h] [rbp-18h]
  char v30; // [rsp+70h] [rbp-10h]
  __int64 v31; // [rsp+74h] [rbp-Ch]

  v25 = 0LL;
  v21 = 0LL;
  Context = 0LL;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
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
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v29 = v9;
  v27 = CurrentThreadId;
  v28 = L"GetAudioSessionManager";
  v30 = 0;
  v31 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, a2);
  }
  AudioSessionManager = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct CAudioSessionManager **))(*(_QWORD *)g_PolicyManager + 32LL))(
                          g_PolicyManager,
                          a1,
                          &v21);
  if ( AudioSessionManager >= 0 )
  {
    v14 = 0LL;
    pftDueTime = 0LL;
    EnterCriticalSection(&g_SessionManagerProviderLock);
    if ( g_SingletonAudioSessionManagerProvider )
    {
      wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
        g_SingletonAudioSessionManagerProvider,
        v15,
        &pftDueTime);
      v14 = (int *)pftDueTime;
    }
    LeaveCriticalSection(&g_SessionManagerProviderLock);
    if ( v14 )
    {
      AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(
                              (CAudioSessionManagerProvider *)v14,
                              a2,
                              &v25);
      if ( AudioSessionManager < 0 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14);
        goto LABEL_28;
      }
      if ( !ATL::SafeDecrementReferenceMultiThread(v14 + 3) )
      {
        (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                            + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v8 = v25;
    }
    else
    {
      AudioSessionManager = -2147467259;
    }
    v16 = (struct CAudioSessionManager **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v16;
    if ( v16 )
    {
      v18 = v21;
      *v16 = v8;
      v16[1] = v18;
      (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v18 + 8LL))(v18);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, v8);
      }
      v19 = v21;
      *a3 = v17;
      *a4 = (*(__int64 (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v19 + 112LL))(v19) == 0;
LABEL_28:
      if ( AudioSessionManager >= 0 )
        goto LABEL_32;
      goto LABEL_31;
    }
    AudioSessionManager = -2147024882;
  }
LABEL_31:
  AudSrvTraceLoggingErrorHelper("GetAudioSessionManager", 0x7C4u, AudioSessionManager);
LABEL_32:
  if ( v21 )
  {
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v21 + 16LL))(v21);
    v21 = 0LL;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)AudioSessionManager;
}
