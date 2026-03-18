/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C0130F40
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ProtectHandle @ 0x1C0076AA0 (ProtectHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rax
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int ProcessSessionId; // ebx
  __int64 v17; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rsi
  int v47; // edx
  __int64 v48; // rbx
  __int64 v49; // rdi
  int v50; // eax
  void *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v57; // [rsp+38h] [rbp-89h] BYREF
  int v58; // [rsp+3Ch] [rbp-85h] BYREF
  int v59; // [rsp+40h] [rbp-81h] BYREF
  __int64 v60; // [rsp+48h] [rbp-79h]
  unsigned __int8 v61; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+68h] [rbp-59h] BYREF
  int *v64; // [rsp+88h] [rbp-39h]
  __int64 v65; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+98h] [rbp-29h] BYREF
  int *v67; // [rsp+B8h] [rbp-9h]
  __int64 v68; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C8h] [rbp+7h] BYREF
  int *v70; // [rsp+E8h] [rbp+27h]
  __int64 v71; // [rsp+F0h] [rbp+2Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v61 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v60 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v57 = v61;
        v65 = 4LL;
        v64 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v63);
      }
    }
  }
  else
  {
    v60 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v60 )
    {
      v10 = *(unsigned int *)(v60 + 24);
      if ( *(_DWORD *)(v60 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v60 + 44) = 1;
        *(GUID *)(v60 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v58 = v61;
            v68 = 4LL;
            v67 = &v58;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v66);
            v11 = dword_1C0246A70;
          }
          if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v59 = v61;
            v71 = 4LL;
            v70 = &v59;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v69);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v10);
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (v15 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v15),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v17),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0LL;
    if ( !IsThreadCrossSessionAttached(v14) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v20 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( v20
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v20 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v20 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v24, v25, v26);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30, v31);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v46 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v40 = *v46;
        v46[2] = 0LL;
        if ( !*(_DWORD *)(v40 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
        v43 = (PERESOURCE *)GetDomainLockRef(12LL, v36, v38, v39);
        if ( v43 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v44, v45);
        ExReleaseResourceAndLeaveCriticalRegion(*v43);
        HMUnlockObject(*v46);
        tagDomLock::LockExclusive(v43);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  RIMLockExclusive((__int64)&gInputLock);
  v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v49 = 0LL;
  v50 = *(_DWORD *)(v48 + 1224);
  if ( (v50 & 0x1000000) != 0 )
  {
    v51 = *(void **)(v48 + 720);
    *(_DWORD *)(v48 + 1224) = v50 & 0xFEFFFFFF;
    ProtectHandle(v51, v47, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*(PVOID *)(v48 + 728));
    *(_QWORD *)(v48 + 728) = 0LL;
    v49 = 1LL;
    *(_QWORD *)(v48 + 720) = 0LL;
  }
  qword_1C0250438 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v53, v52, v54, v55);
  return v49;
}
