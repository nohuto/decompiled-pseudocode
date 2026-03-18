/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8888
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C005BA70 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     PowerOnMonitor @ 0x1C0053850 (PowerOnMonitor.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00546A8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C005AF20 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     IsPowerOffGdiSupported @ 0x1C00C821C (IsPowerOffGdiSupported.c)
 *     PowerResumeSuspendEvent @ 0x1C00C95B0 (PowerResumeSuspendEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C9854 (IsxxxSendMessageBSMSupported.c)
 *     RIMSetSystemInputMode @ 0x1C00C9880 (RIMSetSystemInputMode.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00C98D0 (EtwTraceWinlogonSleepStartEvent.c)
 *     PowerOffMonitor @ 0x1C00C98F0 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C9E10 (xxxSendWinlogonPowerMessage.c)
 *     IsPowerOnGdiSupported @ 0x1C00CA13C (IsPowerOnGdiSupported.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00CA170 (EtwTraceWinlogonSleepEndEvent.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C013044C (McTemplateK0dq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  struct tagTHREADINFO *v3; // r12
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // r14
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  char v32; // al
  __int64 v33; // rcx
  NTSTATUS v34; // r8d
  __int64 v35; // rcx
  LARGE_INTEGER *v36; // rbx
  struct tagTHREADINFO **v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  PVOID v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rax
  struct _KTHREAD *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 *v57; // r14
  int v58; // eax
  __int64 v59; // rcx
  NTSTATUS v60; // r8d
  __int64 v61; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  PVOID CurrentProcess; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  int ProcessSessionId; // ebx
  __int64 v73; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v80; // rax
  int v81; // esi
  __int64 v82; // rdx
  __int64 v83; // rax
  unsigned int v84; // r8d
  __int64 v85; // rax
  __int64 v86; // rcx
  PERESOURCE *v87; // rdi
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rax
  unsigned int v91; // r8d
  __int64 v92; // rax
  __int64 v93; // rcx
  PERESOURCE *v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // rdx
  int v99; // r8d
  __int64 v100; // rdx
  signed __int32 v101[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v103; // [rsp+30h] [rbp-D8h]
  int v104; // [rsp+58h] [rbp-B0h]
  int v105; // [rsp+5Ch] [rbp-ACh]
  bool SystemInformation; // [rsp+60h] [rbp-A8h]
  __int128 SystemInformation_8; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v108; // [rsp+78h] [rbp-90h]
  int v109; // [rsp+88h] [rbp-80h] BYREF
  int v110; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v111; // [rsp+90h] [rbp-78h] BYREF
  int v112; // [rsp+94h] [rbp-74h] BYREF
  int v113; // [rsp+98h] [rbp-70h] BYREF
  int v114; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v115[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v116; // [rsp+A8h] [rbp-60h]
  _DWORD v117[10]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 InputBuffer; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v119; // [rsp+E8h] [rbp-20h]
  unsigned __int8 v120; // [rsp+F0h] [rbp-18h]
  GUID v121; // [rsp+F4h] [rbp-14h] BYREF
  _OWORD v122[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v123; // [rsp+128h] [rbp+20h]
  unsigned __int8 v124; // [rsp+130h] [rbp+28h]
  GUID v125; // [rsp+134h] [rbp+2Ch] BYREF
  _QWORD v126[10]; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v127; // [rsp+198h] [rbp+90h] BYREF
  int *v128; // [rsp+1B8h] [rbp+B0h]
  __int64 v129; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v130; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v131; // [rsp+1E8h] [rbp+E0h]
  __int64 v132; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v133; // [rsp+1F8h] [rbp+F0h] BYREF
  int *v134; // [rsp+218h] [rbp+110h]
  __int64 v135; // [rsp+220h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v136; // [rsp+228h] [rbp+120h] BYREF
  int *v137; // [rsp+248h] [rbp+140h]
  __int64 v138; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v139; // [rsp+258h] [rbp+150h] BYREF
  int *v140; // [rsp+278h] [rbp+170h]
  __int64 v141; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v142; // [rsp+288h] [rbp+180h] BYREF
  int *v143; // [rsp+2A8h] [rbp+1A0h]
  __int64 v144; // [rsp+2B0h] [rbp+1A8h]

  memset(v126, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v126[1]);
  v3 = 0LL;
  v4 = dword_1C02530F8;
  v126[8] = MEMORY[0xFFFFF78000000014];
  v105 = dword_1C02530F8;
  LODWORD(v126[4]) = dword_1C02530F8;
  LODWORD(v126[3]) = 17;
  LOBYTE(v126[6]) = -1;
  InputBuffer = 0LL;
  v116 = 0LL;
  SystemInformation_8 = 0LL;
  v108 = 0LL;
  memset(v122, 0, sizeof(v122));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1, &StartPowerStateCalloutWorker, v2, (unsigned int)dword_1C02530F8, 0);
  v5 = -1073741637;
  if ( qword_1C0258400 )
    v6 = qword_1C0258400();
  else
    v6 = -1073741637;
  if ( v6 < 0 )
  {
    v80 = MEMORY[0xFFFFF78000000008];
    v1 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 2) = 5;
LABEL_157:
    *((_QWORD *)&gPowerStateLog + v1) = v80;
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 3) = v6;
    goto LABEL_37;
  }
  if ( qword_1C0258408 )
    v6 = qword_1C0258408();
  else
    v6 = -1073741637;
  v104 = v6;
  if ( v6 < 0 )
  {
    v80 = MEMORY[0xFFFFF78000000008];
    v1 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 2) = 6;
    goto LABEL_157;
  }
  if ( !gbPowerCalloutsReady )
  {
    v6 = -2143420409;
    goto LABEL_37;
  }
  if ( v4 == 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 91);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    goto LABEL_37;
  }
  if ( v4 == 2 )
  {
    dword_1C02531A0 = 1;
    _InterlockedOr(v101, 0);
    if ( !gSystemIsAoAc )
      RIMSetSystemInputMode(2LL);
    if ( !gbTtmEnabled )
      PowerOffMonitor(dword_1C02530FC);
    v26 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C02531C0 = v26;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      v27 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
      *((_QWORD *)&gPowerStateLog + v27) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)&gPowerStateLog + 2 * v27 + 2) = 3;
      *((_DWORD *)&gPowerStateLog + 2 * v27 + 3) = 1;
      LOBYTE(v27) = 1;
      v28 = xxxSendWinlogonPowerMessage(v27, 262LL, &dword_1C02530E8);
      v29 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
      *((_QWORD *)&gPowerStateLog + v29) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)&gPowerStateLog + 2 * v29 + 2) = 4;
      *((_DWORD *)&gPowerStateLog + 2 * v29 + 3) = v28;
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v0) = 1;
    LOBYTE(v26) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v26, v0, 0LL) && (int)IsxxxSendMessageBSMSupported(v30) >= 0 )
    {
      dword_1C02530C0 = 16;
      dword_1C02530C4 = 40;
      if ( qword_1C02583B8 )
      {
        LODWORD(v103) = 1;
        *(_QWORD *)OutputBufferLength = &dword_1C02530C0;
        v31 = qword_1C02583B8(0LL, 536LL, 4LL);
      }
      else
      {
        v31 = 0;
      }
      if ( !v31 )
      {
        v95 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v95) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v95 + 2) = 7;
        *((_DWORD *)&gPowerStateLog + 2 * v95 + 3) = 4;
      }
    }
    if ( dword_1C02530EC == 5 )
    {
      if ( gProtocolType )
      {
LABEL_87:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        goto LABEL_35;
      }
      if ( (dword_1C02530F0 & 8) != 0 )
      {
        if ( qword_1C0252A58 )
          v32 = qword_1C0252A58(0LL, 0LL);
        else
          v32 = 0;
        if ( v32 )
        {
          if ( grpdeskRitInput )
          {
            v99 = xxxUserSetDisplayConfig(0, 0LL, 2191, 0, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)v126);
            if ( v99 < 0 )
            {
              v100 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
              *((_QWORD *)&gPowerStateLog + v100) = MEMORY[0xFFFFF78000000008];
              *((_DWORD *)&gPowerStateLog + 2 * v100 + 2) = 9;
              *((_DWORD *)&gPowerStateLog + 2 * v100 + 3) = v99;
            }
          }
        }
      }
      else
      {
        EtwTraceWinlogonSleepEndEvent(1LL);
        v96 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v96) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v96 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v96 + 3) = 259;
        LOBYTE(v96) = 1;
        v97 = xxxSendWinlogonPowerMessage(v96, 259LL, &dword_1C02530E8);
        v98 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v98) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v98 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v98 + 3) = v97;
        EtwTraceWinlogonSleepEndEvent(0LL);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 && qword_1C02583D8 )
      qword_1C02583D8();
    goto LABEL_87;
  }
  v7 = v4 - 3;
  switch ( v4 )
  {
    case 3u:
      v58 = dword_1C02530E8;
      if ( dword_1C02530EC == 5 )
        v58 = 3;
      LODWORD(InputBuffer) = v58;
      LOBYTE(v7) = 1;
      if ( (unsigned int)PowerResumeSuspendEvent(v7, 0LL, 0LL) )
        goto LABEL_36;
      *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
      WORD6(InputBuffer) = 256;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      v60 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v60 < 0 )
      {
        v89 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v89) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v89 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v89 + 3) = v60;
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v59);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v125 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v124 = 1;
        v90 = PsGetCurrentThreadWin32Thread(v61);
        v123 = v90;
        if ( v90 && (*(int *)(v90 + 24) > 0 || *(_DWORD *)(v123 + 48)) )
        {
          EtwActivityIdControl(3u, &v125);
          if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v112 = v124;
            v138 = 4LL;
            v137 = &v112;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v125,
              0LL,
              3u,
              &v136);
          }
        }
      }
      else
      {
        v123 = 0LL;
      }
      while ( 1 )
      {
        v63 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v63 )
          v3 = *v63;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v65, v64);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v68, v67) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v3 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v123 )
        {
          v68 = *(unsigned int *)(v123 + 24);
          if ( *(_DWORD *)(v123 + 48) || (int)v68 > 0 )
          {
            *(_DWORD *)(v123 + 44) = 1;
            *(GUID *)(v123 + 28) = v125;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v113 = v124;
                v141 = 4LL;
                v140 = &v113;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &v125,
                  0LL,
                  3u,
                  &v139);
                v91 = dword_1C024C960;
              }
              if ( v91 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v114 = v124;
                v144 = 4LL;
                v143 = &v114;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &v125,
                  0LL,
                  3u,
                  &v142);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v68);
      gptiCurrent = v3;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess(v69) )
      {
        v71 = PsGetCurrentProcess(v1, v70);
        ProcessSessionId = PsGetProcessSessionIdEx(v71);
        CurrentThreadProcess = PsGetCurrentThreadProcess(v73);
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          goto LABEL_35;
      }
      CurrentThread = KeGetCurrentThread();
      v76 = 0LL;
      if ( !IsThreadCrossSessionAttached(v1) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v76 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v77);
      if ( !v76
        || !CurrentProcessWin32Process
        || (*(_DWORD *)(v76 + 480) & 0x1000000) == 0
        || (v1 = *(unsigned int *)(v76 + 1216), (v1 & 0x80u) != 0LL)
        || (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) == 0 )
      {
LABEL_35:
        v6 = v104;
LABEL_36:
        v4 = v105;
        goto LABEL_37;
      }
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v15 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v92 = *v15;
        v15[2] = 0LL;
        if ( !*(_DWORD *)(v92 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
        v94 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v94 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v93);
        ExReleaseResourceAndLeaveCriticalRegion(*v94);
        HMUnlockObject(*v15);
        tagDomLock::LockExclusive(v94);
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
      SystemInformation = dword_1C02530EC == 5;
      if ( gSessionId )
      {
        if ( dword_1C02530EC == 5 )
        {
          memset((char *)v122 + 12, 0, 20);
          *(_QWORD *)&v108 = v122;
          *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
          *((_QWORD *)&v108 + 1) = 32LL;
          *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
          LODWORD(v122[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
          *(_QWORD *)&v122[0] = 0x100000004LL;
          DWORD2(v122[0]) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        v116 = 0LL;
        v115[0] = 0;
        v17 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        v115[1] = 1;
        *((_QWORD *)&gPowerStateLog + v17) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v17 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v17 + 3) = 262;
        LOBYTE(v17) = 1;
        v18 = xxxSendWinlogonPowerMessage(v17, 262LL, v115);
        v19 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v19) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v19 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v19 + 3) = v18;
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( SystemInformation )
        {
          v20 = v108;
          *(_DWORD *)(v108 + 16) |= 1u;
          *(_DWORD *)(v20 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported() >= 0 && qword_1C02583E8 )
        qword_1C02583E8(v126, 1LL, 5LL);
      dword_1C02531A0 = 0;
      _InterlockedOr(v101, 0);
      if ( gbPendingSleepInput )
      {
        v21 = gPendingSleepInputReason;
        gPendingMonitorOnReason = gPendingSleepInputReason;
        gbPendingMonitorOn = 1;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        gbPendingSleepInput = 0;
        gPendingSleepInputReason = 0;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        PoSetUserPresent(v21);
      }
      else
      {
        dword_1C02531A4 = 1;
      }
      if ( gSqmIsOptedIn )
        _WinSqmDWORDEvent(
          &SQM_INCREMENT_DWORD,
          0LL,
          4013,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C02531C0)
        / 0x3E8);
      *(_QWORD *)&v122[0] = 0x100000004LL;
      memset((char *)v122 + 12, 0, 20);
      *(_QWORD *)&v108 = v122;
      *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
      *((_QWORD *)&v108 + 1) = 32LL;
      LODWORD(v122[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
      *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
      DWORD2(v122[0]) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      LOBYTE(v22) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v22, 0LL) && (int)IsxxxSendMessageBSMSupported(v23) >= 0 )
      {
        v117[0] = 16;
        v117[1] = 0x20000000;
        if ( qword_1C02583B8 )
        {
          LODWORD(v103) = 1;
          *(_QWORD *)OutputBufferLength = v117;
          v24 = qword_1C02583B8(0LL, 536LL, 18LL);
        }
        else
        {
          v24 = 0;
        }
        if ( !v24 )
        {
          v88 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v88) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v88 + 2) = 7;
          *((_DWORD *)&gPowerStateLog + 2 * v88 + 3) = 18;
        }
      }
      v25 = v108;
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(v108 + 16) |= 1u;
      *(_DWORD *)(v25 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      goto LABEL_35;
    case 6u:
      if ( qword_1C0258340 )
        v5 = qword_1C0258340();
      if ( v5 >= 0 && qword_1C0258348 )
        qword_1C0258348();
      if ( (unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
        goto LABEL_37;
      *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
      WORD6(InputBuffer) = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      v34 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v34 < 0 )
      {
        v82 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v82) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v82 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v82 + 3) = v34;
      }
      v36 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v33);
      if ( v36 )
        v36[1] = KeQueryPerformanceCounter(0LL);
      v121 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v120 = 1;
        v83 = PsGetCurrentThreadWin32Thread(v35);
        v119 = v83;
        if ( v83 && (*(int *)(v83 + 24) > 0 || *(_DWORD *)(v119 + 48)) )
        {
          EtwActivityIdControl(3u, &v121);
          if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v109 = v120;
            v129 = 4LL;
            v128 = &v109;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v121,
              0LL,
              3u,
              &v127);
          }
        }
      }
      else
      {
        v119 = 0LL;
      }
      while ( 1 )
      {
        v37 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v37 )
          v3 = *v37;
        v40 = (PVOID)PsGetCurrentProcess(v39, v38);
        if ( v40 )
        {
          if ( v40 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v42, v41) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v3 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v119 )
        {
          v42 = *(unsigned int *)(v119 + 24);
          if ( *(_DWORD *)(v119 + 48) || (int)v42 > 0 )
          {
            *(_DWORD *)(v119 + 44) = 1;
            *(GUID *)(v119 + 28) = v121;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v110 = v120;
                v132 = 4LL;
                v131 = &v110;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &v121,
                  0LL,
                  3u,
                  &v130);
                v84 = dword_1C024C960;
              }
              if ( v84 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v111 = v120;
                v135 = 4LL;
                v134 = &v111;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &v121,
                  0LL,
                  3u,
                  &v133);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v42);
      gptiCurrent = v3;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess(v43) )
      {
        v45 = PsGetCurrentProcess(v1, v44);
        v46 = PsGetProcessSessionIdEx(v45);
        v48 = PsGetCurrentThreadProcess(v47);
        if ( v46 != (unsigned int)PsGetProcessSessionIdEx(v48) )
          goto LABEL_35;
      }
      v49 = KeGetCurrentThread();
      v50 = 0LL;
      if ( !IsThreadCrossSessionAttached(v1) )
      {
        v52 = (__int64 *)PsGetThreadWin32Thread(v49);
        if ( v52 )
          v50 = *v52;
      }
      v53 = PsGetCurrentProcessWin32Process(v51);
      if ( !v50 )
        goto LABEL_35;
      if ( !v53 )
        goto LABEL_35;
      if ( (*(_DWORD *)(v50 + 480) & 0x1000000) == 0 )
        goto LABEL_35;
      v1 = *(unsigned int *)(v50 + 1216);
      if ( (v1 & 0x80u) != 0LL || (*(_DWORD *)(v53 + 12) & 0x8000) == 0 )
        goto LABEL_35;
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v54);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v55);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v57 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v85 = *v57;
        v57[2] = 0LL;
        if ( !*(_DWORD *)(v85 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v56);
        v87 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v87 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v86);
        ExReleaseResourceAndLeaveCriticalRegion(*v87);
        HMUnlockObject(*v57);
        tagDomLock::LockExclusive(v87);
      }
