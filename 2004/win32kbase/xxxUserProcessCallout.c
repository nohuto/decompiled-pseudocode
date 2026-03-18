/*
 * XREFs of xxxUserProcessCallout @ 0x1C0072150
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C000785C (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C0032D08 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserJobCallout @ 0x1C0066848 (UserJobCallout.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     isInputVirtualizationEnabled @ 0x1C007125C (isInputVirtualizationEnabled.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     xxxInitProcessInfo @ 0x1C00C2204 (xxxInitProcessInfo.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *a1, PEPROCESS *a2)
{
  struct tagTHREADINFO *v2; // rdi
  PEPROCESS *v3; // rbx
  const union _LARGE_INTEGER *v5; // rcx
  int v6; // eax
  int inited; // r14d
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rcx
  struct _W32PROCESS *v24; // rdi
  int v25; // edx
  const union _LARGE_INTEGER *v27; // rcx
  __int64 v28; // rcx
  LARGE_INTEGER *v29; // rbx
  char v30; // r15
  struct tagTHREADINFO **v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  PVOID v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KTHREAD *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rax
  int v44; // esi
  int v45; // eax
  InputExtensibilityCallout *v46; // rcx
  int v47; // ecx
  char *i; // rax
  __int64 ProcessJob; // rax
  __int64 v50; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v52; // rax
  __int64 *v53; // rdi
  __int64 *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // r8d
  __int64 v65; // rdx
  __int64 v66; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  PERESOURCE *v81; // rdi
  __int64 v82; // r8
  __int64 v83; // r9
  struct tagKERNELHANDLETABLEENTRY *v84; // rsi
  __int64 v85; // rax
  unsigned int v86; // r8d
  __int64 v87; // rdx
  __int64 v88; // rcx
  PERESOURCE *v89; // rbx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  PERESOURCE *v103; // rdi
  __int64 v104; // r8
  __int64 v105; // r9
  struct tagKERNELHANDLETABLEENTRY *v106; // rsi
  int v107; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v108; // [rsp+34h] [rbp-CCh] BYREF
  int v109; // [rsp+3Ch] [rbp-C4h] BYREF
  int v110; // [rsp+40h] [rbp-C0h] BYREF
  int v111; // [rsp+44h] [rbp-BCh] BYREF
  int v112; // [rsp+48h] [rbp-B8h]
  int v113; // [rsp+4Ch] [rbp-B4h] BYREF
  int v114; // [rsp+50h] [rbp-B0h] BYREF
  int v115; // [rsp+54h] [rbp-ACh] BYREF
  struct _W32PROCESS *v116; // [rsp+58h] [rbp-A8h]
  PACCESS_TOKEN PrimaryToken; // [rsp+60h] [rbp-A0h]
  __int64 v118; // [rsp+68h] [rbp-98h]
  int v119; // [rsp+70h] [rbp-90h]
  int v120; // [rsp+74h] [rbp-8Ch]
  __int64 v121; // [rsp+78h] [rbp-88h]
  __int64 v122; // [rsp+80h] [rbp-80h]
  unsigned __int8 v123; // [rsp+88h] [rbp-78h]
  GUID ActivityId; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v125; // [rsp+A0h] [rbp-60h]
  unsigned __int8 v126; // [rsp+A8h] [rbp-58h]
  GUID v127; // [rsp+ACh] [rbp-54h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+C0h] [rbp-40h] BYREF
  int *v129; // [rsp+E0h] [rbp-20h]
  __int64 v130; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+F0h] [rbp-10h] BYREF
  int *v132; // [rsp+110h] [rbp+10h]
  int v133; // [rsp+118h] [rbp+18h]
  int v134; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+120h] [rbp+20h] BYREF
  int *v136; // [rsp+140h] [rbp+40h]
  int v137; // [rsp+148h] [rbp+48h]
  int v138; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v139; // [rsp+150h] [rbp+50h] BYREF
  int *v140; // [rsp+170h] [rbp+70h]
  __int64 v141; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v142; // [rsp+180h] [rbp+80h] BYREF
  int *v143; // [rsp+1A0h] [rbp+A0h]
  int v144; // [rsp+1A8h] [rbp+A8h]
  int v145; // [rsp+1ACh] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR v146; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v147; // [rsp+1D0h] [rbp+D0h]
  int v148; // [rsp+1D8h] [rbp+D8h]
  int v149; // [rsp+1DCh] [rbp+DCh]

  v2 = 0LL;
  v116 = a1;
  v3 = a2;
  if ( a2 )
  {
    v5 = &WPP_343d128d714e312b04193adc3f9faf5c_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        14,
        30,
        (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
    }
    v6 = *((_DWORD *)a1 + 3);
    inited = 1073741851;
    v112 = v6 & 0x8000;
    v108 = 0LL;
    PrimaryToken = 0LL;
    v107 = 0;
    if ( (v6 & 0x8000) == 0 )
    {
      PrimaryToken = PsReferencePrimaryToken(*v3);
      if ( PrimaryToken )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)v3,
                   PrimaryToken,
                   (enum _PROCESS_IMMERSIVE_TYPE *)((char *)&v108 + 4),
                   &v108,
                   &v107);
      else
        inited = -1073741700;
      v2 = 0LL;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v123 = 1;
      v63 = PsGetCurrentThreadWin32Thread(v8);
      v122 = v63;
      if ( v63 && (*(int *)(v63 + 24) > 0 || *(_DWORD *)(v122 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v109 = v123;
          v130 = 4LL;
          v129 = &v109;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v128);
        }
      }
    }
    else
    {
      v122 = 0LL;
    }
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v2 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v122
      && (*(_DWORD *)(v122 + 48) || *(int *)(v122 + 24) > 0) )
    {
      *(_DWORD *)(v122 + 44) = 1;
      *(GUID *)(v122 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v134 = 0;
          v110 = v123;
          v133 = 4;
          v132 = &v110;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &ActivityId,
            0LL,
            3u,
            &v131);
          v64 = dword_1C0246A70;
        }
        if ( v64 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v138 = 0;
          v111 = v123;
          v137 = 4;
          v136 = &v111;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &ActivityId,
            0LL,
            3u,
            &v135);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v57 = PsGetCurrentProcess(v17, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(v57),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v19 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v19 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      if ( v19 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v19 + 480) & 0x1000000) != 0 )
          {
            v23 = *(unsigned int *)(v19 + 1224);
            if ( (v23 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v68, v69);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v70, v72, v73);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              while ( 1 )
              {
                v84 = gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                v78 = *(_QWORD *)v84;
                *((_QWORD *)v84 + 2) = 0LL;
                if ( !*(_DWORD *)(v78 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v75, v74, v76, v77);
                v81 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v81 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v80, v79, v82, v83);
                ExReleaseResourceAndLeaveCriticalRegion(*v81);
                HMUnlockObject(*(_QWORD *)v84);
                tagDomLock::LockExclusive((tagDomLock *)v81);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    v24 = v116;
    if ( !v112 && inited >= 0 )
      inited = xxxInitProcessInfo(v116, PrimaryToken, v107);
    if ( PrimaryToken )
      PsDereferencePrimaryToken(PrimaryToken);
    if ( inited < 0 )
      DestroyProcessInfo(v24);
    UserSessionSwitchLeaveCrit(v23);
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)v24);
      v50 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          v120 = 0;
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v50);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v121 = *(_QWORD *)v24;
          v118 = v50;
          v119 = 1;
          inited = UserJobCallout();
          v52 = (struct _ERESOURCE *)PsGetJobLock(v50);
          ExReleaseResourceAndLeaveCriticalRegion(v52);
        }
      }
    }
  }
  else
  {
    v27 = &WPP_343d128d714e312b04193adc3f9faf5c_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        14,
        31,
        (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
    }
    v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27);
    if ( v29 )
      v29[1] = KeQueryPerformanceCounter(0LL);
    v127 = 0LL;
    v30 = 1;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v126 = 1;
      v85 = PsGetCurrentThreadWin32Thread(v28);
      v125 = v85;
      if ( v85 && (*(int *)(v85 + 24) > 0 || *(_DWORD *)(v125 + 48)) )
      {
        EtwActivityIdControl(3u, &v127);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v113 = v126;
          v141 = 4LL;
          v140 = &v113;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &v127,
            0LL,
            3u,
            &v139);
        }
      }
    }
    else
    {
      v125 = 0LL;
    }
    while ( 1 )
    {
      v31 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v31 )
        v2 = *v31;
      v34 = (PVOID)PsGetCurrentProcess(v33, v32);
      if ( v34 )
      {
        if ( v34 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v36, v35) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v125
      && (*(_DWORD *)(v125 + 48) || *(int *)(v125 + 24) > 0) )
    {
      *(_DWORD *)(v125 + 44) = 1;
      *(GUID *)(v125 + 28) = v127;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v145 = 0;
          v114 = v126;
          v144 = 4;
          v143 = &v114;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &v127,
            0LL,
            3u,
            &v142);
          v86 = dword_1C0246A70;
        }
        if ( v86 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v149 = 0;
          v115 = v126;
          v148 = 4;
          v147 = &v115;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &v127,
            0LL,
            3u,
            &v146);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v60 = PsGetCurrentProcess(v38, v37),
          v61 = PsGetProcessSessionIdEx(v60),
          v62 = PsGetCurrentThreadProcess(),
          v61 == (unsigned int)PsGetProcessSessionIdEx(v62)) )
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
        v89 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v89 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v88, v87, v90, v91);
        if ( ExIsResourceAcquiredExclusiveLite(*v89) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v94, v95);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v89);
        while ( 1 )
        {
          v106 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v100 = *(_QWORD *)v106;
          *((_QWORD *)v106 + 2) = 0LL;
          if ( !*(_DWORD *)(v100 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v97, v96, v98, v99);
          v103 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v103 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v102, v101, v104, v105);
          ExReleaseResourceAndLeaveCriticalRegion(*v103);
          HMUnlockObject(*(_QWORD *)v106);
          tagDomLock::LockExclusive((tagDomLock *)v103);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v89);
      }
    }
    if ( gpepCSRSS && *(PVOID *)a1 == gpepCSRSS )
    {
      if ( isInputVirtualizationEnabled() && gpkeIVThreadShutdown )
        KeSetEvent(gpkeIVThreadShutdown, 1, 0);
    }
    else
    {
      v30 = 0;
    }
    v44 = -1073741637;
    if ( *(_QWORD *)a1 && PsGetProcessJob(*(_QWORD *)a1) )
    {
      v45 = qword_1C0252958 ? qword_1C0252958() : -1073741637;
      if ( v45 >= 0 && qword_1C0252960 )
        qword_1C0252960(a1);
    }
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v47 = giheLast;
      for ( i = (char *)qword_1C024AD48 + 32 * (unsigned int)giheLast; i > (char *)qword_1C024AD48 && !i[24]; i -= 32 )
        giheLast = --v47;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      v53 = (__int64 *)(gpDispInfo + 24);
      v54 = *(__int64 **)(gpDispInfo + 24);
      if ( v54 )
      {
        do
        {
          v55 = (__int64)v54;
          if ( (v54[8] & 0x400000) != 0 )
          {
            DestroyCacheDC(v53, v54[1]);
            v55 = *v53;
          }
          v56 = v55;
          if ( v54 == (__int64 *)v55 )
            v56 = *v54;
          else
            v54 = v53;
          v53 = v54;
          v54 = (__int64 *)v56;
        }
        while ( v56 );
      }
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      if ( qword_1C0251980 )
        v44 = qword_1C0251980();
      if ( v44 >= 0 && qword_1C0251988 )
        qword_1C0251988(0LL);
      if ( v30 && gpInputExtensibilityCallout )
        InputExtensibilityCallout::CloseCoreMsgPort(v46);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit(v46);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v25,
      14,
      32,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  }
  return (unsigned int)inited;
}
