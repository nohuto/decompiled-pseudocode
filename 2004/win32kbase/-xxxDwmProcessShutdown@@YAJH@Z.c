/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006011C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C013B200 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxDwmControl @ 0x1C00604A0 (xxxDwmControl.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C00605FC (IsUserEnableConsoleModeSupported.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0060628 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0060670 (GreSfmCleanupPresentHistory.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C0060850 (IsxxxDwmStopRedirectionSupported.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     GreLockDwmState @ 0x1C00A5990 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00A59D0 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C01F82C4 (UserEnableConsoleMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct tagKERNELHANDLETABLEENTRY *i; // rsi
  __int64 v39; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rcx
  LARGE_INTEGER *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  struct tagTHREADINFO *v59; // rbx
  struct tagTHREADINFO **v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  PVOID v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // ebx
  __int64 v73; // rax
  struct _KTHREAD *v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  PERESOURCE *v81; // rbx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  struct tagKERNELHANDLETABLEENTRY *j; // rsi
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  PERESOURCE *v96; // rdi
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // [rsp+40h] [rbp-C8h] BYREF
  int v100; // [rsp+48h] [rbp-C0h] BYREF
  int v101; // [rsp+4Ch] [rbp-BCh] BYREF
  int v102; // [rsp+50h] [rbp-B8h] BYREF
  int v103; // [rsp+54h] [rbp-B4h] BYREF
  int v104; // [rsp+58h] [rbp-B0h] BYREF
  int v105; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v106; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v109; // [rsp+80h] [rbp-88h]
  unsigned __int8 v110; // [rsp+88h] [rbp-80h]
  GUID v111; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+A0h] [rbp-68h] BYREF
  int *v113; // [rsp+C0h] [rbp-48h]
  __int64 v114; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+D0h] [rbp-38h] BYREF
  int *v116; // [rsp+F0h] [rbp-18h]
  __int64 v117; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v118; // [rsp+100h] [rbp-8h] BYREF
  int *v119; // [rsp+120h] [rbp+18h]
  __int64 v120; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+130h] [rbp+28h] BYREF
  int *v122; // [rsp+150h] [rbp+48h]
  __int64 v123; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v124; // [rsp+160h] [rbp+58h] BYREF
  int *v125; // [rsp+180h] [rbp+78h]
  __int64 v126; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v127; // [rsp+190h] [rbp+88h] BYREF
  int *v128; // [rsp+1B0h] [rbp+A8h]
  __int64 v129; // [rsp+1B8h] [rbp+B0h]

  v99 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v99) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 88LL))(v99);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 192LL))(v99);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 8LL))(v99);
  }
  v3 = a1;
  if ( g_bDwmIsShuttingDown )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    if ( qword_1C0252DA8 )
      v2 = qword_1C0252DA8(a1);
    else
      v2 = -1073741637;
  }
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v42 = PsGetCurrentThreadWin32Thread(v5);
    v106 = v42;
    if ( v42 && (*(int *)(v42 + 24) > 0 || *(_DWORD *)(v106 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v43, v44) )
        {
          v100 = ActivityId_4;
          v114 = 4LL;
          v113 = &v100;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId_8,
            0LL,
            3u,
            &v112);
        }
      }
    }
  }
  else
  {
    v106 = 0LL;
  }
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v106 && (*(_DWORD *)(v106 + 48) || *(int *)(v106 + 24) > 0) )
  {
    *(_DWORD *)(v106 + 44) = 1;
    *(GUID *)(v106 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v14) )
      {
        v101 = ActivityId_4;
        v117 = 4LL;
        v116 = &v101;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId_8,
          0LL,
          3u,
          &v115);
        v45 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v45 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v45, v46) )
      {
        v102 = ActivityId_4;
        v120 = 4LL;
        v119 = &v102;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId_8,
          0LL,
          3u,
          &v118);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v17 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v17),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v21 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v21 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28, v29);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
        v47 = *(_QWORD *)i;
        *((_QWORD *)i + 2) = 0LL;
        if ( !*(_DWORD *)(v47 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
        v50 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v50 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
        ExReleaseResourceAndLeaveCriticalRegion(*v50);
        HMUnlockObject(*(_QWORD *)i);
        tagDomLock::LockExclusive((tagDomLock *)v50);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit(v39);
    v2 = UserEnableConsoleMode(1LL);
    v55 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v53);
    if ( v55 )
      v55[1] = KeQueryPerformanceCounter(0LL);
    v111 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v110 = 1;
      v56 = PsGetCurrentThreadWin32Thread(v54);
      v109 = v56;
      if ( v56 && (*(int *)(v56 + 24) > 0 || *(_DWORD *)(v109 + 48)) )
      {
        EtwActivityIdControl(3u, &v111);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v57, v58) )
          {
            v103 = v110;
            v123 = 4LL;
            v122 = &v103;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &v111,
              0LL,
              3u,
              &v121);
          }
        }
      }
    }
    else
    {
      v109 = 0LL;
    }
    v59 = 0LL;
    while ( 1 )
    {
      v60 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v60 )
        v59 = *v60;
      v63 = (PVOID)PsGetCurrentProcess(v62, v61);
      if ( v63 )
      {
        if ( v63 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v65, v64) == gpepCSRSS && v59 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v59 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v109
      && (*(_DWORD *)(v109 + 48) || *(int *)(v109 + 24) > 0) )
    {
      *(_DWORD *)(v109 + 44) = 1;
      *(GUID *)(v109 + 28) = v111;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v66) )
        {
          v104 = v110;
          v126 = 4LL;
          v125 = &v104;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &v111,
            0LL,
            3u,
            &v124);
          v67 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v67 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v67, v68) )
        {
          v105 = v110;
          v129 = 4LL;
          v128 = &v105;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &v111,
            0LL,
            3u,
            &v127);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v59;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v71 = PsGetCurrentProcess(v70, v69),
          v72 = PsGetProcessSessionIdEx(v71),
          v73 = PsGetCurrentThreadProcess(),
          v72 == (unsigned int)PsGetProcessSessionIdEx(v73)) )
    {
      v74 = KeGetCurrentThread();
      v75 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v77 = (__int64 *)PsGetThreadWin32Thread(v74);
        if ( v77 )
          v75 = *v77;
      }
      v78 = PsGetCurrentProcessWin32Process(v76);
      if ( v75
        && v78
        && (*(_DWORD *)(v75 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v75 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(v78 + 12) & 0x8000) != 0 )
      {
        v81 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v81 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v80, v79, v82, v83);
        if ( ExIsResourceAcquiredExclusiveLite(*v81) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v85, v84, v86, v87);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v81);
        for ( j = gpducstulHead; gpducstulHead; j = gpducstulHead )
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)j + 2);
          v93 = *(_QWORD *)j;
          *((_QWORD *)j + 2) = 0LL;
          if ( !*(_DWORD *)(v93 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v89, v88, v90, v91);
          v96 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v96 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v95, v94, v97, v98);
          ExReleaseResourceAndLeaveCriticalRegion(*v96);
          HMUnlockObject(*(_QWORD *)j);
          tagDomLock::LockExclusive((tagDomLock *)v96);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v81);
      }
    }
  }
  g_bDwmIsShuttingDown = 0;
  if ( v3 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
