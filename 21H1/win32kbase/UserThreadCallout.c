/*
 * XREFs of UserThreadCallout @ 0x1C00672B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     IsGetAppCompatFlags2QuadWordSupported @ 0x1C0067F50 (IsGetAppCompatFlags2QuadWordSupported.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     RtlGetExpWinVer @ 0x1C0069160 (RtlGetExpWinVer.c)
 *     GreCleanDC @ 0x1C00691F0 (GreCleanDC.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  struct tagTHREADINFO *v28; // rdi
  __int64 v29; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  PVOID CurrentProcess; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v45; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v47; // rcx
  __int64 v48; // rcx
  struct tagKERNELHANDLETABLEENTRY *v49; // rsi
  __int64 v50; // rbx
  int v51; // eax
  int v52; // eax
  __int64 v53; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v56; // rax
  int v57; // ebx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rcx
  PERESOURCE *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  PERESOURCE *v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  PERESOURCE *v78; // rdi
  struct tagKERNELHANDLETABLEENTRY *v79; // rsi
  int v80; // [rsp+30h] [rbp-D0h] BYREF
  int v81; // [rsp+34h] [rbp-CCh] BYREF
  int v82; // [rsp+38h] [rbp-C8h] BYREF
  int v83; // [rsp+3Ch] [rbp-C4h] BYREF
  int v84; // [rsp+40h] [rbp-C0h] BYREF
  int v85; // [rsp+44h] [rbp-BCh] BYREF
  PETHREAD Threada; // [rsp+48h] [rbp-B8h]
  __int64 v87; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v88; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v90; // [rsp+70h] [rbp-90h]
  unsigned __int8 v91; // [rsp+78h] [rbp-88h]
  GUID v92; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+90h] [rbp-70h] BYREF
  int *v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+C0h] [rbp-40h] BYREF
  int *v97; // [rsp+E0h] [rbp-20h]
  int v98; // [rsp+E8h] [rbp-18h]
  int v99; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+F0h] [rbp-10h] BYREF
  int *v101; // [rsp+110h] [rbp+10h]
  int v102; // [rsp+118h] [rbp+18h]
  int v103; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+120h] [rbp+20h] BYREF
  int *v105; // [rsp+140h] [rbp+40h]
  __int64 v106; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+150h] [rbp+50h] BYREF
  int *v108; // [rsp+170h] [rbp+70h]
  __int64 v109; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+180h] [rbp+80h] BYREF
  int *v111; // [rsp+1A0h] [rbp+A0h]
  __int64 v112; // [rsp+1A8h] [rbp+A8h]

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
    v28 = 0LL;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v88 = 1;
      v59 = PsGetCurrentThreadWin32Thread(v29);
      v87 = v59;
      if ( v59 && (*(int *)(v59 + 24) > 0 || *(_DWORD *)(v87 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v60, v61) )
          {
            v80 = v88;
            v95 = 4LL;
            v94 = &v80;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId,
              0LL,
              3u,
              &v93);
          }
        }
      }
    }
    else
    {
      v87 = 0LL;
    }
    while ( 1 )
    {
      v31 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v31 )
        v28 = *v31;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v33, v32);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v36, v35) == gpepCSRSS && v28 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v28 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v87 && (*(_DWORD *)(v87 + 48) || *(int *)(v87 + 24) > 0) )
    {
      *(_DWORD *)(v87 + 44) = 1;
      *(GUID *)(v87 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v37) )
        {
          v99 = 0;
          v81 = v88;
          v98 = 4;
          v97 = &v81;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &ActivityId,
            0LL,
            3u,
            &v96);
          v62 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v62 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v62, v63) )
        {
          v103 = 0;
          v82 = v88;
          v102 = 4;
          v101 = &v82;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &ActivityId,
            0LL,
            3u,
            &v100);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v28;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v53 = PsGetCurrentProcess(v39, v38),
          ProcessSessionId = PsGetProcessSessionIdEx(v53),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v41 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v41 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v42);
      if ( v41
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v41 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v41 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v45);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v47);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v49 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v64 = *(_QWORD *)v49;
          *((_QWORD *)v49 + 2) = 0LL;
          if ( !*(_DWORD *)(v64 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v48);
          v66 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v66 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v65);
          ExReleaseResourceAndLeaveCriticalRegion(*v66);
          HMUnlockObject(*(_QWORD *)v49);
          tagDomLock::LockExclusive((tagDomLock *)v66);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v50 = W32GetThreadWin32Thread(Threada);
    *(_DWORD *)(v50 + 480) |= 1u;
    if ( qword_1C02588E8 )
      v51 = qword_1C02588E8();
    else
      v51 = -1073741637;
    if ( v51 >= 0 && qword_1C02588F0 )
      qword_1C02588F0();
    if ( gbVideoInitialized || !gbNonServiceSession )
      GreCleanDC(*(HDC *)(gpDispInfo + 56));
    v52 = *(_DWORD *)(v50 + 1216);
    if ( (v52 & 2) != 0 )
    {
      gfSwitchInProgress = 0;
      v52 = *(_DWORD *)(v50 + 1216);
    }
    if ( (v52 & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C02588E0 )
        qword_1C02588E0(gptiCurrent);
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
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread(Thread) + 1216), 0);
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
    v92 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v91 = 1;
      v67 = PsGetCurrentThreadWin32Thread(v9);
      v90 = v67;
      if ( v67 && (*(int *)(v67 + 24) > 0 || *(_DWORD *)(v90 + 48)) )
      {
        EtwActivityIdControl(3u, &v92);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v68, v69) )
          {
            v83 = v91;
            v106 = 4LL;
            v105 = &v83;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v92,
              0LL,
              3u,
              &v104);
          }
        }
      }
    }
    else
    {
      v90 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v90 && (*(_DWORD *)(v90 + 48) || *(int *)(v90 + 24) > 0) )
    {
      *(_DWORD *)(v90 + 44) = 1;
      *(GUID *)(v90 + 28) = v92;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v18) )
        {
          v84 = v91;
          v109 = 4LL;
          v108 = &v84;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v92,
            0LL,
            3u,
            &v107);
          v70 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v70 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v70, v71) )
        {
          v85 = v91;
          v112 = 4LL;
          v111 = &v85;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v92,
            0LL,
            3u,
            &v110);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v56 = PsGetCurrentProcess(v20, v19),
          v57 = PsGetProcessSessionIdEx(v56),
          v58 = PsGetCurrentThreadProcess(),
          v57 == (unsigned int)PsGetProcessSessionIdEx(v58)) )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v24 )
          v22 = *v24;
      }
      v25 = PsGetCurrentProcessWin32Process(v23);
      if ( v22
        && v25
        && (*(_DWORD *)(v22 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v22 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v25 + 12) & 0x8000) != 0 )
      {
        v73 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v73 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v72);
        if ( ExIsResourceAcquiredExclusiveLite(*v73) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v74);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v73);
        while ( 1 )
        {
          v79 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v76 = *(_QWORD *)v79;
          *((_QWORD *)v79 + 2) = 0LL;
          if ( !*(_DWORD *)(v76 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v75);
          v78 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v78 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v77);
          ExReleaseResourceAndLeaveCriticalRegion(*v78);
          HMUnlockObject(*(_QWORD *)v79);
          tagDomLock::LockExclusive((tagDomLock *)v78);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v73);
      }
    }
    ThreadInfo = xxxCreateThreadInfo(Threada);
    if ( ThreadInfo >= 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C02588E0 )
      qword_1C02588E0(gptiCurrent);
  }
  UserSessionSwitchLeaveCrit(v26);
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
