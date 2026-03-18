/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C0136F30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ProtectHandle @ 0x1C006FD98 (ProtectHandle.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  PERESOURCE *v30; // rdi
  __int64 *v31; // rsi
  int v32; // edx
  __int64 v33; // rbx
  __int64 v34; // rdi
  int v35; // eax
  void *v36; // rcx
  __int64 v37; // rcx
  int v39; // [rsp+38h] [rbp-89h] BYREF
  int v40; // [rsp+3Ch] [rbp-85h] BYREF
  int v41; // [rsp+40h] [rbp-81h] BYREF
  __int64 v42; // [rsp+48h] [rbp-79h]
  unsigned __int8 v43; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+68h] [rbp-59h] BYREF
  int *v46; // [rsp+88h] [rbp-39h]
  __int64 v47; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+98h] [rbp-29h] BYREF
  int *v49; // [rsp+B8h] [rbp-9h]
  __int64 v50; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+C8h] [rbp+7h] BYREF
  int *v52; // [rsp+E8h] [rbp+27h]
  __int64 v53; // [rsp+F0h] [rbp+2Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v42 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v39 = v43;
        v47 = 4LL;
        v46 = &v39;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v45);
      }
    }
  }
  else
  {
    v42 = 0LL;
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
    if ( v42 )
    {
      v10 = *(unsigned int *)(v42 + 24);
      if ( *(_DWORD *)(v42 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v42 + 44) = 1;
        *(GUID *)(v42 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v40 = v43;
            v50 = 4LL;
            v49 = &v40;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v48);
            v11 = dword_1C024C960;
          }
          if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v41 = v43;
            v53 = 4LL;
            v52 = &v41;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v51);
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
      && (*(_DWORD *)(v20 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v31 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v28 = *v31;
        v31[2] = 0LL;
        if ( !*(_DWORD *)(v28 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
        v30 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v30 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
        ExReleaseResourceAndLeaveCriticalRegion(*v30);
        HMUnlockObject(*v31);
        tagDomLock::LockExclusive(v30);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  RIMLockExclusive((__int64)&gInputLock);
  v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v34 = 0LL;
  v35 = *(_DWORD *)(v33 + 1216);
  if ( (v35 & 0x1000000) != 0 )
  {
    v36 = *(void **)(v33 + 720);
    *(_DWORD *)(v33 + 1216) = v35 & 0xFEFFFFFF;
    ProtectHandle(v36, v32, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*(PVOID *)(v33 + 728));
    *(_QWORD *)(v33 + 728) = 0LL;
    v34 = 1LL;
    *(_QWORD *)(v33 + 720) = 0LL;
  }
  qword_1C02563B8 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v37);
  return v34;
}
