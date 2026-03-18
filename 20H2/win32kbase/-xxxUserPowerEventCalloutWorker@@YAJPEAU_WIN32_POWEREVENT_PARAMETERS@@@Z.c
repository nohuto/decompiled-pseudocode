/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0070190 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C0070C60 (EtwTraceStopPowerEventCalloutWorker.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0070C80 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerInputEvent @ 0x1C0070D10 (PowerInputEvent.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0070D90 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C0070DF0 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0070E1C (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerOnMonitor @ 0x1C0070E70 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0071190 (PowerUnDimMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0074424 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C00752F0 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0097550 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     PostPlaySoundMessage @ 0x1C00B381C (PostPlaySoundMessage.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00BA148 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00BB4C0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     EtwTraceIdleActionExpiration @ 0x1C00BE1C0 (EtwTraceIdleActionExpiration.c)
 *     PowerResumeSuspendEvent @ 0x1C00C85E0 (PowerResumeSuspendEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C8884 (IsxxxSendMessageBSMSupported.c)
 *     PowerOffMonitor @ 0x1C00C8920 (PowerOffMonitor.c)
 *     IsPowerOnGdiSupported @ 0x1C00C916C (IsPowerOnGdiSupported.c)
 *     IsPowerOffGdiSupported @ 0x1C00C97F8 (IsPowerOffGdiSupported.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011D120 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D200 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C011D2C0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C011D9FC (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C011EA60 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C011EC90 (PowerIsDisplayRequired.c)
 *     McTemplateK0dxq_EtwWriteTransfer @ 0x1C0128180 (McTemplateK0dxq_EtwWriteTransfer.c)
 *     IsSetForegroundPrioritySupported @ 0x1C01F6778 (IsSetForegroundPrioritySupported.c)
 *     IsStartScreenSaverSupported @ 0x1C01F67A4 (IsStartScreenSaverSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // r15
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
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
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rax
  struct _KTHREAD *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 *v41; // rax
  __int64 v42; // rax
  NTSTATUS v43; // eax
  __int64 v44; // rcx
  LARGE_INTEGER *v45; // rbx
  struct tagTHREADINFO *v46; // rbx
  struct tagTHREADINFO **v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PVOID v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  struct _KTHREAD *v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 *v63; // rax
  __int64 v64; // rax
  __int64 v65; // r9
  void (__fastcall *v66)(__int64); // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  PERESOURCE *v70; // rdi
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 *v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rcx
  PERESOURCE *v84; // rbx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // r14
  int v96; // r9d
  __int64 GlobalTickCount; // rbx
  int v98; // eax
  __int64 v99; // rcx
  int v100; // eax
  __int64 v102; // rcx
  __int64 v103; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v105; // rax
  struct tagTHREADINFO *v106; // rbx
  struct tagTHREADINFO **v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  PVOID CurrentProcess; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned int v113; // r8d
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v120; // rbx
  __int64 v121; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  PERESOURCE *v143; // rdi
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 *v146; // r14
  __int64 v147; // rax
  unsigned int v148; // r8d
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  PERESOURCE *v152; // rbx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  unsigned int v156; // r8d
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  PERESOURCE *v160; // rdi
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rcx
  __int64 v164; // rcx
  int v165; // r9d
  enum _MONITOR_DISPLAY_STATE v166; // ecx
  __int64 InputBuffer; // [rsp+48h] [rbp-B8h] BYREF
  int v168; // [rsp+50h] [rbp-B0h] BYREF
  int v169; // [rsp+54h] [rbp-ACh] BYREF
  int v170; // [rsp+58h] [rbp-A8h] BYREF
  int v171; // [rsp+5Ch] [rbp-A4h] BYREF
  int v172; // [rsp+60h] [rbp-A0h] BYREF
  int v173; // [rsp+64h] [rbp-9Ch] BYREF
  int v174; // [rsp+68h] [rbp-98h] BYREF
  int v175; // [rsp+6Ch] [rbp-94h] BYREF
  int v176; // [rsp+70h] [rbp-90h] BYREF
  BOOL v177; // [rsp+74h] [rbp-8Ch]
  unsigned int v178; // [rsp+78h] [rbp-88h]
  __int64 v179; // [rsp+80h] [rbp-80h]
  unsigned __int64 OutputBuffer; // [rsp+88h] [rbp-78h] BYREF
  int v181; // [rsp+90h] [rbp-70h] BYREF
  int v182; // [rsp+94h] [rbp-6Ch]
  __int128 v183; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v184; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v185; // [rsp+D0h] [rbp-30h]
  GUID v186; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v187; // [rsp+E8h] [rbp-18h]
  unsigned __int8 v188; // [rsp+F0h] [rbp-10h]
  GUID v189; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v190; // [rsp+108h] [rbp+8h]
  unsigned __int8 v191; // [rsp+110h] [rbp+10h]
  GUID v192; // [rsp+114h] [rbp+14h] BYREF
  _QWORD v193[10]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v194; // [rsp+180h] [rbp+80h] BYREF
  int *v195; // [rsp+1A0h] [rbp+A0h]
  __int64 v196; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v197; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v198; // [rsp+1D0h] [rbp+D0h]
  __int64 v199; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v200; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v201; // [rsp+200h] [rbp+100h]
  __int64 v202; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v203; // [rsp+210h] [rbp+110h] BYREF
  int *v204; // [rsp+230h] [rbp+130h]
  __int64 v205; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v206; // [rsp+240h] [rbp+140h] BYREF
  int *v207; // [rsp+260h] [rbp+160h]
  __int64 v208; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v209; // [rsp+270h] [rbp+170h] BYREF
  int *v210; // [rsp+290h] [rbp+190h]
  __int64 v211; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v212; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v213; // [rsp+2C0h] [rbp+1C0h]
  __int64 v214; // [rsp+2C8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v215; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v216; // [rsp+2F0h] [rbp+1F0h]
  __int64 v217; // [rsp+2F8h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v218; // [rsp+300h] [rbp+200h] BYREF
  int *v219; // [rsp+320h] [rbp+220h]
  __int64 v220; // [rsp+328h] [rbp+228h]

  memset(v193, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v193[1]);
  v6 = 0LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *(_DWORD *)a1;
  v193[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v193[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v193[3]) = 16;
  LOBYTE(v193[6]) = -1;
  v178 = v8;
  v179 = v7;
  OutputBuffer = 0LL;
  v183 = 0LL;
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
      v9 = (unsigned int)v8;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v17 = PostWinlogonMessage(256LL, v7);
          if ( !v17 )
            PostPlaySoundMessage(v7);
          goto LABEL_32;
        }
        v10 = (unsigned int)(v8 - 2);
        if ( v8 == 2 )
        {
          if ( !gbNonServiceSession )
          {
            *(_QWORD *)((char *)&v183 + 4) = 10LL;
            WORD6(v183) = 0;
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2, v4, v5);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v183, 0x10u, 0LL, 0);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v102);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            v186 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v185 = 1;
              v105 = PsGetCurrentThreadWin32Thread(v103);
              v184 = v105;
              if ( v105 && (*(int *)(v105 + 24) > 0 || *(_DWORD *)(v184 + 48)) )
              {
                EtwActivityIdControl(3u, &v186);
                if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
                {
                  v168 = v185;
                  v196 = 4LL;
                  v195 = &v168;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0244A70,
                    (unsigned __int8 *)dword_1C0211E87,
                    &v186,
                    0LL,
                    3u,
                    &v194);
                }
              }
            }
            else
            {
              v184 = 0LL;
            }
            v106 = 0LL;
            while ( 1 )
            {
              v107 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v107 )
                v106 = *v107;
              CurrentProcess = (PVOID)PsGetCurrentProcess(v109, v108);
              if ( CurrentProcess )
              {
                if ( CurrentProcess == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v112, v111) == gpepCSRSS && v106 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v106 == gptiRit )
              {
                break;
              }
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
              && v184
              && (*(_DWORD *)(v184 + 48) || *(int *)(v184 + 24) > 0) )
            {
              *(_DWORD *)(v184 + 44) = 1;
              *(GUID *)(v184 + 28) = v186;
              if ( (unsigned int)dword_1C0244A70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
                {
                  v169 = v185;
                  v199 = 4LL;
                  v198 = &v169;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0244A70,
                    (unsigned __int8 *)dword_1C0211E30,
                    &v186,
                    0LL,
                    3u,
                    &v197);
                  v113 = dword_1C0244A70;
                }
                if ( v113 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
                {
                  v170 = v185;
                  v202 = 4LL;
                  v201 = &v170;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0244A70,
                    (unsigned __int8 *)dword_1C0211E5D,
                    &v186,
                    0LL,
                    3u,
                    &v200);
                }
              }
            }
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v106;
            gbValidateHandleForIL = 1;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (v116 = PsGetCurrentProcess(v115, v114),
                  ProcessSessionId = PsGetProcessSessionIdEx(v116),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              CurrentThread = KeGetCurrentThread();
              v120 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                  v120 = *ThreadWin32Thread;
              }
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v121);
              v10 = CurrentProcessWin32Process;
              if ( v120
                && CurrentProcessWin32Process
                && (*(_DWORD *)(v120 + 488) & 0x1000000) != 0
                && (*(_DWORD *)(v120 + 1232) & 0x80u) == 0
                && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
              {
                DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v124, v125, v126);
                if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v128, v127, v130, v131);
                if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v133, v132, v134, v135);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
                while ( 1 )
                {
                  v146 = (__int64 *)gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                  v140 = *v146;
                  v146[2] = 0LL;
                  if ( !*(_DWORD *)(v140 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v137, v136, v138, v139);
                  v143 = (PERESOURCE *)GetDomainLockRef(12LL, v136, v138, v139);
                  if ( v143 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v142, v141, v144, v145);
                  ExReleaseResourceAndLeaveCriticalRegion(*v143);
                  HMUnlockObject(*v146);
                  tagDomLock::LockExclusive(v143);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
              }
            }
          }
          v181 = 16;
          v182 = 16;
          if ( (int)IsxxxSendMessageBSMSupported(v10) < 0 )
            goto LABEL_31;
          v20 = (void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int *, int))qword_1C02503F8;
          if ( !qword_1C02503F8 )
            goto LABEL_31;
          v22 = 536LL;
          v21 = 10LL;
        }
        else
        {
          if ( v8 != 3 )
          {
            v11 = (unsigned int)(v8 - 4);
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
                && byte_1C024A6F0
                && !dword_1C024B19C
                && (int)IsPowerOffGdiSupported() >= 0
                && qword_1C0250418 )
              {
                qword_1C0250418();
              }
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                goto LABEL_31;
              if ( HIDWORD(InputBuffer) == 17 )
                goto LABEL_31;
              v66 = (void (__fastcall *)(__int64))qword_1C0250408;
              if ( !qword_1C0250408 )
                goto LABEL_31;
              v67 = 2LL;
              goto LABEL_93;
            }
            if ( v8 != 6 )
            {
              if ( v8 == 7 )
              {
                if ( gfSwitchInProgress || dword_1C024B1A0 || !gPowerTransitionsState )
                  goto LABEL_31;
                PowerDimMonitor();
                if ( !gProtocolType )
                  UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonMax, 1, v96);
                if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                  goto LABEL_31;
                v66 = (void (__fastcall *)(__int64))qword_1C0250408;
                if ( !qword_1C0250408 )
                  goto LABEL_31;
                v67 = 1LL;
                goto LABEL_93;
              }
