/*
 * XREFs of NtRIMOnTimerNotification @ 0x1C0156B40
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00506D8 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     RIMOnTimerNotification @ 0x1C015A8D0 (RIMOnTimerNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMOnTimerNotification(__int64 a1, unsigned int a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // ebx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // [rsp+38h] [rbp-89h] BYREF
  int v58; // [rsp+3Ch] [rbp-85h] BYREF
  int v59; // [rsp+40h] [rbp-81h] BYREF
  __int64 v60; // [rsp+48h] [rbp-79h]
  __int64 v61; // [rsp+50h] [rbp-71h]
  unsigned __int8 v62; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+70h] [rbp-51h] BYREF
  int *v65; // [rsp+90h] [rbp-31h]
  int v66; // [rsp+98h] [rbp-29h]
  int v67; // [rsp+9Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+A0h] [rbp-21h] BYREF
  int *v69; // [rsp+C0h] [rbp-1h]
  int v70; // [rsp+C8h] [rbp+7h]
  int v71; // [rsp+CCh] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+D0h] [rbp+Fh] BYREF
  int *v73; // [rsp+F0h] [rbp+2Fh]
  int v74; // [rsp+F8h] [rbp+37h]
  int v75; // [rsp+FCh] [rbp+3Bh]

  v60 = a1;
  v3 = a1;
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v62 = 1;
    v8 = PsGetCurrentThreadWin32Thread(v6);
    v61 = v8;
    if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v61 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v67 = 0;
        v57 = v62;
        v66 = 4;
        v65 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v64);
      }
    }
  }
  else
  {
    v61 = 0LL;
  }
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v9 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v61 )
    {
      v15 = *(unsigned int *)(v61 + 24);
      if ( *(_DWORD *)(v61 + 48) || (int)v15 > 0 )
      {
        *(_DWORD *)(v61 + 44) = 1;
        *(GUID *)(v61 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v71 = 0;
            v58 = v62;
            v70 = 4;
            v69 = &v58;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v68);
            v16 = dword_1C0246A70;
          }
          if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v75 = 0;
            v59 = v62;
            v74 = 4;
            v73 = &v59;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v72);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v15);
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (v20 = PsGetCurrentProcess(v19, v18),
        ProcessSessionId = PsGetProcessSessionIdEx(v20),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v25 = 0LL;
    if ( !IsThreadCrossSessionAttached(v19) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v25 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
    if ( v25
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v25 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v25 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v29, v30, v31);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35, v36);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v45 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v45[2];
          v46 = *v45;
          v45[2] = 0LL;
          if ( !*(_DWORD *)(v46 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
          v49 = (PERESOURCE *)GetDomainLockRef(12LL, v41, v43, v44);
          if ( v49 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v50, v51);
          ExReleaseResourceAndLeaveCriticalRegion(*v49);
          HMUnlockObject(*v45);
          tagDomLock::LockExclusive(v49);
          v45 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = v60;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v52 = RIMOnTimerNotification(v3, a2);
  UserSessionSwitchLeaveCrit(v54, v53, v55, v56);
  return v52;
}
