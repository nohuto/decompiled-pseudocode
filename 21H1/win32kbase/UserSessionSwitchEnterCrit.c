/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C0066480
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C002AF90 (NtUserEnumDisplaySettings.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C004E210 (AcquireCriticalSectionAndCheckState.c)
 *     NtUserEnumDisplayDevices @ 0x1C0093220 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v15; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct tagKERNELHANDLETABLEENTRY *i; // rsi
  PVOID v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  LARGE_INTEGER *v30; // rbx
  struct tagTHREADINFO *v31; // rbx
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
  __int64 v46; // rcx
  PERESOURCE *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rcx
  struct tagKERNELHANDLETABLEENTRY *j; // rsi
  __int64 v51; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rcx
  PERESOURCE *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rcx
  PERESOURCE *v77; // rdi
  int v78; // [rsp+38h] [rbp-D0h] BYREF
  int v79; // [rsp+3Ch] [rbp-CCh] BYREF
  int v80; // [rsp+40h] [rbp-C8h] BYREF
  int v81; // [rsp+44h] [rbp-C4h] BYREF
  int v82; // [rsp+48h] [rbp-C0h] BYREF
  int v83; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v84; // [rsp+50h] [rbp-B8h]
  unsigned __int8 ActivityId_4; // [rsp+58h] [rbp-B0h]
  GUID ActivityId_8; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v87; // [rsp+70h] [rbp-98h]
  unsigned __int8 v88; // [rsp+78h] [rbp-90h]
  GUID v89; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+90h] [rbp-78h] BYREF
  int *v91; // [rsp+B0h] [rbp-58h]
  __int64 v92; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+C0h] [rbp-48h] BYREF
  int *v94; // [rsp+E0h] [rbp-28h]
  __int64 v95; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+F0h] [rbp-18h] BYREF
  int *v97; // [rsp+110h] [rbp+8h]
  __int64 v98; // [rsp+118h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+120h] [rbp+18h] BYREF
  int *v100; // [rsp+140h] [rbp+38h]
  __int64 v101; // [rsp+148h] [rbp+40h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+150h] [rbp+48h] BYREF
  int *v103; // [rsp+170h] [rbp+68h]
  __int64 v104; // [rsp+178h] [rbp+70h]
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+180h] [rbp+78h] BYREF
  int *v106; // [rsp+1A0h] [rbp+98h]
  __int64 v107; // [rsp+1A8h] [rbp+A0h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+1B0h] [rbp+A8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v57 = PsGetCurrentThreadWin32Thread(v1);
    v84 = v57;
    if ( v57 && (*(int *)(v57 + 24) > 0 || *(_DWORD *)(v84 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v58, v59) )
        {
          v78 = ActivityId_4;
          v92 = 4LL;
          v91 = &v78;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId_8,
            0LL,
            3u,
            &v90);
        }
      }
    }
  }
  else
  {
    v84 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v84 && (*(_DWORD *)(v84 + 48) || *(int *)(v84 + 24) > 0) )
  {
    *(_DWORD *)(v84 + 44) = 1;
    *(GUID *)(v84 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v10) )
      {
        v79 = ActivityId_4;
        v95 = 4LL;
        v94 = &v79;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId_8,
          0LL,
          3u,
          &v93);
        v60 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v60 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v60, v61) )
      {
        v80 = ActivityId_4;
        v98 = 4LL;
        v97 = &v80;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId_8,
          0LL,
          3u,
          &v96);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v51 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v51),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( v14 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v14 + 480) & 0x1000000) != 0 )
        {
          v19 = *(unsigned int *)(v14 + 1216);
          if ( (v19 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
              v62 = *(_QWORD *)i;
              *((_QWORD *)i + 2) = 0LL;
              if ( !*(_DWORD *)(v62 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
              v64 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v64 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v63);
              ExReleaseResourceAndLeaveCriticalRegion(*v64);
              HMUnlockObject(*(_QWORD *)i);
              tagDomLock::LockExclusive((tagDomLock *)v64);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  while ( gfSwitchInProgress )
  {
    v26 = (PVOID)PsGetCurrentProcess(v19, v18);
    if ( v26 && v26 == g_pepDwm )
      break;
    ++gcSwitchInProgressWaiters;
    v27 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    if ( qword_1C0258B08 )
      qword_1C0258B08();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
      v27 = (unsigned int)gdwInAtomicOperation;
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
      v65 = PsGetCurrentThreadWin32Thread(v27);
      v68 = v65;
      if ( v65 )
      {
        v69 = *(_DWORD *)(v65 + 24);
        if ( (*(_DWORD *)(v68 + 44) || *(_DWORD *)(v68 + 48) || v69 > 0)
          && (unsigned int)dword_1C024C960 > 6
          && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v66, v67) )
        {
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C0219981,
            (const GUID *)(v68 + 28),
            0LL,
            2u,
            &v108);
        }
        *(_DWORD *)(v68 + 44) = 0;
        *(_OWORD *)(v68 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v30 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v28);
    if ( v30 )
      v30[1] = KeQueryPerformanceCounter(0LL);
    v89 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v88 = 1;
      v70 = PsGetCurrentThreadWin32Thread(v29);
      v87 = v70;
      if ( v70 && (*(int *)(v70 + 24) > 0 || *(_DWORD *)(v87 + 48)) )
      {
        EtwActivityIdControl(3u, &v89);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v71, v72) )
          {
            v81 = v88;
            v101 = 4LL;
            v100 = &v81;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v89,
              0LL,
              3u,
              &v99);
          }
        }
      }
    }
    else
    {
      v87 = 0LL;
    }
    v31 = 0LL;
    while ( 1 )
    {
      v32 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v32 )
        v31 = *v32;
      v35 = (PVOID)PsGetCurrentProcess(v34, v33);
      if ( v35 )
      {
        if ( v35 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v37, v36) == gpepCSRSS && v31 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v31 == gptiRit )
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
      *(GUID *)(v87 + 28) = v89;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v38) )
        {
          v82 = v88;
          v104 = 4LL;
          v103 = &v82;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v89,
            0LL,
            3u,
            &v102);
          v73 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v73 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v73, v74) )
        {
          v83 = v88;
          v107 = 4LL;
          v106 = &v83;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v89,
            0LL,
            3u,
            &v105);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v31;
    gbValidateHandleForIL = 1;
    if ( (unsigned __int8)KeIsAttachedProcess() )
    {
      v54 = PsGetCurrentProcess(v40, v39);
      v55 = PsGetProcessSessionIdEx(v54);
      v56 = PsGetCurrentThreadProcess();
      if ( v55 != (unsigned int)PsGetProcessSessionIdEx(v56) )
        continue;
    }
    v41 = KeGetCurrentThread();
    v42 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      v44 = (__int64 *)PsGetThreadWin32Thread(v41);
      if ( v44 )
        v42 = *v44;
    }
    v45 = PsGetCurrentProcessWin32Process(v43);
    if ( v42 )
    {
      if ( v45 )
      {
        if ( (*(_DWORD *)(v42 + 480) & 0x1000000) != 0 )
        {
          v19 = *(unsigned int *)(v42 + 1216);
          if ( (v19 & 0x80u) == 0LL && (*(_DWORD *)(v45 + 12) & 0x8000) != 0 )
          {
            v47 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v47 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46);
            if ( ExIsResourceAcquiredExclusiveLite(*v47) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v48);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v47);
            for ( j = gpducstulHead; gpducstulHead; j = gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)j + 2);
              v75 = *(_QWORD *)j;
              *((_QWORD *)j + 2) = 0LL;
              if ( !*(_DWORD *)(v75 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v49);
              v77 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v77 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v76);
              ExReleaseResourceAndLeaveCriticalRegion(*v77);
              HMUnlockObject(*(_QWORD *)j);
              tagDomLock::LockExclusive((tagDomLock *)v77);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v47);
          }
        }
      }
    }
  }
  return 0LL;
}
