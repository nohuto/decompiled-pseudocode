/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C00511E0
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C000C3B0 (NtUserEnumDisplaySettings.c)
 *     NtUserEnumDisplayDevices @ 0x1C00532A0 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00BC040 (AcquireCriticalSectionAndCheckState.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
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
  __int64 *i; // rsi
  PVOID v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  LARGE_INTEGER *v47; // rbx
  struct tagTHREADINFO *v48; // rbx
  struct tagTHREADINFO **v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PVOID v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct _KTHREAD *v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  PERESOURCE *v70; // rbx
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
  __int64 *j; // rsi
  __int64 v82; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v85; // rax
  int v86; // ebx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  PERESOURCE *v96; // rdi
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rbx
  int v103; // eax
  __int64 v104; // rax
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  PERESOURCE *v112; // rdi
  __int64 v113; // r8
  __int64 v114; // r9
  int v115; // [rsp+38h] [rbp-D0h] BYREF
  int v116; // [rsp+3Ch] [rbp-CCh] BYREF
  int v117; // [rsp+40h] [rbp-C8h] BYREF
  int v118; // [rsp+44h] [rbp-C4h] BYREF
  int v119; // [rsp+48h] [rbp-C0h] BYREF
  int v120; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v121; // [rsp+50h] [rbp-B8h]
  unsigned __int8 ActivityId_4; // [rsp+58h] [rbp-B0h]
  GUID ActivityId_8; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v124; // [rsp+70h] [rbp-98h]
  unsigned __int8 v125; // [rsp+78h] [rbp-90h]
  GUID v126; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v127; // [rsp+90h] [rbp-78h] BYREF
  int *v128; // [rsp+B0h] [rbp-58h]
  __int64 v129; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v130; // [rsp+C0h] [rbp-48h] BYREF
  int *v131; // [rsp+E0h] [rbp-28h]
  __int64 v132; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v133; // [rsp+F0h] [rbp-18h] BYREF
  int *v134; // [rsp+110h] [rbp+8h]
  __int64 v135; // [rsp+118h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR v136; // [rsp+120h] [rbp+18h] BYREF
  int *v137; // [rsp+140h] [rbp+38h]
  __int64 v138; // [rsp+148h] [rbp+40h]
  struct _EVENT_DATA_DESCRIPTOR v139; // [rsp+150h] [rbp+48h] BYREF
  int *v140; // [rsp+170h] [rbp+68h]
  __int64 v141; // [rsp+178h] [rbp+70h]
  struct _EVENT_DATA_DESCRIPTOR v142; // [rsp+180h] [rbp+78h] BYREF
  int *v143; // [rsp+1A0h] [rbp+98h]
  __int64 v144; // [rsp+1A8h] [rbp+A0h]
  struct _EVENT_DATA_DESCRIPTOR v145; // [rsp+1B0h] [rbp+A8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v88 = PsGetCurrentThreadWin32Thread(v1);
    v121 = v88;
    if ( v88 && (*(int *)(v88 + 24) > 0 || *(_DWORD *)(v121 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v89, v90) )
        {
          v115 = ActivityId_4;
          v129 = 4LL;
          v128 = &v115;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0244A70,
            (int)&dword_1C0211E87,
            (int)&ActivityId_8,
            0,
            3u,
            &v127);
        }
      }
    }
  }
  else
  {
    v121 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v121 && (*(_DWORD *)(v121 + 48) || *(int *)(v121 + 24) > 0) )
  {
    *(_DWORD *)(v121 + 44) = 1;
    *(GUID *)(v121 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v10) )
      {
        v116 = ActivityId_4;
        v132 = 4LL;
        v131 = &v116;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C0244A70,
          (int)&dword_1C0211E30,
          (int)&ActivityId_8,
          0,
          3u,
          &v130);
        v91 = (unsigned int)dword_1C0244A70;
      }
      if ( (unsigned int)v91 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v91, v92) )
      {
        v117 = ActivityId_4;
        v135 = 4LL;
        v134 = &v117;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C0244A70,
          (int)&dword_1C0211E5D,
          (int)&ActivityId_8,
          0,
          3u,
          &v133);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v82 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v82),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16, v15, v17, v18);
    if ( v14 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v14 + 488) & 0x1000000) != 0 )
        {
          v22 = *(unsigned int *)(v14 + 1232);
          if ( (v22 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v21, v23, v24);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28, v29);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              v93 = *i;
              i[2] = 0LL;
              if ( !*(_DWORD *)(v93 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
              v96 = (PERESOURCE *)GetDomainLockRef(12LL, v34, v36, v37);
              if ( v96 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v95, v94, v97, v98);
              ExReleaseResourceAndLeaveCriticalRegion(*v96);
              HMUnlockObject(*i);
              tagDomLock::LockExclusive(v96);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  while ( gfSwitchInProgress )
  {
    v40 = (PVOID)PsGetCurrentProcess(v22, v21);
    if ( v40 && v40 == g_pepDwm )
      break;
    ++gcSwitchInProgressWaiters;
    v44 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    if ( qword_1C0250B48 )
      qword_1C0250B48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v41, v42, v43);
      v44 = (unsigned int)gdwInAtomicOperation;
      if ( (_DWORD)gdwInAtomicOperation )
      {
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v99 = PsGetCurrentThreadWin32Thread(v44);
      v102 = v99;
      if ( v99 )
      {
        v103 = *(_DWORD *)(v99 + 24);
        if ( (*(_DWORD *)(v102 + 44) || *(_DWORD *)(v102 + 48) || v103 > 0)
          && (unsigned int)dword_1C0244A70 > 6
          && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v100, v101) )
        {
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E11, v102 + 28, 0, 2u, &v145);
        }
        *(_DWORD *)(v102 + 44) = 0;
        *(_OWORD *)(v102 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v47 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v45);
    if ( v47 )
      v47[1] = KeQueryPerformanceCounter(0LL);
    v126 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v125 = 1;
      v104 = PsGetCurrentThreadWin32Thread(v46);
      v124 = v104;
      if ( v104 && (*(int *)(v104 + 24) > 0 || *(_DWORD *)(v124 + 48)) )
      {
        EtwActivityIdControl(3u, &v126);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v105, v106) )
          {
            v118 = v125;
            v138 = 4LL;
            v137 = &v118;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&v126, 0, 3u, &v136);
          }
        }
      }
    }
    else
    {
      v124 = 0LL;
    }
    v48 = 0LL;
    while ( 1 )
    {
      v49 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v49 )
        v48 = *v49;
      v52 = (PVOID)PsGetCurrentProcess(v51, v50);
      if ( v52 )
      {
        if ( v52 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v54, v53) == gpepCSRSS && v48 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v48 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v124
      && (*(_DWORD *)(v124 + 48) || *(int *)(v124 + 24) > 0) )
    {
      *(_DWORD *)(v124 + 44) = 1;
      *(GUID *)(v124 + 28) = v126;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v55) )
        {
          v119 = v125;
          v141 = 4LL;
          v140 = &v119;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&v126, 0, 3u, &v139);
          v107 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v107 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v107, v108) )
        {
          v120 = v125;
          v144 = 4LL;
          v143 = &v120;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&v126, 0, 3u, &v142);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v48;
    gbValidateHandleForIL = 1;
    if ( (unsigned __int8)KeIsAttachedProcess() )
    {
      v85 = PsGetCurrentProcess(v57, v56);
      v86 = PsGetProcessSessionIdEx(v85);
      v87 = PsGetCurrentThreadProcess();
      if ( v86 != (unsigned int)PsGetProcessSessionIdEx(v87) )
        continue;
    }
    v58 = KeGetCurrentThread();
    v59 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      v64 = (__int64 *)PsGetThreadWin32Thread(v58);
      if ( v64 )
        v59 = *v64;
    }
    v65 = PsGetCurrentProcessWin32Process(v61, v60, v62, v63);
    if ( v59 )
    {
      if ( v65 )
      {
        if ( (*(_DWORD *)(v59 + 488) & 0x1000000) != 0 )
        {
          v22 = *(unsigned int *)(v59 + 1232);
          if ( (v22 & 0x80u) == 0LL && (*(_DWORD *)(v65 + 12) & 0x8000) != 0 )
          {
            v70 = (PERESOURCE *)GetDomainLockRef(12LL, v21, v66, v67);
            if ( v70 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v69, v68, v71, v72);
            if ( ExIsResourceAcquiredExclusiveLite(*v70) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v74, v73, v75, v76);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v70);
            for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)j[2];
              v109 = *j;
              j[2] = 0LL;
              if ( !*(_DWORD *)(v109 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v78, v77, v79, v80);
              v112 = (PERESOURCE *)GetDomainLockRef(12LL, v77, v79, v80);
              if ( v112 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v111, v110, v113, v114);
              ExReleaseResourceAndLeaveCriticalRegion(*v112);
              HMUnlockObject(*j);
              tagDomLock::LockExclusive(v112);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v70);
          }
        }
      }
    }
  }
  return 0LL;
}
