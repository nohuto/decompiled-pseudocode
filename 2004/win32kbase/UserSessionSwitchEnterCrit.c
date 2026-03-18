/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C0033CC0
 * Callers:
 *     AcquireCriticalSectionAndCheckState @ 0x1C005BBD0 (AcquireCriticalSectionAndCheckState.c)
 *     NtUserEnumDisplaySettings @ 0x1C00A3BF0 (NtUserEnumDisplaySettings.c)
 *     NtUserEnumDisplayDevices @ 0x1C00B4930 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UserSessionSwitchEnterCrit()
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v1; // rbx
  struct tagTHREADINFO **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct tagKERNELHANDLETABLEENTRY *i; // rsi
  PVOID v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  LARGE_INTEGER *v41; // rbx
  struct tagTHREADINFO *v42; // rbx
  struct tagTHREADINFO **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PVOID v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _KTHREAD *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  PERESOURCE *v62; // rbx
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
  struct tagKERNELHANDLETABLEENTRY *j; // rsi
  __int64 v74; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v77; // rax
  int v78; // ebx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  PERESOURCE *v88; // rdi
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rbx
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  PERESOURCE *v104; // rdi
  __int64 v105; // r8
  __int64 v106; // r9
  int v107; // [rsp+38h] [rbp-D0h] BYREF
  int v108; // [rsp+3Ch] [rbp-CCh] BYREF
  int v109; // [rsp+40h] [rbp-C8h] BYREF
  int v110; // [rsp+44h] [rbp-C4h] BYREF
  int v111; // [rsp+48h] [rbp-C0h] BYREF
  int v112; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v113; // [rsp+50h] [rbp-B8h]
  unsigned __int8 ActivityId_4; // [rsp+58h] [rbp-B0h]
  GUID ActivityId_8; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v116; // [rsp+70h] [rbp-98h]
  unsigned __int8 v117; // [rsp+78h] [rbp-90h]
  GUID v118; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+90h] [rbp-78h] BYREF
  int *v120; // [rsp+B0h] [rbp-58h]
  __int64 v121; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+C0h] [rbp-48h] BYREF
  int *v123; // [rsp+E0h] [rbp-28h]
  __int64 v124; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+F0h] [rbp-18h] BYREF
  int *v126; // [rsp+110h] [rbp+8h]
  __int64 v127; // [rsp+118h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+120h] [rbp+18h] BYREF
  int *v129; // [rsp+140h] [rbp+38h]
  __int64 v130; // [rsp+148h] [rbp+40h]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+150h] [rbp+48h] BYREF
  int *v132; // [rsp+170h] [rbp+68h]
  __int64 v133; // [rsp+178h] [rbp+70h]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+180h] [rbp+78h] BYREF
  int *v135; // [rsp+1A0h] [rbp+98h]
  __int64 v136; // [rsp+1A8h] [rbp+A0h]
  struct _EVENT_DATA_DESCRIPTOR v137; // [rsp+1B0h] [rbp+A8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v80 = PsGetCurrentThreadWin32Thread();
    v113 = v80;
    if ( v80 && (*(int *)(v80 + 24) > 0 || *(_DWORD *)(v113 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v81, v82) )
        {
          v107 = ActivityId_4;
          v121 = 4LL;
          v120 = &v107;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0246A70,
            (int)&dword_1C0213E87,
            (int)&ActivityId_8,
            0,
            3u,
            &v119);
        }
      }
    }
  }
  else
  {
    v113 = 0LL;
  }
  v1 = 0LL;
  while ( 1 )
  {
    v2 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v2 )
      v1 = *v2;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v3);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v1 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v113 && (*(_DWORD *)(v113 + 48) || *(int *)(v113 + 24) > 0) )
  {
    *(_DWORD *)(v113 + 44) = 1;
    *(GUID *)(v113 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v8) )
      {
        v108 = ActivityId_4;
        v124 = 4LL;
        v123 = &v108;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C0246A70,
          (int)&dword_1C0213E30,
          (int)&ActivityId_8,
          0,
          3u,
          &v122);
        v83 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v83 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v83, v84) )
      {
        v109 = ActivityId_4;
        v127 = 4LL;
        v126 = &v109;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C0246A70,
          (int)&dword_1C0213E5D,
          (int)&ActivityId_8,
          0,
          3u,
          &v125);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v1;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v74 = PsGetCurrentProcess(v10, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(v74),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13, v15, v16);
    if ( v12 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v12 + 480) & 0x1000000) != 0 )
        {
          v20 = *(unsigned int *)(v12 + 1224);
          if ( (v20 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24, v25);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
              v85 = *(_QWORD *)i;
              *((_QWORD *)i + 2) = 0LL;
              if ( !*(_DWORD *)(v85 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
              v88 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v88 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v87, v86, v89, v90);
              ExReleaseResourceAndLeaveCriticalRegion(*v88);
              HMUnlockObject(*(_QWORD *)i);
              tagDomLock::LockExclusive((tagDomLock *)v88);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  while ( gfSwitchInProgress )
  {
    v36 = (PVOID)PsGetCurrentProcess(v20, v19);
    if ( v36 && v36 == g_pepDwm )
      break;
    ++gcSwitchInProgressWaiters;
    v40 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    if ( qword_1C0252B48 )
      qword_1C0252B48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v37, v38, v39);
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
      v91 = PsGetCurrentThreadWin32Thread();
      v94 = v91;
      if ( v91 )
      {
        v95 = *(_DWORD *)(v91 + 24);
        if ( (*(_DWORD *)(v94 + 44) || *(_DWORD *)(v94 + 48) || v95 > 0)
          && (unsigned int)dword_1C0246A70 > 6
          && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v92, v93) )
        {
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E11, v94 + 28, 0, 2u, &v137);
        }
        *(_DWORD *)(v94 + 44) = 0;
        *(_OWORD *)(v94 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v41 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v41 )
      v41[1] = KeQueryPerformanceCounter(0LL);
    v118 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v117 = 1;
      v96 = PsGetCurrentThreadWin32Thread();
      v116 = v96;
      if ( v96 && (*(int *)(v96 + 24) > 0 || *(_DWORD *)(v116 + 48)) )
      {
        EtwActivityIdControl(3u, &v118);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v97, v98) )
          {
            v110 = v117;
            v130 = 4LL;
            v129 = &v110;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E87, (int)&v118, 0, 3u, &v128);
          }
        }
      }
    }
    else
    {
      v116 = 0LL;
    }
    v42 = 0LL;
    while ( 1 )
    {
      v43 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v43 )
        v42 = *v43;
      v46 = (PVOID)PsGetCurrentProcess(v45, v44);
      if ( v46 )
      {
        if ( v46 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v48, v47) == gpepCSRSS && v42 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v42 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v116
      && (*(_DWORD *)(v116 + 48) || *(int *)(v116 + 24) > 0) )
    {
      *(_DWORD *)(v116 + 44) = 1;
      *(GUID *)(v116 + 28) = v118;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v49) )
        {
          v111 = v117;
          v133 = 4LL;
          v132 = &v111;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E30, (int)&v118, 0, 3u, &v131);
          v99 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v99 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v99, v100) )
        {
          v112 = v117;
          v136 = 4LL;
          v135 = &v112;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E5D, (int)&v118, 0, 3u, &v134);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v42;
    gbValidateHandleForIL = 1;
    if ( (unsigned __int8)KeIsAttachedProcess() )
    {
      v77 = PsGetCurrentProcess(v51, v50);
      v78 = PsGetProcessSessionIdEx(v77);
      v79 = PsGetCurrentThreadProcess();
      if ( v78 != (unsigned int)PsGetProcessSessionIdEx(v79) )
        continue;
    }
    v52 = KeGetCurrentThread();
    v53 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      v58 = (__int64 *)PsGetThreadWin32Thread(v52);
      if ( v58 )
        v53 = *v58;
    }
    v59 = PsGetCurrentProcessWin32Process(v55, v54, v56, v57);
    if ( v53 )
    {
      if ( v59 )
      {
        if ( (*(_DWORD *)(v53 + 480) & 0x1000000) != 0 )
        {
          v20 = *(unsigned int *)(v53 + 1224);
          if ( (v20 & 0x80u) == 0LL && (*(_DWORD *)(v59 + 12) & 0x8000) != 0 )
          {
            v62 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v62 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v63, v64);
            if ( ExIsResourceAcquiredExclusiveLite(*v62) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v67, v68);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v62);
            for ( j = gpducstulHead; gpducstulHead; j = gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)j + 2);
              v101 = *(_QWORD *)j;
              *((_QWORD *)j + 2) = 0LL;
              if ( !*(_DWORD *)(v101 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, v69, v71, v72);
              v104 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v104 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v103, v102, v105, v106);
              ExReleaseResourceAndLeaveCriticalRegion(*v104);
              HMUnlockObject(*(_QWORD *)j);
              tagDomLock::LockExclusive((tagDomLock *)v104);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v62);
          }
        }
      }
    }
  }
  return 0LL;
}
