/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C003A6C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserSetMITInputCallbacks @ 0x1C003AA14 (UserSetMITInputCallbacks.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct tagKERNELHANDLETABLEENTRY *v28; // rsi
  PVOID v29; // rax
  int v30; // r14d
  __int64 v31; // rcx
  CInputThread *v33; // rsi
  unsigned int CurrentThreadId; // eax
  int v35; // ebx
  unsigned int v36; // edi
  CInputThread *v37; // rsi
  unsigned int v38; // eax
  int v39; // ebx
  unsigned int v40; // edi
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  int v49; // [rsp+38h] [rbp-79h] BYREF
  int v50; // [rsp+3Ch] [rbp-75h] BYREF
  int v51; // [rsp+40h] [rbp-71h] BYREF
  __int64 v52; // [rsp+48h] [rbp-69h]
  __int64 v53; // [rsp+50h] [rbp-61h]
  unsigned __int8 v54; // [rsp+58h] [rbp-59h]
  GUID ActivityId; // [rsp+5Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+70h] [rbp-41h] BYREF
  int *v57; // [rsp+90h] [rbp-21h]
  int v58; // [rsp+98h] [rbp-19h]
  int v59; // [rsp+9Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+A0h] [rbp-11h] BYREF
  int *v61; // [rsp+C0h] [rbp+Fh]
  int v62; // [rsp+C8h] [rbp+17h]
  int v63; // [rsp+CCh] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+D0h] [rbp+1Fh] BYREF
  int *v65; // [rsp+F0h] [rbp+3Fh]
  int v66; // [rsp+F8h] [rbp+47h]
  int v67; // [rsp+FCh] [rbp+4Bh]

  v1 = a1;
  v52 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v54 = 1;
    v41 = PsGetCurrentThreadWin32Thread(v2);
    v53 = v41;
    if ( v41 && (*(int *)(v41 + 24) > 0 || *(_DWORD *)(v53 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v42, v43) )
        {
          v59 = 0;
          v49 = v54;
          v58 = 4;
          v57 = &v49;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v53 && (*(_DWORD *)(v53 + 48) || *(int *)(v53 + 24) > 0) )
  {
    *(_DWORD *)(v53 + 44) = 1;
    *(GUID *)(v53 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v11) )
      {
        v63 = 0;
        v50 = v54;
        v62 = 4;
        v61 = &v50;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v60);
        v44 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v44 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v44, v45) )
      {
        v67 = 0;
        v51 = v54;
        v66 = 4;
        v65 = &v51;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v64);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v14),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v20 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( v20 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v20 + 480) & 0x1000000) != 0 )
        {
          v18 = *(unsigned int *)(v20 + 1216);
          if ( (v18 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v28 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v28 + 2);
                v46 = *(_QWORD *)v28;
                *((_QWORD *)v28 + 2) = 0LL;
                if ( !*(_DWORD *)(v46 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
                v48 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v48 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v47);
                ExReleaseResourceAndLeaveCriticalRegion(*v48);
                HMUnlockObject(*(_QWORD *)v28);
                tagDomLock::LockExclusive((tagDomLock *)v48);
                v28 = gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v52;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v29 = (PVOID)PsGetCurrentProcess(v18, v17);
  if ( !v29 )
    goto LABEL_31;
  if ( v29 != g_pepDwm )
    goto LABEL_31;
  v33 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v33, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v35 = *((_DWORD *)v33 + 10);
  v36 = CurrentThreadId;
  ExReleasePushLockSharedEx(v33, 0LL);
  KeLeaveCriticalRegion();
  if ( v36 != v35 )
  {
    v30 = UserSetMITInputCallbacks(v1);
    if ( v30 )
    {
      v37 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v37, 0LL);
      v38 = (unsigned int)PsGetCurrentThreadId();
      v39 = *((_DWORD *)v37 + 10);
      v40 = v38;
      ExReleasePushLockSharedEx(v37, 0LL);
      KeLeaveCriticalRegion();
      if ( v40 != v39 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
    }
  }
  else
  {
LABEL_31:
    v30 = 0;
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v31);
  return v30;
}
