/*
 * XREFs of s_tsRegisterAudioProtocolNotification @ 0x18000CA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180053A44 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18006A2D8 (atexit.c)
 */

__int64 __fastcall s_tsRegisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v6; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-58h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-50h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-40h]
  const wchar_t *v11; // [rsp+40h] [rbp-38h]
  void *v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+54h] [rbp-24h]
  WINBOOL fPending; // [rsp+90h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+98h] [rbp+20h] BYREF

  if ( !(unsigned int)IsTSRegisterAudioProtocolNotificationSupported() )
    return 1LL;
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
  v4 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  v12 = g_AudioHealthMonitor;
  CurrentThreadId = GetCurrentThreadId();
  v13 = 0;
  v14 = 0LL;
  v11 = L"s_tsRegisterAudioProtocolNotification";
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v4 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v4 / 3, 0);
    }
  }
  v6 = TS_RegisterAudioProtocolNotification(a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
