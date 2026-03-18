/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C0138EB0 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     GreLockDwmState @ 0x1C005E790 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C005E7D0 (GreUnlockDwmState.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxDwmControl @ 0x1C0074EA0 (xxxDwmControl.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C0074FFC (IsUserEnableConsoleModeSupported.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0075028 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0075070 (GreSfmCleanupPresentHistory.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C0075250 (IsxxxDwmStopRedirectionSupported.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C01F6994 (UserEnableConsoleMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // r15d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *i; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int CurrentProcessId; // eax
  __int64 v50; // rax
  unsigned int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  PERESOURCE *v55; // rdi
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // rcx
  LARGE_INTEGER *v60; // rbx
  __int64 v61; // rax
  struct tagTHREADINFO *v62; // rbx
  struct tagTHREADINFO **v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  PVOID v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned int v69; // r8d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // ebx
  __int64 v74; // rax
  struct _KTHREAD *v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int64 *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
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
  __int64 *j; // rsi
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  PERESOURCE *v100; // rdi
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // [rsp+40h] [rbp-C8h] BYREF
  int v104; // [rsp+48h] [rbp-C0h] BYREF
  int v105; // [rsp+4Ch] [rbp-BCh] BYREF
  int v106; // [rsp+50h] [rbp-B8h] BYREF
  int v107; // [rsp+54h] [rbp-B4h] BYREF
  int v108; // [rsp+58h] [rbp-B0h] BYREF
  int v109; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v110; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v113; // [rsp+80h] [rbp-88h]
  unsigned __int8 v114; // [rsp+88h] [rbp-80h]
  GUID v115; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+A0h] [rbp-68h] BYREF
  int *v117; // [rsp+C0h] [rbp-48h]
  __int64 v118; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+D0h] [rbp-38h] BYREF
  int *v120; // [rsp+F0h] [rbp-18h]
  __int64 v121; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+100h] [rbp-8h] BYREF
  int *v123; // [rsp+120h] [rbp+18h]
  __int64 v124; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+130h] [rbp+28h] BYREF
  int *v126; // [rsp+150h] [rbp+48h]
  __int64 v127; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+160h] [rbp+58h] BYREF
  int *v129; // [rsp+180h] [rbp+78h]
  __int64 v130; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+190h] [rbp+88h] BYREF
  int *v132; // [rsp+1B0h] [rbp+A8h]
  __int64 v133; // [rsp+1B8h] [rbp+B0h]

  v103 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v103) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 88LL))(v103);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 192LL))(v103);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 8LL))(v103);
  }
  v3 = a1;
  if ( g_bDwmIsShuttingDown )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    if ( qword_1C0250DA8 )
      v2 = qword_1C0250DA8(a1);
    else
      v2 = -1073741637;
  }
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v4, v5, v6);
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v50 = PsGetCurrentThreadWin32Thread(v8);
    v110 = v50;
    if ( v50 && (*(int *)(v50 + 24) > 0 || *(_DWORD *)(v110 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v104 = ActivityId_4;
        v118 = 4LL;
        v117 = &v104;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId_8,
          0LL,
          3u,
          &v116);
      }
    }
  }
  else
  {
    v110 = 0LL;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v10 = *v11;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v10 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v110 && (*(_DWORD *)(v110 + 48) || *(int *)(v110 + 24) > 0) )
  {
    *(_DWORD *)(v110 + 44) = 1;
    *(GUID *)(v110 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v105 = ActivityId_4;
        v121 = 4LL;
        v120 = &v105;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId_8,
          0LL,
          3u,
          &v119);
        v51 = dword_1C0244A70;
      }
      if ( v51 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v106 = ActivityId_4;
        v124 = 4LL;
        v123 = &v106;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId_8,
          0LL,
          3u,
          &v122);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v19 = PsGetCurrentProcess(v18, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(v19),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v23 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v23 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( v23
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v23 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v23 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28, v29);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
        v52 = *i;
        i[2] = 0LL;
        if ( !*(_DWORD *)(v52 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
        v55 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
        if ( v55 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v56, v57);
        ExReleaseResourceAndLeaveCriticalRegion(*v55);
        HMUnlockObject(*i);
        tagDomLock::LockExclusive(v55);
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
    UserSessionSwitchLeaveCrit(v45, v44, v46, v47);
    v2 = UserEnableConsoleMode(1LL);
    v60 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v58);
    if ( v60 )
      v60[1] = KeQueryPerformanceCounter(0LL);
    v115 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v114 = 1;
      v61 = PsGetCurrentThreadWin32Thread(v59);
      v113 = v61;
      if ( v61 && (*(int *)(v61 + 24) > 0 || *(_DWORD *)(v113 + 48)) )
      {
        EtwActivityIdControl(3u, &v115);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v107 = v114;
          v127 = 4LL;
          v126 = &v107;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &v115,
            0LL,
            3u,
            &v125);
        }
      }
    }
    else
    {
      v113 = 0LL;
    }
    v62 = 0LL;
    while ( 1 )
    {
      v63 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v63 )
        v62 = *v63;
      v66 = (PVOID)PsGetCurrentProcess(v65, v64);
      if ( v66 )
      {
        if ( v66 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v68, v67) == gpepCSRSS && v62 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v62 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v113
      && (*(_DWORD *)(v113 + 48) || *(int *)(v113 + 24) > 0) )
    {
      *(_DWORD *)(v113 + 44) = 1;
      *(GUID *)(v113 + 28) = v115;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v108 = v114;
          v130 = 4LL;
          v129 = &v108;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &v115,
            0LL,
            3u,
            &v128);
          v69 = dword_1C0244A70;
        }
        if ( v69 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v109 = v114;
          v133 = 4LL;
          v132 = &v109;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &v115,
            0LL,
            3u,
            &v131);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v62;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v72 = PsGetCurrentProcess(v71, v70),
          v73 = PsGetProcessSessionIdEx(v72),
          v74 = PsGetCurrentThreadProcess(),
          v73 == (unsigned int)PsGetProcessSessionIdEx(v74)) )
    {
      v75 = KeGetCurrentThread();
      v76 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v78 = (__int64 *)PsGetThreadWin32Thread(v75);
        if ( v78 )
          v76 = *v78;
      }
      v79 = PsGetCurrentProcessWin32Process(v77);
      if ( v76
        && v79
        && (*(_DWORD *)(v76 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v76 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v79 + 12) & 0x8000) != 0 )
      {
        v85 = (PERESOURCE *)GetDomainLockRef(12LL, v80, v81, v82);
        if ( v85 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v84, v83, v86, v87);
        if ( ExIsResourceAcquiredExclusiveLite(*v85) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v89, v88, v90, v91);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v85);
        for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)j[2];
          v97 = *j;
          j[2] = 0LL;
          if ( !*(_DWORD *)(v97 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v94, v95);
          v100 = (PERESOURCE *)GetDomainLockRef(12LL, v92, v94, v95);
          if ( v100 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v99, v98, v101, v102);
          ExReleaseResourceAndLeaveCriticalRegion(*v100);
          HMUnlockObject(*j);
          tagDomLock::LockExclusive(v100);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v85);
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