LABEL_297:
              v17 = -1073741822;
              goto LABEL_32;
            }
            if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 2LL) )
              EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
            if ( !gPowerTransitionsState )
            {
              if ( (*(_DWORD *)gpsi & 0x200) == 0 )
                goto LABEL_31;
              GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
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
                    if ( qword_1C024FF88 )
                      qword_1C024FF88(v99, 1LL);
                  }
                }
              }
              goto LABEL_31;
            }
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 120) )
            {
              v100 = qword_1C0250450 ? qword_1C0250450() : -1073741637;
              if ( v100 >= 0 && !(qword_1C0250458 ? qword_1C0250458(*(_QWORD *)(gpqForeground + 120)) : 0) )
              {
                if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported() >= 0 && qword_1C0250468 )
                  qword_1C0250468(1LL);
                if ( qword_1C0250238 )
                {
                  LOBYTE(v6) = (*(_DWORD *)gpsi & 0x200) != 0;
                  qword_1C0250238(*(_QWORD *)(gpqForeground + 120), 274LL, 61760LL, v6);
                  v17 = 0;
                  goto LABEL_32;
                }
                goto LABEL_31;
              }
            }
            if ( (int)IsStartScreenSaverSupported() < 0 )
              goto LABEL_31;
            v66 = (void (__fastcall *)(__int64))qword_1C0250468;
