/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0064450 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0031C90 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PostPlaySoundMessage @ 0x1C00533E8 (PostPlaySoundMessage.c)
 *     EtwTraceIdleActionExpiration @ 0x1C005DB70 (EtwTraceIdleActionExpiration.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C005FC40 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     PostWinlogonMessage @ 0x1C0060510 (PostWinlogonMessage.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00608E8 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00630F0 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00633E8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     PowerOnMonitor @ 0x1C00636E0 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0063A00 (PowerUnDimMonitor.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0063DF4 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C0063E40 (IsSetTimerCoalescingToleranceSupported.c)
 *     PowerInputEvent @ 0x1C00642E0 (PowerInputEvent.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0064360 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00643C0 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C0064F20 (EtwTraceStopPowerEventCalloutWorker.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     IsPowerOffGdiSupported @ 0x1C00C8848 (IsPowerOffGdiSupported.c)
 *     IsPowerOnGdiSupported @ 0x1C00C8EE0 (IsPowerOnGdiSupported.c)
 *     PowerResumeSuspendEvent @ 0x1C00C9C30 (PowerResumeSuspendEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C9ED4 (IsxxxSendMessageBSMSupported.c)
 *     PowerOffMonitor @ 0x1C00C9F70 (PowerOffMonitor.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011F470 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011F550 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C011F610 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C011FD4C (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C0120DB0 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C0120FE0 (PowerIsDisplayRequired.c)
 *     McTemplateK0dxq_EtwWriteTransfer @ 0x1C012A4D0 (McTemplateK0dxq_EtwWriteTransfer.c)
 *     IsSetForegroundPrioritySupported @ 0x1C01F80A8 (IsSetForegroundPrioritySupported.c)
 *     IsStartScreenSaverSupported @ 0x1C01F80D4 (IsStartScreenSaverSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // r15
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  unsigned __int8 v16; // cl
  unsigned int v17; // ebx
  __int64 v18; // rcx
  void (__fastcall *v20)(_QWORD, __int64, __int64, _QWORD, int *, int); // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  LARGE_INTEGER *v25; // rbx
  struct tagTHREADINFO *v26; // rbx
  struct tagTHREADINFO **v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // ebx
  __int64 v38; // rax
  struct _KTHREAD *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rax
  NTSTATUS v44; // eax
  __int64 v45; // rcx
  LARGE_INTEGER *v46; // rbx
  struct tagTHREADINFO *v47; // rbx
  struct tagTHREADINFO **v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PVOID v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // ebx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  struct _KTHREAD *v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // rax
  void (__fastcall *v67)(__int64); // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  PERESOURCE *v71; // rdi
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  struct tagKERNELHANDLETABLEENTRY *v82; // r14
  __int64 v83; // rdx
  __int64 v84; // rcx
  PERESOURCE *v85; // rbx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  struct tagKERNELHANDLETABLEENTRY *v96; // r14
  __int64 GlobalTickCount; // rbx
  int v98; // eax
  __int64 v99; // rcx
  int v100; // eax
  __int64 v102; // rcx
  __int64 v103; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v105; // rax
  __int64 v106; // r8
  __int64 v107; // r9
  struct tagTHREADINFO *v108; // rbx
  struct tagTHREADINFO **v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  PVOID CurrentProcess; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r9
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v124; // rbx
  __int64 v125; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  PERESOURCE *v144; // rdi
  __int64 v145; // r8
  __int64 v146; // r9
  struct tagKERNELHANDLETABLEENTRY *v147; // r14
  __int64 v148; // rax
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  PERESOURCE *v156; // rbx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rax
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  PERESOURCE *v167; // rdi
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rcx
  __int64 v171; // rcx
  int v172; // ecx
  __int64 InputBuffer; // [rsp+48h] [rbp-B8h] BYREF
  int v174; // [rsp+50h] [rbp-B0h] BYREF
  int v175; // [rsp+54h] [rbp-ACh] BYREF
  int v176; // [rsp+58h] [rbp-A8h] BYREF
  int v177; // [rsp+5Ch] [rbp-A4h] BYREF
  int v178; // [rsp+60h] [rbp-A0h] BYREF
  int v179; // [rsp+64h] [rbp-9Ch] BYREF
  int v180; // [rsp+68h] [rbp-98h] BYREF
  int v181; // [rsp+6Ch] [rbp-94h] BYREF
  int v182; // [rsp+70h] [rbp-90h] BYREF
  BOOL v183; // [rsp+74h] [rbp-8Ch]
  unsigned int v184; // [rsp+78h] [rbp-88h]
  __int64 v185; // [rsp+80h] [rbp-80h]
  unsigned __int64 OutputBuffer; // [rsp+88h] [rbp-78h] BYREF
  int v187; // [rsp+90h] [rbp-70h] BYREF
  int v188; // [rsp+94h] [rbp-6Ch]
  __int128 v189; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v190; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v191; // [rsp+D0h] [rbp-30h]
  GUID v192; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v193; // [rsp+E8h] [rbp-18h]
  unsigned __int8 v194; // [rsp+F0h] [rbp-10h]
  GUID v195; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v196; // [rsp+108h] [rbp+8h]
  unsigned __int8 v197; // [rsp+110h] [rbp+10h]
  GUID v198; // [rsp+114h] [rbp+14h] BYREF
  _QWORD v199[10]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v200; // [rsp+180h] [rbp+80h] BYREF
  int *v201; // [rsp+1A0h] [rbp+A0h]
  __int64 v202; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v203; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v204; // [rsp+1D0h] [rbp+D0h]
  __int64 v205; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v206; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v207; // [rsp+200h] [rbp+100h]
  __int64 v208; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v209; // [rsp+210h] [rbp+110h] BYREF
  int *v210; // [rsp+230h] [rbp+130h]
  __int64 v211; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v212; // [rsp+240h] [rbp+140h] BYREF
  int *v213; // [rsp+260h] [rbp+160h]
  __int64 v214; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v215; // [rsp+270h] [rbp+170h] BYREF
  int *v216; // [rsp+290h] [rbp+190h]
  __int64 v217; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v218; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v219; // [rsp+2C0h] [rbp+1C0h]
  __int64 v220; // [rsp+2C8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v221; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v222; // [rsp+2F0h] [rbp+1F0h]
  __int64 v223; // [rsp+2F8h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v224; // [rsp+300h] [rbp+200h] BYREF
  int *v225; // [rsp+320h] [rbp+220h]
  __int64 v226; // [rsp+328h] [rbp+228h]

  memset(v199, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v199[1]);
  v6 = 0LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *(_DWORD *)a1;
  v199[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v199[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v199[3]) = 16;
  LOBYTE(v199[6]) = -1;
  v184 = v8;
  v185 = v7;
  OutputBuffer = 0LL;
  v189 = 0LL;
  InputBuffer = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dxq_EtwWriteTransfer(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v8, v7, 0);
  if ( !gbPowerCalloutsReady )
  {
    v17 = -1073741823;
    v18 = (unsigned int)v8;
    goto LABEL_33;
  }
  if ( v8 <= 8 )
  {
    if ( v8 != 8 )
    {
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v17 = PostWinlogonMessage(256LL, v7);
          if ( !v17 )
            PostPlaySoundMessage();
          goto LABEL_32;
        }
        v9 = (unsigned int)(v8 - 2);
        if ( v8 == 2 )
        {
          if ( !gbNonServiceSession )
          {
            *(_QWORD *)((char *)&v189 + 4) = 10LL;
            WORD6(v189) = 0;
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v189, 0x10u, 0LL, 0);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v102);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            v192 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v191 = 1;
              v105 = PsGetCurrentThreadWin32Thread(v103);
              v190 = v105;
              if ( v105 && (*(int *)(v105 + 24) > 0 || *(_DWORD *)(v190 + 48)) )
              {
                EtwActivityIdControl(3u, &v192);
                if ( (unsigned int)dword_1C0246A70 > 6 )
                {
                  if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v106, v107) )
                  {
                    v174 = v191;
                    v202 = 4LL;
                    v201 = &v174;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C0246A70,
                      (unsigned __int8 *)dword_1C0213E87,
                      &v192,
                      0LL,
                      3u,
                      &v200);
                  }
                }
              }
            }
            else
            {
              v190 = 0LL;
            }
            v108 = 0LL;
            while ( 1 )
            {
              v109 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v109 )
                v108 = *v109;
              CurrentProcess = (PVOID)PsGetCurrentProcess(v111, v110);
              if ( CurrentProcess )
              {
                if ( CurrentProcess == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v114, v113) == gpepCSRSS && v108 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v108 == gptiRit )
              {
                break;
              }
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
              && v190
              && (*(_DWORD *)(v190 + 48) || *(int *)(v190 + 24) > 0) )
            {
              *(_DWORD *)(v190 + 44) = 1;
              *(GUID *)(v190 + 28) = v192;
              if ( (unsigned int)dword_1C0246A70 > 6 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v115) )
                {
                  v175 = v191;
                  v205 = 4LL;
                  v204 = &v175;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E30,
                    &v192,
                    0LL,
                    3u,
                    &v203);
                  v116 = (unsigned int)dword_1C0246A70;
                }
                if ( (unsigned int)v116 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v116, v117) )
                {
                  v176 = v191;
                  v208 = 4LL;
                  v207 = &v176;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E5D,
                    &v192,
                    0LL,
                    3u,
                    &v206);
                }
              }
            }
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v108;
            gbValidateHandleForIL = 1;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (v120 = PsGetCurrentProcess(v119, v118),
                  ProcessSessionId = PsGetProcessSessionIdEx(v120),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              CurrentThread = KeGetCurrentThread();
              v124 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached() )
              {
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                  v124 = *ThreadWin32Thread;
              }
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v125);
              v9 = CurrentProcessWin32Process;
              if ( v124
                && CurrentProcessWin32Process
                && (*(_DWORD *)(v124 + 480) & 0x1000000) != 0
                && (*(_DWORD *)(v124 + 1224) & 0x80u) == 0
                && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
              {
                DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v129, v128, v131, v132);
                if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v134, v133, v135, v136);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
                while ( 1 )
                {
                  v147 = gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                  v141 = *(_QWORD *)v147;
                  *((_QWORD *)v147 + 2) = 0LL;
                  if ( !*(_DWORD *)(v141 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v138, v137, v139, v140);
                  v144 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v144 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v143, v142, v145, v146);
                  ExReleaseResourceAndLeaveCriticalRegion(*v144);
                  HMUnlockObject(*(_QWORD *)v147);
                  tagDomLock::LockExclusive((tagDomLock *)v144);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
              }
            }
          }
          v187 = 16;
          v188 = 16;
          if ( (int)IsxxxSendMessageBSMSupported(v9) < 0 )
            goto LABEL_31;
          v20 = (void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int *, int))qword_1C02523F8;
          if ( !qword_1C02523F8 )
            goto LABEL_31;
          v22 = 536LL;
          v21 = 10LL;
        }
        else
        {
          if ( v8 != 3 )
          {
            v10 = (unsigned int)(v8 - 4);
            if ( v8 == 4 )
              goto LABEL_11;
            if ( v8 == 5 )
            {
              if ( gbTtmEnabled )
                MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v8 - 5), v2, v4, v5);
              if ( gfSwitchInProgress )
                goto LABEL_31;
              HIDWORD(InputBuffer) = v7;
              PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v7);
              if ( !gProtocolType
                && byte_1C024C6F8
                && !dword_1C024D18C
                && (int)IsPowerOffGdiSupported() >= 0
                && qword_1C0252418 )
              {
                qword_1C0252418();
              }
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                goto LABEL_31;
              if ( HIDWORD(InputBuffer) == 17 )
                goto LABEL_31;
              v67 = (void (__fastcall *)(__int64))qword_1C0252408;
              if ( !qword_1C0252408 )
                goto LABEL_31;
              v68 = 2LL;
              goto LABEL_93;
            }
            if ( v8 != 6 )
            {
              if ( v8 == 7 )
              {
                if ( gfSwitchInProgress || dword_1C024D190 || !gPowerTransitionsState )
                  goto LABEL_31;
                PowerDimMonitor();
                if ( !gProtocolType )
                  UpdateDisplayState(2, MonitorRequestReasonMax, 1);
                if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                  goto LABEL_31;
                v67 = (void (__fastcall *)(__int64))qword_1C0252408;
                if ( !qword_1C0252408 )
                  goto LABEL_31;
                v68 = 1LL;
                goto LABEL_93;
              }
LABEL_297:
              v17 = -1073741822;
              goto LABEL_32;
            }
            if ( CInputGlobals::UpdateGlobalTickCount((__int64)gpInputGlobals, 2) )
              EtwTraceIdleActionExpiration(1, giScreenSaveTimeOutMs);
            if ( !gPowerTransitionsState )
            {
              if ( (*(_DWORD *)gpsi & 0x200) == 0 )
                goto LABEL_31;
              GlobalTickCount = CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 1);
              if ( GlobalTickCount == CInputGlobals::GetLastInputTime(gpInputGlobals) )
                goto LABEL_31;
            }
            if ( (unsigned int)PowerIsDisplayRequired() && !gbBlockSendInputResets )
              goto LABEL_31;
            if ( gppiScreenSaver )
            {
              v98 = *(_DWORD *)(gppiScreenSaver + 12);
              if ( (v98 & 0x400000) == 0 )
              {
                *(_DWORD *)(gppiScreenSaver + 12) = v98 | 0x400000;
                if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                {
                  v99 = *(_QWORD *)(gppiScreenSaver + 328);
                  if ( v99 )
                  {
                    if ( qword_1C0251F88 )
                      qword_1C0251F88(v99, 1LL);
                  }
                }
              }
              goto LABEL_31;
            }
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 120) )
            {
              v100 = qword_1C0252450 ? qword_1C0252450() : -1073741637;
              if ( v100 >= 0 && !(qword_1C0252458 ? qword_1C0252458(*(_QWORD *)(gpqForeground + 120)) : 0) )
              {
                if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported() >= 0 && qword_1C0252468 )
                  qword_1C0252468(1LL);
                if ( qword_1C0252238 )
                {
                  LOBYTE(v6) = (*(_DWORD *)gpsi & 0x200) != 0;
                  qword_1C0252238(*(_QWORD *)(gpqForeground + 120), 274LL, 61760LL, v6);
                  v17 = 0;
                  goto LABEL_32;
                }
                goto LABEL_31;
              }
            }
            if ( (int)IsStartScreenSaverSupported() < 0 )
              goto LABEL_31;
            v67 = (void (__fastcall *)(__int64))qword_1C0252468;
