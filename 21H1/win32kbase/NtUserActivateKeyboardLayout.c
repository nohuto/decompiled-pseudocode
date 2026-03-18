/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C0058480
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxActivateKeyboardLayout @ 0x1C0058730 (xxxActivateKeyboardLayout.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C006F338 (ApiSetEditionGetProcessWindowStation.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserActivateKeyboardLayout(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct tagKERNELHANDLETABLEENTRY *i; // r14
  int v25; // eax
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  __int64 v27; // rcx
  __int64 v29; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  PERESOURCE *v39; // rdi
  int v40; // [rsp+30h] [rbp-99h] BYREF
  int v41; // [rsp+34h] [rbp-95h] BYREF
  _DWORD v42[2]; // [rsp+38h] [rbp-91h] BYREF
  __int64 v43; // [rsp+40h] [rbp-89h]
  unsigned __int8 v44; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+60h] [rbp-69h] BYREF
  int *v47; // [rsp+80h] [rbp-49h]
  __int64 v48; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+90h] [rbp-39h] BYREF
  int *v50; // [rsp+B0h] [rbp-19h]
  __int64 v51; // [rsp+B8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD *v53; // [rsp+E0h] [rbp+17h]
  __int64 v54; // [rsp+E8h] [rbp+1Fh]

  v42[1] = a2;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 1;
    v32 = PsGetCurrentThreadWin32Thread(v3);
    v43 = v32;
    if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v33, v34) )
        {
          v40 = v44;
          v48 = 4LL;
          v47 = &v40;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v46);
        }
      }
    }
  }
  else
  {
    v43 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v43 && (*(_DWORD *)(v43 + 48) || *(int *)(v43 + 24) > 0) )
  {
    *(_DWORD *)(v43 + 44) = 1;
    *(GUID *)(v43 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v12) )
      {
        v41 = v44;
        v51 = 4LL;
        v50 = &v41;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v49);
        v35 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v35 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v35, v36) )
      {
        v42[0] = v44;
        v54 = 4LL;
        v53 = v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v52);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v29 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v29),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
        v37 = *(_QWORD *)i;
        *((_QWORD *)i + 2) = 0LL;
        if ( !*(_DWORD *)(v37 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
        v39 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v39 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
        ExReleaseResourceAndLeaveCriticalRegion(*v39);
        HMUnlockObject(*(_QWORD *)i);
        tagDomLock::LockExclusive((tagDomLock *)v39);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
    v25 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL) + 24LL) & 1;
  else
    v25 = 0;
  if ( v25 )
  {
    UserSetLastError(5LL);
  }
  else
  {
    ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
    v2 = xxxActivateKeyboardLayout(ProcessWindowStation);
  }
  UserSessionSwitchLeaveCrit(v27);
  return v2;
}
