/*
 * XREFs of W32CalloutDispatch @ 0x1C0065BE0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     QueuePowerRequest @ 0x1C0064F40 (QueuePowerRequest.c)
 *     ActivationObjectCallout @ 0x1C0065154 (ActivationObjectCallout.c)
 *     UserPowerStateCallout @ 0x1C00651B4 (UserPowerStateCallout.c)
 *     UserProcessThawCallout @ 0x1C0065504 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C0065938 (UserProcessFreezeCallout.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C006643C (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ParseWindowStation @ 0x1C00664C0 (ParseWindowStation.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C00665AC (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     RIMObjectManagerCallout @ 0x1C00667B8 (RIMObjectManagerCallout.c)
 *     UserJobCallout @ 0x1C0066848 (UserJobCallout.c)
 *     UserPowerInfoCallout @ 0x1C0066874 (UserPowerInfoCallout.c)
 *     CoreMsgObjectCallout @ 0x1C0068B44 (CoreMsgObjectCallout.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1C00CC658 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     IsProcessWin32kLockedOut @ 0x1C00CC700 (IsProcessWin32kLockedOut.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C011E6A0 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1C011E6E8 (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     UserProcessTimerDelayCallout @ 0x1C0123504 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01239E4 (UserProcessTimerStatisticsCallout.c)
 *     ApiSetEditionIsPerJobObjectAtomTableSupported @ 0x1C01C885C (ApiSetEditionIsPerJobObjectAtomTableSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagKERNELHANDLETABLEENTRY *i; // r14
  __int64 v37; // r14
  struct _KTHREAD *v38; // r12
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 ProcessJob; // rax
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 ProcessWin32WindowStation; // rdx
  __int64 v53; // r8
  __int64 result; // rax
  __int64 (__fastcall *v55)(__int64 *); // rax
  unsigned int v56; // esi
  __int64 v57; // rcx
  __int64 v58; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v61; // rcx
  LARGE_INTEGER *v62; // rbx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  struct tagTHREADINFO *v66; // rbx
  struct tagTHREADINFO **v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  PVOID v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  int v79; // ebx
  __int64 v80; // rax
  __int64 v81; // rcx
  struct _KTHREAD *v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // rcx
  __int64 *v85; // rax
  __int64 v86; // rax
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
  struct tagKERNELHANDLETABLEENTRY *j; // r14
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  PERESOURCE *v104; // rdi
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  PERESOURCE *v115; // rdi
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  int v119; // ebx
  __int64 v120; // rax
  _QWORD *v122; // r14
  __int64 v123; // rax
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rbx
  int v127; // eax
  int v128; // [rsp+30h] [rbp-D0h] BYREF
  int v129; // [rsp+34h] [rbp-CCh] BYREF
  int v130; // [rsp+38h] [rbp-C8h] BYREF
  int v131; // [rsp+3Ch] [rbp-C4h] BYREF
  int v132; // [rsp+40h] [rbp-C0h] BYREF
  int v133; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v134; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v135; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v136; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v138; // [rsp+70h] [rbp-90h]
  unsigned __int8 v139; // [rsp+78h] [rbp-88h]
  GUID v140; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v141; // [rsp+90h] [rbp-70h] BYREF
  int *v142; // [rsp+B0h] [rbp-50h]
  __int64 v143; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v144; // [rsp+C0h] [rbp-40h] BYREF
  int *v145; // [rsp+E0h] [rbp-20h]
  __int64 v146; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v147; // [rsp+F0h] [rbp-10h] BYREF
  int *v148; // [rsp+110h] [rbp+10h]
  __int64 v149; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v150; // [rsp+120h] [rbp+20h] BYREF
  int *v151; // [rsp+140h] [rbp+40h]
  __int64 v152; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v153; // [rsp+150h] [rbp+50h] BYREF
  int *v154; // [rsp+170h] [rbp+70h]
  __int64 v155; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v156; // [rsp+180h] [rbp+80h] BYREF
  int *v157; // [rsp+1A0h] [rbp+A0h]
  __int64 v158; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v159; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( qword_1C0251950 && (int)qword_1C0251950() >= 0 && qword_1C0251958 && (unsigned int)qword_1C0251958() && a2 > 1 )
    return 3221227292LL;
  if ( a2 == 7 )
  {
    if ( qword_1C0251960 && (int)qword_1C0251960() >= 0 && qword_1C0251968 )
      qword_1C0251968();
    return 0LL;
  }
  if ( a2 == 2 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v140 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v139 = 1;
      v107 = PsGetCurrentThreadWin32Thread(v6);
      v138 = v107;
      if ( v107 && (*(int *)(v107 + 24) > 0 || *(_DWORD *)(v138 + 48)) )
      {
        EtwActivityIdControl(3u, &v140);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v108, v109) )
          {
            v131 = v139;
            v152 = 4LL;
            v151 = &v131;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &v140,
              0LL,
              3u,
              &v150);
          }
        }
      }
    }
    else
    {
      v138 = 0LL;
    }
    v8 = 0LL;
    while ( 1 )
    {
      v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v9 )
        v8 = *v9;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v8 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v138
      && (*(_DWORD *)(v138 + 48) || *(int *)(v138 + 24) > 0) )
    {
      *(_DWORD *)(v138 + 44) = 1;
      *(GUID *)(v138 + 28) = v140;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v15) )
        {
          v132 = v139;
          v155 = 4LL;
          v154 = &v132;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &v140,
            0LL,
            3u,
            &v153);
          v110 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v110 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v110, v111) )
        {
          v133 = v139;
          v158 = 4LL;
          v157 = &v133;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &v140,
            0LL,
            3u,
            &v156);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v58 = PsGetCurrentProcess(v17, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(v58),
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
      if ( v19
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v19 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v19 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
          v112 = *(_QWORD *)i;
          *((_QWORD *)i + 2) = 0LL;
          if ( !*(_DWORD *)(v112 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
          v115 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v115 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v114, v113, v116, v117);
          ExReleaseResourceAndLeaveCriticalRegion(*v115);
          HMUnlockObject(*(_QWORD *)i);
          tagDomLock::LockExclusive((tagDomLock *)v115);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v134 = 0LL;
    v37 = 0LL;
    v38 = KeGetCurrentThread();
    v39 = 0LL;
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v118 = PsGetCurrentProcess(v41, v40),
           v119 = PsGetProcessSessionIdEx(v118),
           v120 = PsGetCurrentThreadProcess(),
           v119 == (unsigned int)PsGetProcessSessionIdEx(v120)))
      && (v42 = (__int64 *)PsGetThreadWin32Thread(v38)) != 0LL
      && (v39 = *v42) != 0
      && (*(_DWORD *)(v39 + 480) & 0x20000000) != 0
      && (v44 = *(_QWORD *)(*(_QWORD *)(v39 + 416) + 768LL), (*(_DWORD *)(v44 + 24) & 0x20) != 0) )
    {
      v37 = *(_QWORD *)(v44 + 16);
    }
    else
    {
      v46 = PsGetCurrentProcess(v44, v43);
      ProcessJob = PsGetProcessJob(v46);
      v48 = ProcessJob;
      if ( v39 || !ProcessJob || (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) == 0 )
        goto LABEL_42;
      if ( (unsigned int)ApiSetEditionIsPerJobObjectAtomTableSupported() )
      {
        v122 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v122[1] == v48 )
              break;
            v122 = (_QWORD *)*v122;
          }
          while ( v122 );
        }
        v37 = v122[2];
        goto LABEL_44;
      }
      if ( !(unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
      {
LABEL_42:
        if ( qword_1C0252968
          && (int)qword_1C0252968() >= 0
          && (v51 = PsGetCurrentProcess(v50, v49),
              ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v51),
              qword_1C0252970)
          && (int)qword_1C0252970(v38, ProcessWin32WindowStation, 32LL, &v134, 1) >= 0 )
        {
          v37 = *(_QWORD *)(v134 + 168);
        }
        else if ( ((unsigned __int8)IsProcessWin32kLockedOut(-1LL)
                || !PsGetCurrentProcessWin32Process(v44)
                || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked())
               && qword_1C0252978
               && (int)qword_1C0252978() >= 0
               && qword_1C0252980 )
        {
          v37 = qword_1C0252980();
        }
        goto LABEL_44;
      }
      UserSetLastError(5LL);
    }
LABEL_44:
    *a3 = v37;
    v53 = (unsigned int)gcSwitchInProgressWaiters;
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    if ( qword_1C0252B48 )
      qword_1C0252B48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v53, v45);
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
      v123 = PsGetCurrentThreadWin32Thread(v44);
      v126 = v123;
      if ( v123 )
      {
        v127 = *(_DWORD *)(v123 + 24);
        if ( (*(_DWORD *)(v126 + 44) || *(_DWORD *)(v126 + 48) || v127 > 0) && (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v124, v125) )
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E11,
              (const GUID *)(v126 + 28),
              0LL,
              2u,
              &v159);
        }
        *(_DWORD *)(v126 + 44) = 0;
        *(_OWORD *)(v126 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    return 0LL;
  }
  switch ( a2 )
  {
    case 0u:
      if ( !qword_1C0251CC0 || (int)qword_1C0251CC0() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251CC8;
      goto LABEL_65;
    case 1u:
      if ( !qword_1C0251CD0 || (int)qword_1C0251CD0() < 0 || !qword_1C0251CD8 )
        goto LABEL_134;
      return qword_1C0251CD8(*a3, *((unsigned int *)a3 + 2));
    case 3u:
      if ( gbPowerCalloutsReady && gbVideoInitialized )
        return QueuePowerRequest(a3, 0);
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
      if ( !qword_1C0251CE0 || (int)qword_1C0251CE0() < 0 )
        goto LABEL_134;
      return UserJobCallout(a3);
    case 8u:
      if ( !qword_1C0251D68 || (int)qword_1C0251D68() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251D70;
      goto LABEL_65;
    case 9u:
      if ( !qword_1C0251D78 || (int)qword_1C0251D78() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251D80;
      goto LABEL_65;
    case 0xAu:
      if ( !qword_1C0251D88 || (int)qword_1C0251D88() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251D90;
      goto LABEL_65;
    case 0xBu:
      if ( !qword_1C0251D98 || (int)qword_1C0251D98() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251DA0;
      goto LABEL_65;
    case 0xCu:
      if ( !qword_1C0251DA8 || (int)qword_1C0251DA8() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251DB0;
      goto LABEL_65;
    case 0xDu:
      if ( !qword_1C0251E38 || (int)qword_1C0251E38() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251E40;
      goto LABEL_65;
    case 0xEu:
      if ( !qword_1C0251E48 || (int)qword_1C0251E48() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251E50;
      goto LABEL_65;
    case 0xFu:
      return ParseWindowStation(a3);
    case 0x10u:
      if ( !qword_1C0251E58 || (int)qword_1C0251E58() < 0 )
        goto LABEL_134;
      v55 = (__int64 (__fastcall *)(__int64 *))qword_1C0251E60;
LABEL_65:
      if ( v55 )
        result = v55(a3);
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
      v56 = 0;
      v57 = *(_QWORD *)(*a3 + 8);
      if ( v57 )
        return (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v57 + 48LL))(v57, a3);
      return v56;
    case 0x16u:
      ((void (__fastcall *)(__int64 *))qword_1C024C850)(a3);
      return UserProcessFreezeCallout((__int64)a3);
    case 0x17u:
      ((void (__fastcall *)(__int64 *))qword_1C024C858)(a3);
      return UserProcessThawCallout((__int64)a3);
    case 0x18u:
      ((void (__fastcall *)(__int64, __int64))qword_1C024CA20)(*a3, a3[1]);
      return 0LL;
    case 0x19u:
      ((void (__fastcall *)(__int64 *))qword_1C024CA28)(a3);
      return 0LL;
    case 0x1Au:
      return W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a3);
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
      return RIMObjectManagerCallout(a2, a3);
    case 0x1Fu:
      if ( !qword_1C0252570 )
        goto LABEL_134;
      result = qword_1C0252570();
      break;
    case 0x20u:
      v62 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v62 )
        v62[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v136 = 1;
        v63 = PsGetCurrentThreadWin32Thread(v61);
        v135 = v63;
        if ( v63 && (*(int *)(v63 + 24) > 0 || *(_DWORD *)(v135 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v64, v65) )
            {
              v128 = v136;
              v143 = 4LL;
              v142 = &v128;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E87,
                &ActivityId,
                0LL,
                3u,
                &v141);
            }
          }
        }
      }
      else
      {
        v135 = 0LL;
      }
      v66 = 0LL;
      while ( 1 )
      {
        v67 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v67 )
          v66 = *v67;
        v70 = (PVOID)PsGetCurrentProcess(v69, v68);
        if ( v70 )
        {
          if ( v70 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v72, v71) == gpepCSRSS && v66 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v66 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v135
        && (*(_DWORD *)(v135 + 48) || *(int *)(v135 + 24) > 0) )
      {
        *(_DWORD *)(v135 + 44) = 1;
        *(GUID *)(v135 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v73) )
          {
            v129 = v136;
            v146 = 4LL;
            v145 = &v129;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v144);
            v74 = (unsigned int)dword_1C0246A70;
          }
          if ( (unsigned int)v74 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v74, v75) )
          {
            v130 = v136;
            v149 = 4LL;
            v148 = &v130;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v147);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v66;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v78 = PsGetCurrentProcess(v77, v76),
            v79 = PsGetProcessSessionIdEx(v78),
            v80 = PsGetCurrentThreadProcess(),
            v79 == (unsigned int)PsGetProcessSessionIdEx(v80)) )
      {
        v82 = KeGetCurrentThread();
        v83 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          v85 = (__int64 *)PsGetThreadWin32Thread(v82);
          if ( v85 )
            v83 = *v85;
        }
        v86 = PsGetCurrentProcessWin32Process(v84);
        if ( v83 )
        {
          if ( v86 )
          {
            if ( (*(_DWORD *)(v83 + 480) & 0x1000000) != 0 )
            {
              v81 = *(unsigned int *)(v83 + 1224);
              if ( (v81 & 0x80u) == 0LL && (*(_DWORD *)(v86 + 12) & 0x8000) != 0 )
              {
                v89 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v89 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v88, v87, v90, v91);
                if ( ExIsResourceAcquiredExclusiveLite(*v89) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v94, v95);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v89);
                for ( j = gpducstulHead; gpducstulHead; j = gpducstulHead )
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)j + 2);
                  v101 = *(_QWORD *)j;
                  *((_QWORD *)j + 2) = 0LL;
                  if ( !*(_DWORD *)(v101 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v97, v96, v98, v99);
                  v104 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v104 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v103, v102, v105, v106);
                  ExReleaseResourceAndLeaveCriticalRegion(*v104);
                  HMUnlockObject(*(_QWORD *)j);
                  tagDomLock::LockExclusive((tagDomLock *)v104);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v89);
              }
            }
          }
        }
      }
      if ( a3 && a3 == g_pepDwm )
        vReleaseDwmHitTestWaiters();
      UserSessionSwitchLeaveCrit(v81);
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
