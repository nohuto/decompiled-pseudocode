/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002D49C
 * Callers:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002E10C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180030848 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001D510 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     WPP_SF_dii @ 0x18002AFD8 (WPP_SF_dii.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x18002B154 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B4B0 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18002D0B0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002D398 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x180030A04 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$shared_ptr@V.c)
 *     ??$_Setp@VDuckingDescriptor@@@?$shared_ptr@VDuckingDescriptor@@@std@@AEAAXPEAVDuckingDescriptor@@U?$integral_constant@_N$0A@@1@@Z @ 0x180030FA8 (--$_Setp@VDuckingDescriptor@@@-$shared_ptr@VDuckingDescriptor@@@std@@AEAAXPEAVDuckingDescriptor@.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x1800330C0 (--0CDriverListener@@QEAA@XZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18003BFC8 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F69C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall TsSessionCreate(DWORD a1, void **a2, struct TSSession **a3)
{
  unsigned int refreshed; // esi
  CDriverListener *v7; // rax
  CDriverListener *v8; // rcx
  CDriverListener *v9; // rbx
  char *v10; // rdi
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  unsigned int TsAudioProtocol; // eax
  struct TSSession *v13; // rbx
  __int64 v14; // r8
  HANDLE ProcessHeap; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  char *v22; // rsi
  bool v23; // bl
  volatile signed __int32 *v24; // rdx
  __int64 v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // rbx
  bool v28; // bl
  volatile signed __int32 *v29; // rdx
  __int64 v30; // rbx
  _DWORD *v31; // rax
  __int64 v32; // rbx
  bool v33; // bl
  volatile signed __int32 *v34; // rdx
  __int64 v35; // rbx
  _DWORD *v36; // rax
  __int64 v37; // rbx
  bool v38; // bl
  volatile signed __int32 *v39; // rdx
  __int64 v40; // rbx
  _DWORD *v41; // rax
  __int64 v42; // rbx
  bool v43; // bl
  volatile signed __int32 *v44; // rdx
  __int64 v45; // rbx
  _DWORD *v46; // rax
  __int64 v47; // rbx
  bool v48; // bl
  volatile signed __int32 *v49; // rdx
  __int64 v50; // rbx
  _DWORD *v51; // rax
  __int64 v52; // rbx
  bool v53; // bl
  _QWORD *v54; // rdx
  __int64 v55; // rbx
  struct TSSession *v56; // rbx
  __int128 v58; // [rsp+30h] [rbp-89h] BYREF
  __int128 v59; // [rsp+40h] [rbp-79h] BYREF
  __int128 v60; // [rsp+50h] [rbp-69h] BYREF
  __int128 v61; // [rsp+60h] [rbp-59h] BYREF
  __int128 v62; // [rsp+70h] [rbp-49h] BYREF
  __int128 v63; // [rsp+80h] [rbp-39h] BYREF
  __int128 v64; // [rsp+90h] [rbp-29h] BYREF
  volatile signed __int32 *v65; // [rsp+A0h] [rbp-19h] BYREF
  volatile signed __int32 *v66; // [rsp+A8h] [rbp-11h] BYREF
  volatile signed __int32 *v67; // [rsp+B0h] [rbp-9h] BYREF
  volatile signed __int32 *v68; // [rsp+B8h] [rbp-1h] BYREF
  volatile signed __int32 *v69; // [rsp+C0h] [rbp+7h] BYREF
  volatile signed __int32 *v70; // [rsp+C8h] [rbp+Fh] BYREF
  void *v71[8]; // [rsp+D0h] [rbp+17h] BYREF
  struct TSSession *v72; // [rsp+130h] [rbp+77h] BYREF
  CDriverListener *v73; // [rsp+138h] [rbp+7Fh] BYREF

  v72 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids, a1);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  TSSession::Create(a1, &v72);
  if ( !v72 )
    return 14;
  if ( a1 )
    goto LABEL_20;
  v7 = (CDriverListener *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = CDriverListener::CDriverListener(v7);
  else
    v8 = 0LL;
  v9 = v8;
  v73 = v8;
  v10 = (char *)v72 + 312;
  if ( (CDriverListener **)((char *)v72 + 312) != &v73 )
  {
    v9 = 0LL;
    v73 = 0LL;
    v11 = *(void (__fastcall ****)(_QWORD, __int64))v10;
    *(_QWORD *)v10 = v8;
    if ( !v11 )
      goto LABEL_18;
    (**v11)(v11, 1LL);
    v8 = 0LL;
  }
  if ( v8 )
    (**(void (__fastcall ***)(CDriverListener *, __int64))v9)(v9, 1LL);
LABEL_18:
  if ( !*(_QWORD *)v10 )
  {
    refreshed = 14;
    goto LABEL_144;
  }
LABEL_20:
  TsAudioProtocol = GetTsAudioProtocol(a1);
  v13 = v72;
  *((_DWORD *)v72 + 1) = TsAudioProtocol;
  *((_DWORD *)v13 + 2) = ++dword_180056248;
  refreshed = TsSessionRefreshSessionInformation(v13);
  if ( refreshed )
    goto LABEL_144;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dii(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *((_QWORD *)v13 + 5),
      v14,
      *(_DWORD *)v13,
      *(_QWORD *)(*((_QWORD *)v13 + 5) + 176LL),
      *(_QWORD *)(*((_QWORD *)v13 + 5) + 200LL));
  }
  EnterCriticalSection(&stru_180056188);
  ProcessHeap = GetProcessHeap();
  v16 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v17 = v16;
  if ( v16 )
  {
    *v16 = 0LL;
    v16[1] = 0LL;
    v16[2] = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    refreshed = 14;
    LeaveCriticalSection(&stru_180056188);
    goto LABEL_144;
  }
  v17[2] = v72;
  *v17 = qword_180056208;
  v17[1] = 0LL;
  if ( qword_180056208 )
    *((_QWORD *)qword_180056208 + 1) = v17;
  else
    qword_180056210 = (__int64)v17;
  qword_180056208 = v17;
  ++dword_180056218;
  TsSessionConsiderForPrimaryConsoleAudioSession(v72);
  LeaveCriticalSection(&stru_180056188);
  if ( a2 )
    *a2 = v17;
  *a3 = v72;
  v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v18 )
  {
    *(_QWORD *)v18 = &DuckingDescriptor::`vftable';
    v18[2] = -1047527424;
    *((_BYTE *)v18 + 12) = 0;
    *((_QWORD *)v18 + 2) = 400000LL;
  }
  else
  {
    v18 = 0LL;
  }
  v59 = 0LL;
  std::shared_ptr<DuckingDescriptor>::_Setp<DuckingDescriptor>(&v59, v18);
  if ( !(_QWORD)v59 )
  {
    refreshed = 14;
    v19 = *((_QWORD *)&v59 + 1);
    if ( !*((_QWORD *)&v59 + 1) )
      goto LABEL_144;
LABEL_39:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1 )
    {
      v20 = *((_QWORD *)&v59 + 1);
      (***((void (__fastcall ****)(_QWORD))&v59 + 1))(*((_QWORD *)&v59 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
      {
        v21 = *((_QWORD *)&v59 + 1);
LABEL_42:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        goto LABEL_144;
      }
    }
    goto LABEL_144;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v65,
    (__int64)L"SR");
  v22 = (char *)v72 + 280;
  v23 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Add(
                        (char *)v72 + 280,
                        &v65,
                        &v59) == 0;
  v24 = v65 - 6;
  if ( _InterlockedDecrement(v65 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v24 + 8LL))(*(_QWORD *)v24);
  if ( v23 )
  {
    refreshed = 14;
    v19 = *((_QWORD *)&v59 + 1);
    if ( !*((_QWORD *)&v59 + 1) )
      goto LABEL_144;
    goto LABEL_39;
  }
  if ( *((_QWORD *)&v59 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v25 = *((_QWORD *)&v59 + 1);
      (***((void (__fastcall ****)(_QWORD))&v59 + 1))(*((_QWORD *)&v59 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v59 + 1) + 8LL))(*((_QWORD *)&v59 + 1));
    }
  }
  v26 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v26 )
  {
    *(_QWORD *)v26 = &DuckingDescriptor::`vftable';
    v26[2] = -1042284544;
    *((_BYTE *)v26 + 12) = 1;
    *((_QWORD *)v26 + 2) = 400000LL;
  }
  else
  {
    v26 = 0LL;
  }
  v60 = 0LL;
  std::shared_ptr<DuckingDescriptor>::_Setp<DuckingDescriptor>(&v60, v26);
  if ( !(_QWORD)v60 )
    goto LABEL_56;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v66,
    (__int64)L"Comm");
  v28 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Add(
                        v22,
                        &v66,
                        &v60) == 0;
  v29 = v66 - 6;
  if ( _InterlockedDecrement(v66 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 8LL))(*(_QWORD *)v29);
  if ( v28 )
  {
LABEL_56:
    refreshed = 14;
    if ( *((_QWORD *)&v60 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v60 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v27 = *((_QWORD *)&v60 + 1);
        (***((void (__fastcall ****)(_QWORD))&v60 + 1))(*((_QWORD *)&v60 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
        {
          v21 = *((_QWORD *)&v60 + 1);
          goto LABEL_42;
        }
      }
    }
  }
  else
  {
    if ( *((_QWORD *)&v60 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v60 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v30 = *((_QWORD *)&v60 + 1);
        (***((void (__fastcall ****)(_QWORD))&v60 + 1))(*((_QWORD *)&v60 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v60 + 1) + 8LL))(*((_QWORD *)&v60 + 1));
      }
    }
    v31 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v31 )
    {
      *(_QWORD *)v31 = &DuckingDescriptor::`vftable';
      v31[2] = -1061158912;
      *((_BYTE *)v31 + 12) = 0;
      *((_QWORD *)v31 + 2) = 400000LL;
    }
    else
    {
      v31 = 0LL;
    }
    v61 = 0LL;
    std::shared_ptr<DuckingDescriptor>::_Setp<DuckingDescriptor>(&v61, v31);
    if ( !(_QWORD)v61 )
      goto LABEL_71;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      (void **)&v67,
      (__int64)L"1");
    v33 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Add(
                          v22,
                          &v67,
                          &v61) == 0;
    v34 = v67 - 6;
    if ( _InterlockedDecrement(v67 - 2) <= 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 8LL))(*(_QWORD *)v34);
    if ( v33 )
    {
LABEL_71:
      refreshed = 14;
      if ( *((_QWORD *)&v61 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v32 = *((_QWORD *)&v61 + 1);
          (***((void (__fastcall ****)(_QWORD))&v61 + 1))(*((_QWORD *)&v61 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
          {
            v21 = *((_QWORD *)&v61 + 1);
            goto LABEL_42;
          }
        }
      }
    }
    else
    {
      if ( *((_QWORD *)&v61 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v35 = *((_QWORD *)&v61 + 1);
          (***((void (__fastcall ****)(_QWORD))&v61 + 1))(*((_QWORD *)&v61 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v61 + 1) + 8LL))(*((_QWORD *)&v61 + 1));
        }
      }
      v36 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v36 )
      {
        *(_QWORD *)v36 = &DuckingDescriptor::`vftable';
        v36[2] = -1047527424;
        *((_BYTE *)v36 + 12) = 0;
        *((_QWORD *)v36 + 2) = 400000LL;
      }
      else
      {
        v36 = 0LL;
      }
      v62 = 0LL;
      std::shared_ptr<DuckingDescriptor>::_Setp<DuckingDescriptor>(&v62, v36);
      if ( !(_QWORD)v62 )
        goto LABEL_86;
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        (void **)&v68,
        (__int64)L"2");
      v38 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Add(
                            v22,
                            &v68,
                            &v62) == 0;
      v39 = v68 - 6;
      if ( _InterlockedDecrement(v68 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v39 + 8LL))(*(_QWORD *)v39);
      if ( v38 )
      {
LABEL_86:
        refreshed = 14;
        if ( *((_QWORD *)&v62 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v37 = *((_QWORD *)&v62 + 1);
            (***((void (__fastcall ****)(_QWORD))&v62 + 1))(*((_QWORD *)&v62 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFFFFFFFF) == 1 )
            {
              v21 = *((_QWORD *)&v62 + 1);
              goto LABEL_42;
            }
          }
        }
      }
      else
      {
        if ( *((_QWORD *)&v62 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v40 = *((_QWORD *)&v62 + 1);
            (***((void (__fastcall ****)(_QWORD))&v62 + 1))(*((_QWORD *)&v62 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v62 + 1) + 8LL))(*((_QWORD *)&v62 + 1));
          }
        }
        v41 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v41 )
        {
          *(_QWORD *)v41 = &DuckingDescriptor::`vftable';
          v41[2] = -1042284544;
          *((_BYTE *)v41 + 12) = 0;
          *((_QWORD *)v41 + 2) = 400000LL;
        }
        else
        {
          v41 = 0LL;
        }
        v63 = 0LL;
        std::shared_ptr<DuckingDescriptor>::_Setp<DuckingDescriptor>(&v63, v41);
        if ( !(_QWORD)v63 )
          goto LABEL_101;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          (void **)&v69,
          (__int64)L"3");
        v43 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Add(
                              v22,
                              &v69,
                              &v63) == 0;
        v44 = v69 - 6;
        if ( _InterlockedDecrement(v69 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v44 + 8LL))(*(_QWORD *)v44);
        if ( v43 )
        {
LABEL_101:
          refreshed = 14;
          if ( *((_QWORD *)&v63 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v63 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              v42 = *((_QWORD *)&v63 + 1);
              (***((void (__fastcall ****)(_QWORD))&v63 + 1))(*((_QWORD *)&v63 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 12), 0xFFFFFFFF) == 1 )
              {
                v21 = *((_QWORD *)&v63 + 1);
                goto LABEL_42;
              }
            }
          }
        }
        else
        {
          if ( *((_QWORD *)&v63 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v63 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              v45 = *((_QWORD *)&v63 + 1);
              (***((void (__fastcall ****)(_QWORD))&v63 + 1))(*((_QWORD *)&v63 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v63 + 1) + 8LL))(*((_QWORD *)&v63 + 1));
            }
          }
          v46 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          *(_QWORD *)&v58 = v46;
          if ( v46 )
          {
            *(_QWORD *)v46 = &DuckingDescriptor::`vftable';
            v46[2] = -8388608;
            *((_BYTE *)v46 + 12) = 0;
            *((_QWORD *)v46 + 2) = 400000LL;
          }
          else
          {
            v46 = 0LL;
          }
          v58 = 0LL;
          std::shared_ptr<DuckingDescriptor>::_Setp<DuckingDescriptor>(&v58, v46);
          if ( !(_QWORD)v58 )
            goto LABEL_116;
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            (void **)&v70,
            (__int64)L"4");
          v48 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Add(
                                v22,
                                &v70,
                                &v58) == 0;
          v49 = v70 - 6;
          if ( _InterlockedDecrement(v70 - 2) <= 0 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v49 + 8LL))(*(_QWORD *)v49);
          if ( v48 )
          {
LABEL_116:
            refreshed = 14;
            if ( *((_QWORD *)&v58 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v58 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v47 = *((_QWORD *)&v58 + 1);
                (***((void (__fastcall ****)(_QWORD))&v58 + 1))(*((_QWORD *)&v58 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 12), 0xFFFFFFFF) == 1 )
                {
                  v21 = *((_QWORD *)&v58 + 1);
                  goto LABEL_42;
                }
              }
            }
          }
          else
          {
            if ( *((_QWORD *)&v58 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v58 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v50 = *((_QWORD *)&v58 + 1);
                (***((void (__fastcall ****)(_QWORD))&v58 + 1))(*((_QWORD *)&v58 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 12), 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v58 + 1) + 8LL))(*((_QWORD *)&v58 + 1));
              }
            }
            v51 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
            if ( v51 )
            {
              *(_QWORD *)v51 = &DuckingDescriptor::`vftable';
              v51[2] = -1042284544;
              *((_BYTE *)v51 + 12) = 1;
              *((_QWORD *)v51 + 2) = 400000LL;
            }
            else
            {
              v51 = 0LL;
            }
            v64 = 0LL;
            std::shared_ptr<DuckingDescriptor>::_Setp<DuckingDescriptor>(&v64, v51);
            if ( (_QWORD)v64 )
            {
              ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                v71,
                (__int64)L"5");
              v53 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Add(
                                    v22,
                                    v71,
                                    &v64) == 0;
              v54 = (char *)v71[0] - 24;
              if ( _InterlockedDecrement((volatile signed __int32 *)v71[0] - 2) <= 0 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v54 + 8LL))(*v54);
              if ( !v53 )
              {
                if ( *((_QWORD *)&v64 + 1) )
                {
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 8LL), 0xFFFFFFFF) == 1 )
                  {
                    v55 = *((_QWORD *)&v64 + 1);
                    (***((void (__fastcall ****)(_QWORD))&v64 + 1))(*((_QWORD *)&v64 + 1));
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 12), 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v64 + 1) + 8LL))(*((_QWORD *)&v64 + 1));
                  }
                }
                v72 = 0LL;
                refreshed = 0;
                goto LABEL_144;
              }
            }
            refreshed = 14;
            if ( *((_QWORD *)&v64 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v52 = *((_QWORD *)&v64 + 1);
                (***((void (__fastcall ****)(_QWORD))&v64 + 1))(*((_QWORD *)&v64 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 12), 0xFFFFFFFF) == 1 )
                {
                  v21 = *((_QWORD *)&v64 + 1);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_144:
  v56 = v72;
  if ( v72 )
  {
    TSSession::~TSSession(v72);
    operator delete(v56, (const struct std::nothrow_t *)0x160);
  }
  return refreshed;
}
