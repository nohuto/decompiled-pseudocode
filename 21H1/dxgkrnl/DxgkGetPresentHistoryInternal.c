/*
 * XREFs of DxgkGetPresentHistoryInternal @ 0x1C00D7510
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0005880 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     DxgkGetPresentHistory @ 0x1C027E560 (DxgkGetPresentHistory.c)
 * Callees:
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C00062D4 (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C0006350 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00251CC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C00400F0 (McTemplateK0ppqqx_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistoryInternal(ULONG64 a1, int a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  _DWORD *v15; // rdx
  ULONG64 v16; // rcx
  __int64 v17; // r8
  int v18; // r12d
  int v19; // eax
  struct _KTHREAD **v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGADAPTER *v24; // rbx
  int PairingAdapters; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r13
  struct DXGADAPTER *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  signed __int64 v34; // rcx
  struct DXGADAPTER *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // r15
  DXGSESSIONMGR *v46; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  char *v59; // rcx
  __int64 v60; // rdi
  int v61; // r12d
  unsigned int v62; // eax
  __int64 v63; // rbx
  unsigned __int64 v64; // rdx
  __int64 v65; // r8
  unsigned int *v66; // r12
  unsigned int v67; // eax
  unsigned int v68; // ebx
  int v69; // ebx
  LONG v70; // r12d
  __int64 v71; // rsi
  char *v72; // r14
  char *v73; // r13
  int *v74; // rbx
  int v75; // edx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned int v83; // ebx
  unsigned int v84; // eax
  __int64 v85; // rdx
  unsigned int v86; // ebx
  char *v87; // r9
  int v88; // eax
  unsigned int v89; // edx
  int v90; // ecx
  int v91; // eax
  _QWORD *v92; // rax
  __int16 v93; // dx
  unsigned int v94; // ecx
  int v95; // edx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  bool v104; // zf
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  _QWORD *v112; // rax
  int v113; // eax
  __int64 v114; // rax
  int v115; // r9d
  __int64 v116; // rax
  __int64 v117; // rax
  _OWORD *v118; // rax
  _DWORD *v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rax
  int v128; // r9d
  _QWORD *v129; // rax
  int v130; // r12d
  __int64 v131; // rax
  int v132; // r9d
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  void *v141; // r9
  __int64 v142; // rax
  __int64 v143; // rax
  _DWORD *v144; // rdx
  _DWORD *v145; // rdx
  _DWORD *v146; // rdx
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  unsigned __int64 *v151; // [rsp+28h] [rbp-190h]
  __int64 v152; // [rsp+30h] [rbp-188h]
  int v153; // [rsp+40h] [rbp-178h]
  int v154; // [rsp+48h] [rbp-170h] BYREF
  __int64 v155; // [rsp+50h] [rbp-168h]
  char v156; // [rsp+58h] [rbp-160h]
  int v157; // [rsp+60h] [rbp-158h]
  int v158; // [rsp+64h] [rbp-154h]
  unsigned int v159; // [rsp+68h] [rbp-150h]
  struct DXGADAPTER *v160; // [rsp+70h] [rbp-148h] BYREF
  __int64 v161; // [rsp+78h] [rbp-140h] BYREF
  char v162; // [rsp+80h] [rbp-138h]
  unsigned int v163; // [rsp+88h] [rbp-130h] BYREF
  int v164; // [rsp+8Ch] [rbp-12Ch]
  int v165; // [rsp+90h] [rbp-128h]
  int v166; // [rsp+94h] [rbp-124h]
  void *v167; // [rsp+98h] [rbp-120h]
  __int64 v168; // [rsp+A0h] [rbp-118h]
  char *v169; // [rsp+A8h] [rbp-110h]
  struct DXGADAPTER *v170; // [rsp+B0h] [rbp-108h] BYREF
  unsigned int v171; // [rsp+C0h] [rbp-F8h]
  int v172; // [rsp+C4h] [rbp-F4h]
  DXGPRESENTHISTORYTOKENQUEUE *v173; // [rsp+C8h] [rbp-F0h]
  __int64 v174; // [rsp+D0h] [rbp-E8h] BYREF
  char v175; // [rsp+D8h] [rbp-E0h]
  struct DXGADAPTER *v176; // [rsp+E0h] [rbp-D8h] BYREF
  char *v177; // [rsp+E8h] [rbp-D0h]
  char v178[8]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v179; // [rsp+F8h] [rbp-C0h]
  int v180; // [rsp+100h] [rbp-B8h]
  int v181; // [rsp+108h] [rbp-B0h]
  unsigned __int64 v182; // [rsp+110h] [rbp-A8h] BYREF
  unsigned int v183[4]; // [rsp+118h] [rbp-A0h]
  __int128 v184; // [rsp+128h] [rbp-90h]
  _BYTE v185[16]; // [rsp+140h] [rbp-78h] BYREF
  DXGADAPTER *v186; // [rsp+150h] [rbp-68h]
  char v187; // [rsp+158h] [rbp-60h]
  __int64 v188; // [rsp+160h] [rbp-58h]

  v166 = a2;
  v154 = -1;
  v155 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v156 = 1;
    v154 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2060);
  }
  else
  {
    v156 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v154, 2060LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = *((_QWORD *)Current + 1)) == 0 )
  {
    v11 = v10;
  }
  v168 = v11;
  if ( !v11 )
  {
    v102 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v102 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v102);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v103);
    v104 = v156 == 0;
LABEL_124:
    if ( v104 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_207;
  }
  if ( *(_BYTE *)(v11 + 346) )
  {
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v161, (struct DXGFASTMUTEX *const *)v11);
    if ( v162 )
    {
      v112 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
      v112[3] = 275LL;
      v112[4] = 4LL;
      v112[5] = &v161;
      v112[6] = 0LL;
      v112[7] = 0LL;
      WdLogEvent5_WdCriticalError(v112);
    }
    v14 = v161;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v14 + 16) == KeGetCurrentThread() )
    {
      v113 = *(_DWORD *)(v14 + 24);
      if ( v113 <= 0 )
      {
        v114 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v114 + 24) = 659LL;
        WdLogEvent5_WdAssertion(v114);
        v113 = *(_DWORD *)(v14 + 24);
      }
      v19 = v113 + 1;
      v18 = 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v115 = *(_DWORD *)(v14 + 28);
          if ( v115 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v115);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 8));
        ExAcquirePushLockExclusiveEx(v14, 0LL);
      }
      if ( *(_QWORD *)(v14 + 16) )
      {
        v116 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v116 + 24) = 683LL;
        WdLogEvent5_WdAssertion(v116);
      }
      if ( *(_DWORD *)(v14 + 24) )
      {
        v117 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v117 + 24) = 684LL;
        WdLogEvent5_WdAssertion(v117);
      }
      *(_QWORD *)(v14 + 16) = KeGetCurrentThread();
      v18 = 1;
      v19 = 1;
    }
    *(_DWORD *)(v14 + 24) = v19;
    v162 = 1;
    if ( a2 )
    {
      v181 = 0;
      v118 = (_OWORD *)a1;
      if ( a1 >= MmUserProbeAddress )
        v118 = (_OWORD *)MmUserProbeAddress;
      *(_OWORD *)v183 = *v118;
      v184 = v118[1];
      v119 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v119 = (_DWORD *)MmUserProbeAddress;
      *v119 = 0;
      v15 = (_DWORD *)(a1 + 8);
      v16 = MmUserProbeAddress;
      if ( a1 + 8 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = 0;
    }
    else
    {
      *(_OWORD *)v183 = *(_OWORD *)a1;
      v184 = *(_OWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    if ( !(_QWORD)v184 )
    {
      v105 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v105 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v105);
LABEL_123:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161, v106);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v107);
      v104 = v156 == 0;
      goto LABEL_124;
    }
    v176 = 0LL;
    v20 = (struct _KTHREAD **)v11;
    v21 = v183[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v170, v183[0], v20, &v176, 1);
    v24 = v176;
    if ( !v176 )
    {
      v120 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v120 + 24) = v21;
      *(_QWORD *)(v120 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v120);
LABEL_148:
      if ( v170 )
        DXGADAPTER::ReleaseReferenceNoTracking(v170);
      goto LABEL_123;
    }
    v160 = 0LL;
    v182 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v176, 0, &v160, &v182, 0LL, 0LL, 0);
    v28 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v122 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v122 + 24) = v24;
      *(_QWORD *)(v122 + 32) = v28;
      WdLogEvent5_WdError(v122);
      if ( v170 )
        DXGADAPTER::ReleaseReferenceNoTracking(v170);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161, v123);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v124);
      if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_198:
        McTemplateK0q_EtwWriteTransfer(v80, &EventProfilerExit, v81, v154);
      return (unsigned int)v28;
    }
    else
    {
      v29 = v160;
      if ( !v160 )
      {
        v125 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v125 + 24) = 295LL;
        WdLogEvent5_WdAssertion(v125);
      }
      COREACCESS::COREACCESS((COREACCESS *)v185, v29);
      if ( v187 )
      {
        v126 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30);
        v126[3] = 275LL;
        v126[4] = 4LL;
        v126[5] = v185;
        v126[6] = 0LL;
        v126[7] = 0LL;
        WdLogEvent5_WdCriticalError(v126);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v186 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v186 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v32, &EventBlockThread, v33, 72);
          KeWaitForSingleObject((char *)v186 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v186, 0LL);
      }
      v188 = 0LL;
      v187 = 1;
      v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v160 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v35 = v160;
      if ( v34 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v160 + 2), v160);
      v36 = *((_QWORD *)v35 + 335);
      if ( !v36 )
      {
        v127 = WdLogNewEntry5_WdAssertion(v34, v30);
        *(_QWORD *)(v127 + 24) = 307LL;
        WdLogEvent5_WdAssertion(v127);
        v36 = *((_QWORD *)v35 + 335);
      }
      v172 = 0;
      v165 = 0;
      v164 = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178, (struct _KTHREAD **)(v36 + 840), 0);
      v37 = v179;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v37, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v128 = *(_DWORD *)(v37 + 24);
          if ( v128 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, v128);
        }
        ExAcquirePushLockSharedEx(v37, 0LL);
      }
      v180 = 1;
      v40 = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionId(v40);
      if ( ProcessSessionId < *(_DWORD *)(v36 + 872) )
      {
        v44 = 8LL * ProcessSessionId;
        if ( *(_QWORD *)(v44 + *(_QWORD *)(v36 + 880)) )
        {
          _mm_lfence();
          v45 = *(_QWORD *)(v44 + *(_QWORD *)(v36 + 880));
          v173 = (DXGPRESENTHISTORYTOKENQUEUE *)v45;
          if ( v45 )
          {
            v46 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v43, v42) + 88);
            if ( v46 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId();
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v46,
                                                 CurrentProcessSessionId);
              v49 = SessionDataForSpecifiedSession;
              if ( SessionDataForSpecifiedSession )
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX(
                  (DXGAUTOMUTEX *)&v174,
                  (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
                  0);
                if ( v175 )
                {
                  v129 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50);
                  v129[3] = 275LL;
                  v129[4] = 4LL;
                  v129[5] = &v174;
                  v129[6] = 0LL;
                  v129[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v129);
                }
                v52 = v174;
                KeEnterCriticalRegion();
                if ( *(struct _KTHREAD **)(v52 + 16) == KeGetCurrentThread() )
                {
                  v130 = *(_DWORD *)(v52 + 24);
                  if ( v130 <= 0 )
                  {
                    v131 = WdLogNewEntry5_WdAssertion(v54, v53);
                    *(_QWORD *)(v131 + 24) = 659LL;
                    WdLogEvent5_WdAssertion(v131);
                    v130 = *(_DWORD *)(v52 + 24);
                  }
                  v18 = v130 + 1;
                }
                else
                {
                  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v52, 0LL) )
                  {
                    if ( bTracingEnabled )
                    {
                      v132 = *(_DWORD *)(v52 + 28);
                      if ( v132 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v56, &EventBlockThread, v57, v132);
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)(v52 + 8));
                    ExAcquirePushLockExclusiveEx(v52, 0LL);
                  }
                  if ( *(_QWORD *)(v52 + 16) )
                  {
                    v133 = WdLogNewEntry5_WdAssertion(v56, v55);
                    *(_QWORD *)(v133 + 24) = 683LL;
                    WdLogEvent5_WdAssertion(v133);
                  }
                  if ( *(_DWORD *)(v52 + 24) )
                  {
                    v134 = WdLogNewEntry5_WdAssertion(v56, v55);
                    *(_QWORD *)(v134 + 24) = 684LL;
                    WdLogEvent5_WdAssertion(v134);
                  }
                  *(_QWORD *)(v52 + 16) = KeGetCurrentThread();
                }
                *(_DWORD *)(v52 + 24) = v18;
                v175 = 1;
                v177 = (char *)v49 + 56;
                v169 = (char *)v49 + 16440;
                v167 = (void *)v184;
                v159 = v183[1];
                v163 = 2048;
                if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
                            (KSPIN_LOCK *)v45,
                            (__int64)v49 + 16440,
                            &v163,
                            (struct DXGSESSIONDATA *)((char *)v49 + 56),
                            (struct DXGSESSIONDATA *)((char *)v49 + 16440)) < 0 )
                {
                  v135 = WdLogNewEntry5_WdAssertion(v59, v58);
                  *(_QWORD *)(v135 + 24) = 375LL;
                  WdLogEvent5_WdAssertion(v135);
                }
                v157 = 0;
                v153 = 0;
                v60 = 0LL;
                v61 = v165;
                v62 = v163;
                v171 = v163;
                LODWORD(v63) = v164;
                while ( 1 )
                {
                  v158 = v61;
                  v64 = 0x1C0000000uLL;
                  if ( (unsigned int)v60 >= v62 )
                  {
LABEL_56:
                    v172 = v60;
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v45, 0);
                    if ( v166 )
                    {
                      v144 = (_DWORD *)(a1 + 24);
                      if ( a1 + 24 >= MmUserProbeAddress )
                        v144 = (_DWORD *)MmUserProbeAddress;
                      *v144 = v60;
                      if ( (_DWORD)v60 || !(_DWORD)v63 )
                      {
                        v146 = (_DWORD *)(a1 + 8);
                        if ( a1 + 8 >= MmUserProbeAddress )
                          v146 = (_DWORD *)MmUserProbeAddress;
                        *v146 = v61;
                      }
                      else
                      {
                        v145 = (_DWORD *)(a1 + 8);
                        if ( a1 + 8 >= MmUserProbeAddress )
                          v145 = (_DWORD *)MmUserProbeAddress;
                        *v145 = v63;
                        v157 = -1073741789;
                        v153 = -1073741789;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 24) = v60;
                      if ( (_DWORD)v60 || !(_DWORD)v63 )
                      {
                        *(_DWORD *)(a1 + 8) = v61;
                      }
                      else
                      {
                        *(_DWORD *)(a1 + 8) = v63;
                        v157 = -1073741789;
                        v153 = -1073741789;
                      }
                    }
                    v70 = v60;
                    v71 = 0LL;
                    v72 = v177;
                    v73 = v169;
                    while ( (unsigned int)v71 < (unsigned int)v60 )
                    {
                      v74 = *(int **)&v72[8 * v71];
                      v75 = *v74;
                      if ( *v74 == 2
                        && (v73[v71] & 1) != 0
                        && (v94 = v74[15] ^ (v74[15] ^ ((v74[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
                            v74[15] = v94,
                            (v94 & 0x30000) < 0x20000) )
                      {
                        --v70;
                        v71 = (unsigned int)(v71 + 1);
                      }
                      else
                      {
                        if ( bTracingEnabled )
                        {
                          switch ( v75 )
                          {
                            case 1:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                              v76 = *((_QWORD *)v74 + 2);
                              break;
                            case 2:
                              v76 = *((_QWORD *)v74 + 3);
                              break;
                            default:
                              v76 = 0LL;
                              break;
                          }
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            LODWORD(v152) = v74[1];
                            LODWORD(v151) = v75;
                            McTemplateK0ppqqx_EtwWriteTransfer(
                              v76,
                              &EventRetirePresentHistory,
                              (unsigned int)v152,
                              v160,
                              v74,
                              v151,
                              v152,
                              v76);
                          }
                        }
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v45 + 48), (PSLIST_ENTRY)v74 - 1);
                        v71 = (unsigned int)(v71 + 1);
                      }
                    }
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v45, v60);
                    LODWORD(v28) = v157;
                    if ( v70 )
                      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v45 + 64), 0, v70, 0);
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(
                      (DXGPROCESSCOPYPROTECTIONMUTEX *)&v174,
                      v77);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
                    COREACCESS::~COREACCESS((COREACCESS *)v185);
                    if ( v170 )
                    {
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v170 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v170 + 2), v170);
                      LODWORD(v28) = v153;
                    }
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(
                      (DXGPROCESSCOPYPROTECTIONMUTEX *)&v161,
                      v78);
                    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v79);
                    if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                      goto LABEL_198;
                    return (unsigned int)v28;
                  }
                  v65 = (unsigned int)v60;
                  v66 = *(unsigned int **)&v177[8 * v60];
                  v67 = *v66;
                  if ( *v66 == 1 )
                  {
                    v83 = v66[14];
                    if ( v83 <= 0x10 )
                    {
                      v69 = 16 * v83 + 67;
                      goto LABEL_78;
                    }
                    v139 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
                    *(_QWORD *)(v139 + 24) = 54LL;
                    WdLogEvent5_WdAssertion(v139);
                    v63 = 0LL;
                    v65 = (unsigned int)v60;
                  }
                  else if ( v67 == 3 )
                  {
                    v68 = v66[10];
                    if ( v68 <= 0x10 )
                    {
                      v69 = 16 * v68 + 51;
LABEL_78:
                      v63 = v69 & 0xFFFFFFF8;
                      goto LABEL_79;
                    }
                    v138 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
                    *(_QWORD *)(v138 + 24) = 74LL;
                    WdLogEvent5_WdAssertion(v138);
                    v63 = 0LL;
                    v65 = (unsigned int)v60;
                  }
                  else
                  {
                    switch ( v67 )
                    {
                      case 2u:
                        v86 = v66[205];
                        if ( v86 <= 0x10 )
                        {
                          v69 = 16 * v86 + 831;
                          goto LABEL_78;
                        }
                        v136 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
                        *(_QWORD *)(v136 + 24) = 64LL;
                        WdLogEvent5_WdAssertion(v136);
                        v63 = 0LL;
                        v65 = (unsigned int)v60;
                        break;
                      case 4u:
                      case 5u:
                      case 7u:
                      case 8u:
                        v69 = 31;
                        goto LABEL_78;
                      case 9u:
                        v69 = 47;
                        goto LABEL_78;
                      default:
                        v137 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
                        *(_QWORD *)(v137 + 24) = 97LL;
                        WdLogEvent5_WdAssertion(v137);
                        v69 = 7;
                        v65 = (unsigned int)v60;
                        goto LABEL_78;
                    }
                  }
LABEL_79:
                  v164 = v63;
                  if ( !(_DWORD)v63 )
                  {
                    v140 = WdLogNewEntry5_WdAssertion(v59, v64);
                    *(_QWORD *)(v140 + 24) = 385LL;
                    WdLogEvent5_WdAssertion(v140);
                    v65 = (unsigned int)v60;
                  }
                  if ( (unsigned int)v63 > v159 )
                  {
                    v157 = 261;
                    v153 = 261;
                    v61 = v158;
                    goto LABEL_56;
                  }
                  v66[1] = v63;
                  v84 = *v66;
                  if ( *v66 == 2 )
                  {
                    v87 = v169;
                    v88 = (unsigned __int8)v169[v65];
                    v89 = v66[15];
                    if ( (v88 & 1) != 0 )
                    {
                      v95 = v89 | 0x2000;
                      v66[15] = v95;
                      v90 = v95 ^ (v95 ^ ((unsigned __int8)v87[v65] << 17)) & 0x40000;
                    }
                    else
                    {
                      v90 = v89 ^ (v89 ^ (v88 << 18)) & 0x100000;
                      v66[15] = v90;
                      if ( (v87[v65] & 8) == 0 )
                      {
LABEL_94:
                        if ( (v87[v65] & 0x20) != 0 )
                          v91 = 0;
                        else
                          v91 = 0x8000000;
                        v66[15] = v91 | v90 & 0xF7FFFFFF;
                        v92 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
                        v92[3] = v66;
                        v92[4] = *((_QWORD *)v66 + 2);
                        v92[5] = (v66[15] >> 13) & 1;
                        v92[6] = *((_QWORD *)v66 + 9);
                        v92[7] = *((_QWORD *)v66 + 1);
                        WdLogEvent5_WdPresentTokenEvent(v92);
                        v84 = *v66;
                        v65 = (unsigned int)v60;
                        goto LABEL_83;
                      }
                      v90 |= 0x1000000u;
                    }
                    v66[15] = v90;
                    goto LABEL_94;
                  }
LABEL_83:
                  if ( v84 == 9 )
                    v66[8] ^= (v66[8] ^ ((unsigned __int8)v169[v65] >> 4)) & 1;
                  if ( v166 )
                  {
                    v141 = v167;
                    if ( (unsigned __int64)v167 + v63 > MmUserProbeAddress || (char *)v167 + v63 <= v167 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v141, v66, (unsigned int)v63);
                  }
                  else
                  {
                    memmove(v167, v66, (unsigned int)v63);
                  }
                  if ( *v66 == 2 )
                  {
                    v59 = v169;
                    if ( (v169[v60] & 1) != 0 )
                    {
                      v59 = (char *)v66[15];
                      if ( ((unsigned __int16)v59 & 0x2000) == 0 )
                      {
                        v142 = WdLogNewEntry5_WdAssertion(v59, v85);
                        *(_QWORD *)(v142 + 24) = 459LL;
                        WdLogEvent5_WdAssertion(v142);
                        v59 = (char *)v66[15];
                      }
                      v93 = (__int16)v59;
                      if ( (unsigned int)((__int16)v59 >> 14) > 1 )
                      {
                        v143 = WdLogNewEntry5_WdAssertion(v59, (unsigned __int16)v59);
                        *(_QWORD *)(v143 + 24) = 460LL;
                        WdLogEvent5_WdAssertion(v143);
                        v93 = *((_WORD *)v66 + 30);
                        v59 = (char *)v66[15];
                      }
                      v66[15] = (unsigned int)v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((v93 & 0xC000) + 0x4000)) & 0xC000;
                    }
                  }
                  v167 = (char *)v167 + (unsigned int)v63;
                  v61 = v63 + v158;
                  v165 = v63 + v158;
                  v159 -= v63;
                  v60 = (unsigned int)(v60 + 1);
                  v62 = v171;
                }
              }
            }
            v121 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v121 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
            WdLogEvent5_WdEvent(v121);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
            COREACCESS::~COREACCESS((COREACCESS *)v185);
            goto LABEL_148;
          }
          v35 = v160;
        }
      }
      v96 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v96 + 24) = v35;
      WdLogEvent5_WdEvent(v96);
      if ( *((_DWORD *)v35 + 50) == 1 )
      {
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
        COREACCESS::~COREACCESS((COREACCESS *)v185);
        if ( v170 )
          DXGADAPTER::ReleaseReferenceNoTracking(v170);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161, v97);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v98);
        if ( !v156 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return 3221225485LL;
LABEL_207:
        McTemplateK0q_EtwWriteTransfer(v99, &EventProfilerExit, v100, v154);
        return 3221225485LL;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
      COREACCESS::~COREACCESS((COREACCESS *)v185);
      if ( v170 )
        DXGADAPTER::ReleaseReferenceNoTracking(v170);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161, v147);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v148);
      if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v149, &EventProfilerExit, v150, v154);
      return 0LL;
    }
  }
  else
  {
    v108 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v108 + 24) = v11;
    *(_QWORD *)(v108 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v108);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v109);
    if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v110, &EventProfilerExit, v111, v154);
    return 3221225506LL;
  }
}