LABEL_91:
            if ( !v67 )
              goto LABEL_31;
            v68 = 0LL;
LABEL_93:
            v67(v68);
            goto LABEL_31;
          }
          v187 = 16;
          v188 = 16;
          if ( (int)IsxxxSendMessageBSMSupported((unsigned int)(v8 - 3)) < 0 )
            goto LABEL_31;
          v20 = (void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int *, int))qword_1C02523F8;
          if ( !qword_1C02523F8 )
            goto LABEL_31;
          v21 = 0LL;
          v22 = 30LL;
        }
        v20(0LL, v22, v21, 0LL, &v187, 1);
        goto LABEL_31;
      }
      if ( !gProtocolType && gPowerAdaptiveState )
      {
        gPowerAdaptiveState = 0;
        PowerInputEvent(1u);
      }
      if ( !gbNonServiceSession )
      {
        LOBYTE(v4) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
        {
          *(_QWORD *)((char *)&v189 + 4) = 7LL;
          WORD6(v189) = 0;
          if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
          UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
          ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v189, 0x10u, 0LL, 0);
          v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v23);
          if ( v25 )
            v25[1] = KeQueryPerformanceCounter(0LL);
          v195 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v194 = 1;
            v148 = PsGetCurrentThreadWin32Thread(v24);
            v193 = v148;
            if ( v148 && (*(int *)(v148 + 24) > 0 || *(_DWORD *)(v193 + 48)) )
            {
              EtwActivityIdControl(3u, &v195);
              if ( (unsigned int)dword_1C0246A70 > 6 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v149, v150) )
                {
                  v177 = v194;
                  v211 = 4LL;
                  v210 = &v177;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E87,
                    &v195,
                    0LL,
                    3u,
                    &v209);
                }
              }
            }
          }
          else
          {
            v193 = 0LL;
          }
          v26 = 0LL;
          while ( 1 )
          {
            v27 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v27 )
              v26 = *v27;
            v30 = (PVOID)PsGetCurrentProcess(v29, v28);
            if ( v30 )
            {
              if ( v30 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v32, v31) == gpepCSRSS && v26 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v26 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v193
            && (*(_DWORD *)(v193 + 48) || *(int *)(v193 + 24) > 0) )
          {
            *(_DWORD *)(v193 + 44) = 1;
            *(GUID *)(v193 + 28) = v195;
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v33) )
              {
                v178 = v194;
                v214 = 4LL;
                v213 = &v178;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E30,
                  &v195,
                  0LL,
                  3u,
                  &v212);
                v151 = (unsigned int)dword_1C0246A70;
              }
              if ( (unsigned int)v151 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v151, v152) )
              {
                v179 = v194;
                v217 = 4LL;
                v216 = &v179;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E5D,
                  &v195,
                  0LL,
                  3u,
                  &v215);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v26;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v36 = PsGetCurrentProcess(v35, v34),
                v37 = PsGetProcessSessionIdEx(v36),
                v38 = PsGetCurrentThreadProcess(),
                v37 == (unsigned int)PsGetProcessSessionIdEx(v38)) )
          {
            v39 = KeGetCurrentThread();
            v40 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached() )
            {
              v42 = (__int64 *)PsGetThreadWin32Thread(v39);
              if ( v42 )
                v40 = *v42;
            }
            v43 = PsGetCurrentProcessWin32Process(v41);
            if ( v40
              && v43
              && (*(_DWORD *)(v40 + 480) & 0x1000000) != 0
              && (*(_DWORD *)(v40 + 1224) & 0x80u) == 0
              && (*(_DWORD *)(v43 + 12) & 0x8000) != 0 )
            {
              v71 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v71 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, v69, v72, v73);
              if ( ExIsResourceAcquiredExclusiveLite(*v71) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v75, v74, v76, v77);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v71);
              v82 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v82 + 2);
                  v153 = *(_QWORD *)v82;
                  *((_QWORD *)v82 + 2) = 0LL;
                  if ( !*(_DWORD *)(v153 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v79, v78, v80, v81);
                  v156 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v156 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v155, v154, v157, v158);
                  ExReleaseResourceAndLeaveCriticalRegion(*v156);
                  HMUnlockObject(*(_QWORD *)v82);
                  tagDomLock::LockExclusive((tagDomLock *)v156);
                  v82 = gpducstulHead;
                }
                while ( gpducstulHead );
                v7 = v185;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v71);
            }
          }
        }
      }
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      v44 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
      v183 = v44 == 0;
      v46 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v44 == 0);
      if ( v46 )
        v46[1] = KeQueryPerformanceCounter(0LL);
      v198 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v197 = 1;
        v159 = PsGetCurrentThreadWin32Thread(v45);
        v196 = v159;
        if ( v159 && (*(int *)(v159 + 24) > 0 || *(_DWORD *)(v196 + 48)) )
        {
          EtwActivityIdControl(3u, &v198);
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v160, v161) )
            {
              v180 = v197;
              v220 = 4LL;
              v219 = &v180;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E87,
                &v198,
                0LL,
                3u,
                &v218);
            }
          }
        }
      }
      else
      {
        v196 = 0LL;
      }
      v47 = 0LL;
      while ( 1 )
      {
        v48 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v48 )
          v47 = *v48;
        v51 = (PVOID)PsGetCurrentProcess(v50, v49);
        if ( v51 )
        {
          if ( v51 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v53, v52) == gpepCSRSS && v47 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v47 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v196
        && (*(_DWORD *)(v196 + 48) || *(int *)(v196 + 24) > 0) )
      {
        *(_DWORD *)(v196 + 44) = 1;
        *(GUID *)(v196 + 28) = v198;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v54) )
          {
            v181 = v197;
            v223 = 4LL;
            v222 = &v181;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &v198,
              0LL,
              3u,
              &v221);
            v162 = (unsigned int)dword_1C0246A70;
          }
          if ( (unsigned int)v162 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v162, v163) )
          {
            v182 = v197;
            v226 = 4LL;
            v225 = &v182;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &v198,
              0LL,
              3u,
              &v224);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v47;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v57 = PsGetCurrentProcess(v56, v55),
            v58 = PsGetProcessSessionIdEx(v57),
            v59 = PsGetCurrentThreadProcess(),
            v58 == (unsigned int)PsGetProcessSessionIdEx(v59)) )
      {
        v62 = KeGetCurrentThread();
        v63 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          v65 = (__int64 *)PsGetThreadWin32Thread(v62);
          if ( v65 )
            v63 = *v65;
        }
        v66 = PsGetCurrentProcessWin32Process(v64);
        if ( v63
          && v66
          && (*(_DWORD *)(v63 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v63 + 1224) & 0x80u) == 0
          && (*(_DWORD *)(v66 + 12) & 0x8000) != 0 )
        {
          v85 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v85 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v84, v83, v86, v87);
          if ( ExIsResourceAcquiredExclusiveLite(*v85) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v89, v88, v90, v91);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v85);
          v96 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v96 + 2);
              v164 = *(_QWORD *)v96;
              *((_QWORD *)v96 + 2) = 0LL;
              if ( !*(_DWORD *)(v164 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v94, v95);
              v167 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v167 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v166, v165, v168, v169);
              ExReleaseResourceAndLeaveCriticalRegion(*v167);
              HMUnlockObject(*(_QWORD *)v96);
              tagDomLock::LockExclusive((tagDomLock *)v167);
              v96 = gpducstulHead;
            }
            while ( gpducstulHead );
            v7 = v185;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v85);
        }
      }
      if ( !v183 || gSessionCreationTime < OutputBuffer )
      {
        LOBYTE(v61) = 1;
        LOBYTE(v60) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v60, v61) )
        {
          v187 = 16;
          v188 = 0x20000000;
          if ( (int)((__int64 (*)(void))IsxxxSendMessageBSMSupported)() >= 0 )
          {
            if ( qword_1C02523F8 )
              qword_1C02523F8(0LL, 536LL, 7LL);
          }
        }
      }
      if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
        goto LABEL_31;
      v67 = (void (__fastcall *)(__int64))qword_1C0252408;
      goto LABEL_91;
    }
    v16 = 1;