LABEL_34:
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      goto LABEL_35;
    case 0xAu:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4 - 10);
      gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 && qword_1C02583D8 )
        qword_1C02583D8();
      break;
    case 0xBu:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4 - 11);
      v81 = 0;
      if ( (int)IsPowerOnGdiSupported() >= 0 )
      {
        if ( qword_1C02583E8 )
          qword_1C02583E8(v126, 0LL, 2LL);
        v81 = 1;
      }
      if ( (gPowerState & 0x20) != 0 )
        PowerOnMonitor(MonitorRequestReasonDP, (__int64)v126, 2u);
      if ( v81 && qword_1C02583F8 )
        qword_1C02583F8(v126);
      goto LABEL_35;
    default:
      v1 = v4 - 12;
      if ( v4 == 12 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
        PowerOffMonitor(MonitorRequestReasonSxTransition);
      }
      else if ( v4 == 13 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
        if ( gSessionId != gServiceSessionId )
        {
          EtwTraceWinlogonSleepStartEvent(1LL);
          v8 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v8) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v8 + 2) = 3;
          *((_DWORD *)&gPowerStateLog + 2 * v8 + 3) = 263;
          LOBYTE(v8) = 1;
          v9 = xxxSendWinlogonPowerMessage(v8, 263LL, &dword_1C02530E8);
          v10 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v10) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v10 + 2) = 4;
          *((_DWORD *)&gPowerStateLog + 2 * v10 + 3) = v9;
          EtwTraceWinlogonSleepStartEvent(0LL);
          goto LABEL_35;
        }
      }
      break;
  }
  v6 = v104;
LABEL_37:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1, &StopPowerStateCalloutWorker, v2, v4, v6);
  return (unsigned int)v6;
}
