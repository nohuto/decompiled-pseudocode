/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800332A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180033580 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x1800BF584 (WPP_SF_Sd.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // rdi
  unsigned int v5; // edi
  int v6; // edi
  __int64 v7; // r10
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v11; // edx
  __int64 v12; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-39h]
  _DWORD v17[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v18; // [rsp+58h] [rbp-29h]
  unsigned __int16 *v19; // [rsp+68h] [rbp-19h]
  int v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+74h] [rbp-Dh]
  void *v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]
  _WORD *v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+94h] [rbp+13h]
  int *v28; // [rsp+98h] [rbp+17h]
  __int64 v29; // [rsp+A0h] [rbp+1Fh]

  CAudioSession::PruneTerminatedOwningProcesses((CAudioSession *)a2);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 616));
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
  if ( *((_DWORD *)a2 + 22) )
  {
    if ( a2 != (char *)-352LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
    v6 = 1;
  }
  else if ( *((int *)a2 + 101) > 0 )
  {
    if ( a2 != (char *)-352LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
    v6 = 2;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 736));
    v4 = (__int64)(*((_QWORD *)a2 + 98) - *((_QWORD *)a2 + 97)) >> 3;
    if ( a2 != (char *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 736));
    if ( !v4 )
    {
LABEL_25:
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 136LL))(a2, 2LL);
      if ( a2 != (char *)-352LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
      v6 = 0;
      goto LABEL_13;
    }
    v5 = GetTickCount64() - *((_DWORD *)a2 + 98);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        60,
        (unsigned int)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
        *((_QWORD *)a2 + 91),
        v5);
    }
    if ( *((int *)a2 + 100) <= 0 )
    {
      if ( v5 < *((_DWORD *)a2 + 78) - 16 )
      {
        if ( a2 != (char *)-352LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
        v6 = 4;
        goto LABEL_13;
      }
      goto LABEL_25;
    }
    if ( a2 != (char *)-352LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
    v6 = 3;
  }
LABEL_13:
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
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 4u )
  {
    v8 = (_WORD *)*((_QWORD *)a2 + 91);
    v14 = v6;
    v28 = &v14;
    v29 = 4LL;
    if ( v8 )
    {
      v9 = -1LL;
      while ( v8[++v9] != 0 )
        ;
      v11 = 2 * v9 + 2;
    }
    else
    {
      v8 = &unk_18015D734;
      v11 = 2;
    }
    v17[1] = 4;
    v19 = *(unsigned __int16 **)(v7 + 8);
    v25 = v8;
    v26 = v11;
    v27 = 0;
    v17[0] = 184549376;
    v18 = 0LL;
    v20 = *v19;
    v22 = &unk_180167BC3;
    v21 = 2;
    v12 = *(_QWORD *)(v7 + 32);
    v23 = 62;
    v24 = 1;
    v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(v12, v17, 0LL);
  }
  if ( a2 != (char *)-616LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 616));
  (*(void (__fastcall **)(char *))(*(_QWORD *)a2 + 16LL))(a2);
}
