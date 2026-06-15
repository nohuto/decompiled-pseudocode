/*
 * XREFs of AudioServerDeriveStreamCategory @ 0x18000F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180053A44 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18006A2D8 (atexit.c)
 */

__int64 __fastcall AudioServerDeriveStreamCategory(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // esi
  void *v8; // rdi
  __int64 v9; // r14
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  bool v12; // zf
  _QWORD *v14; // [rsp+20h] [rbp-68h] BYREF
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-60h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-58h] BYREF
  DWORD v17; // [rsp+40h] [rbp-48h]
  const wchar_t *v18; // [rsp+48h] [rbp-40h]
  void *v19; // [rsp+50h] [rbp-38h]
  char v20; // [rsp+58h] [rbp-30h]
  __int64 v21; // [rsp+5Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  WINBOOL v23; // [rsp+98h] [rbp+10h] BYREF

  v7 = 0;
  v14 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v23, (LPVOID *)&v14) && v23 )
  {
    v14 = &qword_18019E7E8;
    qword_18019E7E8 = &AudioSrvTelemetryProvider::`vftable';
    qword_18019E800 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_18019E7E8,
      qword_18019E800,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019E7E8);
  }
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = v14[1];
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v19 = v8;
  v17 = CurrentThreadId;
  v18 = L"AudioServerDeriveStreamCategory";
  v20 = 0;
  v21 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  if ( a2 > 0xB || a3 > 0x14 )
    goto LABEL_16;
  v12 = a2 == 0;
  if ( a2 )
  {
    if ( !a3 )
    {
      v12 = a2 == 0;
      goto LABEL_10;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      (int)v14);
    v7 = -2147024809;
    goto LABEL_13;
  }
LABEL_10:
  if ( !v12 )
    a3 = a2;
  *a4 = a3;
LABEL_13:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v7;
}
