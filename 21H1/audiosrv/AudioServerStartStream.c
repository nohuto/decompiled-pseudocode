/*
 * XREFs of AudioServerStartStream @ 0x18000C050
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerStartStream(__int64 a1, __int64 a2, unsigned int a3)
{
  GUID v6; // xmm0
  unsigned int v7; // ebx
  void *v8; // rdi
  __int64 v9; // r14
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // eax
  unsigned int v13; // edi
  WINBOOL fPending; // [rsp+20h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-49h] BYREF
  DWORD v18; // [rsp+40h] [rbp-39h]
  const wchar_t *v19; // [rsp+48h] [rbp-31h]
  void *v20; // [rsp+50h] [rbp-29h]
  char v21; // [rsp+58h] [rbp-21h]
  __int64 v22; // [rsp+5Ch] [rbp-1Dh]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp-11h] BYREF
  GUID v24; // [rsp+78h] [rbp-1h]
  GUID v25; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( a1 )
    v6 = *(GUID *)(a1 + 280);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v6;
  v24 = v6;
  v25 = v6;
  EtwEventActivityIdControl(4LL, &v25);
  v7 = 0;
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
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v20 = v8;
  v18 = CurrentThreadId;
  v19 = L"AudioServerStartStream";
  v21 = 0;
  v22 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2, a3);
  v13 = v12;
  if ( v12 < 0 )
  {
    v7 = -2005139336;
    if ( v12 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCDC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v12,
        fPending);
      v7 = v13;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v25);
  return v7;
}
