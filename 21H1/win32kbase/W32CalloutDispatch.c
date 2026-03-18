/*
 * XREFs of W32CalloutDispatch @ 0x1C005D9C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     QueuePowerRequest @ 0x1C005C560 (QueuePowerRequest.c)
 *     ActivationObjectCallout @ 0x1C005C714 (ActivationObjectCallout.c)
 *     UserPowerStateCallout @ 0x1C005C81C (UserPowerStateCallout.c)
 *     UserProcessThawCallout @ 0x1C005CC4C (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C005D71C (UserProcessFreezeCallout.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C005E21C (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ParseWindowStation @ 0x1C005E2A0 (ParseWindowStation.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C005E38C (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     RIMObjectManagerCallout @ 0x1C005E598 (RIMObjectManagerCallout.c)
 *     UserJobCallout @ 0x1C005E628 (UserJobCallout.c)
 *     UserPowerInfoCallout @ 0x1C005E654 (UserPowerInfoCallout.c)
 *     CoreMsgObjectCallout @ 0x1C005F05C (CoreMsgObjectCallout.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1C00CBDA8 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     IsProcessWin32kLockedOut @ 0x1C00CBE50 (IsProcessWin32kLockedOut.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C0124D30 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1C0124D78 (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     UserProcessTimerDelayCallout @ 0x1C01294E4 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01299C4 (UserProcessTimerStatisticsCallout.c)
 *     ApiSetEditionIsPerJobObjectAtomTableSupported @ 0x1C01CE7DC (ApiSetEditionIsPerJobObjectAtomTableSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, unsigned int a2, __int64 *a3)
{
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
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct tagKERNELHANDLETABLEENTRY *i; // r14
  __int64 v27; // r14
  struct _KTHREAD *v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 ProcessJob; // rax
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 ProcessWin32WindowStation; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v43)(__int64 *); // rax
  unsigned int v44; // esi
  __int64 v45; // rcx
  __int64 v46; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v49; // rcx
  LARGE_INTEGER *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  struct tagTHREADINFO *v54; // rbx
  struct tagTHREADINFO **v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  PVOID v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // ebx
  __int64 v68; // rax
  __int64 v69; // rcx
  struct _KTHREAD *v70; // rdi
  __int64 v71; // rbx
  __int64 v72; // rcx
  __int64 *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  PERESOURCE *v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rcx
  struct tagKERNELHANDLETABLEENTRY *j; // r14
  __int64 v80; // rax
  __int64 v81; // rcx
  PERESOURCE *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rcx
  PERESOURCE *v90; // rdi
  __int64 v91; // rax
  int v92; // ebx
  __int64 v93; // rax
  _QWORD *v95; // r14
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rbx
  int v100; // eax
  int v101; // [rsp+30h] [rbp-D0h] BYREF
  int v102; // [rsp+34h] [rbp-CCh] BYREF
  int v103; // [rsp+38h] [rbp-C8h] BYREF
  int v104; // [rsp+3Ch] [rbp-C4h] BYREF
  int v105; // [rsp+40h] [rbp-C0h] BYREF
  int v106; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v107; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v109; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v111; // [rsp+70h] [rbp-90h]
  unsigned __int8 v112; // [rsp+78h] [rbp-88h]
  GUID v113; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+90h] [rbp-70h] BYREF
  int *v115; // [rsp+B0h] [rbp-50h]
  __int64 v116; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+C0h] [rbp-40h] BYREF
  int *v118; // [rsp+E0h] [rbp-20h]
  __int64 v119; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+F0h] [rbp-10h] BYREF
  int *v121; // [rsp+110h] [rbp+10h]
  __int64 v122; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+120h] [rbp+20h] BYREF
  int *v124; // [rsp+140h] [rbp+40h]
  __int64 v125; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+150h] [rbp+50h] BYREF
  int *v127; // [rsp+170h] [rbp+70h]
  __int64 v128; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v129; // [rsp+180h] [rbp+80h] BYREF
  int *v130; // [rsp+1A0h] [rbp+A0h]
  __int64 v131; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( qword_1C0257910 && (int)qword_1C0257910() >= 0 && qword_1C0257918 && (unsigned int)qword_1C0257918() && a2 > 1 )
    return 3221227292LL;
  if ( a2 == 7 )
  {
    if ( qword_1C0257920 && (int)qword_1C0257920() >= 0 && qword_1C0257928 )
      qword_1C0257928();
    return 0LL;
  }
  if ( a2 == 2 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v113 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v112 = 1;
      v83 = PsGetCurrentThreadWin32Thread(v5);
      v111 = v83;
      if ( v83 && (*(int *)(v83 + 24) > 0 || *(_DWORD *)(v111 + 48)) )
      {
        EtwActivityIdControl(3u, &v113);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v84, v85) )
          {
            v104 = v112;
            v125 = 4LL;
            v124 = &v104;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v113,
              0LL,
              3u,
              &v123);
          }
        }
      }
    }
    else
    {
      v111 = 0LL;
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
      && v111
      && (*(_DWORD *)(v111 + 48) || *(int *)(v111 + 24) > 0) )
    {
      *(_DWORD *)(v111 + 44) = 1;
      *(GUID *)(v111 + 28) = v113;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v14) )
        {
          v105 = v112;
          v128 = 4LL;
          v127 = &v105;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v113,
            0LL,
            3u,
            &v126);
          v86 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v86 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v86, v87) )
        {
          v106 = v112;
          v131 = 4LL;
          v130 = &v106;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v113,
            0LL,
            3u,
            &v129);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v46 = PsGetCurrentProcess(v16, v15),
          ProcessSessionId = PsGetProcessSessionIdEx(v46),
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
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
      if ( v18
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v18 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v18 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
          v88 = *(_QWORD *)i;
          *((_QWORD *)i + 2) = 0LL;
          if ( !*(_DWORD *)(v88 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
          v90 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v90 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v89);
          ExReleaseResourceAndLeaveCriticalRegion(*v90);
          HMUnlockObject(*(_QWORD *)i);
          tagDomLock::LockExclusive((tagDomLock *)v90);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v107 = 0LL;
    v27 = 0LL;
    v28 = KeGetCurrentThread();
    v29 = 0LL;
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v91 = PsGetCurrentProcess(v31, v30),
           v92 = PsGetProcessSessionIdEx(v91),
           v93 = PsGetCurrentThreadProcess(),
           v92 == (unsigned int)PsGetProcessSessionIdEx(v93)))
      && (v32 = (__int64 *)PsGetThreadWin32Thread(v28)) != 0LL
      && (v29 = *v32) != 0
      && (*(_DWORD *)(v29 + 480) & 0x20000000) != 0
      && (v34 = *(_QWORD *)(*(_QWORD *)(v29 + 416) + 768LL), (*(_DWORD *)(v34 + 24) & 0x20) != 0) )
    {
      v27 = *(_QWORD *)(v34 + 16);
    }
    else
    {
      v35 = PsGetCurrentProcess(v34, v33);
      ProcessJob = PsGetProcessJob(v35);
      v37 = ProcessJob;
      if ( v29 || !ProcessJob || (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) == 0 )
        goto LABEL_42;
      if ( (unsigned int)ApiSetEditionIsPerJobObjectAtomTableSupported() )
      {
        v95 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v95[1] == v37 )
              break;
            v95 = (_QWORD *)*v95;
          }
          while ( v95 );
        }
        v27 = v95[2];
        goto LABEL_44;
      }
      if ( !(unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
      {
LABEL_42:
        if ( qword_1C0258928
          && (int)qword_1C0258928() >= 0
          && (v40 = PsGetCurrentProcess(v39, v38),
              ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v40),
              qword_1C0258930)
          && (int)qword_1C0258930(v28, ProcessWin32WindowStation, 32LL, &v107, 1) >= 0 )
        {
          v27 = *(_QWORD *)(v107 + 168);
        }
        else if ( ((unsigned __int8)IsProcessWin32kLockedOut(-1LL)
                || !PsGetCurrentProcessWin32Process(v34)
                || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked())
               && qword_1C0258938
               && (int)qword_1C0258938() >= 0
               && qword_1C0258940 )
        {
          v27 = qword_1C0258940();
        }
        goto LABEL_44;
      }
      UserSetLastError(5LL);
    }
LABEL_44:
    *a3 = v27;
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    if ( qword_1C0258B08 )
      qword_1C0258B08();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
      v34 = (unsigned int)gdwInAtomicOperation;
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
      v96 = PsGetCurrentThreadWin32Thread(v34);
      v99 = v96;
      if ( v96 )
      {
        v100 = *(_DWORD *)(v96 + 24);
        if ( (*(_DWORD *)(v99 + 44) || *(_DWORD *)(v99 + 48) || v100 > 0) && (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v97, v98) )
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C0219981,
              (const GUID *)(v99 + 28),
              0LL,
              2u,
              &v132);
        }
        *(_DWORD *)(v99 + 44) = 0;
        *(_OWORD *)(v99 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    return 0LL;
  }
  switch ( a2 )
  {
    case 0u:
      if ( !qword_1C0257C80 || (int)qword_1C0257C80() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257C88;
      goto LABEL_65;
    case 1u:
      if ( !qword_1C0257C90 || (int)qword_1C0257C90() < 0 || !qword_1C0257C98 )
        goto LABEL_134;
      return qword_1C0257C98(*a3, *((unsigned int *)a3 + 2));
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
      if ( !qword_1C0257CA0 || (int)qword_1C0257CA0() < 0 )
        goto LABEL_134;
      return UserJobCallout(a3);
    case 8u:
      if ( !qword_1C0257D28 || (int)qword_1C0257D28() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257D30;
      goto LABEL_65;
    case 9u:
      if ( !qword_1C0257D38 || (int)qword_1C0257D38() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257D40;
      goto LABEL_65;
    case 0xAu:
      if ( !qword_1C0257D48 || (int)qword_1C0257D48() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257D50;
      goto LABEL_65;
    case 0xBu:
      if ( !qword_1C0257D58 || (int)qword_1C0257D58() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257D60;
      goto LABEL_65;
    case 0xCu:
      if ( !qword_1C0257D68 || (int)qword_1C0257D68() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257D70;
      goto LABEL_65;
    case 0xDu:
      if ( !qword_1C0257DF8 || (int)qword_1C0257DF8() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257E00;
      goto LABEL_65;
    case 0xEu:
      if ( !qword_1C0257E08 || (int)qword_1C0257E08() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257E10;
      goto LABEL_65;
    case 0xFu:
      return ParseWindowStation(a3);
    case 0x10u:
      if ( !qword_1C0257E18 || (int)qword_1C0257E18() < 0 )
        goto LABEL_134;
      v43 = (__int64 (__fastcall *)(__int64 *))qword_1C0257E20;
LABEL_65:
      if ( v43 )
        result = v43(a3);
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
      v44 = 0;
      v45 = *(_QWORD *)(*a3 + 8);
      if ( v45 )
        return (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 48LL))(v45, a3);
      return v44;
    case 0x16u:
      ((void (__fastcall *)(__int64 *))qword_1C0252870)(a3);
      return UserProcessFreezeCallout((__int64)a3);
    case 0x17u:
      ((void (__fastcall *)(__int64 *))qword_1C0252878)(a3);
      return UserProcessThawCallout((__int64)a3);
    case 0x18u:
      ((void (__fastcall *)(__int64, __int64))qword_1C0252A40)(*a3, a3[1]);
      return 0LL;
    case 0x19u:
      ((void (__fastcall *)(__int64 *))qword_1C0252A48)(a3);
      return 0LL;
    case 0x1Au:
      return W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a3);
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
      return RIMObjectManagerCallout(a2, a3);
    case 0x1Fu:
      if ( !qword_1C0258530 )
        goto LABEL_134;
      result = qword_1C0258530();
      break;
    case 0x20u:
      v50 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v50 )
        v50[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v109 = 1;
        v51 = PsGetCurrentThreadWin32Thread(v49);
        v108 = v51;
        if ( v51 && (*(int *)(v51 + 24) > 0 || *(_DWORD *)(v108 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v52, v53) )
            {
              v101 = v109;
              v116 = 4LL;
              v115 = &v101;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &ActivityId,
                0LL,
                3u,
                &v114);
            }
          }
        }
      }
      else
      {
        v108 = 0LL;
      }
      v54 = 0LL;
      while ( 1 )
      {
        v55 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v55 )
          v54 = *v55;
        v58 = (PVOID)PsGetCurrentProcess(v57, v56);
        if ( v58 )
        {
          if ( v58 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v60, v59) == gpepCSRSS && v54 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v54 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v108
        && (*(_DWORD *)(v108 + 48) || *(int *)(v108 + 24) > 0) )
      {
        *(_DWORD *)(v108 + 44) = 1;
        *(GUID *)(v108 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v61) )
          {
            v102 = v109;
            v119 = 4LL;
            v118 = &v102;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v117);
            v62 = (unsigned int)dword_1C024C960;
          }
          if ( (unsigned int)v62 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v62, v63) )
          {
            v103 = v109;
            v122 = 4LL;
            v121 = &v103;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v120);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v54;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v66 = PsGetCurrentProcess(v65, v64),
            v67 = PsGetProcessSessionIdEx(v66),
            v68 = PsGetCurrentThreadProcess(),
            v67 == (unsigned int)PsGetProcessSessionIdEx(v68)) )
      {
        v70 = KeGetCurrentThread();
        v71 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          v73 = (__int64 *)PsGetThreadWin32Thread(v70);
          if ( v73 )
            v71 = *v73;
        }
        v74 = PsGetCurrentProcessWin32Process(v72);
        if ( v71 )
        {
          if ( v74 )
          {
            if ( (*(_DWORD *)(v71 + 480) & 0x1000000) != 0 )
            {
              v69 = *(unsigned int *)(v71 + 1216);
              if ( (v69 & 0x80u) == 0LL && (*(_DWORD *)(v74 + 12) & 0x8000) != 0 )
              {
                v76 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v76 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v75);
                if ( ExIsResourceAcquiredExclusiveLite(*v76) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v77);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v76);
                for ( j = gpducstulHead; gpducstulHead; j = gpducstulHead )
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)j + 2);
                  v80 = *(_QWORD *)j;
                  *((_QWORD *)j + 2) = 0LL;
                  if ( !*(_DWORD *)(v80 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v78);
                  v82 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v82 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v81);
                  ExReleaseResourceAndLeaveCriticalRegion(*v82);
                  HMUnlockObject(*(_QWORD *)j);
                  tagDomLock::LockExclusive((tagDomLock *)v82);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v76);
              }
            }
          }
        }
      }
      if ( a3 && a3 == g_pepDwm )
        vReleaseDwmHitTestWaiters();
      UserSessionSwitchLeaveCrit(v69);
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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      return 3221225485LL;
  }
  return result;
}
