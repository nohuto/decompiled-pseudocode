/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0052B6C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C0140EA0 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxDwmControl @ 0x1C0052EF0 (xxxDwmControl.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C005304C (IsUserEnableConsoleModeSupported.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0053078 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C00530C0 (GreSfmCleanupPresentHistory.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C00532A0 (IsxxxDwmStopRedirectionSupported.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     GreLockDwmState @ 0x1C0074C80 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0074CC0 (GreUnlockDwmState.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C01FDCD0 (UserEnableConsoleMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct tagKERNELHANDLETABLEENTRY *i; // rsi
  __int64 v30; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  LARGE_INTEGER *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  struct tagTHREADINFO *v47; // rbx
  struct tagTHREADINFO **v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PVOID v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // ebx
  __int64 v61; // rax
  struct _KTHREAD *v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  PERESOURCE *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rcx
  struct tagKERNELHANDLETABLEENTRY *j; // rsi
  __int64 v72; // rax
  __int64 v73; // rcx
  PERESOURCE *v74; // rdi
  __int64 v75; // [rsp+40h] [rbp-C8h] BYREF
  int v76; // [rsp+48h] [rbp-C0h] BYREF
  int v77; // [rsp+4Ch] [rbp-BCh] BYREF
  int v78; // [rsp+50h] [rbp-B8h] BYREF
  int v79; // [rsp+54h] [rbp-B4h] BYREF
  int v80; // [rsp+58h] [rbp-B0h] BYREF
  int v81; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v82; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v85; // [rsp+80h] [rbp-88h]
  unsigned __int8 v86; // [rsp+88h] [rbp-80h]
  GUID v87; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+A0h] [rbp-68h] BYREF
  int *v89; // [rsp+C0h] [rbp-48h]
  __int64 v90; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+D0h] [rbp-38h] BYREF
  int *v92; // [rsp+F0h] [rbp-18h]
  __int64 v93; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+100h] [rbp-8h] BYREF
  int *v95; // [rsp+120h] [rbp+18h]
  __int64 v96; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+130h] [rbp+28h] BYREF
  int *v98; // [rsp+150h] [rbp+48h]
  __int64 v99; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+160h] [rbp+58h] BYREF
  int *v101; // [rsp+180h] [rbp+78h]
  __int64 v102; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+190h] [rbp+88h] BYREF
  int *v104; // [rsp+1B0h] [rbp+A8h]
  __int64 v105; // [rsp+1B8h] [rbp+B0h]

  v75 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v75) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 88LL))(v75);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 192LL))(v75);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
  }
  v3 = a1;
  if ( g_bDwmIsShuttingDown )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    if ( qword_1C0258D68 )
      v2 = qword_1C0258D68(a1);
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
    v33 = PsGetCurrentThreadWin32Thread(v5);
    v82 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v82 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v34, v35) )
        {
          v76 = ActivityId_4;
          v90 = 4LL;
          v89 = &v76;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId_8,
            0LL,
            3u,
            &v88);
        }
      }
    }
  }
  else
  {
    v82 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v82 && (*(_DWORD *)(v82 + 48) || *(int *)(v82 + 24) > 0) )
  {
    *(_DWORD *)(v82 + 44) = 1;
    *(GUID *)(v82 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v14) )
      {
        v77 = ActivityId_4;
        v93 = 4LL;
        v92 = &v77;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId_8,
          0LL,
          3u,
          &v91);
        v36 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v36 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v36, v37) )
      {
        v78 = ActivityId_4;
        v96 = 4LL;
        v95 = &v78;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId_8,
          0LL,
          3u,
          &v94);
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
      && (*(_DWORD *)(v21 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
        v38 = *(_QWORD *)i;
        *((_QWORD *)i + 2) = 0LL;
        if ( !*(_DWORD *)(v38 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
        v40 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v40 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
        ExReleaseResourceAndLeaveCriticalRegion(*v40);
        HMUnlockObject(*(_QWORD *)i);
        tagDomLock::LockExclusive((tagDomLock *)v40);
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
    UserSessionSwitchLeaveCrit(v30);
    v2 = UserEnableConsoleMode(1LL);
    v43 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v41);
    if ( v43 )
      v43[1] = KeQueryPerformanceCounter(0LL);
    v87 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v86 = 1;
      v44 = PsGetCurrentThreadWin32Thread(v42);
      v85 = v44;
      if ( v44 && (*(int *)(v44 + 24) > 0 || *(_DWORD *)(v85 + 48)) )
      {
        EtwActivityIdControl(3u, &v87);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v45, v46) )
          {
            v79 = v86;
            v99 = 4LL;
            v98 = &v79;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v87,
              0LL,
              3u,
              &v97);
          }
        }
      }
    }
    else
    {
      v85 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v85 && (*(_DWORD *)(v85 + 48) || *(int *)(v85 + 24) > 0) )
    {
      *(_DWORD *)(v85 + 44) = 1;
      *(GUID *)(v85 + 28) = v87;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v54) )
        {
          v80 = v86;
          v102 = 4LL;
          v101 = &v80;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v87,
            0LL,
            3u,
            &v100);
          v55 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v55 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v55, v56) )
        {
          v81 = v86;
          v105 = 4LL;
          v104 = &v81;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v87,
            0LL,
            3u,
            &v103);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v47;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v59 = PsGetCurrentProcess(v58, v57),
          v60 = PsGetProcessSessionIdEx(v59),
          v61 = PsGetCurrentThreadProcess(),
          v60 == (unsigned int)PsGetProcessSessionIdEx(v61)) )
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
        && (*(_DWORD *)(v63 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v66 + 12) & 0x8000) != 0 )
      {
        v68 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v68 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v67);
        if ( ExIsResourceAcquiredExclusiveLite(*v68) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v69);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v68);
        for ( j = gpducstulHead; gpducstulHead; j = gpducstulHead )
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)j + 2);
          v72 = *(_QWORD *)j;
          *((_QWORD *)j + 2) = 0LL;
          if ( !*(_DWORD *)(v72 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v70);
          v74 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v74 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v73);
          ExReleaseResourceAndLeaveCriticalRegion(*v74);
          HMUnlockObject(*(_QWORD *)j);
          tagDomLock::LockExclusive((tagDomLock *)v74);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v68);
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
