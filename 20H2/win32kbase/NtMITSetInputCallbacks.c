/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C00A8BB0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserSetMITInputCallbacks @ 0x1C00A8F04 (UserSetMITInputCallbacks.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // r8
  __int64 v24; // r9
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
  __int64 *v38; // rsi
  PVOID v39; // rax
  __int64 v40; // rdx
  int v41; // r14d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  CInputThread *v47; // rsi
  unsigned int CurrentThreadId; // eax
  int v49; // ebx
  unsigned int v50; // edi
  CInputThread *v51; // rsi
  unsigned int v52; // eax
  int v53; // ebx
  unsigned int v54; // edi
  __int64 v55; // rax
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // [rsp+38h] [rbp-79h] BYREF
  int v64; // [rsp+3Ch] [rbp-75h] BYREF
  int v65; // [rsp+40h] [rbp-71h] BYREF
  __int64 v66; // [rsp+48h] [rbp-69h]
  __int64 v67; // [rsp+50h] [rbp-61h]
  unsigned __int8 v68; // [rsp+58h] [rbp-59h]
  GUID ActivityId; // [rsp+5Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+70h] [rbp-41h] BYREF
  int *v71; // [rsp+90h] [rbp-21h]
  int v72; // [rsp+98h] [rbp-19h]
  int v73; // [rsp+9Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+A0h] [rbp-11h] BYREF
  int *v75; // [rsp+C0h] [rbp+Fh]
  int v76; // [rsp+C8h] [rbp+17h]
  int v77; // [rsp+CCh] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+D0h] [rbp+1Fh] BYREF
  int *v79; // [rsp+F0h] [rbp+3Fh]
  int v80; // [rsp+F8h] [rbp+47h]
  int v81; // [rsp+FCh] [rbp+4Bh]

  v1 = a1;
  v66 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v68 = 1;
    v55 = PsGetCurrentThreadWin32Thread(v2);
    v67 = v55;
    if ( v55 && (*(int *)(v55 + 24) > 0 || *(_DWORD *)(v67 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v73 = 0;
        v63 = v68;
        v72 = 4;
        v71 = &v63;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v70);
      }
    }
  }
  else
  {
    v67 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v67 && (*(_DWORD *)(v67 + 48) || *(int *)(v67 + 24) > 0) )
  {
    *(_DWORD *)(v67 + 44) = 1;
    *(GUID *)(v67 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v77 = 0;
        v64 = v68;
        v76 = 4;
        v75 = &v64;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v74);
        v56 = dword_1C0244A70;
      }
      if ( v56 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v81 = 0;
        v65 = v68;
        v80 = 4;
        v79 = &v65;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v78);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v13 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v13),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( v19 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v19 + 488) & 0x1000000) != 0 )
        {
          v17 = *(unsigned int *)(v19 + 1232);
          if ( (v17 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v16, v23, v24);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28, v29);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v38 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v38[2];
                v57 = *v38;
                v38[2] = 0LL;
                if ( !*(_DWORD *)(v57 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
                v60 = (PERESOURCE *)GetDomainLockRef(12LL, v34, v36, v37);
                if ( v60 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61, v62);
                ExReleaseResourceAndLeaveCriticalRegion(*v60);
                HMUnlockObject(*v38);
                tagDomLock::LockExclusive(v60);
                v38 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v66;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v39 = (PVOID)PsGetCurrentProcess(v17, v16);
  if ( !v39 )
    goto LABEL_31;
  if ( v39 != g_pepDwm )
    goto LABEL_31;
  v47 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v47, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v49 = *((_DWORD *)v47 + 10);
  v50 = CurrentThreadId;
  ExReleasePushLockSharedEx(v47, 0LL);
  KeLeaveCriticalRegion();
  if ( v50 != v49 )
  {
    v41 = UserSetMITInputCallbacks(v1);
    if ( v41 )
    {
      v51 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v51, 0LL);
      v52 = (unsigned int)PsGetCurrentThreadId();
      v53 = *((_DWORD *)v51 + 10);
      v54 = v52;
      ExReleasePushLockSharedEx(v51, 0LL);
      KeLeaveCriticalRegion();
      if ( v54 != v53 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
    }
  }
  else
  {
LABEL_31:
    v41 = 0;
    UserSetLastError(5LL, v40);
  }
  UserSessionSwitchLeaveCrit(v43, v42, v44, v45);
  return v41;
}