LABEL_91:
            if ( !v66 )
              goto LABEL_31;
            v67 = 0LL;
LABEL_93:
            v66(v67);
            goto LABEL_31;
          }
          v181 = 16;
          v182 = 16;
          if ( (int)IsxxxSendMessageBSMSupported((unsigned int)(v8 - 3)) < 0 )
            goto LABEL_31;
          v20 = (void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int *, int))qword_1C02503F8;
          if ( !qword_1C02503F8 )
            goto LABEL_31;
          v21 = 0LL;
          v22 = 30LL;
        }
        v20(0LL, v22, v21, 0LL, &v181, 1);
        goto LABEL_31;
      }
      if ( !gProtocolType && gPowerAdaptiveState )
      {
        LOBYTE(v9) = 1;
        gPowerAdaptiveState = 0;
        PowerInputEvent(v9);
      }
      if ( !gbNonServiceSession )
      {
        LOBYTE(v4) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
        {
          *(_QWORD *)((char *)&v183 + 4) = 7LL;
          WORD6(v183) = 0;
          if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
          UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2, v4, v5);
          ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v183, 0x10u, 0LL, 0);
          v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v23);
          if ( v25 )
            v25[1] = KeQueryPerformanceCounter(0LL);
          v189 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v188 = 1;
            v147 = PsGetCurrentThreadWin32Thread(v24);
            v187 = v147;
            if ( v147 && (*(int *)(v147 + 24) > 0 || *(_DWORD *)(v187 + 48)) )
            {
              EtwActivityIdControl(3u, &v189);
              if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
              {
                v171 = v188;
                v205 = 4LL;
                v204 = &v171;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0244A70,
                  (unsigned __int8 *)dword_1C0211E87,
                  &v189,
                  0LL,
                  3u,
                  &v203);
              }
            }
          }
          else
          {
            v187 = 0LL;
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
            && v187
            && (*(_DWORD *)(v187 + 48) || *(int *)(v187 + 24) > 0) )
          {
            *(_DWORD *)(v187 + 44) = 1;
            *(GUID *)(v187 + 28) = v189;
            if ( (unsigned int)dword_1C0244A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
              {
                v172 = v188;
                v208 = 4LL;
                v207 = &v172;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0244A70,
                  (unsigned __int8 *)dword_1C0211E30,
                  &v189,
                  0LL,
                  3u,
                  &v206);
                v148 = dword_1C0244A70;
              }
              if ( v148 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
              {
                v173 = v188;
                v211 = 4LL;
                v210 = &v173;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0244A70,
                  (unsigned __int8 *)dword_1C0211E5D,
                  &v189,
                  0LL,
                  3u,
                  &v209);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v26;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v35 = PsGetCurrentProcess(v34, v33),
                v36 = PsGetProcessSessionIdEx(v35),
                v37 = PsGetCurrentThreadProcess(),
                v36 == (unsigned int)PsGetProcessSessionIdEx(v37)) )
          {
            v38 = KeGetCurrentThread();
            v39 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v41 = (__int64 *)PsGetThreadWin32Thread(v38);
              if ( v41 )
                v39 = *v41;
            }
            v42 = PsGetCurrentProcessWin32Process(v40);
            if ( v39
              && v42
              && (*(_DWORD *)(v39 + 488) & 0x1000000) != 0
              && (*(_DWORD *)(v39 + 1232) & 0x80u) == 0
              && (*(_DWORD *)(v42 + 12) & 0x8000) != 0 )
            {
              v70 = (PERESOURCE *)GetDomainLockRef(12LL, (__int64)v2, v4, v5);
              if ( v70 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v69, v68, v71, v72);
              if ( ExIsResourceAcquiredExclusiveLite(*v70) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v74, v73, v75, v76);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v70);
              v81 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v81[2];
                  v149 = *v81;
                  v81[2] = 0LL;
                  if ( !*(_DWORD *)(v149 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v78, v77, v79, v80);
                  v152 = (PERESOURCE *)GetDomainLockRef(12LL, v77, v79, v80);
                  if ( v152 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v151, v150, v153, v154);
                  ExReleaseResourceAndLeaveCriticalRegion(*v152);
                  HMUnlockObject(*v81);
                  tagDomLock::LockExclusive(v152);
                  v81 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v7 = v179;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v70);
            }
          }
        }
      }
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2, v4, v5);
      v43 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
      v177 = v43 == 0;
      v45 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v43 == 0);
      if ( v45 )
        v45[1] = KeQueryPerformanceCounter(0LL);
      v192 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v191 = 1;
        v155 = PsGetCurrentThreadWin32Thread(v44);
        v190 = v155;
        if ( v155 && (*(int *)(v155 + 24) > 0 || *(_DWORD *)(v190 + 48)) )
        {
          EtwActivityIdControl(3u, &v192);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v174 = v191;
            v214 = 4LL;
            v213 = &v174;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &v192,
              0LL,
              3u,
              &v212);
          }
        }
      }
      else
      {
        v190 = 0LL;
      }
      v46 = 0LL;
      while ( 1 )
      {
        v47 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v47 )
          v46 = *v47;
        v50 = (PVOID)PsGetCurrentProcess(v49, v48);
        if ( v50 )
        {
          if ( v50 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v52, v51) == gpepCSRSS && v46 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v46 == gptiRit )
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
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v175 = v191;
            v217 = 4LL;
            v216 = &v175;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &v192,
              0LL,
              3u,
              &v215);
            v156 = dword_1C0244A70;
          }
          if ( v156 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v176 = v191;
            v220 = 4LL;
            v219 = &v176;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &v192,
              0LL,
              3u,
              &v218);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v46;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v55 = PsGetCurrentProcess(v54, v53),
            v56 = PsGetProcessSessionIdEx(v55),
            v57 = PsGetCurrentThreadProcess(),
            v56 == (unsigned int)PsGetProcessSessionIdEx(v57)) )
      {
        v60 = KeGetCurrentThread();
        v61 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v63 = (__int64 *)PsGetThreadWin32Thread(v60);
          if ( v63 )
            v61 = *v63;
        }
        v64 = PsGetCurrentProcessWin32Process(v62);
        if ( v61
          && v64
          && (*(_DWORD *)(v61 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v61 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(v64 + 12) & 0x8000) != 0 )
        {
          v84 = (PERESOURCE *)GetDomainLockRef(12LL, v58, v59, v65);
          if ( v84 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v83, v82, v85, v86);
          if ( ExIsResourceAcquiredExclusiveLite(*v84) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v88, v87, v89, v90);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v84);
          v95 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v95[2];
              v157 = *v95;
              v95[2] = 0LL;
              if ( !*(_DWORD *)(v157 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v92, v91, v93, v94);
              v160 = (PERESOURCE *)GetDomainLockRef(12LL, v91, v93, v94);
              if ( v160 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v159, v158, v161, v162);
              ExReleaseResourceAndLeaveCriticalRegion(*v160);
              HMUnlockObject(*v95);
              tagDomLock::LockExclusive(v160);
              v95 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v7 = v179;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v84);
        }
      }
      if ( !v177 || gSessionCreationTime < OutputBuffer )
      {
        LOBYTE(v59) = 1;
        LOBYTE(v58) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v58, v59) )
        {
          v181 = 16;
          v182 = 0x20000000;
          if ( (int)((__int64 (*)(void))IsxxxSendMessageBSMSupported)() >= 0 )
          {
            if ( qword_1C02503F8 )
              qword_1C02503F8(0LL, 536LL, 7LL);
          }
        }
      }
      if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
        goto LABEL_31;
      v66 = (void (__fastcall *)(__int64))qword_1C0250408;
      goto LABEL_91;
    }
    LOBYTE(v3) = 1;
