/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x18000A350
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18000BCD0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800664C4 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DD124 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::StartStream(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r15
  __int64 v7; // rdi
  unsigned __int64 CurrentThreadId; // rbx
  __int64 v9; // rcx
  signed __int64 *v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rax
  std::_Ref_count_base *v18; // rdx
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r14
  WINBOOL v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  _WORD *v26; // rax
  __int64 v27; // rcx
  int v29; // edx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v34; // rax
  signed __int64 v35; // rdx
  signed __int64 v36; // rax
  int v37; // [rsp+28h] [rbp-E0h]
  int v38; // [rsp+28h] [rbp-E0h]
  __int64 v39; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  std::_Ref_count_base *v44; // [rsp+60h] [rbp-A8h]
  _QWORD v45[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v46[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h]
  DWORD v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  __int64 v50; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v52[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-48h]
  std::_Ref_count_base *v54; // [rsp+C8h] [rbp-40h]
  unsigned __int16 *v55; // [rsp+D8h] [rbp-30h]
  int v56; // [rsp+E0h] [rbp-28h]
  int v57; // [rsp+E4h] [rbp-24h]
  void *v58; // [rsp+E8h] [rbp-20h]
  int v59; // [rsp+F0h] [rbp-18h]
  int v60; // [rsp+F4h] [rbp-14h]
  __int64 *v61; // [rsp+F8h] [rbp-10h]
  __int64 v62; // [rsp+100h] [rbp-8h]
  _WORD *v63; // [rsp+108h] [rbp+0h]
  int v64; // [rsp+110h] [rbp+8h]
  int v65; // [rsp+114h] [rbp+Ch]
  WINBOOL *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v7 = wil::details::g_pThreadFailureCallbacks;
  v45[0] = off_1801474F8;
  LOBYTE(v39) = 0;
  v45[1] = &v39;
  v46[1] = v45;
  v45[2] = a1;
  v46[0] = 0LL;
  v47 = 0LL;
  v48 = 0;
  v49 = 0LL;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_48;
  CurrentThreadId = GetCurrentThreadId();
  v9 = *(_QWORD *)(v7 + 8 * (CurrentThreadId % 0xA));
  v10 = (signed __int64 *)(v7 + 8 * (CurrentThreadId % 0xA));
  if ( !v9 )
  {
LABEL_44:
    v34 = wil::details::ProcessHeapAlloc(0, 0x18uLL, CurrentThreadId % 0xA);
    v35 = (signed __int64)v34;
    if ( v34 )
    {
      v11 = v34 + 2;
      *(_DWORD *)v34 = CurrentThreadId;
      v34[2] = 0LL;
      v34[1] = 0LL;
      _m_prefetchw(v10);
      do
      {
        v36 = *v10;
        *(_QWORD *)(v35 + 8) = *v10;
      }
      while ( v36 != _InterlockedCompareExchange64(v10, v35, v36) );
      goto LABEL_5;
    }
LABEL_48:
    v11 = 0LL;
    goto LABEL_5;
  }
  while ( *(_DWORD *)v9 != (_DWORD)CurrentThreadId )
  {
    v9 = *(_QWORD *)(v9 + 8);
    if ( !v9 )
      goto LABEL_44;
  }
  v11 = (__int64 *)(v9 + 16);
LABEL_5:
  v46[0] = v11;
  if ( v11 )
  {
    v47 = *v11;
    *v11 = (__int64)v46;
    v48 = GetCurrentThreadId();
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    v12 = *(_QWORD *)(a1 + 168);
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 192);
      if ( *(_BYTE *)(v13 + 432) )
      {
        v15 = -2005139336;
      }
      else if ( a2 == *(_QWORD *)(v13 + 56) )
      {
        if ( a3 )
        {
          v15 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x787,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)0x8000FFFFLL,
            v37);
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 344LL))(v12, v13, 0LL);
          v15 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x78A,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v14,
              v37);
          }
          else
          {
            if ( *(_BYTE *)(a1 + 188) )
            {
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
              }
              goto LABEL_32;
            }
            v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 296LL))(
                    *(_QWORD *)(a1 + 168),
                    *(_QWORD *)(a1 + 192));
            v15 = v16;
            if ( v16 >= 0 )
            {
              *(_BYTE *)(a1 + 188) = 1;
              *(_BYTE *)(a1 + 200) = 0;
              if ( !*(_QWORD *)(a1 + 456) )
              {
                CPowerReferenceManager::AcquirePowerReferenceForStream(g_powerReferenceManager, &v43, a1);
                v17 = v43;
                v18 = v44;
                v19 = *(std::_Ref_count_base **)(a1 + 464);
                v43 = 0LL;
                v44 = 0LL;
                v50 = v17;
                *(_QWORD *)(a1 + 456) = v17;
                v54 = v18;
                *(_QWORD *)(a1 + 464) = v18;
                if ( v19 )
                {
                  std::_Ref_count_base::_Decref(v19);
                  if ( v44 )
                    std::_Ref_count_base::_Decref(v44);
                }
              }
              v20 = *(_QWORD *)(a1 + 192) + 8LL;
              v40 = 0LL;
              if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v40) >= 0 )
              {
                Context = 0LL;
                if ( InitOnceBeginInitialize(
                       &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
                       0,
                       fPending,
                       &Context)
                  && fPending[0] )
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
                v21 = *((_QWORD *)Context + 1);
                if ( *(_DWORD *)v21 > 4u )
                {
                  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 40LL))(v40);
                  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
                  v24 = *(_QWORD *)(a1 + 168);
                  v25 = v23;
                  fPending[1] = v22;
                  v26 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24);
                  v51 = v25;
                  v66 = &fPending[1];
                  v67 = 4LL;
                  if ( v26 )
                  {
                    v27 = -1LL;
                    while ( v26[++v27] != 0 )
                      ;
                    v29 = 2 * v27 + 2;
                  }
                  else
                  {
                    v26 = &unk_18015D744;
                    v29 = 2;
                  }
                  v63 = v26;
                  v64 = v29;
                  v61 = &v51;
                  v52[1] = 4;
                  v55 = *(unsigned __int16 **)(v21 + 8);
                  v65 = 0;
                  v62 = 8LL;
                  v52[0] = 184549376;
                  v53 = 0LL;
                  v56 = *v55;
                  v58 = &unk_1801686BF;
                  v57 = 2;
                  v30 = *(_QWORD *)(v21 + 32);
                  v59 = 62;
                  v60 = 1;
                  LODWORD(v50) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                  v37 = 5;
                  EtwEventWriteTransfer(v30, v52, 0LL);
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 48LL))(v40);
                IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
              }
              if ( QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 504)) )
                *(_QWORD *)(a1 + 512) = *(_QWORD *)(a1 + 504);
              if ( v40 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
LABEL_32:
              v15 = 0;
              goto LABEL_33;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x78E,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v16,
              v37);
          }
        }
      }
      else
      {
        v15 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12FF,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070057LL,
          v37);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x784,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070057LL,
          v38);
      }
    }
    else
    {
      v15 = -2004287487;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x783,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL,
        v37);
    }
  }
  else
  {
    v15 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x782,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v37);
  }
LABEL_33:
  if ( v48 )
  {
    if ( v48 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B0,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v37);
    v31 = (_QWORD *)v46[0];
    v48 = 0;
    v32 = *(_QWORD **)v46[0];
    if ( *(_QWORD *)v46[0] )
    {
      while ( v32 != v46 )
      {
        v31 = v32 + 2;
        v46[0] = v32 + 2;
        v32 = (_QWORD *)v32[2];
        if ( !v32 )
          goto LABEL_39;
      }
      *v31 = v47;
    }
LABEL_39:
    v46[0] = 0LL;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v15;
}
