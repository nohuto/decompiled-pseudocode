/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C78B0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0070190 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0066200 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     PowerOnMonitor @ 0x1C0070E70 (PowerOnMonitor.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0072028 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     PowerResumeSuspendEvent @ 0x1C00C85E0 (PowerResumeSuspendEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C8884 (IsxxxSendMessageBSMSupported.c)
 *     RIMSetSystemInputMode @ 0x1C00C88B0 (RIMSetSystemInputMode.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00C8900 (EtwTraceWinlogonSleepStartEvent.c)
 *     PowerOffMonitor @ 0x1C00C8920 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C8E40 (xxxSendWinlogonPowerMessage.c)
 *     IsPowerOnGdiSupported @ 0x1C00C916C (IsPowerOnGdiSupported.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00C91A0 (EtwTraceWinlogonSleepEndEvent.c)
 *     IsPowerOffGdiSupported @ 0x1C00C97F8 (IsPowerOffGdiSupported.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C012810C (McTemplateK0dq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rcx
  NTSTATUS v46; // r8d
  __int64 v47; // rcx
  LARGE_INTEGER *v48; // rbx
  struct tagTHREADINFO **v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PVOID v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // ebx
  __int64 v59; // rax
  struct _KTHREAD *v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // r14
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // r9
  __int64 v83; // rcx
  NTSTATUS v84; // r8d
  __int64 v85; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  PVOID CurrentProcess; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v99; // rbx
  __int64 v100; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v103; // rdx
  __int64 v104; // r9
  __int64 v105; // rax
  int v106; // esi
  __int64 v107; // rdx
  __int64 v108; // rax
  unsigned int v109; // r8d
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  PERESOURCE *v113; // rdi
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rax
  unsigned int v119; // r8d
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  PERESOURCE *v123; // rdi
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // rcx
  int v128; // eax
  __int64 v129; // rdx
  int v130; // r8d
  __int64 v131; // rdx
  signed __int32 v132[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v134; // [rsp+30h] [rbp-D8h]
  int v135; // [rsp+58h] [rbp-B0h]
  int v136; // [rsp+5Ch] [rbp-ACh]
  bool SystemInformation; // [rsp+60h] [rbp-A8h]
  __int128 SystemInformation_8; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v139; // [rsp+78h] [rbp-90h]
  int v140; // [rsp+88h] [rbp-80h] BYREF
  int v141; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v142; // [rsp+90h] [rbp-78h] BYREF
  int v143; // [rsp+94h] [rbp-74h] BYREF
  int v144; // [rsp+98h] [rbp-70h] BYREF
  int v145; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v146[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v147; // [rsp+A8h] [rbp-60h]
  _DWORD v148[10]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 InputBuffer; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v150; // [rsp+E8h] [rbp-20h]
  unsigned __int8 v151; // [rsp+F0h] [rbp-18h]
  GUID v152; // [rsp+F4h] [rbp-14h] BYREF
  _OWORD v153[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v154; // [rsp+128h] [rbp+20h]
  unsigned __int8 v155; // [rsp+130h] [rbp+28h]
  GUID v156; // [rsp+134h] [rbp+2Ch] BYREF
  _QWORD v157[10]; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v158; // [rsp+198h] [rbp+90h] BYREF
  int *v159; // [rsp+1B8h] [rbp+B0h]
  __int64 v160; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v161; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v162; // [rsp+1E8h] [rbp+E0h]
  __int64 v163; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v164; // [rsp+1F8h] [rbp+F0h] BYREF
  int *v165; // [rsp+218h] [rbp+110h]
  __int64 v166; // [rsp+220h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v167; // [rsp+228h] [rbp+120h] BYREF
  int *v168; // [rsp+248h] [rbp+140h]
  __int64 v169; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v170; // [rsp+258h] [rbp+150h] BYREF
  int *v171; // [rsp+278h] [rbp+170h]
  __int64 v172; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v173; // [rsp+288h] [rbp+180h] BYREF
  int *v174; // [rsp+2A8h] [rbp+1A0h]
  __int64 v175; // [rsp+2B0h] [rbp+1A8h]

  memset(v157, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v157[1]);
  v4 = 0LL;
  v5 = dword_1C024B0F8;
  v157[8] = MEMORY[0xFFFFF78000000014];
  v136 = dword_1C024B0F8;
  LODWORD(v157[4]) = dword_1C024B0F8;
  LODWORD(v157[3]) = 17;
  LOBYTE(v157[6]) = -1;
  InputBuffer = 0LL;
  v147 = 0LL;
  SystemInformation_8 = 0LL;
  v139 = 0LL;
  memset(v153, 0, sizeof(v153));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1, &StartPowerStateCalloutWorker, v2, (unsigned int)dword_1C024B0F8, 0);
  v6 = -1073741637;
  if ( qword_1C0250440 )
    v7 = qword_1C0250440();
  else
    v7 = -1073741637;
  if ( v7 < 0 )
  {
    v105 = MEMORY[0xFFFFF78000000008];
    v1 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 2) = 5;
LABEL_157:
    *((_QWORD *)&gPowerStateLog + v1) = v105;
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 3) = v7;
    goto LABEL_37;
  }
  if ( qword_1C0250448 )
    v7 = qword_1C0250448();
  else
    v7 = -1073741637;
  v135 = v7;
  if ( v7 < 0 )
  {
    v105 = MEMORY[0xFFFFF78000000008];
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
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 92);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    goto LABEL_37;
  }
  if ( v5 == 2 )
  {
    dword_1C024B1A0 = 1;
    _InterlockedOr(v132, 0);
    if ( !gSystemIsAoAc )
      RIMSetSystemInputMode(2LL);
    if ( !gbTtmEnabled )
      PowerOffMonitor(dword_1C024B0FC);
    v36 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C024B1C0 = v36;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      v37 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
      *((_QWORD *)&gPowerStateLog + v37) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)&gPowerStateLog + 2 * v37 + 2) = 3;
      *((_DWORD *)&gPowerStateLog + 2 * v37 + 3) = 1;
      LOBYTE(v37) = 1;
      v38 = xxxSendWinlogonPowerMessage(v37, 262LL, &dword_1C024B0E8);
      v39 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
      *((_QWORD *)&gPowerStateLog + v39) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)&gPowerStateLog + 2 * v39 + 2) = 4;
      *((_DWORD *)&gPowerStateLog + 2 * v39 + 3) = v38;
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v0) = 1;
    LOBYTE(v36) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v36, v0, 0LL) && (int)IsxxxSendMessageBSMSupported(v40) >= 0 )
    {
      dword_1C024B0C0 = 16;
      dword_1C024B0C4 = 40;
      if ( qword_1C02503F8 )
      {
        LODWORD(v134) = 1;
        *(_QWORD *)OutputBufferLength = &dword_1C024B0C0;
        v41 = qword_1C02503F8(0LL, 536LL, 4LL);
      }
      else
      {
        v41 = 0;
      }
      if ( !v41 )
      {
        v126 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v126) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v126 + 2) = 7;
        *((_DWORD *)&gPowerStateLog + 2 * v126 + 3) = 4;
      }
    }
    if ( dword_1C024B0EC == 5 )
    {
      if ( gProtocolType )
      {
LABEL_87:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        goto LABEL_35;
      }
      if ( (dword_1C024B0F0 & 8) != 0 )
      {
        if ( qword_1C024AA38 )
          v42 = qword_1C024AA38(0LL, 0LL);
        else
          v42 = 0;
        if ( v42 )
        {
          if ( grpdeskRitInput )
          {
            v130 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 0, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)v157);
            if ( v130 < 0 )
            {
              v131 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
              *((_QWORD *)&gPowerStateLog + v131) = MEMORY[0xFFFFF78000000008];
              *((_DWORD *)&gPowerStateLog + 2 * v131 + 2) = 9;
              *((_DWORD *)&gPowerStateLog + 2 * v131 + 3) = v130;
            }
          }
        }
      }
      else
      {
        EtwTraceWinlogonSleepEndEvent(1LL);
        v127 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v127) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v127 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v127 + 3) = 259;
        LOBYTE(v127) = 1;
        v128 = xxxSendWinlogonPowerMessage(v127, 259LL, &dword_1C024B0E8);
        v129 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v129) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v129 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v129 + 3) = v128;
        EtwTraceWinlogonSleepEndEvent(0LL);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 && qword_1C0250418 )
      qword_1C0250418();
    goto LABEL_87;
  }
  v8 = v5 - 3;
  switch ( v5 )
  {
    case 3u:
      v80 = dword_1C024B0E8;
      if ( dword_1C024B0EC == 5 )
        v80 = 3;
      LODWORD(InputBuffer) = v80;
      LOBYTE(v8) = 1;
      if ( (unsigned int)PowerResumeSuspendEvent(v8, 0LL, 0LL) )
        goto LABEL_36;
      *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
      WORD6(InputBuffer) = 256;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v81, v2, v82);
      v84 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v84 < 0 )
      {
        v117 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v117) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v117 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v117 + 3) = v84;
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v83);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v156 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v155 = 1;
        v118 = PsGetCurrentThreadWin32Thread(v85);
        v154 = v118;
        if ( v118 && (*(int *)(v118 + 24) > 0 || *(_DWORD *)(v154 + 48)) )
        {
          EtwActivityIdControl(3u, &v156);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v143 = v155;
            v169 = 4LL;
            v168 = &v143;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &v156,
              0LL,
              3u,
              &v167);
          }
        }
      }
      else
      {
        v154 = 0LL;
      }
      while ( 1 )
      {
        v87 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v87 )
          v4 = *v87;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v89, v88);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v92, v91) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v4 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v154
        && (*(_DWORD *)(v154 + 48) || *(int *)(v154 + 24) > 0) )
      {
        *(_DWORD *)(v154 + 44) = 1;
        *(GUID *)(v154 + 28) = v156;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v144 = v155;
            v172 = 4LL;
            v171 = &v144;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &v156,
              0LL,
              3u,
              &v170);
            v119 = dword_1C0244A70;
          }
          if ( v119 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v145 = v155;
            v175 = 4LL;
            v174 = &v145;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &v156,
              0LL,
              3u,
              &v173);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v4;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        v95 = PsGetCurrentProcess(v94, v93);
        ProcessSessionId = PsGetProcessSessionIdEx(v95);
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          goto LABEL_35;
      }
      CurrentThread = KeGetCurrentThread();
      v99 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v99 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v100);
      if ( !v99
        || !CurrentProcessWin32Process
        || (*(_DWORD *)(v99 + 488) & 0x1000000) == 0
        || (v1 = *(unsigned int *)(v99 + 1232), (v1 & 0x80u) != 0LL)
        || (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) == 0 )
      {
LABEL_35:
        v7 = v135;
LABEL_36:
        v5 = v136;
        goto LABEL_37;
      }
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v103, v2, v104);
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
        v120 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v120 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
        v123 = (PERESOURCE *)GetDomainLockRef(12LL, v21, v23, v24);
        if ( v123 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v122, v121, v124, v125);
        ExReleaseResourceAndLeaveCriticalRegion(*v123);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v123);
      }
      goto LABEL_34;
    case 5u:
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        6);
      if ( !gSystemIsAoAc )
        RIMSetSystemInputMode(0LL);
      SystemInformation = dword_1C024B0EC == 5;
      if ( gSessionId )
      {
        if ( dword_1C024B0EC == 5 )
        {
          memset((char *)v153 + 12, 0, 20);
          *(_QWORD *)&v139 = v153;
          *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
          *((_QWORD *)&v139 + 1) = 32LL;
          *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
          LODWORD(v153[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
          *(_QWORD *)&v153[0] = 0x100000004LL;
          DWORD2(v153[0]) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        v147 = 0LL;
        v146[0] = 0;
        v27 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        v146[1] = 1;
        *((_QWORD *)&gPowerStateLog + v27) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v27 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v27 + 3) = 262;
        LOBYTE(v27) = 1;
        v28 = xxxSendWinlogonPowerMessage(v27, 262LL, v146);
        v29 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v29) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v29 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v29 + 3) = v28;
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( SystemInformation )
        {
          v30 = v139;
          *(_DWORD *)(v139 + 16) |= 1u;
          *(_DWORD *)(v30 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported() >= 0 && qword_1C0250428 )
        qword_1C0250428(v157, 1LL, 5LL);
      dword_1C024B1A0 = 0;
      _InterlockedOr(v132, 0);
      if ( gbPendingSleepInput )
      {
        v31 = gPendingSleepInputReason;
        gPendingMonitorOnReason = gPendingSleepInputReason;
        gbPendingMonitorOn = 1;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        gbPendingSleepInput = 0;
        gPendingSleepInputReason = 0;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        PoSetUserPresent(v31);
      }
      else
      {
        dword_1C024B1A4 = 1;
      }
      if ( gSqmIsOptedIn )
        _WinSqmDWORDEvent(
          &SQM_INCREMENT_DWORD,
          0LL,
          4013,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C024B1C0)
        / 0x3E8);
      *(_QWORD *)&v153[0] = 0x100000004LL;
      memset((char *)v153 + 12, 0, 20);
      *(_QWORD *)&v139 = v153;
      *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
      *((_QWORD *)&v139 + 1) = 32LL;
      LODWORD(v153[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
      *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
      DWORD2(v153[0]) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      LOBYTE(v32) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v32, 0LL) && (int)IsxxxSendMessageBSMSupported(v33) >= 0 )
      {
        v148[0] = 16;
        v148[1] = 0x20000000;
        if ( qword_1C02503F8 )
        {
          LODWORD(v134) = 1;
          *(_QWORD *)OutputBufferLength = v148;
          v34 = qword_1C02503F8(0LL, 536LL, 18LL);
        }
        else
        {
          v34 = 0;
        }
        if ( !v34 )
        {
          v116 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v116) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v116 + 2) = 7;
          *((_DWORD *)&gPowerStateLog + 2 * v116 + 3) = 18;
        }
      }
      v35 = v139;
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(v139 + 16) |= 1u;
      *(_DWORD *)(v35 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      goto LABEL_35;
    case 6u:
      if ( qword_1C0250380 )
        v6 = qword_1C0250380();
      if ( v6 >= 0 && qword_1C0250388 )
        qword_1C0250388();
      if ( (unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
        goto LABEL_37;
      *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
      WORD6(InputBuffer) = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v43, v2, v44);
      v46 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v46 < 0 )
      {
        v107 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v107) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v107 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v107 + 3) = v46;
      }
      v48 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v45);
      if ( v48 )
        v48[1] = KeQueryPerformanceCounter(0LL);
      v152 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v151 = 1;
        v108 = PsGetCurrentThreadWin32Thread(v47);
        v150 = v108;
        if ( v108 && (*(int *)(v108 + 24) > 0 || *(_DWORD *)(v150 + 48)) )
        {
          EtwActivityIdControl(3u, &v152);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v140 = v151;
            v160 = 4LL;
            v159 = &v140;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &v152,
              0LL,
              3u,
              &v158);
          }
        }
      }
      else
      {
        v150 = 0LL;
      }
      while ( 1 )
      {
        v49 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v49 )
          v4 = *v49;
        v52 = (PVOID)PsGetCurrentProcess(v51, v50);
        if ( v52 )
        {
          if ( v52 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v54, v53) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v4 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v150
        && (*(_DWORD *)(v150 + 48) || *(int *)(v150 + 24) > 0) )
      {
        *(_DWORD *)(v150 + 44) = 1;
        *(GUID *)(v150 + 28) = v152;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v141 = v151;
            v163 = 4LL;
            v162 = &v141;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &v152,
              0LL,
              3u,
              &v161);
            v109 = dword_1C0244A70;
          }
          if ( v109 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v142 = v151;
            v166 = 4LL;
            v165 = &v142;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &v152,
              0LL,
              3u,
              &v164);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v4;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        v57 = PsGetCurrentProcess(v56, v55);
        v58 = PsGetProcessSessionIdEx(v57);
        v59 = PsGetCurrentThreadProcess();
        if ( v58 != (unsigned int)PsGetProcessSessionIdEx(v59) )
          goto LABEL_35;
      }
      v60 = KeGetCurrentThread();
      v61 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v63 = (__int64 *)PsGetThreadWin32Thread(v60);
        if ( v63 )
          v61 = *v63;
      }
      v64 = PsGetCurrentProcessWin32Process(v62);
      if ( !v61 )
        goto LABEL_35;
      if ( !v64 )
        goto LABEL_35;
      if ( (*(_DWORD *)(v61 + 488) & 0x1000000) == 0 )
        goto LABEL_35;
      v1 = *(unsigned int *)(v61 + 1232);
      if ( (v1 & 0x80u) != 0LL || (*(_DWORD *)(v64 + 12) & 0x8000) == 0 )
        goto LABEL_35;
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v65, v2, v66);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v67, v69, v70);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v72, v71, v73, v74);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v79 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v110 = *v79;
        v79[2] = 0LL;
        if ( !*(_DWORD *)(v110 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v76, v75, v77, v78);
        v113 = (PERESOURCE *)GetDomainLockRef(12LL, v75, v77, v78);
        if ( v113 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v112, v111, v114, v115);
        ExReleaseResourceAndLeaveCriticalRegion(*v113);
        HMUnlockObject(*v79);
        tagDomLock::LockExclusive(v113);
      }
LABEL_34:
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      goto LABEL_35;
    case 0xAu:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5 - 10, v0, v2, v3);
      gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 && qword_1C0250418 )
        qword_1C0250418();
      break;
    case 0xBu:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5 - 11, v0, v2, v3);
      v106 = 0;
      if ( (int)IsPowerOnGdiSupported() >= 0 )
      {
        if ( qword_1C0250428 )
          qword_1C0250428(v157, 0LL, 2LL);
        v106 = 1;
      }
      if ( (gPowerState & 0x20) != 0 )
        PowerOnMonitor(MonitorRequestReasonDP, (__int64)v157, 2u);
      if ( v106 && qword_1C0250438 )
        qword_1C0250438(v157);
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
          v10 = xxxSendWinlogonPowerMessage(v9, 263LL, &dword_1C024B0E8);
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
  v7 = v135;
LABEL_37:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1, &StopPowerStateCalloutWorker, v2, v5, v7);
  return (unsigned int)v7;
}