LABEL_30:
    PowerInputEvent(v3);
    goto LABEL_31;
  }
  v3 = (unsigned int)(v8 - 9);
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
        && !dword_1C024B1A0
        && dword_1C024B150 == (_DWORD)v7
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
  v11 = (unsigned int)(v8 - 12);
  if ( v8 == 12 )
  {
LABEL_11:
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v2, v4, v5);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    DisarmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    if ( v8 == 12 )
      UserSessionSwitchBlock_End();
    if ( dword_1C024B1A0 || gfSwitchInProgress )
      goto LABEL_23;
    HIDWORD(InputBuffer) = v7;
    LOBYTE(InputBuffer) = gProtocolType == 0;
    if ( HIDWORD(qword_1C024B1AC) && !gProtocolType && (_DWORD)v7 != 22 )
    {
      if ( (_DWORD)v7 != 1 || !ShouldEscapeProximity() )
        goto LABEL_26;
      HIDWORD(qword_1C024B1AC) = 0;
    }
    ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
    gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
    DisarmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
    if ( gLastResumeResult )
    {
      if ( gLastResumeResult == 259 )
        goto LABEL_323;
      if ( gLastResumeResult != -1073741823 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    }
    if ( gLastResumeResult != 259 )
    {
      if ( gLastResumeResult != -1073741823 )
      {
        v16 = 0;
        if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
        {
          ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
          if ( qword_1C0250428 )
            qword_1C0250428(v193, 0LL, 0LL);
          DisarmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
          v16 = 1;
        }
        PowerOnMonitor(SHIDWORD(InputBuffer));
        if ( v16 && qword_1C0250438 )
          qword_1C0250438(v193);
LABEL_23:
        if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 && qword_1C0250408 )
          qword_1C0250408(0LL);
      }
LABEL_26:
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      if ( --gPowerOnRequestCount )
        ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
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
  v163 = (unsigned int)(v8 - 13);
  if ( v8 == 13 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v163, v2, v4, v5);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v163, v2, v4, v5);
    PowerOnSession((unsigned int)v7);
    goto LABEL_310;
  }
  v164 = (unsigned int)(v8 - 14);
  if ( v8 == 14 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v164, v2, v4, v5);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v164, v2, v4, v5);
    PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v7, v2);
LABEL_310:
    UserSessionSwitchBlock_End();
    goto LABEL_31;
  }
  if ( v8 != 15 )
    goto LABEL_297;
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v164, v2, v4, v5);
  if ( gfSwitchInProgress || dword_1C024B1A0 )
    goto LABEL_31;
  if ( v7 == 1 )
  {
    gbBuiltinPanelOn = 1;
    PowerUnDimMonitor();
    v166 = PowerMonitorOn;
  }
  else
  {
    if ( v7 != 2 )
    {
      if ( v7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v164, v2, v4, v5);
      gbBuiltinPanelOn = 0;
      goto LABEL_31;
    }
    gbBuiltinPanelOn = 1;
    PowerDimMonitor();
    v166 = PowerMonitorDim;
  }
  UpdateDisplayState(v166, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1, v165);
LABEL_31:
  v17 = 0;
LABEL_32:
  v18 = v178;
LABEL_33:
  EtwTraceStopPowerEventCalloutWorker(v18, v7, v17);
  return v17;
}
