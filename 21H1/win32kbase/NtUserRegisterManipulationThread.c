/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C004F530
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
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

__int64 __fastcall NtUserRegisterManipulationThread(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rsi
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
  struct tagKERNELHANDLETABLEENTRY *v28; // r14
  PVOID v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  PERESOURCE *v41; // rdi
  int v42; // [rsp+38h] [rbp-89h] BYREF
  int v43; // [rsp+3Ch] [rbp-85h] BYREF
  int v44; // [rsp+40h] [rbp-81h] BYREF
  __int64 v45; // [rsp+48h] [rbp-79h]
  unsigned __int8 v46; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+68h] [rbp-59h] BYREF
  int *v49; // [rsp+88h] [rbp-39h]
  int v50; // [rsp+90h] [rbp-31h]
  int v51; // [rsp+94h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+98h] [rbp-29h] BYREF
  int *v53; // [rsp+B8h] [rbp-9h]
  int v54; // [rsp+C0h] [rbp-1h]
  int v55; // [rsp+C4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C8h] [rbp+7h] BYREF
  int *v57; // [rsp+E8h] [rbp+27h]
  int v58; // [rsp+F0h] [rbp+2Fh]
  int v59; // [rsp+F4h] [rbp+33h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  v3 = 1LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v46 = 1;
    v34 = PsGetCurrentThreadWin32Thread(v1);
    v45 = v34;
    if ( v34 && (*(int *)(v34 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v35, v36) )
        {
          v51 = 0;
          v42 = v46;
          v50 = 4;
          v49 = &v42;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v48);
        }
      }
    }
  }
  else
  {
    v45 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v45 && (*(_DWORD *)(v45 + 48) || *(int *)(v45 + 24) > 0) )
  {
    *(_DWORD *)(v45 + 44) = 1;
    *(GUID *)(v45 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v11) )
      {
        v55 = 0;
        v43 = v46;
        v54 = 4;
        v53 = &v43;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v52);
        v37 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v37 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v37, v38) )
      {
        v59 = 0;
        v44 = v46;
        v58 = 4;
        v57 = &v44;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v56);
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
            while ( 1 )
            {
              v28 = gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v39 = *(_QWORD *)v28;
              *((_QWORD *)v28 + 2) = 0LL;
              if ( !*(_DWORD *)(v39 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
              v41 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v41 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
              ExReleaseResourceAndLeaveCriticalRegion(*v41);
              HMUnlockObject(*(_QWORD *)v28);
              tagDomLock::LockExclusive((tagDomLock *)v41);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v29 = (PVOID)PsGetCurrentProcess(v18, v17);
  if ( v29 && v29 == g_pepDwm )
  {
    gptiManipulationThread = (__int64)gptiCurrent;
    v33 = PsGetCurrentThreadWin32Thread(v30);
    if ( v33 )
      *(_DWORD *)(v33 + 48) = 1;
  }
  else
  {
    UserSetLastError(5LL);
    v3 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v31);
  return v3;
}
