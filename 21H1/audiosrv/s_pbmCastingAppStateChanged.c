/*
 * XREFs of s_pbmCastingAppStateChanged @ 0x18000F8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmCastingAppStateChanged(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v8; // r8
  LPVOID v9; // rcx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v13; // [rsp+40h] [rbp-20h]
  void *v14; // [rsp+48h] [rbp-18h]
  char v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+54h] [rbp-Ch]
  __int64 fPending; // [rsp+A0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
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
  v5 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  v14 = g_AudioHealthMonitor;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"s_pbmCastingAppStateChanged";
  v15 = 0;
  v16 = 0LL;
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
  if ( (unsigned int)IsPbmCastingAppStateChangedSupported() )
  {
    v4 = PbmCastingAppStateChanged(a1, a2);
    goto LABEL_9;
  }
  if ( !g_PolicyManager )
    goto LABEL_9;
  Context = 0LL;
  if ( (**(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, LPVOID *))g_PolicyManager)(
         g_PolicyManager,
         &GUID_c013f1c5_445a_4e19_8cd2_f88de6b9e0ee,
         &Context) < 0 )
    goto LABEL_19;
  fPending = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &fPending);
  if ( v4 >= 0 )
  {
    LOBYTE(v8) = a2 == 0;
    v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)Context + 40LL))(Context, fPending, v8);
    if ( fPending )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
LABEL_19:
    v9 = Context;
    if ( !Context )
      goto LABEL_9;
LABEL_20:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_9;
  }
  if ( fPending )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
  v9 = Context;
  if ( Context )
    goto LABEL_20;
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return (unsigned int)v4;
}
