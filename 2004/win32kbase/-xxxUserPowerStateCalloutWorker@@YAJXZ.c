/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0064450 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00612C8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00616A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     PowerOnMonitor @ 0x1C00636E0 (PowerOnMonitor.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     IsPowerOffGdiSupported @ 0x1C00C8848 (IsPowerOffGdiSupported.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00C8EC0 (EtwTraceWinlogonSleepEndEvent.c)
 *     IsPowerOnGdiSupported @ 0x1C00C8EE0 (IsPowerOnGdiSupported.c)
 *     PowerResumeSuspendEvent @ 0x1C00C9C30 (PowerResumeSuspendEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C9ED4 (IsxxxSendMessageBSMSupported.c)
 *     RIMSetSystemInputMode @ 0x1C00C9F00 (RIMSetSystemInputMode.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00C9F50 (EtwTraceWinlogonSleepStartEvent.c)
 *     PowerOffMonitor @ 0x1C00C9F70 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00CA490 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C012A45C (McTemplateK0dq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct tagTHREADINFO *v4; // r12
  unsigned int v5; // esi
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // r14
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // rcx
  NTSTATUS v50; // r8d
  __int64 v51; // rcx
  LARGE_INTEGER *v52; // rbx
  struct tagTHREADINFO **v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PVOID v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  int v62; // ebx
  __int64 v63; // rcx
  __int64 v64; // rax
  struct _KTHREAD *v65; // rdi
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 *v84; // r14
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // r9
  __int64 v88; // rcx
  NTSTATUS v89; // r8d
  __int64 v90; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  PVOID CurrentProcess; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rax
  int ProcessSessionId; // ebx
  __int64 v102; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v105; // rbx
  __int64 v106; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v109; // rdx
  __int64 v110; // r9
  __int64 v111; // rax
  int v112; // esi
  __int64 v113; // rdx
  __int64 v114; // rax
  unsigned int v115; // r8d
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  PERESOURCE *v119; // rdi
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rax
  unsigned int v125; // r8d
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  PERESOURCE *v129; // rdi
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // rcx
  unsigned int v134; // eax
  __int64 v135; // rdx
  int v136; // r8d
  __int64 v137; // rdx
  signed __int32 v138[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v140; // [rsp+30h] [rbp-D8h]
  int v141; // [rsp+58h] [rbp-B0h]
  int v142; // [rsp+5Ch] [rbp-ACh]
  bool SystemInformation; // [rsp+60h] [rbp-A8h]
  __int128 SystemInformation_8; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v145; // [rsp+78h] [rbp-90h]
  int v146; // [rsp+88h] [rbp-80h] BYREF
  int v147; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v148; // [rsp+90h] [rbp-78h] BYREF
  int v149; // [rsp+94h] [rbp-74h] BYREF
  int v150; // [rsp+98h] [rbp-70h] BYREF
  int v151; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v152[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v153; // [rsp+A8h] [rbp-60h]
  _DWORD v154[10]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 InputBuffer; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v156; // [rsp+E8h] [rbp-20h]
  unsigned __int8 v157; // [rsp+F0h] [rbp-18h]
  GUID v158; // [rsp+F4h] [rbp-14h] BYREF
  _OWORD v159[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v160; // [rsp+128h] [rbp+20h]
  unsigned __int8 v161; // [rsp+130h] [rbp+28h]
  GUID v162; // [rsp+134h] [rbp+2Ch] BYREF
  _QWORD v163[10]; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v164; // [rsp+198h] [rbp+90h] BYREF
  int *v165; // [rsp+1B8h] [rbp+B0h]
  __int64 v166; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v167; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v168; // [rsp+1E8h] [rbp+E0h]
  __int64 v169; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v170; // [rsp+1F8h] [rbp+F0h] BYREF
  int *v171; // [rsp+218h] [rbp+110h]
  __int64 v172; // [rsp+220h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v173; // [rsp+228h] [rbp+120h] BYREF
  int *v174; // [rsp+248h] [rbp+140h]
  __int64 v175; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v176; // [rsp+258h] [rbp+150h] BYREF
  int *v177; // [rsp+278h] [rbp+170h]
  __int64 v178; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v179; // [rsp+288h] [rbp+180h] BYREF
  int *v180; // [rsp+2A8h] [rbp+1A0h]
  __int64 v181; // [rsp+2B0h] [rbp+1A8h]

  memset(v163, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v163[1]);
  v4 = 0LL;
  v5 = dword_1C024D0E8;
  v163[8] = MEMORY[0xFFFFF78000000014];
  v142 = dword_1C024D0E8;
  LODWORD(v163[4]) = dword_1C024D0E8;
  LODWORD(v163[3]) = 17;
  LOBYTE(v163[6]) = -1;
  InputBuffer = 0LL;
  v153 = 0LL;
  SystemInformation_8 = 0LL;
  v145 = 0LL;
  memset(v159, 0, sizeof(v159));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1, &StartPowerStateCalloutWorker, v2, (unsigned int)dword_1C024D0E8, 0);
  v6 = -1073741637;
  if ( qword_1C0252440 )
    v7 = qword_1C0252440();
  else
    v7 = -1073741637;
  if ( v7 < 0 )
  {
    v111 = MEMORY[0xFFFFF78000000008];
    v1 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 2) = 5;
LABEL_157:
    *((_QWORD *)&gPowerStateLog + v1) = v111;
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 3) = v7;
    goto LABEL_37;
  }
  if ( qword_1C0252448 )
    v7 = qword_1C0252448();
  else
    v7 = -1073741637;
  v141 = v7;
  if ( v7 < 0 )
  {
    v111 = MEMORY[0xFFFFF78000000008];
    v1 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 2) = 6;
    goto LABEL_157;
  }
  if ( !gbPowerCalloutsReady )
  {
    v7 = -2143420409;
    goto LABEL_37;
  }
  if ( v5 == 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 91);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    goto LABEL_37;
  }
  if ( v5 == 2 )
  {
    dword_1C024D190 = 1;
    _InterlockedOr(v138, 0);
    if ( !gSystemIsAoAc )
      RIMSetSystemInputMode(2LL);
    if ( !gbTtmEnabled )
      PowerOffMonitor(dword_1C024D0EC);
    v38 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C024D1B0 = v38;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      v39 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
      *((_QWORD *)&gPowerStateLog + v39) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)&gPowerStateLog + 2 * v39 + 2) = 3;
      *((_DWORD *)&gPowerStateLog + 2 * v39 + 3) = 1;
      LOBYTE(v39) = 1;
      v40 = xxxSendWinlogonPowerMessage(v39, 262LL, &dword_1C024D0D8);
      v41 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
      *((_QWORD *)&gPowerStateLog + v41) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)&gPowerStateLog + 2 * v41 + 2) = 4;
      *((_DWORD *)&gPowerStateLog + 2 * v41 + 3) = v40;
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v0) = 1;
    LOBYTE(v38) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v38, v0, 0LL) && (int)IsxxxSendMessageBSMSupported(v43) >= 0 )
    {
      dword_1C024D0B0 = 16;
      dword_1C024D0B4 = 40;
      if ( qword_1C02523F8 )
      {
        LODWORD(v140) = 1;
        *(_QWORD *)OutputBufferLength = &dword_1C024D0B0;
        v45 = qword_1C02523F8(0LL, 536LL, 4LL);
      }
      else
      {
        v45 = 0;
      }
      if ( !v45 )
      {
        v132 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v132) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v132 + 2) = 7;
        *((_DWORD *)&gPowerStateLog + 2 * v132 + 3) = 4;
      }
    }
    if ( dword_1C024D0DC == 5 )
    {
      if ( gProtocolType )
      {
LABEL_87:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        goto LABEL_35;
      }
      if ( (dword_1C024D0E0 & 8) != 0 )
      {
        if ( qword_1C024CA38 )
          v46 = qword_1C024CA38(0LL, 0LL);
        else
          v46 = 0;
        if ( v46 )
        {
          if ( grpdeskRitInput )
          {
            v136 = xxxUserSetDisplayConfig(0, 0LL, 2191, 0, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)v163);
            if ( v136 < 0 )
            {
              v137 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
              *((_QWORD *)&gPowerStateLog + v137) = MEMORY[0xFFFFF78000000008];
              *((_DWORD *)&gPowerStateLog + 2 * v137 + 2) = 9;
              *((_DWORD *)&gPowerStateLog + 2 * v137 + 3) = v136;
            }
          }
        }
      }
      else
      {
        EtwTraceWinlogonSleepEndEvent(1LL, v42, v44);
        v133 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v133) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v133 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v133 + 3) = 259;
        LOBYTE(v133) = 1;
        v134 = xxxSendWinlogonPowerMessage(v133, 259LL, &dword_1C024D0D8);
        v135 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v135) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v135 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v135 + 3) = v134;
        EtwTraceWinlogonSleepEndEvent(0LL, v135, v134);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 && qword_1C0252418 )
      qword_1C0252418();
    goto LABEL_87;
  }
  v8 = v5 - 3;
  switch ( v5 )
  {
    case 3u:
      v85 = dword_1C024D0D8;
      if ( dword_1C024D0DC == 5 )
        v85 = 3;
      LODWORD(InputBuffer) = v85;
      LOBYTE(v8) = 1;
      if ( (unsigned int)PowerResumeSuspendEvent(v8, 0LL, 0LL) )
        goto LABEL_36;
      *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
      WORD6(InputBuffer) = 256;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v86, v2, v87);
      v89 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v89 < 0 )
      {
        v123 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v123) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v123 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v123 + 3) = v89;
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v88);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v162 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v161 = 1;
        v124 = PsGetCurrentThreadWin32Thread(v90);
        v160 = v124;
        if ( v124 && (*(int *)(v124 + 24) > 0 || *(_DWORD *)(v160 + 48)) )
        {
          EtwActivityIdControl(3u, &v162);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v149 = v161;
            v175 = 4LL;
            v174 = &v149;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &v162,
              0LL,
              3u,
              &v173);
          }
        }
      }
      else
      {
        v160 = 0LL;
      }
      while ( 1 )
      {
        v92 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v92 )
          v4 = *v92;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v94, v93);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v97, v96) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v4 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v160 )
        {
          v97 = *(unsigned int *)(v160 + 24);
          if ( *(_DWORD *)(v160 + 48) || (int)v97 > 0 )
          {
            *(_DWORD *)(v160 + 44) = 1;
            *(GUID *)(v160 + 28) = v162;
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v150 = v161;
                v178 = 4LL;
                v177 = &v150;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E30,
                  &v162,
                  0LL,
                  3u,
                  &v176);
                v125 = dword_1C0246A70;
              }
              if ( v125 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v151 = v161;
                v181 = 4LL;
                v180 = &v151;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E5D,
                  &v162,
                  0LL,
                  3u,
                  &v179);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v97);
      gptiCurrent = v4;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess(v98) )
      {
        v100 = PsGetCurrentProcess(v1, v99);
        ProcessSessionId = PsGetProcessSessionIdEx(v100);
        CurrentThreadProcess = PsGetCurrentThreadProcess(v102);
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          goto LABEL_35;
      }
      CurrentThread = KeGetCurrentThread();
      v105 = 0LL;
      if ( !IsThreadCrossSessionAttached(v1) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v105 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v106);
      if ( !v105
        || !CurrentProcessWin32Process
        || (*(_DWORD *)(v105 + 480) & 0x1000000) == 0
        || (v1 = *(unsigned int *)(v105 + 1224), (v1 & 0x80u) != 0LL)
        || (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) == 0 )
      {
LABEL_35:
        v7 = v141;
LABEL_36:
        v5 = v142;
        goto LABEL_37;
      }
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v109, v2, v110);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15, v16);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v25 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v126 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v126 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
        v129 = (PERESOURCE *)GetDomainLockRef(12LL, v21, v23, v24);
        if ( v129 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v128, v127, v130, v131);
        ExReleaseResourceAndLeaveCriticalRegion(*v129);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v129);
      }
      goto LABEL_34;
    case 5u:
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        6u);
      if ( !gSystemIsAoAc )
        RIMSetSystemInputMode(0LL);
      SystemInformation = dword_1C024D0DC == 5;
      if ( gSessionId )
      {
        if ( dword_1C024D0DC == 5 )
        {
          memset((char *)v159 + 12, 0, 20);
          *(_QWORD *)&v145 = v159;
          *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
          *((_QWORD *)&v145 + 1) = 32LL;
          *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
          LODWORD(v159[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
          *(_QWORD *)&v159[0] = 0x100000004LL;
          DWORD2(v159[0]) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL, v27, v28);
        v153 = 0LL;
        v152[0] = 0;
        v29 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        v152[1] = 1;
        *((_QWORD *)&gPowerStateLog + v29) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v29 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v29 + 3) = 262;
        LOBYTE(v29) = 1;
        v30 = xxxSendWinlogonPowerMessage(v29, 262LL, v152);
        v31 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v31) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v31 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v31 + 3) = v30;
        EtwTraceWinlogonSleepEndEvent(0LL, v31, v30);
        if ( SystemInformation )
        {
          v32 = v145;
          *(_DWORD *)(v145 + 16) |= 1u;
          *(_DWORD *)(v32 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported() >= 0 && qword_1C0252428 )
        qword_1C0252428(v163, 1LL, 5LL);
      dword_1C024D190 = 0;
      _InterlockedOr(v138, 0);
      if ( gbPendingSleepInput )
      {
        v33 = gPendingSleepInputReason;
        gPendingMonitorOnReason = gPendingSleepInputReason;
        gbPendingMonitorOn = 1;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        gbPendingSleepInput = 0;
        gPendingSleepInputReason = 0;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        PoSetUserPresent(v33);
      }
      else
      {
        dword_1C024D194 = 1;
      }
      if ( gSqmIsOptedIn )
        _WinSqmDWORDEvent(
          &SQM_INCREMENT_DWORD,
          0LL,
          4013,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C024D1B0)
        / 0x3E8);
      *(_QWORD *)&v159[0] = 0x100000004LL;
      memset((char *)v159 + 12, 0, 20);
      *(_QWORD *)&v145 = v159;
      *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
      *((_QWORD *)&v145 + 1) = 32LL;
      LODWORD(v159[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
      *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
      DWORD2(v159[0]) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      LOBYTE(v34) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v34, 0LL) && (int)IsxxxSendMessageBSMSupported(v35) >= 0 )
      {
        v154[0] = 16;
        v154[1] = 0x20000000;
        if ( qword_1C02523F8 )
        {
          LODWORD(v140) = 1;
          *(_QWORD *)OutputBufferLength = v154;
          v36 = qword_1C02523F8(0LL, 536LL, 18LL);
        }
        else
        {
          v36 = 0;
        }
        if ( !v36 )
        {
          v122 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v122) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v122 + 2) = 7;
          *((_DWORD *)&gPowerStateLog + 2 * v122 + 3) = 18;
        }
      }
      v37 = v145;
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(v145 + 16) |= 1u;
      *(_DWORD *)(v37 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      goto LABEL_35;
    case 6u:
      if ( qword_1C0252380 )
        v6 = qword_1C0252380();
      if ( v6 >= 0 && qword_1C0252388 )
        qword_1C0252388();
      if ( (unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
        goto LABEL_37;
      *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
      WORD6(InputBuffer) = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v47, v2, v48);
      v50 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v50 < 0 )
      {
        v113 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v113) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v113 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v113 + 3) = v50;
      }
      v52 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v49);
      if ( v52 )
        v52[1] = KeQueryPerformanceCounter(0LL);
      v158 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v157 = 1;
        v114 = PsGetCurrentThreadWin32Thread(v51);
        v156 = v114;
        if ( v114 && (*(int *)(v114 + 24) > 0 || *(_DWORD *)(v156 + 48)) )
        {
          EtwActivityIdControl(3u, &v158);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v146 = v157;
            v166 = 4LL;
            v165 = &v146;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &v158,
              0LL,
              3u,
              &v164);
          }
        }
      }
      else
      {
        v156 = 0LL;
      }
      while ( 1 )
      {
        v53 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v53 )
          v4 = *v53;
        v56 = (PVOID)PsGetCurrentProcess(v55, v54);
        if ( v56 )
        {
          if ( v56 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v58, v57) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v4 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v156 )
        {
          v58 = *(unsigned int *)(v156 + 24);
          if ( *(_DWORD *)(v156 + 48) || (int)v58 > 0 )
          {
            *(_DWORD *)(v156 + 44) = 1;
            *(GUID *)(v156 + 28) = v158;
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v147 = v157;
                v169 = 4LL;
                v168 = &v147;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E30,
                  &v158,
                  0LL,
                  3u,
                  &v167);
                v115 = dword_1C0246A70;
              }
              if ( v115 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v148 = v157;
                v172 = 4LL;
                v171 = &v148;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E5D,
                  &v158,
                  0LL,
                  3u,
                  &v170);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v58);
      gptiCurrent = v4;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess(v59) )
      {
        v61 = PsGetCurrentProcess(v1, v60);
        v62 = PsGetProcessSessionIdEx(v61);
        v64 = PsGetCurrentThreadProcess(v63);
        if ( v62 != (unsigned int)PsGetProcessSessionIdEx(v64) )
          goto LABEL_35;
      }
      v65 = KeGetCurrentThread();
      v66 = 0LL;
      if ( !IsThreadCrossSessionAttached(v1) )
      {
        v68 = (__int64 *)PsGetThreadWin32Thread(v65);
        if ( v68 )
          v66 = *v68;
      }
      v69 = PsGetCurrentProcessWin32Process(v67);
      if ( !v66 )
        goto LABEL_35;
      if ( !v69 )
        goto LABEL_35;
      if ( (*(_DWORD *)(v66 + 480) & 0x1000000) == 0 )
        goto LABEL_35;
      v1 = *(unsigned int *)(v66 + 1224);
      if ( (v1 & 0x80u) != 0LL || (*(_DWORD *)(v69 + 12) & 0x8000) == 0 )
        goto LABEL_35;
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v70, v2, v71);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v73, v72, v74, v75);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v77, v76, v78, v79);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v84 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v116 = *v84;
        v84[2] = 0LL;
        if ( !*(_DWORD *)(v116 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v81, v80, v82, v83);
        v119 = (PERESOURCE *)GetDomainLockRef(12LL, v80, v82, v83);
        if ( v119 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v118, v117, v120, v121);
        ExReleaseResourceAndLeaveCriticalRegion(*v119);
        HMUnlockObject(*v84);
        tagDomLock::LockExclusive(v119);
      }
