/*
 * XREFs of UserThreadCallout @ 0x1C0072890
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     GreCleanDC @ 0x1C0071CF0 (GreCleanDC.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     IsGetAppCompatFlags2QuadWordSupported @ 0x1C0072F60 (IsGetAppCompatFlags2QuadWordSupported.c)
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     RtlGetExpWinVer @ 0x1C0074170 (RtlGetExpWinVer.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  int ThreadInfo; // r13d
  __int64 v4; // rcx
  __int64 v5; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v7; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v9; // rcx
  LARGE_INTEGER *v10; // rbx
  struct tagTHREADINFO *v11; // rdi
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  struct tagTHREADINFO *v27; // rdi
  __int64 v28; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PVOID CurrentProcess; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  struct tagKERNELHANDLETABLEENTRY *v56; // rsi
  __int64 v57; // rbx
  int v58; // eax
  int v59; // eax
  __int64 v60; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v63; // rax
  int v64; // ebx
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r8d
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  PERESOURCE *v71; // rdi
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  unsigned int v75; // r8d
  __int64 v76; // rdx
  __int64 v77; // rcx
  PERESOURCE *v78; // rbx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  PERESOURCE *v92; // rdi
  __int64 v93; // r8
  __int64 v94; // r9
  struct tagKERNELHANDLETABLEENTRY *v95; // rsi
  int v96; // [rsp+30h] [rbp-D0h] BYREF
  int v97; // [rsp+34h] [rbp-CCh] BYREF
  int v98; // [rsp+38h] [rbp-C8h] BYREF
  int v99; // [rsp+3Ch] [rbp-C4h] BYREF
  int v100; // [rsp+40h] [rbp-C0h] BYREF
  int v101; // [rsp+44h] [rbp-BCh] BYREF
  PETHREAD Threada; // [rsp+48h] [rbp-B8h]
  __int64 v103; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v104; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v106; // [rsp+70h] [rbp-90h]
  unsigned __int8 v107; // [rsp+78h] [rbp-88h]
  GUID v108; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+90h] [rbp-70h] BYREF
  int *v110; // [rsp+B0h] [rbp-50h]
  __int64 v111; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+C0h] [rbp-40h] BYREF
  int *v113; // [rsp+E0h] [rbp-20h]
  int v114; // [rsp+E8h] [rbp-18h]
  int v115; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+F0h] [rbp-10h] BYREF
  int *v117; // [rsp+110h] [rbp+10h]
  int v118; // [rsp+118h] [rbp+18h]
  int v119; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+120h] [rbp+20h] BYREF
  int *v121; // [rsp+140h] [rbp+40h]
  __int64 v122; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+150h] [rbp+50h] BYREF
  int *v124; // [rsp+170h] [rbp+70h]
  __int64 v125; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+180h] [rbp+80h] BYREF
  int *v127; // [rsp+1A0h] [rbp+A0h]
  __int64 v128; // [rsp+1A8h] [rbp+A8h]

  ThreadInfo = 0;
  Threada = Thread;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_36;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        14,
        26,
        (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
    }
    v27 = 0LL;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v104 = 1;
      v66 = PsGetCurrentThreadWin32Thread(v28);
      v103 = v66;
      if ( v66 && (*(int *)(v66 + 24) > 0 || *(_DWORD *)(v103 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v96 = v104;
          v111 = 4LL;
          v110 = &v96;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v109);
        }
      }
    }
    else
    {
      v103 = 0LL;
    }
    while ( 1 )
    {
      v30 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v30 )
        v27 = *v30;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v32, v31);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v35, v34) == gpepCSRSS && v27 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v27 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v103
      && (*(_DWORD *)(v103 + 48) || *(int *)(v103 + 24) > 0) )
    {
      *(_DWORD *)(v103 + 44) = 1;
      *(GUID *)(v103 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v115 = 0;
          v97 = v104;
          v114 = 4;
          v113 = &v97;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &ActivityId,
            0LL,
            3u,
            &v112);
          v67 = dword_1C0246A70;
        }
        if ( v67 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v119 = 0;
          v98 = v104;
          v118 = 4;
          v117 = &v98;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &ActivityId,
            0LL,
            3u,
            &v116);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v27;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v60 = PsGetCurrentProcess(v37, v36),
          ProcessSessionId = PsGetProcessSessionIdEx(v60),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v39 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v39 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v40);
      if ( v39
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v39 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v39 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v56 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v68 = *(_QWORD *)v56;
          *((_QWORD *)v56 + 2) = 0LL;
          if ( !*(_DWORD *)(v68 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v54, v55);
          v71 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v71 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, v69, v72, v73);
          ExReleaseResourceAndLeaveCriticalRegion(*v71);
          HMUnlockObject(*(_QWORD *)v56);
          tagDomLock::LockExclusive((tagDomLock *)v71);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v57 = W32GetThreadWin32Thread(Threada);
    *(_DWORD *)(v57 + 480) |= 1u;
    if ( qword_1C0252928 )
      v58 = qword_1C0252928();
    else
      v58 = -1073741637;
    if ( v58 >= 0 && qword_1C0252930 )
      qword_1C0252930();
    if ( gbVideoInitialized || !gbNonServiceSession )
      GreCleanDC(*(HDC *)(gpDispInfo + 56));
    v59 = *(_DWORD *)(v57 + 1224);
    if ( (v59 & 2) != 0 )
    {
      gfSwitchInProgress = 0;
      v59 = *(_DWORD *)(v57 + 1224);
    }
    if ( (v59 & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C0252920 )
        qword_1C0252920(gptiCurrent);
      xxxDestroyThreadInfo();
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        14,
        25,
        (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
    }
    if ( gbNoMorePowerCallouts )
      return 3221225473LL;
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread(Thread) + 1224), 0);
      goto LABEL_36;
    }
    v5 = W32GetThreadWin32Thread(Thread);
    if ( v5 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v7 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v7);
        *(_DWORD *)(v5 + 624) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v5 + 624) = 0;
      }
    }
    v10 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
    if ( v10 )
      v10[1] = KeQueryPerformanceCounter(0LL);
    v108 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v107 = 1;
      v74 = PsGetCurrentThreadWin32Thread(v9);
      v106 = v74;
      if ( v74 && (*(int *)(v74 + 24) > 0 || *(_DWORD *)(v106 + 48)) )
      {
        EtwActivityIdControl(3u, &v108);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v99 = v107;
          v122 = 4LL;
          v121 = &v99;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &v108,
            0LL,
            3u,
            &v120);
        }
      }
    }
    else
    {
      v106 = 0LL;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      v15 = (PVOID)PsGetCurrentProcess(v14, v13);
      if ( v15 )
      {
        if ( v15 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v11 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v106
      && (*(_DWORD *)(v106 + 48) || *(int *)(v106 + 24) > 0) )
    {
      *(_DWORD *)(v106 + 44) = 1;
      *(GUID *)(v106 + 28) = v108;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v100 = v107;
          v125 = 4LL;
          v124 = &v100;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &v108,
            0LL,
            3u,
            &v123);
          v75 = dword_1C0246A70;
        }
        if ( v75 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v101 = v107;
          v128 = 4LL;
          v127 = &v101;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &v108,
            0LL,
            3u,
            &v126);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v63 = PsGetCurrentProcess(v19, v18),
          v64 = PsGetProcessSessionIdEx(v63),
          v65 = PsGetCurrentThreadProcess(),
          v64 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
    {
      v20 = KeGetCurrentThread();
      v21 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v23 = (__int64 *)PsGetThreadWin32Thread(v20);
        if ( v23 )
          v21 = *v23;
      }
      v24 = PsGetCurrentProcessWin32Process(v22);
      if ( v21
        && v24
        && (*(_DWORD *)(v21 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v21 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(v24 + 12) & 0x8000) != 0 )
      {
        v78 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v78 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v77, v76, v79, v80);
        if ( ExIsResourceAcquiredExclusiveLite(*v78) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v82, v81, v83, v84);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v78);
        while ( 1 )
        {
          v95 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v89 = *(_QWORD *)v95;
          *((_QWORD *)v95 + 2) = 0LL;
          if ( !*(_DWORD *)(v89 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v86, v85, v87, v88);
          v92 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v92 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v91, v90, v93, v94);
          ExReleaseResourceAndLeaveCriticalRegion(*v92);
          HMUnlockObject(*(_QWORD *)v95);
          tagDomLock::LockExclusive((tagDomLock *)v92);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v78);
      }
    }
    ThreadInfo = xxxCreateThreadInfo(Threada);
    if ( ThreadInfo >= 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C0252920 )
      qword_1C0252920(gptiCurrent);
  }
  UserSessionSwitchLeaveCrit(v25);
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      14,
      27,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  }
  return (unsigned int)ThreadInfo;
}
