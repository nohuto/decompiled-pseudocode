/*
 * XREFs of AudioSessionGetState @ 0x18000BA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180053A44 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     atexit @ 0x18006A2D8 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v13; // [rsp+38h] [rbp-28h]
  void *v14; // [rsp+40h] [rbp-20h]
  char v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h]
  WINBOOL fPending; // [rsp+90h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+A0h] [rbp+40h] BYREF
  struct _FILETIME pftDueTime; // [rsp+A8h] [rbp+48h] BYREF

  v2 = *a1;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E7E8;
    qword_18019E7E8 = &AudioSrvTelemetryProvider::`vftable';
    qword_18019E800 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_18019E7E8,
      qword_18019E800,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019E7E8);
  }
  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v6;
  v16 = 0;
  v17 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"AudioSessionGetState";
  v14 = v4;
  v15 = 0;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, a2);
  v9 = v8;
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetState", 0x679u, v8);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v9;
}
