/*
 * XREFs of NtMITMinuserWindowCreated @ 0x1C012D2F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     UserAddBaseWindowHandle @ 0x1C013B330 (UserAddBaseWindowHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITMinuserWindowCreated(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v54; // [rsp+30h] [rbp-99h] BYREF
  int v55; // [rsp+34h] [rbp-95h] BYREF
  int v56; // [rsp+38h] [rbp-91h] BYREF
  __int64 v57; // [rsp+40h] [rbp-89h]
  __int64 v58; // [rsp+48h] [rbp-81h]
  unsigned __int8 v59; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+68h] [rbp-61h] BYREF
  int *v62; // [rsp+88h] [rbp-41h]
  int v63; // [rsp+90h] [rbp-39h]
  int v64; // [rsp+94h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+98h] [rbp-31h] BYREF
  int *v66; // [rsp+B8h] [rbp-11h]
  int v67; // [rsp+C0h] [rbp-9h]
  int v68; // [rsp+C4h] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C8h] [rbp-1h] BYREF
  int *v70; // [rsp+E8h] [rbp+1Fh]
  int v71; // [rsp+F0h] [rbp+27h]
  int v72; // [rsp+F4h] [rbp+2Bh]

  v57 = a1;
  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v59 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v58 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v64 = 0;
        v54 = v59;
        v63 = 4;
        v62 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v61);
      }
    }
  }
  else
  {
    v58 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v58 && (*(_DWORD *)(v58 + 48) || *(int *)(v58 + 24) > 0) )
  {
    *(_DWORD *)(v58 + 44) = 1;
    *(GUID *)(v58 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v68 = 0;
        v55 = v59;
        v67 = 4;
        v66 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v65);
        v14 = dword_1C0244A70;
      }
      if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v72 = 0;
        v56 = v59;
        v71 = 4;
        v70 = &v56;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v69);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v17 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v17),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v21 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v21 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v26, v27);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v41 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v41[2];
          v42 = *v41;
          v41[2] = 0LL;
          if ( !*(_DWORD *)(v42 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
          v45 = (PERESOURCE *)GetDomainLockRef(12LL, v37, v39, v40);
          if ( v45 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
          ExReleaseResourceAndLeaveCriticalRegion(*v45);
          HMUnlockObject(*v41);
          tagDomLock::LockExclusive(v45);
          v41 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = v57;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v48 = (int)UserAddBaseWindowHandle(v3, a2);
  UserSessionSwitchLeaveCrit(v50, v49, v51, v52);
  return v48;
}
