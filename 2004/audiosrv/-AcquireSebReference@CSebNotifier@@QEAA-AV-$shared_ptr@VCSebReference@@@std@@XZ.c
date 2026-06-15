/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18000ACB0
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18000BCD0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069C20 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180074BB0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall CSebNotifier::AcquireSebReference(__int64 a1, volatile signed __int32 **a2)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // r15
  int v8; // eax
  int v9; // r13d
  int v10; // eax
  struct _TP_TIMER *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // rcx
  int v15; // r12d
  __int64 v16; // rcx
  char v17; // [rsp+30h] [rbp-10B8h] BYREF
  int v18; // [rsp+34h] [rbp-10B4h]
  _DWORD v19[2]; // [rsp+38h] [rbp-10B0h] BYREF
  volatile signed __int32 **v20; // [rsp+40h] [rbp-10A8h]
  _DWORD v21[2]; // [rsp+48h] [rbp-10A0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-1098h]
  volatile signed __int32 *v23; // [rsp+58h] [rbp-1090h]
  volatile signed __int32 *v24; // [rsp+60h] [rbp-1088h]
  __int64 v25; // [rsp+68h] [rbp-1080h]
  unsigned __int16 *v26; // [rsp+70h] [rbp-1078h]
  int v27; // [rsp+78h] [rbp-1070h]
  int v28; // [rsp+7Ch] [rbp-106Ch]
  void *v29; // [rsp+80h] [rbp-1068h]
  int v30; // [rsp+88h] [rbp-1060h]
  int v31; // [rsp+8Ch] [rbp-105Ch]
  char *v32; // [rsp+90h] [rbp-1058h]
  __int64 v33; // [rsp+98h] [rbp-1050h]
  _DWORD *v34; // [rsp+A0h] [rbp-1048h]
  __int64 v35; // [rsp+A8h] [rbp-1040h]
  _DWORD v36[1024]; // [rsp+B0h] [rbp-1038h] BYREF

  v20 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v18 = 1;
  v25 = a1;
  ProcessHeap = GetProcessHeap();
  v5 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<CSebReference>::`vftable';
    *((_QWORD *)v5 + 2) = a1;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 + 4;
  v23 = v6 + 4;
  v24 = v6;
  v8 = _Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v8 )
  {
    std::_Throw_C_error(v8);
LABEL_23:
    std::_Throw_C_error(v10);
LABEL_24:
    std::_Ref_count_base::_Decref(v12);
    goto LABEL_13;
  }
  v9 = (*(_DWORD *)a1)++;
  if ( !v9 && *(_BYTE *)(a1 + 88) != 1 )
  {
    v36[1] = -1;
    v36[0] = 3;
    v15 = RtlPublishWnfStateData(WNF_SEB_AUDIO_ACTIVITY, 0LL, v36, 8LL, 0LL);
    if ( v15 >= 0 )
      *(_BYTE *)(a1 + 88) = 1;
    v16 = *((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v14,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
          + 1);
    if ( *(_DWORD *)v16 > 4u )
    {
      v19[0] = v15;
      v17 = 1;
      v34 = v19;
      v35 = 4LL;
      v32 = &v17;
      v33 = 1LL;
      v21[0] = 184549376;
      v21[1] = 4;
      v22 = 0LL;
      v26 = *(unsigned __int16 **)(v16 + 8);
      v27 = *v26;
      v28 = 2;
      v29 = &unk_180169EE5;
      v30 = 52;
      v31 = 1;
      v19[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v16 + 32), v21, 0LL);
    }
  }
  v10 = _Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( v10 )
    goto LABEL_23;
  if ( !v9 )
  {
    v11 = *(struct _TP_TIMER **)(a1 + 96);
    if ( v11 )
    {
      SetThreadpoolTimer(v11, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 96), 1);
    }
  }
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v7 = v23;
  }
  *a2 = v7;
  v12 = (std::_Ref_count_base *)a2[1];
  a2[1] = v6;
  if ( v12 )
    goto LABEL_24;
LABEL_13:
  if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
  }
  return a2;
}
