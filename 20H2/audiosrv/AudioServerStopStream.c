/*
 * XREFs of AudioServerStopStream @ 0x180011250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180053A44 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     atexit @ 0x18006A2D8 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerStopStream(__int64 a1, __int64 a2, unsigned int a3)
{
  GUID v6; // xmm0
  void *v7; // rdi
  __int64 v8; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v11; // eax
  unsigned int v12; // edi
  WINBOOL fPending; // [rsp+20h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-49h] BYREF
  DWORD v17; // [rsp+40h] [rbp-39h]
  const wchar_t *v18; // [rsp+48h] [rbp-31h]
  void *v19; // [rsp+50h] [rbp-29h]
  char v20; // [rsp+58h] [rbp-21h]
  __int64 v21; // [rsp+5Ch] [rbp-1Dh]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp-11h] BYREF
  GUID v23; // [rsp+78h] [rbp-1h]
  GUID v24; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( a1 )
    v6 = *(GUID *)(a1 + 280);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v6;
  v23 = v6;
  v24 = v6;
  EtwEventActivityIdControl(4LL, &v24);
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
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v19 = v7;
  v17 = CurrentThreadId;
  v18 = L"AudioServerStopStream";
  v20 = 0;
  v21 = 0LL;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -2005139336 && v11 != -2004287484 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCFC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v11,
        fPending);
  }
  else
  {
    *(_DWORD *)(a1 + 272) = 0;
    v12 = 0;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v24);
  return v12;
}
