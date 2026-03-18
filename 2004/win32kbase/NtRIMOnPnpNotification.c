/*
 * XREFs of NtRIMOnPnpNotification @ 0x1C0050460
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
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMOnPnpNotification(__int64 a1)
{
  __int64 v1; // r14
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
  PERESOURCE *DomainLockRef; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct tagKERNELHANDLETABLEENTRY *v31; // rsi
  unsigned int v32; // ebx
  __int64 v33; // rcx
  __int64 v35; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // [rsp+30h] [rbp-89h] BYREF
  int v50; // [rsp+34h] [rbp-85h] BYREF
  int v51; // [rsp+38h] [rbp-81h] BYREF
  __int64 v52; // [rsp+40h] [rbp-79h]
  __int64 v53; // [rsp+48h] [rbp-71h]
  unsigned __int8 v54; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+68h] [rbp-51h] BYREF
  int *v57; // [rsp+88h] [rbp-31h]
  int v58; // [rsp+90h] [rbp-29h]
  int v59; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+98h] [rbp-21h] BYREF
  int *v61; // [rsp+B8h] [rbp-1h]
  int v62; // [rsp+C0h] [rbp+7h]
  int v63; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+C8h] [rbp+Fh] BYREF
  int *v65; // [rsp+E8h] [rbp+2Fh]
  int v66; // [rsp+F0h] [rbp+37h]
  int v67; // [rsp+F4h] [rbp+3Bh]

  v1 = a1;
  v52 = a1;
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v54 = 1;
    v38 = PsGetCurrentThreadWin32Thread();
    v53 = v38;
    if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v53 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v39, v40) )
        {
          v59 = 0;
          v49 = v54;
          v58 = 4;
          v57 = &v49;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v56);
        }
      }
    }
  }
  else
  {
    v53 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v53 && (*(_DWORD *)(v53 + 48) || *(int *)(v53 + 24) > 0) )
  {
    *(_DWORD *)(v53 + 44) = 1;
    *(GUID *)(v53 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v10) )
      {
        v63 = 0;
        v50 = v54;
        v62 = 4;
        v61 = &v50;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v60);
        v41 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v41 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v41, v42) )
      {
        v67 = 0;
        v51 = v54;
        v66 = 4;
        v65 = &v51;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v64);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v35 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v35),
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
    if ( v14
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v14 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v14 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21, v22);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v31 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v31 + 2);
          v43 = *(_QWORD *)v31;
          *((_QWORD *)v31 + 2) = 0LL;
          if ( !*(_DWORD *)(v43 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
          v46 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v46 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v47, v48);
          ExReleaseResourceAndLeaveCriticalRegion(*v46);
          HMUnlockObject(*(_QWORD *)v31);
          tagDomLock::LockExclusive((tagDomLock *)v46);
          v31 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v52;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v32 = RIMOnPnpNotification(v1);
  UserSessionSwitchLeaveCrit(v33);
  return v32;
}
