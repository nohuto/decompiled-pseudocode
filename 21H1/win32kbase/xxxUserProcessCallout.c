/*
 * XREFs of xxxUserProcessCallout @ 0x1C0066B70
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C001EAB8 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C002A338 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     UserJobCallout @ 0x1C005E628 (UserJobCallout.c)
 *     isInputVirtualizationEnabled @ 0x1C006588C (isInputVirtualizationEnabled.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     xxxInitProcessInfo @ 0x1C006A66C (xxxInitProcessInfo.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rcx
  struct _W32PROCESS *v25; // rdi
  int v26; // edx
  const union _LARGE_INTEGER *v28; // rcx
  __int64 v29; // rcx
  LARGE_INTEGER *v30; // rbx
  char v31; // r15
  struct tagTHREADINFO **v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  PVOID v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _KTHREAD *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rax
  int v46; // esi
  int v47; // eax
  InputExtensibilityCallout *v48; // rcx
  int v49; // ecx
  char *i; // rax
  __int64 ProcessJob; // rax
  __int64 v52; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v54; // rax
  _QWORD *v55; // rdi
  _QWORD *v56; // rbx
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  PERESOURCE *v76; // rdi
  struct tagKERNELHANDLETABLEENTRY *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  PERESOURCE *v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  PERESOURCE *v89; // rdi
  struct tagKERNELHANDLETABLEENTRY *v90; // rsi
  int v91; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v92; // [rsp+34h] [rbp-CCh] BYREF
  int v93; // [rsp+3Ch] [rbp-C4h] BYREF
  int v94; // [rsp+40h] [rbp-C0h] BYREF
  int v95; // [rsp+44h] [rbp-BCh] BYREF
  int v96; // [rsp+48h] [rbp-B8h]
  int v97; // [rsp+4Ch] [rbp-B4h] BYREF
  int v98; // [rsp+50h] [rbp-B0h] BYREF
  int v99; // [rsp+54h] [rbp-ACh] BYREF
  struct _W32PROCESS *v100; // [rsp+58h] [rbp-A8h]
  PACCESS_TOKEN PrimaryToken; // [rsp+60h] [rbp-A0h]
  __int64 v102; // [rsp+68h] [rbp-98h]
  int v103; // [rsp+70h] [rbp-90h]
  int v104; // [rsp+74h] [rbp-8Ch]
  __int64 v105; // [rsp+78h] [rbp-88h]
  __int64 v106; // [rsp+80h] [rbp-80h]
  unsigned __int8 v107; // [rsp+88h] [rbp-78h]
  GUID ActivityId; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v109; // [rsp+A0h] [rbp-60h]
  unsigned __int8 v110; // [rsp+A8h] [rbp-58h]
  GUID v111; // [rsp+ACh] [rbp-54h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+C0h] [rbp-40h] BYREF
  int *v113; // [rsp+E0h] [rbp-20h]
  __int64 v114; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+F0h] [rbp-10h] BYREF
  int *v116; // [rsp+110h] [rbp+10h]
  int v117; // [rsp+118h] [rbp+18h]
  int v118; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+120h] [rbp+20h] BYREF
  int *v120; // [rsp+140h] [rbp+40h]
  int v121; // [rsp+148h] [rbp+48h]
  int v122; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+150h] [rbp+50h] BYREF
  int *v124; // [rsp+170h] [rbp+70h]
  __int64 v125; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+180h] [rbp+80h] BYREF
  int *v127; // [rsp+1A0h] [rbp+A0h]
  int v128; // [rsp+1A8h] [rbp+A8h]
  int v129; // [rsp+1ACh] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR v130; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v131; // [rsp+1D0h] [rbp+D0h]
  int v132; // [rsp+1D8h] [rbp+D8h]
  int v133; // [rsp+1DCh] [rbp+DCh]

  v2 = 0LL;
  v100 = a1;
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
    v96 = v6 & 0x8000;
    v92 = 0LL;
    PrimaryToken = 0LL;
    v91 = 0;
    if ( (v6 & 0x8000) == 0 )
    {
      PrimaryToken = PsReferencePrimaryToken(*v3);
      if ( PrimaryToken )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)v3,
                   PrimaryToken,
                   (enum _PROCESS_IMMERSIVE_TYPE *)((char *)&v92 + 4),
                   &v92,
                   &v91);
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
      v107 = 1;
      v65 = PsGetCurrentThreadWin32Thread(v8);
      v106 = v65;
      if ( v65 && (*(int *)(v65 + 24) > 0 || *(_DWORD *)(v106 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v66, v67) )
          {
            v93 = v107;
            v114 = 4LL;
            v113 = &v93;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId,
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
      && v106
      && (*(_DWORD *)(v106 + 48) || *(int *)(v106 + 24) > 0) )
    {
      *(_DWORD *)(v106 + 44) = 1;
      *(GUID *)(v106 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v16) )
        {
          v118 = 0;
          v94 = v107;
          v117 = 4;
          v116 = &v94;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &ActivityId,
            0LL,
            3u,
            &v115);
          v68 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v68 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v68, v69) )
        {
          v122 = 0;
          v95 = v107;
          v121 = 4;
          v120 = &v95;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &ActivityId,
            0LL,
            3u,
            &v119);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v59 = PsGetCurrentProcess(v18, v17),
          ProcessSessionId = PsGetProcessSessionIdEx(v59),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v20 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v20 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
      if ( v20 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v20 + 480) & 0x1000000) != 0 )
          {
            v24 = *(unsigned int *)(v20 + 1216);
            if ( (v24 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v70);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v72);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              while ( 1 )
              {
                v77 = gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                v74 = *(_QWORD *)v77;
                *((_QWORD *)v77 + 2) = 0LL;
                if ( !*(_DWORD *)(v74 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v73);
                v76 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v76 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v75);
                ExReleaseResourceAndLeaveCriticalRegion(*v76);
                HMUnlockObject(*(_QWORD *)v77);
                tagDomLock::LockExclusive((tagDomLock *)v76);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    v25 = v100;
    if ( !v96 && inited >= 0 )
      inited = xxxInitProcessInfo(v100, PrimaryToken, v91);
    if ( PrimaryToken )
      PsDereferencePrimaryToken(PrimaryToken);
    if ( inited < 0 )
      DestroyProcessInfo(v25);
    UserSessionSwitchLeaveCrit(v24);
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)v25);
      v52 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          v104 = 0;
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v52);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v105 = *(_QWORD *)v25;
          v102 = v52;
          v103 = 1;
          inited = UserJobCallout();
          v54 = (struct _ERESOURCE *)PsGetJobLock(v52);
          ExReleaseResourceAndLeaveCriticalRegion(v54);
        }
      }
    }
  }
  else
  {
    v28 = &WPP_343d128d714e312b04193adc3f9faf5c_Traceguids;
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
    v30 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v28);
    if ( v30 )
      v30[1] = KeQueryPerformanceCounter(0LL);
    v111 = 0LL;
    v31 = 1;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v110 = 1;
      v78 = PsGetCurrentThreadWin32Thread(v29);
      v109 = v78;
      if ( v78 && (*(int *)(v78 + 24) > 0 || *(_DWORD *)(v109 + 48)) )
      {
        EtwActivityIdControl(3u, &v111);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v79, v80) )
          {
            v97 = v110;
            v125 = 4LL;
            v124 = &v97;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v111,
              0LL,
              3u,
              &v123);
          }
        }
      }
    }
    else
    {
      v109 = 0LL;
    }
    while ( 1 )
    {
      v32 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v32 )
        v2 = *v32;
      v35 = (PVOID)PsGetCurrentProcess(v34, v33);
      if ( v35 )
      {
        if ( v35 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v37, v36) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
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
      && v109
      && (*(_DWORD *)(v109 + 48) || *(int *)(v109 + 24) > 0) )
    {
      *(_DWORD *)(v109 + 44) = 1;
      *(GUID *)(v109 + 28) = v111;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v38) )
        {
          v129 = 0;
          v98 = v110;
          v128 = 4;
          v127 = &v98;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v111,
            0LL,
            3u,
            &v126);
          v81 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v81 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v81, v82) )
        {
          v133 = 0;
          v99 = v110;
          v132 = 4;
          v131 = &v99;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v111,
            0LL,
            3u,
            &v130);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v62 = PsGetCurrentProcess(v40, v39),
          v63 = PsGetProcessSessionIdEx(v62),
          v64 = PsGetCurrentThreadProcess(),
          v63 == (unsigned int)PsGetProcessSessionIdEx(v64)) )
    {
      v41 = KeGetCurrentThread();
      v42 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v44 = (__int64 *)PsGetThreadWin32Thread(v41);
        if ( v44 )
          v42 = *v44;
      }
      v45 = PsGetCurrentProcessWin32Process(v43);
      if ( v42
        && v45
        && (*(_DWORD *)(v42 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v42 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v45 + 12) & 0x8000) != 0 )
      {
        v84 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v84 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v83);
        if ( ExIsResourceAcquiredExclusiveLite(*v84) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v85);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v84);
        while ( 1 )
        {
          v90 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v87 = *(_QWORD *)v90;
          *((_QWORD *)v90 + 2) = 0LL;
          if ( !*(_DWORD *)(v87 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v86);
          v89 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v89 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v88);
          ExReleaseResourceAndLeaveCriticalRegion(*v89);
          HMUnlockObject(*(_QWORD *)v90);
          tagDomLock::LockExclusive((tagDomLock *)v89);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v84);
      }
    }
    if ( gpepCSRSS && *(PVOID *)a1 == gpepCSRSS )
    {
      if ( isInputVirtualizationEnabled() && gpkeIVThreadShutdown )
        KeSetEvent(gpkeIVThreadShutdown, 1, 0);
    }
    else
    {
      v31 = 0;
    }
    v46 = -1073741637;
    if ( *(_QWORD *)a1 && PsGetProcessJob(*(_QWORD *)a1) )
    {
      v47 = qword_1C0258918 ? qword_1C0258918() : -1073741637;
      if ( v47 >= 0 && qword_1C0258920 )
        qword_1C0258920(a1);
    }
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v49 = giheLast;
      for ( i = (char *)qword_1C0250D48 + 32 * (unsigned int)giheLast; i > (char *)qword_1C0250D48 && !i[24]; i -= 32 )
        giheLast = --v49;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      v55 = (_QWORD *)(gpDispInfo + 24);
      v56 = *(_QWORD **)(gpDispInfo + 24);
      if ( v56 )
      {
        do
        {
          v57 = v56;
          if ( (v56[8] & 0x400000) != 0 )
          {
            DestroyCacheDC(v55, v56[1]);
            v57 = (_QWORD *)*v55;
          }
          v58 = v57;
          if ( v56 == v57 )
            v58 = (_QWORD *)*v56;
          else
            v56 = v55;
          v55 = v56;
          v56 = v58;
        }
        while ( v58 );
      }
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      if ( qword_1C0257940 )
        v46 = qword_1C0257940();
      if ( v46 >= 0 && qword_1C0257948 )
        qword_1C0257948(0LL);
      if ( v31 && gpInputExtensibilityCallout )
        InputExtensibilityCallout::CloseCoreMsgPort(v48);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit(v48);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v26,
      14,
      32,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  }
  return (unsigned int)inited;
}
