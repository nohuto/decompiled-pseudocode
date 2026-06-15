/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x1800182F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x18001BF20 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800665C4 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DD1E4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___ @ 0x1800F65F4 (wil--details--lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___--_lambda_call__lambda_9872.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v6; // r8
  __int64 v7; // r14
  unsigned __int64 CurrentThreadId; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  signed int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r13
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  _WORD *v24; // rax
  __int64 v25; // rcx
  int v27; // edx
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  double v31; // xmm6_8
  __int64 v32; // rdx
  struct CEndpointCharacteristics *v33; // rbx
  AudioJournal *v34; // rcx
  int StreamInfo; // eax
  BYTE *v36; // rbx
  __int64 v37; // rcx
  const WCHAR *v38; // r12
  DWORD v39; // r13d
  LSTATUS v40; // eax
  LSTATUS v41; // eax
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rbx
  _QWORD *v45; // rax
  signed __int64 v46; // rdx
  signed __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rdx
  int dwOptions; // [rsp+28h] [rbp-E0h]
  struct CEndpointCharacteristics **dwOptionsa; // [rsp+28h] [rbp-E0h]
  int dwOptionsb; // [rsp+28h] [rbp-E0h]
  int dwOptionsc; // [rsp+28h] [rbp-E0h]
  int dwOptionsd; // [rsp+28h] [rbp-E0h]
  int v57; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v58; // [rsp+5Ch] [rbp-ACh]
  int v59[2]; // [rsp+60h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+70h] [rbp-98h] BYREF
  int v62; // [rsp+74h] [rbp-94h] BYREF
  __int64 v63; // [rsp+78h] [rbp-90h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-80h] BYREF
  BYTE *lpData; // [rsp+90h] [rbp-78h] BYREF
  struct CEndpointCharacteristics *v67; // [rsp+98h] [rbp-70h] BYREF
  int *v68; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-60h]
  char v70; // [rsp+B0h] [rbp-58h]
  _QWORD v71[5]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v72[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-18h]
  DWORD v74; // [rsp+F8h] [rbp-10h]
  __int64 v75; // [rsp+100h] [rbp-8h]
  __int64 v76; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v77[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v78; // [rsp+118h] [rbp+10h]
  HKEY *p_hKey; // [rsp+120h] [rbp+18h] BYREF
  char v80; // [rsp+128h] [rbp+20h]
  __int64 v81; // [rsp+130h] [rbp+28h]
  unsigned __int16 *v82; // [rsp+148h] [rbp+40h]
  int v83; // [rsp+150h] [rbp+48h]
  int v84; // [rsp+154h] [rbp+4Ch]
  void *v85; // [rsp+158h] [rbp+50h]
  int v86; // [rsp+160h] [rbp+58h]
  int v87; // [rsp+164h] [rbp+5Ch]
  __int64 *v88; // [rsp+168h] [rbp+60h]
  __int64 v89; // [rsp+170h] [rbp+68h]
  __int64 *v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  _WORD *v92; // [rsp+188h] [rbp+80h]
  int v93; // [rsp+190h] [rbp+88h]
  int v94; // [rsp+194h] [rbp+8Ch]
  int *v95; // [rsp+198h] [rbp+90h]
  __int64 v96; // [rsp+1A0h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v3 = a3;
  v58 = a3;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v7 = wil::details::g_pThreadFailureCallbacks;
  v68 = &v57;
  v81 = a1;
  v71[0] = &off_1801477A8;
  v71[1] = (char *)&v57 + 1;
  v71[2] = &v57;
  v71[4] = &v68;
  v72[1] = v71;
  LOWORD(v57) = 0;
  v69 = a1;
  v70 = 1;
  v71[3] = a1;
  v72[0] = 0LL;
  v73 = 0LL;
  v74 = 0;
  v75 = 0LL;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_74;
  CurrentThreadId = GetCurrentThreadId();
  v9 = CurrentThreadId % 0xA;
  v10 = *(_QWORD *)(v7 + 8 * (CurrentThreadId % 0xA));
  if ( !v10 )
  {
LABEL_69:
    v45 = wil::details::ProcessHeapAlloc(0, 0x18uLL, v6);
    v46 = (signed __int64)v45;
    if ( v45 )
    {
      v11 = v45 + 2;
      *(_DWORD *)v45 = CurrentThreadId;
      v45[2] = 0LL;
      v45[1] = 0LL;
      _m_prefetchw((const void *)(v7 + 8 * v9));
      do
      {
        v47 = *(_QWORD *)(v7 + 8 * v9);
        *(_QWORD *)(v46 + 8) = v47;
      }
      while ( v47 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8 * v9), v46, v47) );
      v3 = v58;
      goto LABEL_5;
    }
    v3 = v58;
