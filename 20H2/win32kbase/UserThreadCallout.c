/*
 * XREFs of UserThreadCallout @ 0x1C004EA50
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     IsGetAppCompatFlags2QuadWordSupported @ 0x1C004F120 (IsGetAppCompatFlags2QuadWordSupported.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     RtlGetExpWinVer @ 0x1C005114C (RtlGetExpWinVer.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GreCleanDC @ 0x1C009B4F0 (GreCleanDC.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagTHREADINFO *v37; // rdi
  __int64 v38; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PVOID CurrentProcess; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 *v73; // rsi
  __int64 v74; // rbx
  int v75; // eax
  int v76; // eax
  __int64 v77; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  PERESOURCE *v91; // rdi
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  PERESOURCE *v101; // rbx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  PERESOURCE *v115; // rdi
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 *v118; // rsi
  int v119; // [rsp+30h] [rbp-D0h] BYREF
  int v120; // [rsp+34h] [rbp-CCh] BYREF
  int v121; // [rsp+38h] [rbp-C8h] BYREF
  int v122; // [rsp+3Ch] [rbp-C4h] BYREF
  int v123; // [rsp+40h] [rbp-C0h] BYREF
  int v124; // [rsp+44h] [rbp-BCh] BYREF
  PETHREAD Threada; // [rsp+48h] [rbp-B8h]
  __int64 v126; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v127; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v129; // [rsp+70h] [rbp-90h]
  unsigned __int8 v130; // [rsp+78h] [rbp-88h]
  GUID v131; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+90h] [rbp-70h] BYREF
  int *v133; // [rsp+B0h] [rbp-50h]
  __int64 v134; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+C0h] [rbp-40h] BYREF
  int *v136; // [rsp+E0h] [rbp-20h]
  int v137; // [rsp+E8h] [rbp-18h]
  int v138; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v139; // [rsp+F0h] [rbp-10h] BYREF
  int *v140; // [rsp+110h] [rbp+10h]
  int v141; // [rsp+118h] [rbp+18h]
  int v142; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+120h] [rbp+20h] BYREF
  int *v144; // [rsp+140h] [rbp+40h]
  __int64 v145; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v146; // [rsp+150h] [rbp+50h] BYREF
  int *v147; // [rsp+170h] [rbp+70h]
  __int64 v148; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v149; // [rsp+180h] [rbp+80h] BYREF
  int *v150; // [rsp+1A0h] [rbp+A0h]
  __int64 v151; // [rsp+1A8h] [rbp+A8h]

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
        (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
    }
    v37 = 0LL;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v127 = 1;
      v83 = PsGetCurrentThreadWin32Thread(v38);
      v126 = v83;
      if ( v83 && (*(int *)(v83 + 24) > 0 || *(_DWORD *)(v126 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v84, v85) )
          {
            v119 = v127;
            v134 = 4LL;
            v133 = &v119;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E87,
              (int)&ActivityId,
              0,
              3u,
              &v132);
          }
        }
      }
    }
    else
    {
      v126 = 0LL;
    }
    while ( 1 )
    {
      v40 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v40 )
        v37 = *v40;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v42, v41);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v45, v44) == gpepCSRSS && v37 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v37 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v126
      && (*(_DWORD *)(v126 + 48) || *(int *)(v126 + 24) > 0) )
    {
      *(_DWORD *)(v126 + 44) = 1;
      *(GUID *)(v126 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v46) )
        {
          v138 = 0;
          v120 = v127;
          v137 = 4;
          v136 = &v120;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0244A70,
            (int)&dword_1C0211E30,
            (int)&ActivityId,
            0,
            3u,
            &v135);
          v86 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v86 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v86, v87) )
        {
          v142 = 0;
          v121 = v127;
          v141 = 4;
          v140 = &v121;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0244A70,
            (int)&dword_1C0211E5D,
            (int)&ActivityId,
            0,
            3u,
            &v139);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v37;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v77 = PsGetCurrentProcess(v48, v47),
          ProcessSessionId = PsGetProcessSessionIdEx(v77),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v50 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v50 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v52, v51, v53, v54);
      if ( v50
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v50 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v50 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v57, v58, v59);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v63, v64);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v67, v68);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v73 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v88 = *v73;
          v73[2] = 0LL;
          if ( !*(_DWORD *)(v88 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, v69, v71, v72);
          v91 = (PERESOURCE *)GetDomainLockRef(12LL, v69, v71, v72);
          if ( v91 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v90, v89, v92, v93);
          ExReleaseResourceAndLeaveCriticalRegion(*v91);
          HMUnlockObject(*v73);
          tagDomLock::LockExclusive(v91);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v74 = W32GetThreadWin32Thread((__int64)Threada);
    *(_DWORD *)(v74 + 488) |= 1u;
    if ( qword_1C0250928 )
      v75 = qword_1C0250928();
    else
      v75 = -1073741637;
    if ( v75 >= 0 && qword_1C0250930 )
      qword_1C0250930();
    if ( gbVideoInitialized || !gbNonServiceSession )
      GreCleanDC(*(HDC *)(gpDispInfo + 56));
    v76 = *(_DWORD *)(v74 + 1232);
    if ( (v76 & 2) != 0 )
    {
      gfSwitchInProgress = 0;
      v76 = *(_DWORD *)(v74 + 1232);
    }
    if ( (v76 & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C0250920 )
        qword_1C0250920(gptiCurrent);
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
        (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
    }
    if ( gbNoMorePowerCallouts )
      return 3221225473LL;
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1232), 0);
      goto LABEL_36;
    }
    v5 = W32GetThreadWin32Thread((__int64)Thread);
    if ( v5 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v7 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v7);
        *(_DWORD *)(v5 + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v5 + 632) = 0;
      }
    }
    v10 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
    if ( v10 )
      v10[1] = KeQueryPerformanceCounter(0LL);
    v131 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v130 = 1;
      v94 = PsGetCurrentThreadWin32Thread(v9);
      v129 = v94;
      if ( v94 && (*(int *)(v94 + 24) > 0 || *(_DWORD *)(v129 + 48)) )
      {
        EtwActivityIdControl(3u, &v131);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v95, v96) )
          {
            v122 = v130;
            v145 = 4LL;
            v144 = &v122;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&v131, 0, 3u, &v143);
          }
        }
      }
    }
    else
    {
      v129 = 0LL;
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
      && v129
      && (*(_DWORD *)(v129 + 48) || *(int *)(v129 + 24) > 0) )
    {
      *(_DWORD *)(v129 + 44) = 1;
      *(GUID *)(v129 + 28) = v131;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v18) )
        {
          v123 = v130;
          v148 = 4LL;
          v147 = &v123;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&v131, 0, 3u, &v146);
          v97 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v97 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v97, v98) )
        {
          v124 = v130;
          v151 = 4LL;
          v150 = &v124;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&v131, 0, 3u, &v149);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v80 = PsGetCurrentProcess(v20, v19),
          v81 = PsGetProcessSessionIdEx(v80),
          v82 = PsGetCurrentThreadProcess(),
          v81 == (unsigned int)PsGetProcessSessionIdEx(v82)) )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v27 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v27 )
          v22 = *v27;
      }
      v28 = PsGetCurrentProcessWin32Process(v24, v23, v25, v26);
      if ( v22
        && v28
        && (*(_DWORD *)(v22 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v22 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v28 + 12) & 0x8000) != 0 )
      {
        v101 = (PERESOURCE *)GetDomainLockRef(12LL, v29, v30, v31);
        if ( v101 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v100, v99, v102, v103);
        if ( ExIsResourceAcquiredExclusiveLite(*v101) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v105, v104, v106, v107);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v101);
        while ( 1 )
        {
          v118 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v112 = *v118;
          v118[2] = 0LL;
          if ( !*(_DWORD *)(v112 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v109, v108, v110, v111);
          v115 = (PERESOURCE *)GetDomainLockRef(12LL, v108, v110, v111);
          if ( v115 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v114, v113, v116, v117);
          ExReleaseResourceAndLeaveCriticalRegion(*v115);
          HMUnlockObject(*v118);
          tagDomLock::LockExclusive(v115);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v101);
      }
    }
    ThreadInfo = xxxCreateThreadInfo(Threada);
    if ( ThreadInfo >= 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C0250920 )
      qword_1C0250920(gptiCurrent);
  }
  UserSessionSwitchLeaveCrit(v33, v32, v34, v35);
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      14,
      27,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  return (unsigned int)ThreadInfo;
}