LABEL_30:
    PowerInputEvent(v16);
    goto LABEL_31;
  }
  v16 = v8 - 9;
  switch ( v8 )
  {
    case 9:
      goto LABEL_30;
    case 10:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v8 - 10), v2, v4, v5);
      PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v7);
      goto LABEL_31;
    case 11:
      if ( !gfSwitchInProgress
        && !dword_1C024D190
        && dword_1C024D140 == (_DWORD)v7
        && (!gbTtmEnabled || gbBuiltinPanelOn) )
      {
        if ( (_DWORD)v7 == 1 )
        {
          PowerUnDimMonitor();
        }
        else if ( (_DWORD)v7 == 2 )
        {
          PowerDimMonitor();
        }
      }
      goto LABEL_31;
  }
  v10 = (unsigned int)(v8 - 12);
  if ( v8 == 12 )
  {
LABEL_11:
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v2, v4, v5);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    DisarmPowerWatchdog((__int64)gpRequestQueueWatchdog, 16);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    if ( v8 == 12 )
      UserSessionSwitchBlock_End();
    if ( dword_1C024D190 || gfSwitchInProgress )
      goto LABEL_23;
    HIDWORD(InputBuffer) = v7;
    LOBYTE(InputBuffer) = gProtocolType == 0;
    if ( HIDWORD(qword_1C024D19C) && !gProtocolType && (_DWORD)v7 != 22 )
    {
      if ( (_DWORD)v7 != 1 || !ShouldEscapeProximity() )
        goto LABEL_26;
      HIDWORD(qword_1C024D19C) = 0;
    }
    ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 32);
    gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
    DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 32);
    if ( gLastResumeResult )
    {
      if ( gLastResumeResult == 259 )
        goto LABEL_323;
      if ( gLastResumeResult != -1073741823 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    }
    if ( gLastResumeResult != 259 )
    {
      if ( gLastResumeResult != -1073741823 )
      {
        v15 = 0;
        if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
        {
          ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 48);
          if ( qword_1C0252428 )
            qword_1C0252428(v199, 0LL, 0LL);
          DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 48);
          v15 = 1;
        }
        PowerOnMonitor(SHIDWORD(InputBuffer), (__int64)v199, 0);
        if ( v15 && qword_1C0252438 )
          qword_1C0252438(v199);
LABEL_23:
        if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 && qword_1C0252408 )
          qword_1C0252408(0LL);
      }