LABEL_74:
    v11 = 0LL;
    goto LABEL_5;
  }
  while ( *(_DWORD *)v10 != (_DWORD)CurrentThreadId )
  {
    v10 = *(_QWORD *)(v10 + 8);
    if ( !v10 )
      goto LABEL_69;
  }
  v3 = v58;
  v11 = (__int64 *)(v10 + 16);
LABEL_5:
  v72[0] = v11;
  if ( v11 )
  {
    v73 = *v11;
    *v11 = (__int64)v72;
    v74 = GetCurrentThreadId();
  }
  v12 = -2147024809;
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v48 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x822,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      dwOptions);
LABEL_84:
    v16 = v48;
    goto LABEL_31;
  }
  v13 = *(_QWORD *)(a1 + 168);
  if ( !v13 )
  {
    v48 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      dwOptions);
    goto LABEL_84;
  }
  v14 = *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(v14 + 432) )
  {
    v48 = -2005139336;
    goto LABEL_84;
  }
  if ( a2 != *(_QWORD *)(v14 + 56) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12FF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      dwOptions);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x824,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      dwOptionsc);
    v48 = -2147024809;
    goto LABEL_84;
  }
  if ( v3 == 1 )
    LOBYTE(v6) = 1;
  else
    v6 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v13 + 344LL))(v13, v14, v6);
  v16 = v15;
  if ( v15 < 0 )
  {
    v48 = -2004287484;
    if ( v15 != -2004287484 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x827,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v15,
        dwOptions);
      goto LABEL_31;
    }
    goto LABEL_84;
  }
  if ( !*(_BYTE *)(a1 + 188) )
  {
LABEL_30:
    v16 = 0;
    goto LABEL_31;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 304LL))(
          *(_QWORD *)(a1 + 168),
          *(_QWORD *)(a1 + 192));
  v16 = v17;
  if ( v17 >= 0 )
  {
    *(_BYTE *)(a1 + 188) = 0;
    QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 512));
    v18 = *(_QWORD *)(a1 + 192);
    LOBYTE(v57) = 1;
    if ( v18 && *(_QWORD *)(a1 + 168) )
    {
      v65 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v18 + 8) + 24LL))(v18 + 8, &v65) >= 0 )
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
        v19 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v19 > 4u )
        {
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 40LL))(v65);
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
          v22 = *(_QWORD *)(a1 + 168);
          v23 = v21;
          v62 = v20;
          v24 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 64LL))(v22);
          LODWORD(v63) = v58;
          v95 = &v62;
          v76 = v23;
          v96 = 4LL;
          if ( v24 )
          {
            v25 = -1LL;
            while ( v24[++v25] != 0 )
              ;
            v27 = 2 * v25 + 2;
          }
          else
          {
            v24 = &unk_18015D734;
            v27 = 2;
          }
          v92 = v24;
          v93 = v27;
          v90 = &v76;
          v94 = 0;
          v88 = &v63;
          v77[1] = 4;
          v82 = *(unsigned __int16 **)(v19 + 8);
          v91 = 8LL;
          v89 = 4LL;
          v77[0] = 184549376;
          v78 = 0LL;
          v83 = *v82;
          v85 = &unk_1801685FB;
          v84 = 2;
          v28 = *(_QWORD *)(v19 + 32);
          v86 = 92;
          v87 = 1;
          v58 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          dwOptions = 6;
          EtwEventWriteTransfer(v28, v77, 0LL);
        }
      }
      if ( v65 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    }
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x82C,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v17,
    dwOptions);
