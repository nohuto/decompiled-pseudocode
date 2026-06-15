/*
 * XREFs of AudioServerDisconnect @ 0x18004E360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerDisconnect(_QWORD *a1)
{
  GUID v2; // xmm0
  __int64 v3; // rcx
  void *v4; // rbx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v7; // rbx
  struct CAudioThreadPool *v9; // rdi
  __int64 v10; // rax
  HANDLE OwningThread; // rdx
  WINBOOL fPending; // [rsp+40h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-31h] BYREF
  _QWORD pv[2]; // [rsp+50h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+60h] [rbp-19h]
  const wchar_t *v17; // [rsp+68h] [rbp-11h]
  void *v18; // [rsp+70h] [rbp-9h]
  char v19; // [rsp+78h] [rbp-1h]
  __int64 v20; // [rsp+7Ch] [rbp+3h]
  struct _FILETIME pftDueTime[2]; // [rsp+88h] [rbp+Fh] BYREF
  GUID v22; // [rsp+98h] [rbp+1Fh]
  GUID v23; // [rsp+A8h] [rbp+2Fh] BYREF

  if ( *a1 )
    v2 = *(GUID *)(*a1 + 280LL);
  else
    v2 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v2;
  v22 = v2;
  v23 = v2;
  EtwEventActivityIdControl(4LL, &v23);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019F828;
    qword_18019F828 = &wil::details::FeatureLogging::`vftable';
    qword_18019F840 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_18019F828,
      qword_18019F840,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019F828);
  }
  v3 = *((_QWORD *)Context + 1);
  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v3;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"AudioServerDisconnect";
  v18 = v4;
  v19 = 0;
  v20 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = 0LL;
  v7 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v7[1].DebugInfo)-- == 1 )
  {
    v9 = ThreadPool;
    if ( !v7[3].OwningThread )
      v7[3].OwningThread = (HANDLE)(*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, LPCRITICAL_SECTION))(*(_QWORD *)ThreadPool + 8LL))(
                                     ThreadPool,
                                     CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                                     v7);
    LODWORD(Context) = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
           L"AudioDGInactiveTimeout",
           0x18u,
           0LL,
           &fPending,
           (LPDWORD)&Context) )
    {
      v10 = 300LL;
      fPending = 300;
    }
    else
    {
      v10 = (unsigned int)fPending;
    }
    OwningThread = v7[3].OwningThread;
    if ( OwningThread )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000000 * v10);
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, struct _FILETIME *, _QWORD, _DWORD))(*(_QWORD *)v9 + 24LL))(
        v9,
        OwningThread,
        pftDueTime,
        0LL,
        0);
    }
  }
  LeaveCriticalSection(v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v23);
  return 0LL;
}
