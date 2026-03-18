/*
 * XREFs of DxgkGetPresentHistoryInternal @ 0x1C0178B20
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     DxgkCleanupPresentHistoryInternal @ 0x1C01E9600 (DxgkCleanupPresentHistoryInternal.c)
 *     DxgkGetPresentHistory @ 0x1C0333120 (DxgkGetPresentHistory.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C000B550 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C000B700 (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002C1E0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C002C7B0 (--0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C002F308 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x1C005452C (--0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ @ 0x1C01D918C (-IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistoryInternal(ULONG64 a1, int a2, __int64 a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // rbx
  struct DXGPROCESS *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rbx
  struct DXGADAPTER *v19; // rdi
  int PairingAdapters; // eax
  struct DXGADAPTER *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  signed __int64 v24; // rax
  struct DXGADAPTER *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v34; // r13
  DXGSESSIONMGR *v35; // rbx
  unsigned int v36; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  struct PRESENTHISTORYBUFFERENTRY *v44; // rsi
  unsigned int v45; // edi
  int v46; // ebx
  unsigned int v47; // eax
  unsigned int v48; // r15d
  __int64 v49; // r8
  _DWORD *v50; // rsi
  int v51; // eax
  unsigned int v52; // r15d
  int v53; // r15d
  ULONG64 v54; // rsi
  LONG v55; // edi
  __int64 v56; // r15
  struct PRESENTHISTORYBUFFERENTRY *v57; // r12
  int *v58; // rbx
  char v59; // si
  int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // r9d
  unsigned int v64; // ebx
  __int64 v65; // rcx
  __int64 v66; // r8
  unsigned int v68; // r15d
  int v69; // eax
  __int64 v70; // rdi
  unsigned int v71; // r15d
  _BYTE *v72; // rbx
  __int64 v73; // rdx
  _BYTE *v74; // rdi
  __int64 v75; // rdx
  unsigned __int64 *v76; // rsi
  __int64 v77; // rdi
  unsigned int v78; // ebx
  __int64 v79; // rax
  void (__fastcall *v80)(__int128 *, _QWORD); // rdi
  int v81; // eax
  int v82; // ecx
  __int16 v83; // dx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGTHREAD *Current; // rax
  __int64 v88; // r8
  int v89; // eax
  int v90; // r9d
  _OWORD *v91; // rax
  _DWORD *v92; // rdx
  _DWORD *v93; // rdx
  __int64 v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // r8
  int v97; // r9d
  int v98; // eax
  int v99; // r9d
  __int64 v100; // rdi
  CPushLock *v101; // rbx
  __int64 v102; // rdi
  void *v103; // rcx
  char *v104; // rdx
  ULONG64 v105; // rsi
  _DWORD *v106; // rdx
  _DWORD *v107; // rdx
  _DWORD *v108; // rdx
  __int64 v109; // rsi
  CPushLock *v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // r8
  unsigned __int64 *v114; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 *v115; // [rsp+28h] [rbp-1E0h]
  unsigned __int8 v116[8]; // [rsp+30h] [rbp-1D8h]
  __int64 v117; // [rsp+40h] [rbp-1C8h]
  __int64 v118; // [rsp+48h] [rbp-1C0h]
  int v119; // [rsp+64h] [rbp-1A4h]
  LONG v120; // [rsp+64h] [rbp-1A4h]
  unsigned int v121; // [rsp+68h] [rbp-1A0h]
  int v122; // [rsp+68h] [rbp-1A0h]
  int v123; // [rsp+6Ch] [rbp-19Ch]
  int v124; // [rsp+70h] [rbp-198h] BYREF
  __int64 v125; // [rsp+78h] [rbp-190h]
  char v126; // [rsp+80h] [rbp-188h]
  __int128 v127; // [rsp+88h] [rbp-180h] BYREF
  struct DXGADAPTER *v128; // [rsp+98h] [rbp-170h] BYREF
  __int64 v129; // [rsp+A0h] [rbp-168h] BYREF
  char v130; // [rsp+A8h] [rbp-160h]
  unsigned int v131; // [rsp+B0h] [rbp-158h] BYREF
  unsigned int v132; // [rsp+B4h] [rbp-154h]
  int v133; // [rsp+B8h] [rbp-150h]
  unsigned int v134; // [rsp+BCh] [rbp-14Ch]
  int v135; // [rsp+C0h] [rbp-148h]
  __int128 v136; // [rsp+C8h] [rbp-140h] BYREF
  void *v137; // [rsp+D8h] [rbp-130h]
  struct DXGPROCESS *v138; // [rsp+E0h] [rbp-128h]
  struct PRESENTHISTORYBITS *v139; // [rsp+E8h] [rbp-120h]
  struct DXGADAPTER *v140; // [rsp+F0h] [rbp-118h] BYREF
  unsigned int v141; // [rsp+100h] [rbp-108h]
  unsigned int v142; // [rsp+104h] [rbp-104h]
  DXGPRESENTHISTORYTOKENQUEUE *v143; // [rsp+108h] [rbp-100h]
  __int64 v144; // [rsp+110h] [rbp-F8h] BYREF
  char v145; // [rsp+118h] [rbp-F0h]
  struct DXGADAPTER *v146; // [rsp+120h] [rbp-E8h] BYREF
  ULONG64 v147; // [rsp+128h] [rbp-E0h]
  struct PRESENTHISTORYBUFFERENTRY *v148; // [rsp+130h] [rbp-D8h]
  char v149[8]; // [rsp+138h] [rbp-D0h] BYREF
  __int64 v150; // [rsp+140h] [rbp-C8h]
  int v151; // [rsp+148h] [rbp-C0h]
  int v152; // [rsp+150h] [rbp-B8h]
  unsigned __int64 v153; // [rsp+158h] [rbp-B0h] BYREF
  _DWORD *v154; // [rsp+160h] [rbp-A8h]
  unsigned int v155[4]; // [rsp+168h] [rbp-A0h]
  __int128 v156; // [rsp+178h] [rbp-90h]
  _BYTE v157[16]; // [rsp+190h] [rbp-78h] BYREF
  DXGADAPTER *v158; // [rsp+1A0h] [rbp-68h]
  char v159; // [rsp+1A8h] [rbp-60h]
  __int64 v160; // [rsp+1B0h] [rbp-58h]

  v135 = a2;
  v147 = a1;
  v124 = -1;
  v5 = 0;
  v125 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v126 = 1;
    v124 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2060);
  }
  else
  {
    v126 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v124, 2060);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v13 = v12;
  }
  v138 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v124);
    if ( !v126 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_248;
  }
  if ( (*((_DWORD *)v13 + 106) & 4) == 0 )
  {
    WdLogSingleEntry2(3LL, v13, -1073741790LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v124);
    if ( v126 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v88, v124);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v129, v13);
  if ( v130 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v129, 0LL, 0LL);
  v14 = v129;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v14 + 24) == KeGetCurrentThread() )
  {
    v89 = *(_DWORD *)(v14 + 32);
    if ( v89 <= 0 )
    {
      WdLogSingleEntry1(1LL, 472LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
      v89 = *(_DWORD *)(v14 + 32);
    }
    v17 = v89 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v90 = *(_DWORD *)(v14 + 36);
        if ( v90 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v90);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v14 + 16));
      ExAcquirePushLockExclusiveEx(v14 + 8, 0LL);
    }
    if ( *(_QWORD *)(v14 + 24) )
    {
      WdLogSingleEntry1(1LL, 496LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v14 + 32) )
    {
      WdLogSingleEntry1(1LL, 497LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v14 + 24) = KeGetCurrentThread();
    v17 = 1;
  }
  *(_DWORD *)(v14 + 32) = v17;
  v130 = 1;
  if ( a2 )
  {
    v152 = 0;
    v91 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v91 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v155 = *v91;
    v156 = v91[1];
    v92 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v92 = (_DWORD *)MmUserProbeAddress;
    *v92 = 0;
    v93 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v93 = (_DWORD *)MmUserProbeAddress;
    *v93 = 0;
  }
  else
  {
    *(_OWORD *)v155 = *(_OWORD *)a1;
    v156 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !(_QWORD)v156 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NULL present history pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_170;
  }
  v146 = 0LL;
  v18 = v155[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v140, v155[0], (struct _KTHREAD **)v13, &v146, 1);
  v19 = v146;
  if ( !v146 )
  {
    WdLogSingleEntry2(2LL, v18, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
      v18,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_174:
    if ( v140 )
      DXGADAPTER::ReleaseReference(v140);
LABEL_170:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v129);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v124);
    if ( !v126 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_248;
  }
  v128 = 0LL;
  v153 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v146, 0, &v128, &v153, 0LL, 0LL, 0);
  v121 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v94 = PairingAdapters;
    WdLogSingleEntry2(2LL, v19, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x for DxgkGetPresentHistory (Status = 0x%I64x)!",
      (__int64)v19,
      v94,
      0LL,
      0LL,
      0LL);
    if ( v140 )
      DXGADAPTER::ReleaseReference(v140);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v129);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v124);
    if ( v126 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v95, &EventProfilerExit, v96, v124);
    return v121;
  }
  v21 = v128;
  if ( !v128 )
  {
    WdLogSingleEntry1(1LL, 287LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderAdapter != NULL", 287LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREACCESS::COREACCESS((COREACCESS *)v157, v21);
  if ( v159 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v157, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v158 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v158 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (const EVENT_DESCRIPTOR *)"g", v23, 72);
      KeWaitForSingleObject((char *)v158 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v158, 0LL);
  }
  v160 = 0LL;
  v159 = 1;
  v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v128 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v25 = v128;
  if ( v24 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v128 + 2), v128);
  v26 = *((_QWORD *)v25 + 350);
  if ( !v26 )
  {
    WdLogSingleEntry1(1LL, 299LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      299LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v26 = *((_QWORD *)v25 + 350);
  }
  v142 = 0;
  v133 = 0;
  v132 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v149, (struct _KTHREAD **)(v26 + 864), 0);
  v27 = v150;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v27, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v97 = *(_DWORD *)(v27 + 24);
      if ( v97 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (const EVENT_DESCRIPTOR *)"g", v30, v97);
    }
    ExAcquirePushLockSharedEx(v27, 0LL);
  }
  v151 = 1;
  v32 = PsGetCurrentProcess(v29, v28, v30, v31);
  ProcessSessionId = PsGetProcessSessionId(v32);
  if ( ProcessSessionId >= *(_DWORD *)(v26 + 896) || !*(_QWORD *)(*(_QWORD *)(v26 + 904) + 8LL * ProcessSessionId) )
  {
LABEL_134:
    WdLogSingleEntry1(4LL, v25);
    if ( *((_DWORD *)v25 + 50) != 1 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v149);
      COREACCESS::~COREACCESS((COREACCESS *)v157);
      if ( v140 )
        DXGADAPTER::ReleaseReference(v140);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v129);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v124);
      if ( v126 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v112, &EventProfilerExit, v113, v124);
      return 0LL;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v149);
    COREACCESS::~COREACCESS((COREACCESS *)v157);
    if ( v140 )
      DXGADAPTER::ReleaseReference(v140);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v129);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v124);
    if ( !v126 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_248:
    McTemplateK0q_EtwWriteTransfer(v84, &EventProfilerExit, v85, v124);
    return 3221225485LL;
  }
  _mm_lfence();
  v34 = *(_QWORD *)(*(_QWORD *)(v26 + 904) + 8LL * ProcessSessionId);
  v143 = (DXGPRESENTHISTORYTOKENQUEUE *)v34;
  if ( !v34 )
  {
    v25 = v128;
    goto LABEL_134;
  }
  v35 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v35
    || (v36 = PsGetCurrentProcessSessionId(),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v35, v36),
        (v38 = SessionDataForSpecifiedSession) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry1(4LL, CurrentProcessSessionId);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v149);
    COREACCESS::~COREACCESS((COREACCESS *)v157);
    goto LABEL_174;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)&v144,
    (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
    0);
  if ( v145 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v144, 0LL, 0LL);
  v39 = v144;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v39 + 24) == KeGetCurrentThread() )
  {
    v98 = *(_DWORD *)(v39 + 32);
    if ( v98 <= 0 )
    {
      WdLogSingleEntry1(1LL, 472LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
      v98 = *(_DWORD *)(v39 + 32);
    }
    v43 = v98 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v39 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v99 = *(_DWORD *)(v39 + 36);
        if ( v99 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, (const EVENT_DESCRIPTOR *)"g", v42, v99);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v39 + 16));
      ExAcquirePushLockExclusiveEx(v39 + 8, 0LL);
    }
    if ( *(_QWORD *)(v39 + 24) )
    {
      WdLogSingleEntry1(1LL, 496LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v39 + 32) )
    {
      WdLogSingleEntry1(1LL, 497LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v39 + 24) = KeGetCurrentThread();
    v43 = 1;
  }
  *(_DWORD *)(v39 + 32) = v43;
  v145 = 1;
  v44 = (struct DXGSESSIONDATA *)((char *)v38 + 64);
  v148 = v44;
  v139 = (struct DXGSESSIONDATA *)((char *)v38 + 16448);
  v137 = (void *)v156;
  v45 = v155[1];
  v134 = v155[1];
  v131 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory((KSPIN_LOCK *)v34, v40, &v131, v44, v139) < 0 )
  {
    WdLogSingleEntry1(1LL, 367LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 367LL, 0LL, 0LL, 0LL, 0LL);
  }
  v122 = 0;
  v123 = 0;
  v46 = v133;
  v47 = v131;
  v141 = v131;
  v48 = v132;
  while ( 1 )
  {
    v119 = v46;
    if ( v5 >= v47 )
      break;
    v49 = v5;
    v50 = (_DWORD *)*((_QWORD *)v44 + v5);
    v154 = v50;
    v51 = *v50;
    if ( *v50 == 1 )
    {
      v68 = v50[14];
      if ( v68 <= 0x10 )
      {
        v53 = 16 * v68 + 67;
        goto LABEL_86;
      }
      WdLogSingleEntry1(1LL, 53LL);
      v48 = 0;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 53LL, 0LL, 0LL, 0LL, 0LL);
    }
    else if ( v51 == 3 )
    {
      v52 = v50[10];
      if ( v52 <= 0x10 )
      {
        v53 = 16 * v52 + 51;
LABEL_86:
        v48 = v53 & 0xFFFFFFF8;
        goto LABEL_87;
      }
      WdLogSingleEntry1(1LL, 73LL);
      v48 = 0;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 73LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      switch ( v51 )
      {
        case 2:
          v71 = v50[205];
          if ( v71 <= 0x10 )
          {
            v53 = 16 * v71 + 831;
            goto LABEL_86;
          }
          WdLogSingleEntry1(1LL, 63LL);
          v48 = 0;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 63LL, 0LL, 0LL, 0LL, 0LL);
          break;
        case 4:
        case 5:
        case 7:
        case 8:
          v53 = 31;
          goto LABEL_86;
        case 9:
          v53 = 47;
          goto LABEL_86;
        default:
          WdLogSingleEntry1(1LL, 96LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Unknown type for present history token is found in queue.",
            96LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v53 = 7;
          v49 = v5;
          goto LABEL_86;
      }
    }
    v49 = v5;
LABEL_87:
    v132 = v48;
    if ( !v48 )
    {
      WdLogSingleEntry1(1LL, 377LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TokenSize > 0", 377LL, 0LL, 0LL, 0LL, 0LL);
      v49 = v5;
    }
    if ( v48 > v45 )
    {
      v122 = 261;
      v123 = 261;
      break;
    }
    v50[1] = v48;
    v69 = *v50;
    if ( *v50 == 2 )
      goto LABEL_105;
    if ( v69 == 9 && *((_QWORD *)v50 + 2) )
    {
      if ( !CIFlipPresentHistoryToken::IsFlipManagerIFlipFeatureEnabled() )
        goto LABEL_115;
      v100 = *((_QWORD *)v50 + 2);
      KeEnterCriticalRegion();
      v101 = (CPushLock *)(v100 + 72);
      ExAcquirePushLockSharedEx(v100 + 72, 0LL);
      v102 = *(_QWORD *)(v100 + 96);
      CPushLock::ReleaseLock(v101);
      if ( !v102 || !*(_DWORD *)(v102 + 28) && !*(_DWORD *)(v102 + 32) )
        goto LABEL_114;
      v49 = v5;
      if ( *(_QWORD *)(v102 + 40) )
      {
        v69 = *v50;
LABEL_105:
        v127 = 0LL;
        if ( v69 == 2 )
        {
          CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
            (CIFlipPresentHistoryTokenRedirectedFlip *)&v127,
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v50 + 4));
        }
        else if ( v69 == 9 )
        {
          CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
            (CIFlipPresentHistoryTokenFlipManager *)&v127,
            (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)(v50 + 4));
          v49 = v5;
        }
        v72 = (char *)v139 + v49;
        v73 = *((unsigned __int8 *)v139 + v49);
        v74 = (char *)v139 + v49;
        if ( (v73 & 1) != 0 )
        {
          LOBYTE(v73) = 1;
          (*(void (__fastcall **)(__int128 *, __int64))(v127 + 272))(&v127, v73);
          (*(void (__fastcall **)(__int128 *, bool))(v127 + 280))(&v127, (*v74 & 2) != 0);
        }
        else
        {
          LOBYTE(v73) = (v73 & 4) != 0;
          (*(void (__fastcall **)(__int128 *, __int64))(v127 + 288))(&v127, v73);
          if ( (*v72 & 8) != 0 )
          {
            LOBYTE(v75) = 1;
            (*(void (__fastcall **)(__int128 *, __int64))(v127 + 232))(&v127, v75);
          }
        }
        if ( (*v72 & 0x20) == 0 && (*v72 & 0x40) != 0 )
          LOBYTE(v75) = 1;
        else
          v75 = 0LL;
        (*(void (__fastcall **)(__int128 *, __int64))(v127 + 312))(&v127, v75);
        v76 = (unsigned __int64 *)*((_QWORD *)v50 + 1);
        v77 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v127 + 16))(&v127);
        v78 = (*(__int64 (__fastcall **)(__int128 *))(v127 + 328))(&v127);
        v79 = (*(__int64 (__fastcall **)(__int128 *))(v127 + 104))(&v127);
        v115 = v76;
        v50 = v154;
        WdLogSingleEntry5(8LL, v154, v79, v78, v77, v115);
        (*(void (__fastcall **)(__int128 *, __int64))v127)(&v127, 1LL);
LABEL_114:
        v46 = v119;
LABEL_115:
        v49 = v5;
        goto LABEL_92;
      }
      v46 = v119;
    }
LABEL_92:
    if ( *v50 == 9 )
      v50[8] ^= (v50[8] ^ (*((unsigned __int8 *)v139 + v49) >> 4)) & 1;
    if ( v135 )
    {
      v70 = v48;
      v103 = v137;
      v104 = (char *)v137 + v48;
      if ( (unsigned __int64)v104 > MmUserProbeAddress || v104 <= v137 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v103, v50, v48);
    }
    else
    {
      v70 = v48;
      memmove(v137, v50, v48);
    }
    if ( (*((_BYTE *)v139 + v5) & 1) != 0 && *v50 == 2 )
    {
      v82 = v50[15];
      if ( (v82 & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 451LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pToken->Token.Flip.Flags.IndependentFlip",
          451LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v82 = v50[15];
      }
      v83 = v82;
      if ( (unsigned int)((__int16)v82 >> 14) > 1 )
      {
        WdLogSingleEntry1(1LL, 452LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_SUBMITT"
                    "ED || pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_COMPLETE",
          452LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v83 = *((_WORD *)v50 + 30);
        v82 = v50[15];
      }
      v50[15] = v82 ^ ((unsigned __int16)v82 ^ (unsigned __int16)((v83 & 0xC000) + 0x4000)) & 0xC000;
    }
    v137 = (char *)v137 + v70;
    v46 += v48;
    v133 = v46;
    v45 = v134 - v48;
    v134 -= v48;
    ++v5;
    v47 = v141;
    v44 = v148;
  }
  v142 = v5;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v34, 0);
  if ( v135 )
  {
    v105 = v147;
    v106 = (_DWORD *)(v147 + 24);
    if ( v147 + 24 >= MmUserProbeAddress )
      v106 = (_DWORD *)MmUserProbeAddress;
    *v106 = v5;
    if ( v5 || !v48 )
    {
      v108 = (_DWORD *)(v105 + 8);
      if ( v105 + 8 >= MmUserProbeAddress )
        v108 = (_DWORD *)MmUserProbeAddress;
      *v108 = v46;
    }
    else
    {
      v107 = (_DWORD *)(v105 + 8);
      if ( v105 + 8 >= MmUserProbeAddress )
        v107 = (_DWORD *)MmUserProbeAddress;
      *v107 = v48;
      v122 = -1073741789;
      v123 = -1073741789;
    }
  }
  else
  {
    v54 = v147;
    *(_DWORD *)(v147 + 24) = v5;
    if ( v5 || !v48 )
    {
      *(_DWORD *)(v54 + 8) = v46;
    }
    else
    {
      *(_DWORD *)(v54 + 8) = v48;
      v122 = -1073741789;
      v123 = -1073741789;
    }
  }
  v55 = v5;
  v120 = v5;
  v56 = 0LL;
  v57 = v148;
  while ( 2 )
  {
    if ( (unsigned int)v56 < v5 )
    {
      v58 = (int *)*((_QWORD *)v57 + v56);
      if ( *v58 == 2 )
        goto LABEL_116;
      if ( *v58 == 9 && *((_QWORD *)v58 + 2) && CIFlipPresentHistoryToken::IsFlipManagerIFlipFeatureEnabled() )
      {
        v109 = *((_QWORD *)v58 + 2);
        KeEnterCriticalRegion();
        v110 = (CPushLock *)(v109 + 72);
        ExAcquirePushLockSharedEx(v109 + 72, 0LL);
        v111 = *(_QWORD *)(v109 + 96);
        CPushLock::ReleaseLock(v110);
        if ( v111 && (*(_DWORD *)(v111 + 28) || *(_DWORD *)(v111 + 32)) )
        {
          v55 = v120;
          if ( *(_QWORD *)(v111 + 40) )
          {
LABEL_116:
            if ( (*((_BYTE *)v139 + v56) & 1) != 0 )
            {
              v136 = 0LL;
              if ( *v58 == 2 )
              {
                CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
                  (CIFlipPresentHistoryTokenRedirectedFlip *)&v136,
                  (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v58 + 4));
              }
              else if ( *v58 == 9 )
              {
                CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
                  (CIFlipPresentHistoryTokenFlipManager *)&v136,
                  (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)(v58 + 4));
              }
              v80 = *(void (__fastcall **)(__int128 *, _QWORD))(v136 + 304);
              v81 = (*(__int64 (__fastcall **)(__int128 *))(v136 + 296))(&v136);
              v80(&v136, (unsigned int)(v81 + 1));
              if ( (*(unsigned int (__fastcall **)(__int128 *))(v136 + 296))(&v136) >= 2 )
              {
                v59 = 1;
              }
              else
              {
                v59 = 0;
                (*(void (__fastcall **)(__int128 *))(v136 + 360))(&v136);
              }
              (*(void (__fastcall **)(__int128 *, __int64))v136)(&v136, 1LL);
              v55 = v120;
              goto LABEL_65;
            }
          }
        }
        else
        {
          v55 = v120;
        }
      }
      v59 = 1;
LABEL_65:
      if ( v59 )
      {
        if ( bTracingEnabled )
        {
          v60 = *v58;
          switch ( *v58 )
          {
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
              v61 = *((_QWORD *)v58 + 2);
              break;
            case 2:
              v61 = *((_QWORD *)v58 + 3);
              break;
            default:
              v61 = 0LL;
              break;
          }
          if ( v60 == 2 )
          {
            v62 = (unsigned int)v58[15];
          }
          else if ( v60 == 6 )
          {
            v62 = (unsigned int)v58[6];
          }
          else if ( v60 == 9 )
          {
            v62 = (unsigned int)v58[8];
          }
          else
          {
            v62 = 0LL;
          }
          if ( v60 == 2 )
            v63 = v58[201];
          else
            v63 = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v118) = v63;
            LODWORD(v117) = v62;
            *(_DWORD *)v116 = v58[1];
            LODWORD(v114) = *v58;
            McTemplateK0ppqqxdqp_EtwWriteTransfer(
              v61,
              &EventRetirePresentHistory,
              v62,
              v128,
              v58,
              v114,
              *(_QWORD *)v116,
              v61,
              v117,
              v118,
              0LL);
          }
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v34 + 48), (PSLIST_ENTRY)v58 - 1);
        v56 = (unsigned int)(v56 + 1);
      }
      else
      {
        v120 = --v55;
        v56 = (unsigned int)(v56 + 1);
      }
      continue;
    }
    break;
  }
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v34, v5);
  if ( v55 )
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v34 + 64), 0, v55, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v144);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v149);
  COREACCESS::~COREACCESS((COREACCESS *)v157);
  if ( v140 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v140 + 3, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
    {
      v122 = v123;
      goto LABEL_81;
    }
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v140 + 2), v140);
    v64 = v123;
  }
  else
  {
LABEL_81:
    v64 = v122;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v129);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v124);
  if ( v126 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v124);
  return v64;
}