LABEL_31:
  if ( v74 )
  {
    if ( v74 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B0,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        dwOptions);
    v29 = (_QWORD *)v72[0];
    v74 = 0;
    v30 = *(_QWORD **)v72[0];
    if ( *(_QWORD *)v72[0] )
    {
      while ( v30 != v72 )
      {
        v29 = v30 + 2;
        v72[0] = v30 + 2;
        v30 = (_QWORD *)v30[2];
        if ( !v30 )
          goto LABEL_37;
      }
      *v29 = v73;
    }
LABEL_37:
    v72[0] = 0LL;
  }
  if ( v70 )
  {
    v70 = 0;
    if ( *(_BYTE *)v68 )
    {
      v67 = 0LL;
      dwOptionsa = &v67;
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
        g_pEndpointCharacteristicsCache,
        *(_QWORD *)(v69 + 216),
        0LL,
        0LL);
      v31 = 0.0;
      v32 = *(_QWORD *)(v69 + 520);
      if ( v32 )
        v31 = (double)(*(_DWORD *)(v69 + 512) - *(_DWORD *)(v69 + 504)) / (double)(int)v32;
      v33 = v67;
      EnterCriticalSection(&CriticalSection);
      if ( g_AudioJournal )
      {
        StreamInfo = AudioJournal::FindStreamInfo(v34, v33, (struct AudioJournal::StreamInfo **)&lpData, v59);
        if ( StreamInfo >= 0 )
        {
          *(double *)&lpData[200 * v59[0] + 168] = v31 + *(double *)&lpData[200 * v59[0] + 168];
          v36 = lpData;
          v37 = 200LL * v59[0];
          if ( !*(_DWORD *)&lpData[v37 + 148] )
          {
            *(_DWORD *)&lpData[v37 + 148] = 1;
            v36 = lpData;
          }
          if ( v36 == (BYTE *)&unk_1801A00A8 )
          {
            v38 = L"Render";
            v39 = 600;
          }
          else if ( v36 == (BYTE *)&unk_1801A0300 )
          {
            v38 = L"Capture";
            v39 = 400;
          }
          else
          {
            if ( v36 != (BYTE *)&unk_1801A0490 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1ED,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
                (const char *)0x80070057LL,
                (int)&v67);
LABEL_97:
              v49 = (unsigned int)v12;
              v50 = 336LL;
              goto LABEL_98;
            }
            v38 = L"UnknownStream";
            v39 = 200;
          }
          v80 = 1;
          p_hKey = &hKey;
          hKey = 0LL;
          v40 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, &word_1801A0558, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
          v12 = v40;
          if ( v40 > 0 )
            v12 = (unsigned __int16)v40 | 0x80070000;
          if ( v12 < 0 )
          {
            v51 = 452LL;
          }
          else
          {
            v41 = RegSetValueExW(hKey, v38, 0, 3u, v36, v39);
            v12 = v41;
            if ( v41 > 0 )
              v12 = (unsigned __int16)v41 | 0x80070000;
            if ( v12 >= 0 )
            {
              if ( hKey )
                RegCloseKey(hKey);
              LeaveCriticalSection(&CriticalSection);
              goto LABEL_57;
            }
            v51 = 455LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v51,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
            (const char *)(unsigned int)v12,
            dwOptionsb);
          wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___(&p_hKey);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F0,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
            (const char *)(unsigned int)v12,
            dwOptionsd);
          goto LABEL_97;
        }
        v49 = (unsigned int)StreamInfo;
        v50 = 314LL;
      }
      else
      {
        v49 = 2147549183LL;
        v50 = 312LL;
      }
LABEL_98:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v50,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
        (const char *)v49,
        (int)dwOptionsa);
      LeaveCriticalSection(&CriticalSection);
LABEL_57:
      if ( v67 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v67 + 16LL))(v67);
    }
  }
  v42 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 496) = 0LL;
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  v43 = *(volatile signed __int32 **)(a1 + 464);
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
      if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
    }
  }
  if ( a1 != -224 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  return v16;
}
