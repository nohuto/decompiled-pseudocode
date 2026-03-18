/*
 * XREFs of NtRIMOnTimerNotification @ 0x1C01545E0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00289E8 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     RIMOnTimerNotification @ 0x1C0158370 (RIMOnTimerNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // [rsp+38h] [rbp-89h] BYREF
  int v56; // [rsp+3Ch] [rbp-85h] BYREF
  int v57; // [rsp+40h] [rbp-81h] BYREF
  __int64 v58; // [rsp+48h] [rbp-79h]
  __int64 v59; // [rsp+50h] [rbp-71h]
  unsigned __int8 v60; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+70h] [rbp-51h] BYREF
  int *v63; // [rsp+90h] [rbp-31h]
  int v64; // [rsp+98h] [rbp-29h]
  int v65; // [rsp+9Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+A0h] [rbp-21h] BYREF
  int *v67; // [rsp+C0h] [rbp-1h]
  int v68; // [rsp+C8h] [rbp+7h]
  int v69; // [rsp+CCh] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+D0h] [rbp+Fh] BYREF
  int *v71; // [rsp+F0h] [rbp+2Fh]
  int v72; // [rsp+F8h] [rbp+37h]
  int v73; // [rsp+FCh] [rbp+3Bh]

  v58 = a1;
  v3 = a1;
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v60 = 1;
    v8 = PsGetCurrentThreadWin32Thread(v6);
    v59 = v8;
    if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v65 = 0;
        v55 = v60;
        v64 = 4;
        v63 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v62);
      }
    }
  }
  else
  {
    v59 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v59 && (*(_DWORD *)(v59 + 48) || *(int *)(v59 + 24) > 0) )
  {
    *(_DWORD *)(v59 + 44) = 1;
    *(GUID *)(v59 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v69 = 0;
        v56 = v60;
        v68 = 4;
        v67 = &v56;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v66);
        v16 = dword_1C0244A70;
      }
      if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v73 = 0;
        v57 = v60;
        v72 = 4;
        v71 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v70);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v19 = PsGetCurrentProcess(v18, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(v19),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v23 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v23 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( v23
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v23 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v23 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28, v29);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v43 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v43[2];
          v44 = *v43;
          v43[2] = 0LL;
          if ( !*(_DWORD *)(v44 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
          v47 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
          if ( v47 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v48, v49);
          ExReleaseResourceAndLeaveCriticalRegion(*v47);
          HMUnlockObject(*v43);
          tagDomLock::LockExclusive(v47);
          v43 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = v58;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v50 = RIMOnTimerNotification(v3, a2);
  UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
  return v50;
}
