/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C005BA70 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C001D960 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PostPlaySoundMessage @ 0x1C00456DC (PostPlaySoundMessage.c)
 *     EtwTraceIdleActionExpiration @ 0x1C0050110 (EtwTraceIdleActionExpiration.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00520FC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00523F4 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0052690 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     PostWinlogonMessage @ 0x1C0052F60 (PostWinlogonMessage.c)
 *     PowerOnMonitor @ 0x1C0053850 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0053B70 (PowerUnDimMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0054924 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00599B8 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C0059C20 (IsSetTimerCoalescingToleranceSupported.c)
 *     PowerInputEvent @ 0x1C005B900 (PowerInputEvent.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C005B980 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C005B9E0 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C005C540 (EtwTraceStopPowerEventCalloutWorker.c)
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
 *     PowerOffMonitor @ 0x1C00C98F0 (PowerOffMonitor.c)
 *     IsPowerOnGdiSupported @ 0x1C00CA13C (IsPowerOnGdiSupported.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0125400 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01254E0 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C01255A0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C0125CDC (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C0126D94 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C0126FC0 (PowerIsDisplayRequired.c)
 *     McTemplateK0dxq_EtwWriteTransfer @ 0x1C01304C0 (McTemplateK0dxq_EtwWriteTransfer.c)
 *     IsSetForegroundPrioritySupported @ 0x1C01FDAD8 (IsSetForegroundPrioritySupported.c)
 *     IsStartScreenSaverSupported @ 0x1C01FDB04 (IsStartScreenSaverSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // r15
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  unsigned __int8 v12; // cl
  unsigned int v13; // ebx
  __int64 v14; // rcx
  void (__fastcall *v16)(_QWORD, __int64, __int64, _QWORD, int *, int); // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  LARGE_INTEGER *v21; // rbx
  struct tagTHREADINFO *v22; // rbx
  struct tagTHREADINFO **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  PVOID v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // rax
  struct _KTHREAD *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rax
  NTSTATUS v40; // eax
  __int64 v41; // rcx
  LARGE_INTEGER *v42; // rbx
  struct tagTHREADINFO *v43; // rbx
  struct tagTHREADINFO **v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PVOID v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  struct _KTHREAD *v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 *v61; // rax
  __int64 v62; // rax
  void (__fastcall *v63)(__int64); // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  PERESOURCE *v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // rcx
  struct tagKERNELHANDLETABLEENTRY *v69; // r14
  __int64 v70; // rcx
  PERESOURCE *v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rcx
  struct tagKERNELHANDLETABLEENTRY *v74; // r14
  __int64 GlobalTickCount; // rbx
  int v76; // eax
  __int64 v77; // rcx
  int v78; // eax
  __int64 v80; // rcx
  __int64 v81; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  struct tagTHREADINFO *v86; // rbx
  struct tagTHREADINFO **v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  PVOID CurrentProcess; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r9
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v102; // rbx
  __int64 v103; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v106; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rcx
  PERESOURCE *v112; // rdi
  struct tagKERNELHANDLETABLEENTRY *v113; // r14
  __int64 v114; // rax
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // rcx
  PERESOURCE *v121; // rbx
  __int64 v122; // rax
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rax
  __int64 v128; // rcx
  PERESOURCE *v129; // rdi
  __int64 v130; // rcx
  __int64 v131; // rcx
  int v132; // ecx
  __int64 InputBuffer; // [rsp+48h] [rbp-B8h] BYREF
  int v134; // [rsp+50h] [rbp-B0h] BYREF
  int v135; // [rsp+54h] [rbp-ACh] BYREF
  int v136; // [rsp+58h] [rbp-A8h] BYREF
  int v137; // [rsp+5Ch] [rbp-A4h] BYREF
  int v138; // [rsp+60h] [rbp-A0h] BYREF
  int v139; // [rsp+64h] [rbp-9Ch] BYREF
  int v140; // [rsp+68h] [rbp-98h] BYREF
  int v141; // [rsp+6Ch] [rbp-94h] BYREF
  int v142; // [rsp+70h] [rbp-90h] BYREF
  BOOL v143; // [rsp+74h] [rbp-8Ch]
  unsigned int v144; // [rsp+78h] [rbp-88h]
  __int64 v145; // [rsp+80h] [rbp-80h]
  unsigned __int64 OutputBuffer; // [rsp+88h] [rbp-78h] BYREF
  int v147; // [rsp+90h] [rbp-70h] BYREF
  int v148; // [rsp+94h] [rbp-6Ch]
  __int128 v149; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v150; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v151; // [rsp+D0h] [rbp-30h]
  GUID v152; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v153; // [rsp+E8h] [rbp-18h]
  unsigned __int8 v154; // [rsp+F0h] [rbp-10h]
  GUID v155; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v156; // [rsp+108h] [rbp+8h]
  unsigned __int8 v157; // [rsp+110h] [rbp+10h]
  GUID v158; // [rsp+114h] [rbp+14h] BYREF
  _QWORD v159[10]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v160; // [rsp+180h] [rbp+80h] BYREF
  int *v161; // [rsp+1A0h] [rbp+A0h]
  __int64 v162; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v163; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v164; // [rsp+1D0h] [rbp+D0h]
  __int64 v165; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v166; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v167; // [rsp+200h] [rbp+100h]
  __int64 v168; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v169; // [rsp+210h] [rbp+110h] BYREF
  int *v170; // [rsp+230h] [rbp+130h]
  __int64 v171; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v172; // [rsp+240h] [rbp+140h] BYREF
  int *v173; // [rsp+260h] [rbp+160h]
  __int64 v174; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v175; // [rsp+270h] [rbp+170h] BYREF
  int *v176; // [rsp+290h] [rbp+190h]
  __int64 v177; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v178; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v179; // [rsp+2C0h] [rbp+1C0h]
  __int64 v180; // [rsp+2C8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v181; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v182; // [rsp+2F0h] [rbp+1F0h]
  __int64 v183; // [rsp+2F8h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v184; // [rsp+300h] [rbp+200h] BYREF
  int *v185; // [rsp+320h] [rbp+220h]
  __int64 v186; // [rsp+328h] [rbp+228h]

  memset(v159, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v159[1]);
  v5 = 0LL;
  v6 = *((_QWORD *)a1 + 1);
  v7 = *(_DWORD *)a1;
  v159[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v159[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v159[3]) = 16;
  LOBYTE(v159[6]) = -1;
  v144 = v7;
  v145 = v6;
  OutputBuffer = 0LL;
  v149 = 0LL;
  InputBuffer = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dxq_EtwWriteTransfer(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v7, v6, 0);
  if ( !gbPowerCalloutsReady )
  {
    v13 = -1073741823;
    v14 = (unsigned int)v7;
    goto LABEL_33;
  }
  if ( v7 <= 8 )
  {
    if ( v7 != 8 )
    {
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v13 = PostWinlogonMessage(256LL, v6);
          if ( !v13 )
            PostPlaySoundMessage();
          goto LABEL_32;
        }
        v8 = (unsigned int)(v7 - 2);
        if ( v7 == 2 )
        {
          if ( !gbNonServiceSession )
          {
            *(_QWORD *)((char *)&v149 + 4) = 10LL;
            WORD6(v149) = 0;
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v149, 0x10u, 0LL, 0);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v80);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            v152 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v151 = 1;
              v83 = PsGetCurrentThreadWin32Thread(v81);
              v150 = v83;
              if ( v83 && (*(int *)(v83 + 24) > 0 || *(_DWORD *)(v150 + 48)) )
              {
                EtwActivityIdControl(3u, &v152);
                if ( (unsigned int)dword_1C024C960 > 6 )
                {
                  if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v84, v85) )
                  {
                    v134 = v151;
                    v162 = 4LL;
                    v161 = &v134;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199F7,
                      &v152,
                      0LL,
                      3u,
                      &v160);
                  }
                }
              }
            }
            else
            {
              v150 = 0LL;
            }
            v86 = 0LL;
            while ( 1 )
            {
              v87 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v87 )
                v86 = *v87;
              CurrentProcess = (PVOID)PsGetCurrentProcess(v89, v88);
              if ( CurrentProcess )
              {
                if ( CurrentProcess == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v92, v91) == gpepCSRSS && v86 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v86 == gptiRit )
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
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v93) )
                {
                  v135 = v151;
                  v165 = 4LL;
                  v164 = &v135;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199A0,
                    &v152,
                    0LL,
                    3u,
                    &v163);
                  v94 = (unsigned int)dword_1C024C960;
                }
                if ( (unsigned int)v94 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v94, v95) )
                {
                  v136 = v151;
                  v168 = 4LL;
                  v167 = &v136;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199CD,
                    &v152,
                    0LL,
                    3u,
                    &v166);
                }
              }
            }
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v86;
            gbValidateHandleForIL = 1;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (v98 = PsGetCurrentProcess(v97, v96),
                  ProcessSessionId = PsGetProcessSessionIdEx(v98),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              CurrentThread = KeGetCurrentThread();
              v102 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached() )
              {
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                  v102 = *ThreadWin32Thread;
              }
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v103);
              v8 = CurrentProcessWin32Process;
              if ( v102
                && CurrentProcessWin32Process
                && (*(_DWORD *)(v102 + 480) & 0x1000000) != 0
                && (*(_DWORD *)(v102 + 1216) & 0x80u) == 0
                && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
              {
                DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v106);
                if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v108);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
                while ( 1 )
                {
                  v113 = gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                  v110 = *(_QWORD *)v113;
                  *((_QWORD *)v113 + 2) = 0LL;
                  if ( !*(_DWORD *)(v110 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v109);
                  v112 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v112 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v111);
                  ExReleaseResourceAndLeaveCriticalRegion(*v112);
                  HMUnlockObject(*(_QWORD *)v113);
                  tagDomLock::LockExclusive((tagDomLock *)v112);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
              }
            }
          }
          v147 = 16;
          v148 = 16;
          if ( (int)IsxxxSendMessageBSMSupported(v8) < 0 )
            goto LABEL_31;
          v16 = (void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int *, int))qword_1C02583B8;
          if ( !qword_1C02583B8 )
            goto LABEL_31;
          v18 = 536LL;
          v17 = 10LL;
        }
        else
        {
          if ( v7 != 3 )
          {
            v9 = (unsigned int)(v7 - 4);
            if ( v7 == 4 )
              goto LABEL_11;
            if ( v7 == 5 )
            {
              if ( gbTtmEnabled )
                MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v7 - 5));
              if ( gfSwitchInProgress )
                goto LABEL_31;
              HIDWORD(InputBuffer) = v6;
              PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v6);
              if ( !gProtocolType
                && byte_1C0252710
                && !dword_1C025319C
                && (int)IsPowerOffGdiSupported() >= 0
                && qword_1C02583D8 )
              {
                qword_1C02583D8();
              }
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                goto LABEL_31;
              if ( HIDWORD(InputBuffer) == 17 )
                goto LABEL_31;
              v63 = (void (__fastcall *)(__int64))qword_1C02583C8;
              if ( !qword_1C02583C8 )
                goto LABEL_31;
              v64 = 2LL;
              goto LABEL_93;
            }
            if ( v7 != 6 )
            {
              if ( v7 == 7 )
              {
                if ( gfSwitchInProgress || dword_1C02531A0 || !gPowerTransitionsState )
                  goto LABEL_31;
                PowerDimMonitor();
                if ( !gProtocolType )
                  UpdateDisplayState(2, MonitorRequestReasonMax, 1);
                if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                  goto LABEL_31;
                v63 = (void (__fastcall *)(__int64))qword_1C02583C8;
                if ( !qword_1C02583C8 )
                  goto LABEL_31;
                v64 = 1LL;
                goto LABEL_93;
              }
LABEL_297:
              v13 = -1073741822;
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
              v76 = *(_DWORD *)(gppiScreenSaver + 12);
              if ( (v76 & 0x400000) == 0 )
              {
                *(_DWORD *)(gppiScreenSaver + 12) = v76 | 0x400000;
                if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                {
                  v77 = *(_QWORD *)(gppiScreenSaver + 328);
                  if ( v77 )
                  {
                    if ( qword_1C0257F48 )
                      qword_1C0257F48(v77, 1LL);
                  }
                }
              }
              goto LABEL_31;
            }
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 120) )
            {
              v78 = qword_1C0258410 ? qword_1C0258410() : -1073741637;
              if ( v78 >= 0 && !(qword_1C0258418 ? qword_1C0258418(*(_QWORD *)(gpqForeground + 120)) : 0) )
              {
                if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported() >= 0 && qword_1C0258428 )
                  qword_1C0258428(1LL);
                if ( qword_1C02581F8 )
                {
                  LOBYTE(v5) = (*(_DWORD *)gpsi & 0x200) != 0;
                  qword_1C02581F8(*(_QWORD *)(gpqForeground + 120), 274LL, 61760LL, v5);
                  v13 = 0;
                  goto LABEL_32;
                }
                goto LABEL_31;
              }
            }
            if ( (int)IsStartScreenSaverSupported() < 0 )
              goto LABEL_31;
            v63 = (void (__fastcall *)(__int64))qword_1C0258428;
