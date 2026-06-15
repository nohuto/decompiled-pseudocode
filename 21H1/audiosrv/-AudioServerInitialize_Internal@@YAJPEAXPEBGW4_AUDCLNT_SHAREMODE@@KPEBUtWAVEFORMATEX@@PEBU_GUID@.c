/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000FE40
 * Callers:
 *     AudioServerInitialize @ 0x18000C210 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800F2510 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800108E4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180010F60 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800111C0 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x180011520 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18004D0C0 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x1800CBDD4 (WPP_SF_dS.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012E7EC (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        const unsigned __int16 *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        const struct tWAVEFORMATEX *a5,
        const struct _GUID *a6,
        struct VadServerSettings *a7,
        unsigned __int16 **a8,
        struct IProcessSubmixProxy *a9,
        void **a10)
{
  __int64 v12; // rcx
  void *v13; // rbx
  __int64 v14; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v16; // rbx
  struct CAudioThreadPool *v17; // rdi
  HANDLE OwningThread; // rdx
  CAudioDGProcess *v19; // rcx
  int v20; // ebx
  DWORD v21; // eax
  int v22; // eax
  int v23; // ebx
  void *v24; // rdi
  LPCRITICAL_SECTION v25; // rbx
  LPCRITICAL_SECTION v26; // rdi
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h]
  enum _AUDCLNT_SHAREMODE v32; // [rsp+70h] [rbp-90h]
  LPVOID Context; // [rsp+78h] [rbp-88h] BYREF
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp-80h] BYREF
  void *v35; // [rsp+88h] [rbp-78h] BYREF
  LPCRITICAL_SECTION v36; // [rsp+90h] [rbp-70h]
  unsigned __int16 **v37; // [rsp+98h] [rbp-68h]
  const struct _GUID *v38; // [rsp+A0h] [rbp-60h]
  const struct tWAVEFORMATEX *v39; // [rsp+A8h] [rbp-58h]
  _QWORD pv[2]; // [rsp+B0h] [rbp-50h] BYREF
  DWORD CurrentThreadId; // [rsp+C0h] [rbp-40h]
  const wchar_t *v42; // [rsp+C8h] [rbp-38h]
  void *v43; // [rsp+D0h] [rbp-30h]
  char v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+DCh] [rbp-24h]
  LPCRITICAL_SECTION v46; // [rsp+E8h] [rbp-18h]
  __int128 v47; // [rsp+F0h] [rbp-10h]
  __int128 v48; // [rsp+100h] [rbp+0h] BYREF

  v31 = a4;
  v32 = a3;
  v39 = a5;
  v38 = a6;
  v37 = a8;
  v47 = *(_OWORD *)a7;
  v48 = v47;
  EtwEventActivityIdControl(4LL, &v48);
  Context = 0LL;
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
  v12 = *((_QWORD *)Context + 1);
  v13 = g_AudioHealthMonitor;
  v14 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v42 = L"AudioServerInitialize_Internal";
  v43 = v13;
  v44 = 0;
  v45 = 0LL;
  if ( (unsigned int)v14 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v14 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v14 / 3, 0);
    }
  }
  v29 = 0LL;
  v35 = 0LL;
  *a10 = 0LL;
  v16 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v46 = v16;
  if ( ++LODWORD(v16[1].DebugInfo) == 1 )
  {
    v17 = ThreadPool;
    EnterCriticalSection(v16);
    v36 = v16;
    OwningThread = v16[3].OwningThread;
    if ( OwningThread )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v17 + 24LL))(
        v17,
        OwningThread,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, __int64))(*(_QWORD *)v17 + 32LL))(
        v17,
        v16[3].OwningThread,
        1LL);
    }
    LeaveCriticalSection(v16);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v16);
  }
  LeaveCriticalSection(v16);
  v20 = CAudioDGProcess::CheckADGStatus(v19);
  if ( v20 >= 0 )
  {
    v20 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            &v29);
    if ( v20 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
      if ( (unsigned int)IsProcessAllowed(v21, a2) )
      {
        if ( !a9
          || (v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29),
              (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a9 + 176LL))(a9) == v23) )
        {
          v20 = ATL::CComObject<CVADServer>::CreateInstance(&v35);
          v24 = v35;
          if ( !v20 )
          {
            (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 8LL))(v35);
            v20 = (*(__int64 (__fastcall **)(void *, __int64, const unsigned __int16 *, _QWORD, int, const struct tWAVEFORMATEX *, const struct _GUID *, struct VadServerSettings *, unsigned __int16 **, struct IProcessSubmixProxy *))(*(_QWORD *)v24 + 48LL))(
                    v24,
                    v29,
                    a2,
                    (unsigned int)v32,
                    v31,
                    v39,
                    v38,
                    a7,
                    v37,
                    a9);
            if ( v20 >= 0 )
            {
              v25 = g_ADGProcess;
              EnterCriticalSection(g_ADGProcess);
              v36 = v25;
              if ( ++LODWORD(v25[1].DebugInfo) == 1 )
              {
                CAudioDGProcess::CancelADGTerminationTimer(v25);
                CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v25);
              }
              LeaveCriticalSection(v25);
              *a10 = v24;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 8LL))(v24);
              v20 = 0;
            }
          }
          if ( v24 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
        }
        else
        {
          v20 = -2147024891;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            43,
            (unsigned int)&WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
            v22,
            (__int64)a2);
        }
        v20 = -2147024891;
      }
    }
  }
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v29 = 0LL;
  }
  v26 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v36 = v26;
  if ( LODWORD(v26[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v26);
  LeaveCriticalSection(v26);
  if ( v20 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerInitialize_Internal", 0xB76u, v20);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v48);
  return (unsigned int)v20;
}
