/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C0047610
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserSetMITInputCallbacks @ 0x1C0047964 (UserSetMITInputCallbacks.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(__int64 a1)
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
  struct tagKERNELHANDLETABLEENTRY *v36; // rsi
  PVOID v37; // rax
  int v38; // r14d
  __int64 v39; // rcx
  CInputThread *v41; // rsi
  unsigned int CurrentThreadId; // eax
  int v43; // ebx
  unsigned int v44; // edi
  CInputThread *v45; // rsi
  unsigned int v46; // eax
  int v47; // ebx
  unsigned int v48; // edi
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // r9
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
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v68 = 1;
    v52 = PsGetCurrentThreadWin32Thread();
    v67 = v52;
    if ( v52 && (*(int *)(v52 + 24) > 0 || *(_DWORD *)(v67 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v53, v54) )
        {
          v73 = 0;
          v63 = v68;
          v72 = 4;
          v71 = &v63;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v70);
        }
      }
    }
  }
  else
  {
    v67 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v67 && (*(_DWORD *)(v67 + 48) || *(int *)(v67 + 24) > 0) )
  {
    *(_DWORD *)(v67 + 44) = 1;
    *(GUID *)(v67 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v10) )
      {
        v77 = 0;
        v64 = v68;
        v76 = 4;
        v75 = &v64;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v74);
        v55 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v55 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v55, v56) )
      {
        v81 = 0;
        v65 = v68;
        v80 = 4;
        v79 = &v65;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v78);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v13 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v13),
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
    if ( v19 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v19 + 480) & 0x1000000) != 0 )
        {
          v17 = *(unsigned int *)(v19 + 1224);
          if ( (v17 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v36 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v36 + 2);
                v57 = *(_QWORD *)v36;
                *((_QWORD *)v36 + 2) = 0LL;
                if ( !*(_DWORD *)(v57 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
                v60 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v60 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61, v62);
                ExReleaseResourceAndLeaveCriticalRegion(*v60);
                HMUnlockObject(*(_QWORD *)v36);
                tagDomLock::LockExclusive((tagDomLock *)v60);
                v36 = gpducstulHead;
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
  v37 = (PVOID)PsGetCurrentProcess(v17, v16);
  if ( !v37 )
    goto LABEL_31;
  if ( v37 != g_pepDwm )
    goto LABEL_31;
  v41 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v41, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v43 = *((_DWORD *)v41 + 10);
  v44 = CurrentThreadId;
  ExReleasePushLockSharedEx(v41, 0LL);
  KeLeaveCriticalRegion();
  if ( v44 != v43 )
  {
    v38 = UserSetMITInputCallbacks(v1);
    if ( v38 )
    {
      v45 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v45, 0LL);
      v46 = (unsigned int)PsGetCurrentThreadId();
      v47 = *((_DWORD *)v45 + 10);
      v48 = v46;
      ExReleasePushLockSharedEx(v45, 0LL);
      KeLeaveCriticalRegion();
      if ( v48 != v47 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v49, v50, v51);
    }
  }
  else
  {
LABEL_31:
    v38 = 0;
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v39);
  return v38;
}
