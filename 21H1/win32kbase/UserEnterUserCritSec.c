/*
 * XREFs of UserEnterUserCritSec @ 0x1C0044010
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
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserEnterUserCritSec(__int64 a1)
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
  __int64 v18; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct tagKERNELHANDLETABLEENTRY *v22; // rsi
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  int v34; // [rsp+38h] [rbp-79h] BYREF
  int v35; // [rsp+3Ch] [rbp-75h] BYREF
  int v36; // [rsp+40h] [rbp-71h] BYREF
  __int64 v37; // [rsp+48h] [rbp-69h]
  unsigned __int8 v38; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+68h] [rbp-49h] BYREF
  int *v41; // [rsp+88h] [rbp-29h]
  int v42; // [rsp+90h] [rbp-21h]
  int v43; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+98h] [rbp-19h] BYREF
  int *v45; // [rsp+B8h] [rbp+7h]
  int v46; // [rsp+C0h] [rbp+Fh]
  int v47; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+C8h] [rbp+17h] BYREF
  int *v49; // [rsp+E8h] [rbp+37h]
  int v50; // [rsp+F0h] [rbp+3Fh]
  int v51; // [rsp+F4h] [rbp+43h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v38 = 1;
    v26 = PsGetCurrentThreadWin32Thread(v1);
    v37 = v26;
    if ( v26 && (*(int *)(v26 + 24) > 0 || *(_DWORD *)(v37 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v27, v28) )
        {
          v43 = 0;
          v34 = v38;
          v42 = 4;
          v41 = &v34;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v40);
        }
      }
    }
  }
  else
  {
    v37 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v37 && (*(_DWORD *)(v37 + 48) || *(int *)(v37 + 24) > 0) )
  {
    *(_DWORD *)(v37 + 44) = 1;
    *(GUID *)(v37 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v10) )
      {
        v47 = 0;
        v35 = v38;
        v46 = 4;
        v45 = &v35;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v44);
        v29 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v29 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v29, v30) )
      {
        v51 = 0;
        v36 = v38;
        v50 = 4;
        v49 = &v36;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v48);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v23 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v23),
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
      && (*(_DWORD *)(v14 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v22 = gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v31 = *(_QWORD *)v22;
        *((_QWORD *)v22 + 2) = 0LL;
        if ( !*(_DWORD *)(v31 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
        v33 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v33 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
        ExReleaseResourceAndLeaveCriticalRegion(*v33);
        HMUnlockObject(*(_QWORD *)v22);
        tagDomLock::LockExclusive((tagDomLock *)v33);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