LABEL_34:
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      goto LABEL_35;
    case 0xAu:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5 - 10, v0, v2, v3);
      gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 && qword_1C0252418 )
        qword_1C0252418();
      break;
    case 0xBu:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5 - 11, v0, v2, v3);
      v112 = 0;
      if ( (int)IsPowerOnGdiSupported() >= 0 )
      {
        if ( qword_1C0252428 )
          qword_1C0252428(v163, 0LL, 2LL);
        v112 = 1;
      }
      if ( (gPowerState & 0x20) != 0 )
        PowerOnMonitor(MonitorRequestReasonDP, (__int64)v163, 2u);
      if ( v112 && qword_1C0252438 )
        qword_1C0252438(v163);
      goto LABEL_35;
    default:
      v1 = v5 - 12;
      if ( v5 == 12 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2, v3);
        PowerOffMonitor(MonitorRequestReasonSxTransition);
      }
      else if ( v5 == 13 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2, v3);
        if ( gSessionId != gServiceSessionId )
        {
          EtwTraceWinlogonSleepStartEvent(1LL);
          v9 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v9) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v9 + 2) = 3;
          *((_DWORD *)&gPowerStateLog + 2 * v9 + 3) = 263;
          LOBYTE(v9) = 1;
          v10 = xxxSendWinlogonPowerMessage(v9, 263LL, &dword_1C024D0D8);
          v11 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v11) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v11 + 2) = 4;
          *((_DWORD *)&gPowerStateLog + 2 * v11 + 3) = v10;
          EtwTraceWinlogonSleepStartEvent(0LL);
          goto LABEL_35;
        }
      }
      break;
  }
  v7 = v141;
LABEL_37:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1, &StopPowerStateCalloutWorker, v2, v5, v7);
  return (unsigned int)v7;
}