LABEL_91:
            if ( !v63 )
              goto LABEL_31;
            v64 = 0LL;
LABEL_93:
            v63(v64);
            goto LABEL_31;
          }
          v147 = 16;
          v148 = 16;
          if ( (int)IsxxxSendMessageBSMSupported((unsigned int)(v7 - 3)) < 0 )
            goto LABEL_31;
          v16 = (void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int *, int))qword_1C02583B8;
          if ( !qword_1C02583B8 )
            goto LABEL_31;
          v17 = 0LL;
          v18 = 30LL;
        }
        v16(0LL, v18, v17, 0LL, &v147, 1);
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
          *(_QWORD *)((char *)&v149 + 4) = 7LL;
          WORD6(v149) = 0;
          if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
          UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
          ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v149, 0x10u, 0LL, 0);
          v21 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19);
          if ( v21 )
            v21[1] = KeQueryPerformanceCounter(0LL);
          v155 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v154 = 1;
            v114 = PsGetCurrentThreadWin32Thread(v20);
            v153 = v114;
            if ( v114 && (*(int *)(v114 + 24) > 0 || *(_DWORD *)(v153 + 48)) )
            {
              EtwActivityIdControl(3u, &v155);
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v115, v116) )
                {
                  v137 = v154;
                  v171 = 4LL;
                  v170 = &v137;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199F7,
                    &v155,
                    0LL,
                    3u,
                    &v169);
                }
              }
            }
          }
          else
          {
            v153 = 0LL;
          }
          v22 = 0LL;
          while ( 1 )
          {
            v23 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v23 )
              v22 = *v23;
            v26 = (PVOID)PsGetCurrentProcess(v25, v24);
            if ( v26 )
            {
              if ( v26 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v28, v27) == gpepCSRSS && v22 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v22 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v153
            && (*(_DWORD *)(v153 + 48) || *(int *)(v153 + 24) > 0) )
          {
            *(_DWORD *)(v153 + 44) = 1;
            *(GUID *)(v153 + 28) = v155;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v29) )
              {
                v138 = v154;
                v174 = 4LL;
                v173 = &v138;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &v155,
                  0LL,
                  3u,
                  &v172);
                v117 = (unsigned int)dword_1C024C960;
              }
              if ( (unsigned int)v117 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v117, v118) )
              {
                v139 = v154;
                v177 = 4LL;
                v176 = &v139;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &v155,
                  0LL,
                  3u,
                  &v175);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v22;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v32 = PsGetCurrentProcess(v31, v30),
                v33 = PsGetProcessSessionIdEx(v32),
                v34 = PsGetCurrentThreadProcess(),
                v33 == (unsigned int)PsGetProcessSessionIdEx(v34)) )
          {
            v35 = KeGetCurrentThread();
            v36 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached() )
            {
              v38 = (__int64 *)PsGetThreadWin32Thread(v35);
              if ( v38 )
                v36 = *v38;
            }
            v39 = PsGetCurrentProcessWin32Process(v37);
            if ( v36
              && v39
              && (*(_DWORD *)(v36 + 480) & 0x1000000) != 0
              && (*(_DWORD *)(v36 + 1216) & 0x80u) == 0
              && (*(_DWORD *)(v39 + 12) & 0x8000) != 0 )
            {
              v66 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v66 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v65);
              if ( ExIsResourceAcquiredExclusiveLite(*v66) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v67);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v66);
              v69 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v69 + 2);
                  v119 = *(_QWORD *)v69;
                  *((_QWORD *)v69 + 2) = 0LL;
                  if ( !*(_DWORD *)(v119 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v68);
                  v121 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v121 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v120);
                  ExReleaseResourceAndLeaveCriticalRegion(*v121);
                  HMUnlockObject(*(_QWORD *)v69);
                  tagDomLock::LockExclusive((tagDomLock *)v121);
                  v69 = gpducstulHead;
                }
                while ( gpducstulHead );
                v6 = v145;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v66);
            }
          }
        }
      }
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      v40 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
      v143 = v40 == 0;
      v42 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v40 == 0);
      if ( v42 )
        v42[1] = KeQueryPerformanceCounter(0LL);
      v158 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v157 = 1;
        v122 = PsGetCurrentThreadWin32Thread(v41);
        v156 = v122;
        if ( v122 && (*(int *)(v122 + 24) > 0 || *(_DWORD *)(v156 + 48)) )
        {
          EtwActivityIdControl(3u, &v158);
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v123, v124) )
            {
              v140 = v157;
              v180 = 4LL;
              v179 = &v140;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &v158,
                0LL,
                3u,
                &v178);
            }
          }
        }
      }
      else
      {
        v156 = 0LL;
      }
      v43 = 0LL;
      while ( 1 )
      {
        v44 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v44 )
          v43 = *v44;
        v47 = (PVOID)PsGetCurrentProcess(v46, v45);
        if ( v47 )
        {
          if ( v47 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v49, v48) == gpepCSRSS && v43 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v43 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v156
        && (*(_DWORD *)(v156 + 48) || *(int *)(v156 + 24) > 0) )
      {
        *(_DWORD *)(v156 + 44) = 1;
        *(GUID *)(v156 + 28) = v158;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v50) )
          {
            v141 = v157;
            v183 = 4LL;
            v182 = &v141;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &v158,
              0LL,
              3u,
              &v181);
            v125 = (unsigned int)dword_1C024C960;
          }
          if ( (unsigned int)v125 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v125, v126) )
          {
            v142 = v157;
            v186 = 4LL;
            v185 = &v142;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &v158,
              0LL,
              3u,
              &v184);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v43;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v53 = PsGetCurrentProcess(v52, v51),
            v54 = PsGetProcessSessionIdEx(v53),
            v55 = PsGetCurrentThreadProcess(),
            v54 == (unsigned int)PsGetProcessSessionIdEx(v55)) )
      {
        v58 = KeGetCurrentThread();
        v59 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          v61 = (__int64 *)PsGetThreadWin32Thread(v58);
          if ( v61 )
            v59 = *v61;
        }
        v62 = PsGetCurrentProcessWin32Process(v60);
        if ( v59
          && v62
          && (*(_DWORD *)(v59 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v59 + 1216) & 0x80u) == 0
          && (*(_DWORD *)(v62 + 12) & 0x8000) != 0 )
        {
          v71 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v71 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v70);
          if ( ExIsResourceAcquiredExclusiveLite(*v71) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v72);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v71);
          v74 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v74 + 2);
              v127 = *(_QWORD *)v74;
              *((_QWORD *)v74 + 2) = 0LL;
              if ( !*(_DWORD *)(v127 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v73);
              v129 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v129 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v128);
              ExReleaseResourceAndLeaveCriticalRegion(*v129);
              HMUnlockObject(*(_QWORD *)v74);
              tagDomLock::LockExclusive((tagDomLock *)v129);
              v74 = gpducstulHead;
            }
            while ( gpducstulHead );
            v6 = v145;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v71);
        }
      }
      if ( !v143 || gSessionCreationTime < OutputBuffer )
      {
        LOBYTE(v57) = 1;
        LOBYTE(v56) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v56, v57) )
        {
          v147 = 16;
          v148 = 0x20000000;
          if ( (int)((__int64 (*)(void))IsxxxSendMessageBSMSupported)() >= 0 )
          {
            if ( qword_1C02583B8 )
              qword_1C02583B8(0LL, 536LL, 7LL);
          }
        }
      }
      if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
        goto LABEL_31;
      v63 = (void (__fastcall *)(__int64))qword_1C02583C8;
      goto LABEL_91;
    }
    v12 = 1;