LABEL_26:
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      if ( --gPowerOnRequestCount )
        ArmPowerWatchdog((__int64)gpRequestQueueWatchdog, 16);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      goto LABEL_31;
    }
LABEL_323:
    if ( !gWakeInProgress )
    {
      gWakeInProgressReason = HIDWORD(InputBuffer);
      gWakeInProgress = 1;
      UserSessionSwitchBlock_Start();
    }
    goto LABEL_26;
  }
  v170 = (unsigned int)(v8 - 13);
  if ( v8 == 13 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v170, v2, v4, v5);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v170, v2, v4, v5);
    PowerOnSession((unsigned int)v7);
    goto LABEL_310;
  }
  v171 = (unsigned int)(v8 - 14);
  if ( v8 == 14 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v171, v2, v4, v5);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v171, v2, v4, v5);
    PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v7, v2);
LABEL_310:
    UserSessionSwitchBlock_End();
    goto LABEL_31;
  }
  if ( v8 != 15 )
    goto LABEL_297;
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v171, v2, v4, v5);
  if ( gfSwitchInProgress || dword_1C024D190 )
    goto LABEL_31;
  if ( v7 == 1 )
  {
    gbBuiltinPanelOn = 1;
    PowerUnDimMonitor();
    v172 = 1;
  }
  else
  {
    if ( v7 != 2 )
    {
      if ( v7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v171, v2, v4, v5);
      gbBuiltinPanelOn = 0;
      goto LABEL_31;
    }
    gbBuiltinPanelOn = 1;
    PowerDimMonitor();
    v172 = 2;
  }
  UpdateDisplayState(v172, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1);
LABEL_31:
  v17 = 0;
LABEL_32:
  v18 = v184;
LABEL_33:
  EtwTraceStopPowerEventCalloutWorker(v18, v7, v17);
  return v17;
}
