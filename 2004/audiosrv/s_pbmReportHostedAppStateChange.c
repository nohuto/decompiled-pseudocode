/*
 * XREFs of s_pbmReportHostedAppStateChange @ 0x18000F580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 */

__int64 __fastcall s_pbmReportHostedAppStateChange(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v9; // ebx
  void *v10; // rdi
  __int64 v11; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  WINBOOL v15; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp-58h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-50h] BYREF
  DWORD v19; // [rsp+58h] [rbp-40h]
  const wchar_t *v20; // [rsp+60h] [rbp-38h]
  void *v21; // [rsp+68h] [rbp-30h]
  char v22; // [rsp+70h] [rbp-28h]
  __int64 v23; // [rsp+74h] [rbp-24h]

  v9 = 0;
  v16 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v15, (LPVOID *)&v16) && v15 )
  {
    v16 = &qword_18019F828;
    qword_18019F828 = &wil::details::FeatureLogging::`vftable';
    qword_18019F840 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_18019F828,
      qword_18019F840,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019F828);
  }
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = v16[1];
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v21 = v10;
  v19 = CurrentThreadId;
  v20 = L"s_pbmReportHostedAppStateChange";
  v22 = 0;
  v23 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportHostedAppStateChangeSupported() )
    v9 = PbmReportHostedAppStateChange(a1, a2, a3, a4, a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v9;
}
