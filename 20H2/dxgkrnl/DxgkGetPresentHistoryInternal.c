/*
 * XREFs of DxgkGetPresentHistoryInternal @ 0x1C00F4820
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     DxgkGetPresentHistory @ 0x1C0281A00 (DxgkGetPresentHistory.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C00039D0 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C0003B4C (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007050 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002597C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C004103C (McTemplateK0ppqqx_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned int v81; // ebx
  unsigned int v82; // eax
  __int64 v83; // rdx
  unsigned int v84; // ebx
  char *v85; // r9
  int v86; // eax
  unsigned int v87; // edx
  int v88; // ecx
  int v89; // eax
  _QWORD *v90; // rax
  __int16 v91; // dx
  unsigned int v92; // ecx
  int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  bool v101; // zf
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  _QWORD *v108; // rax
  int v109; // eax
  __int64 v110; // rax
  int v111; // r9d
  __int64 v112; // rax
  __int64 v113; // rax
  _OWORD *v114; // rax
  _DWORD *v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rax
  int v123; // r9d
  _QWORD *v124; // rax
  int v125; // r12d
  __int64 v126; // rax
  int v127; // r9d
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  void *v136; // r9
  __int64 v137; // rax
  __int64 v138; // rax
  _DWORD *v139; // rdx
  _DWORD *v140; // rdx
  _DWORD *v141; // rdx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  unsigned __int64 *v145; // [rsp+28h] [rbp-190h]
  __int64 v146; // [rsp+30h] [rbp-188h]
  int v147; // [rsp+40h] [rbp-178h]
  int v148; // [rsp+48h] [rbp-170h] BYREF
  __int64 v149; // [rsp+50h] [rbp-168h]
  char v150; // [rsp+58h] [rbp-160h]
  int v151; // [rsp+60h] [rbp-158h]
  int v152; // [rsp+64h] [rbp-154h]
  unsigned int v153; // [rsp+68h] [rbp-150h]
  struct DXGADAPTER *v154; // [rsp+70h] [rbp-148h] BYREF
  __int64 v155; // [rsp+78h] [rbp-140h] BYREF
  char v156; // [rsp+80h] [rbp-138h]
  unsigned int v157; // [rsp+88h] [rbp-130h] BYREF
  int v158; // [rsp+8Ch] [rbp-12Ch]
  int v159; // [rsp+90h] [rbp-128h]
  int v160; // [rsp+94h] [rbp-124h]
  void *v161; // [rsp+98h] [rbp-120h]
  __int64 v162; // [rsp+A0h] [rbp-118h]
  char *v163; // [rsp+A8h] [rbp-110h]
  struct DXGADAPTER *v164; // [rsp+B0h] [rbp-108h] BYREF
  unsigned int v165; // [rsp+C0h] [rbp-F8h]
  int v166; // [rsp+C4h] [rbp-F4h]
  DXGPRESENTHISTORYTOKENQUEUE *v167; // [rsp+C8h] [rbp-F0h]
  __int64 v168; // [rsp+D0h] [rbp-E8h] BYREF
  char v169; // [rsp+D8h] [rbp-E0h]
  struct DXGADAPTER *v170; // [rsp+E0h] [rbp-D8h] BYREF
  char *v171; // [rsp+E8h] [rbp-D0h]
  char v172[8]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v173; // [rsp+F8h] [rbp-C0h]
  int v174; // [rsp+100h] [rbp-B8h]
  int v175; // [rsp+108h] [rbp-B0h]
  unsigned __int64 v176; // [rsp+110h] [rbp-A8h] BYREF
  unsigned int v177[4]; // [rsp+118h] [rbp-A0h]
  __int128 v178; // [rsp+128h] [rbp-90h]
  _BYTE v179[16]; // [rsp+140h] [rbp-78h] BYREF
  DXGADAPTER *v180; // [rsp+150h] [rbp-68h]
  char v181; // [rsp+158h] [rbp-60h]
  __int64 v182; // [rsp+160h] [rbp-58h]

  v160 = a2;
  v148 = -1;
  v149 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v150 = 1;
    v148 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2060);
  }
  else
  {
    v150 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v148, 2060LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = *((_QWORD *)Current + 1)) == 0 )
  {
    v11 = v10;
  }
  v162 = v11;
  if ( !v11 )
  {
    v99 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v99 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v148, v100);
    v101 = v150 == 0;
LABEL_124:
    if ( v101 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_207;
  }
  if ( *(_BYTE *)(v11 + 346) )
  {
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v155, (struct DXGFASTMUTEX *const *)v11);
    if ( v156 )
    {
      v108 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
      v108[3] = 275LL;
      v108[4] = 4LL;
      v108[5] = &v155;
      v108[6] = 0LL;
      v108[7] = 0LL;
      WdLogEvent5_WdCriticalError(v108);
    }
    v14 = v155;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v14 + 16) == KeGetCurrentThread() )
    {
      v109 = *(_DWORD *)(v14 + 24);
      if ( v109 <= 0 )
      {
        v110 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v110 + 24) = 661LL;
        WdLogEvent5_WdAssertion(v110);
        v109 = *(_DWORD *)(v14 + 24);
      }
      v19 = v109 + 1;
      v18 = 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v111 = *(_DWORD *)(v14 + 28);
          if ( v111 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v111);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 8));
        ExAcquirePushLockExclusiveEx(v14, 0LL);
      }
      if ( *(_QWORD *)(v14 + 16) )
      {
        v112 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v112 + 24) = 685LL;
        WdLogEvent5_WdAssertion(v112);
      }
      if ( *(_DWORD *)(v14 + 24) )
      {
        v113 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v113 + 24) = 686LL;
        WdLogEvent5_WdAssertion(v113);
      }
      *(_QWORD *)(v14 + 16) = KeGetCurrentThread();
      v18 = 1;
      v19 = 1;
    }
    *(_DWORD *)(v14 + 24) = v19;
    v156 = 1;
    if ( a2 )
    {
      v175 = 0;
      v114 = (_OWORD *)a1;
      if ( a1 >= MmUserProbeAddress )
        v114 = (_OWORD *)MmUserProbeAddress;
      *(_OWORD *)v177 = *v114;
      v178 = v114[1];
      v115 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v115 = (_DWORD *)MmUserProbeAddress;
      *v115 = 0;
      v15 = (_DWORD *)(a1 + 8);
      v16 = MmUserProbeAddress;
      if ( a1 + 8 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = 0;
    }
    else
    {
      *(_OWORD *)v177 = *(_OWORD *)a1;
      v178 = *(_OWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    if ( !(_QWORD)v178 )
    {
      v102 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v102 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v102);
LABEL_123:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v155);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v148, v103);
      v101 = v150 == 0;
      goto LABEL_124;
    }
    v170 = 0LL;
    v20 = (struct _KTHREAD **)v11;
    v21 = v177[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v164, v177[0], v20, &v170, 1);
    v24 = v170;
    if ( !v170 )
    {
      v116 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v116 + 24) = v21;
      *(_QWORD *)(v116 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v116);
LABEL_148:
      if ( v164 )
        DXGADAPTER::ReleaseReference(v164);
      goto LABEL_123;
    }
    v154 = 0LL;
    v176 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v170, 0, &v154, &v176, 0LL, 0LL, 0);
    v28 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v118 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v118 + 24) = v24;
      *(_QWORD *)(v118 + 32) = v28;
      WdLogEvent5_WdError(v118);
      if ( v164 )
        DXGADAPTER::ReleaseReference(v164);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v155);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v148, v119);
      if ( v150 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_198:
        McTemplateK0q_EtwWriteTransfer(v78, &EventProfilerExit, v79, v148);
      return (unsigned int)v28;
    }
    else
    {
      v29 = v154;
      if ( !v154 )
      {
        v120 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v120 + 24) = 295LL;
        WdLogEvent5_WdAssertion(v120);
      }
      COREACCESS::COREACCESS((COREACCESS *)v179, v29);
      if ( v181 )
      {
        v121 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30);
        v121[3] = 275LL;
        v121[4] = 4LL;
        v121[5] = v179;
        v121[6] = 0LL;
        v121[7] = 0LL;
        WdLogEvent5_WdCriticalError(v121);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v180 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v180 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v32, &EventBlockThread, v33, 72);
          KeWaitForSingleObject((char *)v180 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v180, 0LL);
      }
      v182 = 0LL;
      v181 = 1;
      v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v154 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v35 = v154;
      if ( v34 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v154 + 2), v154);
      v36 = *((_QWORD *)v35 + 338);
      if ( !v36 )
      {
        v122 = WdLogNewEntry5_WdAssertion(v34, v30);
        *(_QWORD *)(v122 + 24) = 307LL;
        WdLogEvent5_WdAssertion(v122);
        v36 = *((_QWORD *)v35 + 338);
      }
      v166 = 0;
      v159 = 0;
      v158 = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v172, (struct _KTHREAD **)(v36 + 840), 0);
      v37 = v173;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v37, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v123 = *(_DWORD *)(v37 + 24);
          if ( v123 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, v123);
        }
        ExAcquirePushLockSharedEx(v37, 0LL);
      }
      v174 = 1;
      v40 = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionId(v40);
      if ( ProcessSessionId < *(_DWORD *)(v36 + 872) )
      {
        v44 = 8LL * ProcessSessionId;
        if ( *(_QWORD *)(v44 + *(_QWORD *)(v36 + 880)) )
        {
          _mm_lfence();
          v45 = *(_QWORD *)(v44 + *(_QWORD *)(v36 + 880));
          v167 = (DXGPRESENTHISTORYTOKENQUEUE *)v45;
          if ( v45 )
          {
            v46 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v43, v42) + 102);
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
                  (DXGAUTOMUTEX *)&v168,
                  (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
                  0);
                if ( v169 )
                {
                  v124 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50);
                  v124[3] = 275LL;
                  v124[4] = 4LL;
                  v124[5] = &v168;
                  v124[6] = 0LL;
                  v124[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v124);
                }
                v52 = v168;
                KeEnterCriticalRegion();
                if ( *(struct _KTHREAD **)(v52 + 16) == KeGetCurrentThread() )
                {
                  v125 = *(_DWORD *)(v52 + 24);
                  if ( v125 <= 0 )
                  {
                    v126 = WdLogNewEntry5_WdAssertion(v54, v53);
                    *(_QWORD *)(v126 + 24) = 661LL;
                    WdLogEvent5_WdAssertion(v126);
                    v125 = *(_DWORD *)(v52 + 24);
                  }
                  v18 = v125 + 1;
                }
                else
                {
                  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v52, 0LL) )
                  {
                    if ( bTracingEnabled )
                    {
                      v127 = *(_DWORD *)(v52 + 28);
                      if ( v127 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v56, &EventBlockThread, v57, v127);
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)(v52 + 8));
                    ExAcquirePushLockExclusiveEx(v52, 0LL);
                  }
                  if ( *(_QWORD *)(v52 + 16) )
                  {
                    v128 = WdLogNewEntry5_WdAssertion(v56, v55);
                    *(_QWORD *)(v128 + 24) = 685LL;
                    WdLogEvent5_WdAssertion(v128);
                  }
                  if ( *(_DWORD *)(v52 + 24) )
                  {
                    v129 = WdLogNewEntry5_WdAssertion(v56, v55);
                    *(_QWORD *)(v129 + 24) = 686LL;
                    WdLogEvent5_WdAssertion(v129);
                  }
                  *(_QWORD *)(v52 + 16) = KeGetCurrentThread();
                }
                *(_DWORD *)(v52 + 24) = v18;
                v169 = 1;
                v171 = (char *)v49 + 56;
                v163 = (char *)v49 + 16440;
                v161 = (void *)v178;
                v153 = v177[1];
                v157 = 2048;
                if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
                            (KSPIN_LOCK *)v45,
                            (__int64)v49 + 16440,
                            &v157,
                            (struct DXGSESSIONDATA *)((char *)v49 + 56),
                            (struct DXGSESSIONDATA *)((char *)v49 + 16440)) < 0 )
                {
                  v130 = WdLogNewEntry5_WdAssertion(v59, v58);
                  *(_QWORD *)(v130 + 24) = 375LL;
                  WdLogEvent5_WdAssertion(v130);
                }
                v151 = 0;
                v147 = 0;
                v60 = 0LL;
                v61 = v159;
                v62 = v157;
                v165 = v157;
                LODWORD(v63) = v158;
                while ( 1 )
                {
                  v152 = v61;
                  v64 = 0x1C0000000uLL;
                  if ( (unsigned int)v60 >= v62 )
                  {
LABEL_56:
                    v166 = v60;
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v45, 0);
                    if ( v160 )
                    {
                      v139 = (_DWORD *)(a1 + 24);
                      if ( a1 + 24 >= MmUserProbeAddress )
                        v139 = (_DWORD *)MmUserProbeAddress;
                      *v139 = v60;
                      if ( (_DWORD)v60 || !(_DWORD)v63 )
                      {
                        v141 = (_DWORD *)(a1 + 8);
                        if ( a1 + 8 >= MmUserProbeAddress )
                          v141 = (_DWORD *)MmUserProbeAddress;
                        *v141 = v61;
                      }
                      else
                      {
                        v140 = (_DWORD *)(a1 + 8);
                        if ( a1 + 8 >= MmUserProbeAddress )
                          v140 = (_DWORD *)MmUserProbeAddress;
                        *v140 = v63;
                        v151 = -1073741789;
                        v147 = -1073741789;
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
                        v151 = -1073741789;
                        v147 = -1073741789;
                      }
                    }
                    v70 = v60;
                    v71 = 0LL;
                    v72 = v171;
                    v73 = v163;
                    while ( (unsigned int)v71 < (unsigned int)v60 )
                    {
                      v74 = *(int **)&v72[8 * v71];
                      v75 = *v74;
                      if ( *v74 == 2
                        && (v73[v71] & 1) != 0
                        && (v92 = v74[15] ^ (v74[15] ^ ((v74[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
                            v74[15] = v92,
                            (v92 & 0x30000) < 0x20000) )
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
                            LODWORD(v146) = v74[1];
                            LODWORD(v145) = v75;
                            McTemplateK0ppqqx_EtwWriteTransfer(
                              v76,
                              &EventRetirePresentHistory,
                              (unsigned int)v146,
                              v154,
                              v74,
                              v145,
                              v146,
                              v76);
                          }
                        }
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v45 + 48), (PSLIST_ENTRY)v74 - 1);
                        v71 = (unsigned int)(v71 + 1);
                      }
                    }
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v45, v60);
                    LODWORD(v28) = v151;
                    if ( v70 )
                      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v45 + 64), 0, v70, 0);
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v168);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v172);
                    COREACCESS::~COREACCESS((COREACCESS *)v179);
                    if ( v164 )
                    {
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v164 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v164 + 2), v164);
                      LODWORD(v28) = v147;
                    }
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v155);
                    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v148, v77);
                    if ( v150 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                      goto LABEL_198;
                    return (unsigned int)v28;
                  }
                  v65 = (unsigned int)v60;
                  v66 = *(unsigned int **)&v171[8 * v60];
                  v67 = *v66;
                  if ( *v66 == 1 )
                  {
                    v81 = v66[14];
                    if ( v81 <= 0x10 )
                    {
                      v69 = 16 * v81 + 67;
                      goto LABEL_78;
                    }
                    v134 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
                    *(_QWORD *)(v134 + 24) = 54LL;
                    WdLogEvent5_WdAssertion(v134);
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
                    v133 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
                    *(_QWORD *)(v133 + 24) = 74LL;
                    WdLogEvent5_WdAssertion(v133);
                    v63 = 0LL;
                    v65 = (unsigned int)v60;
                  }
                  else
                  {
                    switch ( v67 )
                    {
                      case 2u:
                        v84 = v66[205];
                        if ( v84 <= 0x10 )
                        {
                          v69 = 16 * v84 + 831;
                          goto LABEL_78;
                        }
                        v131 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
                        *(_QWORD *)(v131 + 24) = 64LL;
                        WdLogEvent5_WdAssertion(v131);
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
                        v132 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
                        *(_QWORD *)(v132 + 24) = 97LL;
                        WdLogEvent5_WdAssertion(v132);
                        v69 = 7;
                        v65 = (unsigned int)v60;
                        goto LABEL_78;
                    }
                  }
LABEL_79:
                  v158 = v63;
                  if ( !(_DWORD)v63 )
                  {
                    v135 = WdLogNewEntry5_WdAssertion(v59, v64);
                    *(_QWORD *)(v135 + 24) = 385LL;
                    WdLogEvent5_WdAssertion(v135);
                    v65 = (unsigned int)v60;
                  }
                  if ( (unsigned int)v63 > v153 )
                  {
                    v151 = 261;
                    v147 = 261;
                    v61 = v152;
                    goto LABEL_56;
                  }
                  v66[1] = v63;
                  v82 = *v66;
                  if ( *v66 == 2 )
                  {
                    v85 = v163;
                    v86 = (unsigned __int8)v163[v65];
                    v87 = v66[15];
                    if ( (v86 & 1) != 0 )
                    {
                      v93 = v87 | 0x2000;
                      v66[15] = v93;
                      v88 = v93 ^ (v93 ^ ((unsigned __int8)v85[v65] << 17)) & 0x40000;
                    }
                    else
                    {
                      v88 = v87 ^ (v87 ^ (v86 << 18)) & 0x100000;
                      v66[15] = v88;
                      if ( (v85[v65] & 8) == 0 )
                      {
LABEL_94:
                        if ( (v85[v65] & 0x20) != 0 )
                          v89 = 0;
                        else
                          v89 = 0x8000000;
                        v66[15] = v89 | v88 & 0xF7FFFFFF;
                        v90 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
                        v90[3] = v66;
                        v90[4] = *((_QWORD *)v66 + 2);
                        v90[5] = (v66[15] >> 13) & 1;
                        v90[6] = *((_QWORD *)v66 + 9);
                        v90[7] = *((_QWORD *)v66 + 1);
                        WdLogEvent5_WdPresentTokenEvent(v90);
                        v82 = *v66;
                        v65 = (unsigned int)v60;
                        goto LABEL_83;
                      }
                      v88 |= 0x1000000u;
                    }
                    v66[15] = v88;
                    goto LABEL_94;
                  }
LABEL_83:
                  if ( v82 == 9 )
                    v66[8] ^= (v66[8] ^ ((unsigned __int8)v163[v65] >> 4)) & 1;
                  if ( v160 )
                  {
                    v136 = v161;
                    if ( (unsigned __int64)v161 + v63 > MmUserProbeAddress || (char *)v161 + v63 <= v161 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v136, v66, (unsigned int)v63);
                  }
                  else
                  {
                    memmove(v161, v66, (unsigned int)v63);
                  }
                  if ( *v66 == 2 )
                  {
                    v59 = v163;
                    if ( (v163[v60] & 1) != 0 )
                    {
                      v59 = (char *)v66[15];
                      if ( ((unsigned __int16)v59 & 0x2000) == 0 )
                      {
                        v137 = WdLogNewEntry5_WdAssertion(v59, v83);
                        *(_QWORD *)(v137 + 24) = 459LL;
                        WdLogEvent5_WdAssertion(v137);
                        v59 = (char *)v66[15];
                      }
                      v91 = (__int16)v59;
                      if ( (unsigned int)((__int16)v59 >> 14) > 1 )
                      {
                        v138 = WdLogNewEntry5_WdAssertion(v59, (unsigned __int16)v59);
                        *(_QWORD *)(v138 + 24) = 460LL;
                        WdLogEvent5_WdAssertion(v138);
                        v91 = *((_WORD *)v66 + 30);
                        v59 = (char *)v66[15];
                      }
                      v66[15] = (unsigned int)v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((v91 & 0xC000) + 0x4000)) & 0xC000;
                    }
                  }
                  v161 = (char *)v161 + (unsigned int)v63;
                  v61 = v63 + v152;
                  v159 = v63 + v152;
                  v153 -= v63;
                  v60 = (unsigned int)(v60 + 1);
                  v62 = v165;
                }
              }
            }
            v117 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v117 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
            WdLogEvent5_WdEvent(v117);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v172);
            COREACCESS::~COREACCESS((COREACCESS *)v179);
            goto LABEL_148;
          }
          v35 = v154;
        }
      }
      v94 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v94 + 24) = v35;
      WdLogEvent5_WdEvent(v94);
      if ( *((_DWORD *)v35 + 50) == 1 )
      {
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v172);
        COREACCESS::~COREACCESS((COREACCESS *)v179);
        if ( v164 )
          DXGADAPTER::ReleaseReference(v164);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v155);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v148, v95);
        if ( !v150 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return 3221225485LL;
LABEL_207:
        McTemplateK0q_EtwWriteTransfer(v96, &EventProfilerExit, v97, v148);
        return 3221225485LL;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v172);
      COREACCESS::~COREACCESS((COREACCESS *)v179);
      if ( v164 )
        DXGADAPTER::ReleaseReference(v164);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v155);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v148, v142);
      if ( v150 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v143, &EventProfilerExit, v144, v148);
      return 0LL;
    }
  }
  else
  {
    v104 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v104 + 24) = v11;
    *(_QWORD *)(v104 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v104);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v148, v105);
    if ( v150 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v106, &EventProfilerExit, v107, v148);
    return 3221225506LL;
  }
}
