/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18000A7F0
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18000BCD0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAPEAPEAVCVADServer@@QEAPEAV2@AEBQEAV2@@Z @ 0x180008F84 (--$_Emplace_reallocate@AEBQEAVCVADServer@@@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v3; // rsi
  char *v4; // r12
  __int64 v5; // r15
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  _BYTE *v10; // rdx
  int v11; // eax
  HANDLE ProcessHeap; // rax
  _DWORD *v13; // rax
  __int64 v14; // r14
  const wchar_t *v15; // rbx
  __int64 v16; // rcx
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  wchar_t *v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // edx
  std::_Ref_count_base *v26; // rcx
  WINBOOL fPending; // [rsp+44h] [rbp-1F4h] BYREF
  int v29; // [rsp+48h] [rbp-1F0h] BYREF
  int v30; // [rsp+4Ch] [rbp-1ECh] BYREF
  int v31; // [rsp+50h] [rbp-1E8h] BYREF
  int v32; // [rsp+54h] [rbp-1E4h] BYREF
  __int64 v33; // [rsp+58h] [rbp-1E0h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-1D8h] BYREF
  _DWORD *v35; // [rsp+68h] [rbp-1D0h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-1C8h] BYREF
  _DWORD v37[2]; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v38; // [rsp+88h] [rbp-1B0h]
  _DWORD v39[2]; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v40; // [rsp+98h] [rbp-1A0h]
  const wchar_t *v41; // [rsp+A0h] [rbp-198h]
  _QWORD *v42; // [rsp+A8h] [rbp-190h]
  __int64 v43; // [rsp+B0h] [rbp-188h]
  __int64 v44; // [rsp+B8h] [rbp-180h]
  __int64 v45; // [rsp+C0h] [rbp-178h]
  _QWORD v46[3]; // [rsp+D0h] [rbp-168h] BYREF
  __int128 v47; // [rsp+E8h] [rbp-150h]
  __int128 v48; // [rsp+F8h] [rbp-140h]
  __int128 v49; // [rsp+108h] [rbp-130h]
  __int128 v50; // [rsp+118h] [rbp-120h]
  __int128 v51; // [rsp+128h] [rbp-110h]
  __int128 v52; // [rsp+138h] [rbp-100h]
  __int128 v53; // [rsp+148h] [rbp-F0h]
  __int128 v54; // [rsp+158h] [rbp-E0h]
  __int128 v55; // [rsp+168h] [rbp-D0h]
  unsigned __int16 *v56; // [rsp+180h] [rbp-B8h]
  int v57; // [rsp+188h] [rbp-B0h]
  int v58; // [rsp+18Ch] [rbp-ACh]
  void *v59; // [rsp+190h] [rbp-A8h]
  int v60; // [rsp+198h] [rbp-A0h]
  int v61; // [rsp+19Ch] [rbp-9Ch]
  _QWORD *v62; // [rsp+1A0h] [rbp-98h]
  __int64 v63; // [rsp+1A8h] [rbp-90h]
  int *v64; // [rsp+1B0h] [rbp-88h]
  __int64 v65; // [rsp+1B8h] [rbp-80h]
  _QWORD *v66; // [rsp+1C0h] [rbp-78h]
  __int64 v67; // [rsp+1C8h] [rbp-70h]
  int *v68; // [rsp+1D0h] [rbp-68h]
  __int64 v69; // [rsp+1D8h] [rbp-60h]
  int *v70; // [rsp+1E0h] [rbp-58h]
  __int64 v71; // [rsp+1E8h] [rbp-50h]

  v5 = a3;
  v36[1] = a2;
  v33 = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !*(_QWORD *)a1 )
    return a2;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 32);
  v44 = a1 + 32;
  v9 = _Mtx_lock((_Mtx_t)(a1 + 32));
  if ( v9 )
  {
    std::_Throw_C_error(v9);
LABEL_31:
    std::_Throw_C_error(v11);
    goto LABEL_32;
  }
  v10 = *(_BYTE **)(a1 + 16);
  if ( *(_BYTE **)(a1 + 24) == v10 )
  {
    std::vector<CVADServer *>::_Emplace_reallocate<CVADServer * const &>((_QWORD *)(a1 + 8), v10, &v33);
    v5 = v33;
  }
  else
  {
    *(_QWORD *)v10 = v5;
    *(_QWORD *)(a1 + 16) += 8LL;
  }
  v11 = _Mtx_unlock(v8);
  if ( v11 )
    goto LABEL_31;
  v45 = a1;
  ProcessHeap = GetProcessHeap();
  v13 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
  v3 = v13;
  v35 = v13;
  if ( v13 )
  {
    v13[2] = 1;
    v13[3] = 1;
    *(_QWORD *)v13 = &std::_Ref_count_obj<CPdcTimerActivation>::`vftable';
    v4 = (char *)(v13 + 4);
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = a1;
    *((_QWORD *)v13 + 4) = v5;
    v46[0] = 1LL;
    v46[1] = v5;
    v46[2] = 560LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v14 = *(_QWORD *)(v5 + 192);
    v15 = 0LL;
    v16 = *(_QWORD *)(v14 + 80);
    if ( !v16 )
      goto LABEL_14;
    v17 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
    v15 = v17;
    if ( v17 )
    {
      if ( *v17 )
        goto LABEL_14;
    }
    v18 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 80) + 80LL))(*(_QWORD *)(v14 + 80));
    if ( !v18 || !*v18 )
      goto LABEL_14;
    v19 = wcsrchr(v18, 0x5Cu);
    if ( v19 )
    {
      v15 = v19 + 1;
      goto LABEL_14;
    }
LABEL_32:
    v15 = 0LL;
LABEL_14:
    v39[0] = 1;
    v39[1] = 300;
    v40 = 0LL;
    v41 = L"Unknown";
    v42 = v46;
    v43 = 0LL;
    if ( v15 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v15[v20] );
      if ( v20 )
        v41 = v15;
    }
    v21 = Pdcv2ActivationClientActivate(
            **((_QWORD **)v4 + 1),
            v39,
            *((_QWORD *)v4 + 2),
            2LL,
            L"TimerForAudioPlayback",
            0,
            v4,
            &v29,
            1);
    if ( v21 >= 0 )
      Pdcv2ActivationClientSetBrokeredProcessId(*(_QWORD *)v4, *(unsigned int *)(v5 + 64));
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
    v22 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v22 > 4u )
    {
      v23 = *((_QWORD *)v4 + 2);
      v24 = *(_QWORD *)(v23 + 544);
      v25 = *(_DWORD *)(v23 + 64);
      v30 = v29;
      v31 = v21;
      v36[0] = v24;
      v32 = v25;
      v35 = (_DWORD *)v23;
      v70 = &v30;
      v71 = 4LL;
      v68 = &v31;
      v69 = 4LL;
      v66 = v36;
      v67 = 8LL;
      v64 = &v32;
      v65 = 4LL;
      v62 = &v35;
      v63 = 8LL;
      v37[0] = 184549376;
      v37[1] = 4;
      v38 = 0LL;
      v56 = *(unsigned __int16 **)(v22 + 8);
      v57 = *v56;
      v58 = 2;
      v59 = &unk_180169DD4;
      v60 = 89;
      v61 = 1;
      LODWORD(v33) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v22 + 32), v37, 0LL);
    }
    goto LABEL_26;
  }
  v3 = 0LL;
LABEL_26:
  *a2 = v3 + 4;
  v26 = (std::_Ref_count_base *)a2[1];
  a2[1] = v3;
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  return a2;
}
