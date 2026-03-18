/*
 * XREFs of W32CalloutDispatch @ 0x1C00297E0
 * Callers:
 *     <none>
 * Callees:
 *     ActivationObjectCallout @ 0x1C0028B7C (ActivationObjectCallout.c)
 *     UserPowerStateCallout @ 0x1C0028BDC (UserPowerStateCallout.c)
 *     UserProcessThawCallout @ 0x1C0028FA4 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C002953C (UserProcessFreezeCallout.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C002A03C (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ParseWindowStation @ 0x1C002A0C0 (ParseWindowStation.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C002A1AC (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     RIMObjectManagerCallout @ 0x1C002A3B8 (RIMObjectManagerCallout.c)
 *     UserJobCallout @ 0x1C002A448 (UserJobCallout.c)
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 *     CoreMsgObjectCallout @ 0x1C002C73C (CoreMsgObjectCallout.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     QueuePowerRequest @ 0x1C006FFD0 (QueuePowerRequest.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1C00CB868 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     IsProcessWin32kLockedOut @ 0x1C00CB910 (IsProcessWin32kLockedOut.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C011C360 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1C011C3A8 (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     UserProcessTimerDelayCallout @ 0x1C01211B4 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C0121694 (UserProcessTimerStatisticsCallout.c)
 *     ApiSetEditionIsPerJobObjectAtomTableSupported @ 0x1C01C64DC (ApiSetEditionIsPerJobObjectAtomTableSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
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
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
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
  struct tagKERNELHANDLETABLEENTRY *i; // r14
  __int64 v39; // r14
  struct _KTHREAD *v40; // r12
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 ProcessJob; // rax
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 ProcessWin32WindowStation; // rdx
  __int64 v55; // r8
  __int64 result; // rax
  __int64 (__fastcall *v57)(__int64 *); // rax
  unsigned int v58; // esi
  __int64 v59; // rcx
  __int64 v60; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v63; // r8
  LARGE_INTEGER *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  struct tagTHREADINFO *v68; // rbx
  struct tagTHREADINFO **v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  PVOID v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rax
  __int64 v83; // rcx
  struct _KTHREAD *v84; // rdi
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  PERESOURCE *v94; // rbx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  struct tagKERNELHANDLETABLEENTRY *j; // r14
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  PERESOURCE *v109; // rdi
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  PERESOURCE *v120; // rdi
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rax
  int v124; // ebx
  __int64 v125; // rax
  _QWORD *v127; // r14
  __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rbx
  int v132; // eax
  int v133; // [rsp+30h] [rbp-D0h] BYREF
  int v134; // [rsp+34h] [rbp-CCh] BYREF
  int v135; // [rsp+38h] [rbp-C8h] BYREF
  int v136; // [rsp+3Ch] [rbp-C4h] BYREF
  int v137; // [rsp+40h] [rbp-C0h] BYREF
  int v138; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v139; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v140; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v141; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v143; // [rsp+70h] [rbp-90h]
  unsigned __int8 v144; // [rsp+78h] [rbp-88h]
  GUID v145; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v146; // [rsp+90h] [rbp-70h] BYREF
  int *v147; // [rsp+B0h] [rbp-50h]
  __int64 v148; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v149; // [rsp+C0h] [rbp-40h] BYREF
  int *v150; // [rsp+E0h] [rbp-20h]
  __int64 v151; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v152; // [rsp+F0h] [rbp-10h] BYREF
  int *v153; // [rsp+110h] [rbp+10h]
  __int64 v154; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v155; // [rsp+120h] [rbp+20h] BYREF
  int *v156; // [rsp+140h] [rbp+40h]
  __int64 v157; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v158; // [rsp+150h] [rbp+50h] BYREF
  int *v159; // [rsp+170h] [rbp+70h]
  __int64 v160; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v161; // [rsp+180h] [rbp+80h] BYREF
  int *v162; // [rsp+1A0h] [rbp+A0h]
  __int64 v163; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v164; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( qword_1C024F950 && (int)qword_1C024F950() >= 0 && qword_1C024F958 && (unsigned int)qword_1C024F958() && a2 > 1 )
    return 3221227292LL;
  if ( a2 == 7 )
  {
    if ( qword_1C024F960 && (int)qword_1C024F960() >= 0 && qword_1C024F968 )
      qword_1C024F968();
    return 0LL;
  }
  if ( a2 == 2 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v145 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v144 = 1;
      v112 = PsGetCurrentThreadWin32Thread();
      v143 = v112;
      if ( v112 && (*(int *)(v112 + 24) > 0 || *(_DWORD *)(v143 + 48)) )
      {
        EtwActivityIdControl(3u, &v145);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v113, v114) )
          {
            v136 = v144;
            v157 = 4LL;
            v156 = &v136;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&v145, 0, 3u, &v155);
          }
        }
      }
    }
    else
    {
      v143 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v143
      && (*(_DWORD *)(v143 + 48) || *(int *)(v143 + 24) > 0) )
    {
      *(_DWORD *)(v143 + 44) = 1;
      *(GUID *)(v143 + 28) = v145;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v14) )
        {
          v137 = v144;
          v160 = 4LL;
          v159 = &v137;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&v145, 0, 3u, &v158);
          v115 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v115 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v115, v116) )
        {
          v138 = v144;
          v163 = 4LL;
          v162 = &v138;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&v145, 0, 3u, &v161);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v60 = PsGetCurrentProcess(v16, v15),
          ProcessSessionId = PsGetProcessSessionIdEx(v60),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v18 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v18 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20, v19, v21, v22);
      if ( v18
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v18 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v18 + 1232) & 0x80u) == 0
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
          v117 = *(_QWORD *)i;
          *((_QWORD *)i + 2) = 0LL;
          if ( !*(_DWORD *)(v117 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
          v120 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v120 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v119, v118, v121, v122);
          ExReleaseResourceAndLeaveCriticalRegion(*v120);
          HMUnlockObject(*(_QWORD *)i);
          tagDomLock::LockExclusive((tagDomLock *)v120);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v139 = 0LL;
    v39 = 0LL;
    v40 = KeGetCurrentThread();
    v41 = 0LL;
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v123 = PsGetCurrentProcess(v43, v42),
           v124 = PsGetProcessSessionIdEx(v123),
           v125 = PsGetCurrentThreadProcess(),
           v124 == (unsigned int)PsGetProcessSessionIdEx(v125)))
      && (v44 = (__int64 *)PsGetThreadWin32Thread(v40)) != 0LL
      && (v41 = *v44) != 0
      && (*(_DWORD *)(v41 + 488) & 0x20000000) != 0
      && (v46 = *(_QWORD *)(*(_QWORD *)(v41 + 424) + 768LL), (*(_DWORD *)(v46 + 24) & 0x20) != 0) )
    {
      v39 = *(_QWORD *)(v46 + 16);
    }
    else
    {
      v48 = PsGetCurrentProcess(v46, v45);
      ProcessJob = PsGetProcessJob(v48);
      v50 = ProcessJob;
      if ( v41 || !ProcessJob || (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) == 0 )
        goto LABEL_42;
      if ( (unsigned int)ApiSetEditionIsPerJobObjectAtomTableSupported() )
      {
        v127 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v127[1] == v50 )
              break;
            v127 = (_QWORD *)*v127;
          }
          while ( v127 );
        }
        v39 = v127[2];
        goto LABEL_44;
      }
      if ( !(unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
      {
LABEL_42:
        if ( qword_1C0250968
          && (int)qword_1C0250968() >= 0
          && (v53 = PsGetCurrentProcess(v52, v51),
              ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v53),
              qword_1C0250970)
          && (int)qword_1C0250970(v40, ProcessWin32WindowStation, 32LL, &v139, 1) >= 0 )
        {
          v39 = *(_QWORD *)(v139 + 168);
        }
        else if ( ((unsigned __int8)IsProcessWin32kLockedOut(-1LL)
                || !PsGetCurrentProcessWin32Process(v46, v45, v63, v47)
                || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked())
               && qword_1C0250978
               && (int)qword_1C0250978() >= 0
               && qword_1C0250980 )
        {
          v39 = qword_1C0250980();
        }
        goto LABEL_44;
      }
      UserSetLastError(5LL);
    }
LABEL_44:
    *a3 = v39;
    v55 = (unsigned int)gcSwitchInProgressWaiters;
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    if ( qword_1C0250B48 )
      qword_1C0250B48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v55, v47);
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
      v128 = PsGetCurrentThreadWin32Thread();
      v131 = v128;
      if ( v128 )
      {
        v132 = *(_DWORD *)(v128 + 24);
        if ( (*(_DWORD *)(v131 + 44) || *(_DWORD *)(v131 + 48) || v132 > 0) && (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v129, v130) )
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E11, v131 + 28, 0, 2u, &v164);
        }
        *(_DWORD *)(v131 + 44) = 0;
        *(_OWORD *)(v131 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    return 0LL;
  }
  switch ( a2 )
  {
    case 0u:
      if ( !qword_1C024FCC0 || (int)qword_1C024FCC0() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FCC8;
      goto LABEL_65;
    case 1u:
      if ( !qword_1C024FCD0 || (int)qword_1C024FCD0() < 0 || !qword_1C024FCD8 )
        goto LABEL_134;
      return qword_1C024FCD8(*a3, *((unsigned int *)a3 + 2));
    case 3u:
      if ( gbPowerCalloutsReady && gbVideoInitialized )
        return QueuePowerRequest(a3, 0LL);
      else
        return 3221225473LL;
    case 4u:
      return UserPowerStateCallout((char *)a3);
    case 5u:
      return UserPowerInfoCallout(
               *(_DWORD *)a3,
               *((unsigned __int8 *)a3 + 4),
               *((_DWORD *)a3 + 2),
               a3[2],
               *((_DWORD *)a3 + 6),
               a3[4]);
    case 6u:
      if ( !qword_1C024FCE0 || (int)qword_1C024FCE0() < 0 )
        goto LABEL_134;
      return UserJobCallout(a3);
    case 8u:
      if ( !qword_1C024FD68 || (int)qword_1C024FD68() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FD70;
      goto LABEL_65;
    case 9u:
      if ( !qword_1C024FD78 || (int)qword_1C024FD78() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FD80;
      goto LABEL_65;
    case 0xAu:
      if ( !qword_1C024FD88 || (int)qword_1C024FD88() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FD90;
      goto LABEL_65;
    case 0xBu:
      if ( !qword_1C024FD98 || (int)qword_1C024FD98() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FDA0;
      goto LABEL_65;
    case 0xCu:
      if ( !qword_1C024FDA8 || (int)qword_1C024FDA8() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FDB0;
      goto LABEL_65;
    case 0xDu:
      if ( !qword_1C024FE38 || (int)qword_1C024FE38() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FE40;
      goto LABEL_65;
    case 0xEu:
      if ( !qword_1C024FE48 || (int)qword_1C024FE48() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FE50;
      goto LABEL_65;
    case 0xFu:
      return ParseWindowStation(a3);
    case 0x10u:
      if ( !qword_1C024FE58 || (int)qword_1C024FE58() < 0 )
        goto LABEL_134;
      v57 = (__int64 (__fastcall *)(__int64 *))qword_1C024FE60;
LABEL_65:
      if ( v57 )
        result = v57(a3);
      else
LABEL_134:
        result = 3221225659LL;
      break;
    case 0x11u:
      return 0LL;
    case 0x12u:
      return CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
    case 0x13u:
      return CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
    case 0x14u:
      return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a3[1] + 8) + 40LL))(
               *(_QWORD *)(a3[1] + 8),
               a3);
    case 0x15u:
      v58 = 0;
      v59 = *(_QWORD *)(*a3 + 8);
      if ( v59 )
        return (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v59 + 48LL))(v59, a3);
      return v58;
    case 0x16u:
      ((void (__fastcall *)(__int64 *))qword_1C024A850)(a3);
      return UserProcessFreezeCallout((__int64)a3);
    case 0x17u:
      ((void (__fastcall *)(__int64 *))qword_1C024A858)(a3);
      return UserProcessThawCallout((__int64)a3);
    case 0x18u:
      ((void (__fastcall *)(__int64, __int64))qword_1C024AA20)(*a3, a3[1]);
      return 0LL;
    case 0x19u:
      ((void (__fastcall *)(__int64 *))qword_1C024AA28)(a3);
      return 0LL;
    case 0x1Au:
      return W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a3);
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
      return RIMObjectManagerCallout(a2, a3);
    case 0x1Fu:
      if ( !qword_1C0250570 )
        goto LABEL_134;
      result = qword_1C0250570();
      break;
    case 0x20u:
      v64 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v64 )
        v64[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v141 = 1;
        v65 = PsGetCurrentThreadWin32Thread();
        v140 = v65;
        if ( v65 && (*(int *)(v65 + 24) > 0 || *(_DWORD *)(v140 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0244A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v66, v67) )
            {
              v133 = v141;
              v148 = 4LL;
              v147 = &v133;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C0244A70,
                (int)&dword_1C0211E87,
                (int)&ActivityId,
                0,
                3u,
                &v146);
            }
          }
        }
      }
      else
      {
        v140 = 0LL;
      }
      v68 = 0LL;
      while ( 1 )
      {
        v69 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v69 )
          v68 = *v69;
        v72 = (PVOID)PsGetCurrentProcess(v71, v70);
        if ( v72 )
        {
          if ( v72 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v74, v73) == gpepCSRSS && v68 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v68 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v140
        && (*(_DWORD *)(v140 + 48) || *(int *)(v140 + 24) > 0) )
      {
        *(_DWORD *)(v140 + 44) = 1;
        *(GUID *)(v140 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v75) )
          {
            v134 = v141;
            v151 = 4LL;
            v150 = &v134;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E30,
              (int)&ActivityId,
              0,
              3u,
              &v149);
            v76 = (unsigned int)dword_1C0244A70;
          }
          if ( (unsigned int)v76 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v76, v77) )
          {
            v135 = v141;
            v154 = 4LL;
            v153 = &v135;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E5D,
              (int)&ActivityId,
              0,
              3u,
              &v152);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v68;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v80 = PsGetCurrentProcess(v79, v78),
            v81 = PsGetProcessSessionIdEx(v80),
            v82 = PsGetCurrentThreadProcess(),
            v81 == (unsigned int)PsGetProcessSessionIdEx(v82)) )
      {
        v84 = KeGetCurrentThread();
        v85 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          v90 = (__int64 *)PsGetThreadWin32Thread(v84);
          if ( v90 )
            v85 = *v90;
        }
        v91 = PsGetCurrentProcessWin32Process(v87, v86, v88, v89);
        if ( v85 )
        {
          if ( v91 )
          {
            if ( (*(_DWORD *)(v85 + 488) & 0x1000000) != 0 )
            {
              v83 = *(unsigned int *)(v85 + 1232);
              if ( (v83 & 0x80u) == 0LL && (*(_DWORD *)(v91 + 12) & 0x8000) != 0 )
              {
                v94 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v94 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v95, v96);
                if ( ExIsResourceAcquiredExclusiveLite(*v94) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v98, v97, v99, v100);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v94);
                for ( j = gpducstulHead; gpducstulHead; j = gpducstulHead )
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)j + 2);
                  v106 = *(_QWORD *)j;
                  *((_QWORD *)j + 2) = 0LL;
                  if ( !*(_DWORD *)(v106 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v102, v101, v103, v104);
                  v109 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v109 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v108, v107, v110, v111);
                  ExReleaseResourceAndLeaveCriticalRegion(*v109);
                  HMUnlockObject(*(_QWORD *)j);
                  tagDomLock::LockExclusive((tagDomLock *)v109);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v94);
              }
            }
          }
        }
      }
      if ( a3 && a3 == g_pepDwm )
        vReleaseDwmHitTestWaiters();
      UserSessionSwitchLeaveCrit(v83);
      return 0LL;
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
      return CoreMsgObjectCallout(a2, a3);
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
      return ActivationObjectCallout(a2, a3);
    case 0x29u:
      return UserProcessTimerDelayCallout(a3);
    case 0x2Au:
      return UserProcessTimerStatisticsCallout(a3);
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0x1C0000000uLL, a3, a4);
      return 3221225485LL;
  }
  return result;
}
