/*
 * XREFs of AudioServerCreateStream @ 0x18000C270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18000FCA0 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     wil::details::lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___::_lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___ @ 0x18006ECDC (wil--details--lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___--_lambda_call__lambda_53e0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerCreateStream(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5)
{
  GUID v9; // xmm0
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // rbx
  __int64 v14; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  RPC_STATUS v17; // edi
  int ThreadLogonSessionStringSid; // eax
  void *v19; // rbx
  int v20; // eax
  int v22; // [rsp+20h] [rbp-A9h]
  WINBOOL fPending; // [rsp+40h] [rbp-89h] BYREF
  int v24; // [rsp+44h] [rbp-85h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-81h] BYREF
  __int64 v26; // [rsp+50h] [rbp-79h] BYREF
  _QWORD pv[2]; // [rsp+58h] [rbp-71h] BYREF
  DWORD v28; // [rsp+68h] [rbp-61h]
  const wchar_t *v29; // [rsp+70h] [rbp-59h]
  void *v30; // [rsp+78h] [rbp-51h]
  char v31; // [rsp+80h] [rbp-49h]
  __int64 v32; // [rsp+84h] [rbp-45h]
  struct _FILETIME pftDueTime[2]; // [rsp+90h] [rbp-39h] BYREF
  GUID v34; // [rsp+A0h] [rbp-29h]
  GUID v35; // [rsp+B0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  if ( a1 )
    v9 = *(GUID *)(a1 + 280);
  else
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v9;
  v34 = v9;
  v35 = v9;
  EtwEventActivityIdControl(4LL, &v35);
  v26 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
          g_PolicyManager,
          0LL,
          &v26);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC66,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10,
      v22);
  }
  else
  {
    v24 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, int *))(*(_QWORD *)v26 + 152LL))(v26, a2 == 1, a5, &v24);
    v11 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC6F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v12,
        v22);
    }
    else if ( v24 || (RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &MICPRIVACY_ACCESS_DENIED, 16LL, 0LL), v24) )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
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
      v13 = g_AudioHealthMonitor;
      v14 = g_AudioSrvWatchDogTimerInMs;
      pv[1] = *((_QWORD *)Context + 1);
      pv[0] = 0LL;
      CurrentThreadId = GetCurrentThreadId();
      v30 = v13;
      v28 = CurrentThreadId;
      v29 = L"AudioServerCreateStream";
      v31 = 0;
      v32 = 0LL;
      if ( (unsigned int)v14 >= 0x3E8 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
        pv[0] = ThreadpoolTimer;
        if ( ThreadpoolTimer )
        {
          pftDueTime[0] = (struct _FILETIME)(-10000 * v14 / 3);
          SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v14 / 3, 0);
        }
      }
      v17 = RpcImpersonateClient(0LL);
      if ( v17 )
      {
        v11 = v17 | 0x80010000;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC89,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v11,
          v22);
      }
      else
      {
        BYTE1(fPending) = 1;
        Context = 0LL;
        ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)&Context);
        v11 = ThreadLogonSessionStringSid;
        if ( ThreadLogonSessionStringSid < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC91,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)ThreadLogonSessionStringSid,
            v22);
          wil::details::lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___::_lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___(&fPending);
          v19 = Context;
        }
        else
        {
          wil::details::lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___::_lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___(&fPending);
          v19 = Context;
          v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(a1, v26, a2, a3);
          v11 = v20;
          if ( v20 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC99,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v20,
              a4);
          else
            v11 = 0;
        }
        if ( v19 )
          LocalFree(v19);
      }
      CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
    }
    else
    {
      v11 = -2005139338;
    }
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  EtwEventActivityIdControl(4LL, &v35);
  return v11;
}