LABEL_30:
    PowerInputEvent(v12);
    goto LABEL_31;
  }
  v12 = v7 - 9;
  switch ( v7 )
  {
    case 9:
      goto LABEL_30;
    case 10:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v7 - 10));
      PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v6);
      goto LABEL_31;
    case 11:
      if ( !gfSwitchInProgress
        && !dword_1C02531A0
        && dword_1C0253150 == (_DWORD)v6
        && (!gbTtmEnabled || gbBuiltinPanelOn) )
      {
        if ( (_DWORD)v6 == 1 )
        {
          PowerUnDimMonitor();
        }
        else if ( (_DWORD)v6 == 2 )
        {
          PowerDimMonitor();
        }
      }
      goto LABEL_31;
  }
  v9 = (unsigned int)(v7 - 12);
  if ( v7 == 12 )
  {
LABEL_11:
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    DisarmPowerWatchdog((__int64)gpRequestQueueWatchdog, 16);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    if ( v7 == 12 )
      UserSessionSwitchBlock_End();
    if ( dword_1C02531A0 || gfSwitchInProgress )
      goto LABEL_23;
    HIDWORD(InputBuffer) = v6;
    LOBYTE(InputBuffer) = gProtocolType == 0;
    if ( HIDWORD(qword_1C02531AC) && !gProtocolType && (_DWORD)v6 != 22 )
    {
      if ( (_DWORD)v6 != 1 || !ShouldEscapeProximity() )
        goto LABEL_26;
      HIDWORD(qword_1C02531AC) = 0;
    }
    ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 32);
    gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
    DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 32);
    if ( gLastResumeResult )
    {
      if ( gLastResumeResult == 259 )
        goto LABEL_323;
      if ( gLastResumeResult != -1073741823 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    }
    if ( gLastResumeResult != 259 )
    {
      if ( gLastResumeResult != -1073741823 )
      {
        v11 = 0;
        if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
        {
          ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 48);
          if ( qword_1C02583E8 )
            qword_1C02583E8(v159, 0LL, 0LL);
          DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 48);
          v11 = 1;
        }
        PowerOnMonitor(SHIDWORD(InputBuffer), (__int64)v159, 0);
        if ( v11 && qword_1C02583F8 )
          qword_1C02583F8(v159);
LABEL_23:
        if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 && qword_1C02583C8 )
          qword_1C02583C8(0LL);
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
  v130 = (unsigned int)(v7 - 13);
  if ( v7 == 13 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v130);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v130);
    PowerOnSession((unsigned int)v6);
    goto LABEL_310;
  }
  v131 = (unsigned int)(v7 - 14);
  if ( v7 == 14 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v131);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v131);
    PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v6, v2);
LABEL_310:
    UserSessionSwitchBlock_End();
    goto LABEL_31;
  }
  if ( v7 != 15 )
    goto LABEL_297;
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v131);
  if ( gfSwitchInProgress || dword_1C02531A0 )
    goto LABEL_31;
  if ( v6 == 1 )
  {
    gbBuiltinPanelOn = 1;
    PowerUnDimMonitor();
    v132 = 1;
  }
  else
  {
    if ( v6 != 2 )
    {
      if ( v6 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v131);
      gbBuiltinPanelOn = 0;
      goto LABEL_31;
    }
    gbBuiltinPanelOn = 1;
    PowerDimMonitor();
    v132 = 2;
  }
  UpdateDisplayState(v132, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1);
LABEL_31:
  v13 = 0;
LABEL_32:
  v14 = v144;
LABEL_33:
  EtwTraceStopPowerEventCalloutWorker(v14, v6, v13);
  return v13;
}
