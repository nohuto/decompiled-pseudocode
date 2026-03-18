/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C0018800
 * Callers:
 *     <none>
 * Callees:
 *     xxxActivateKeyboardLayout @ 0x1C0018AB0 (xxxActivateKeyboardLayout.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0077098 (ApiSetEditionGetProcessWindowStation.c)
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

__int64 __fastcall NtUserActivateKeyboardLayout(__int64 a1, int a2)
{
  __int64 v2; // rsi
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
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct tagKERNELHANDLETABLEENTRY *i; // r14
  int v36; // eax
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  __int64 v38; // rcx
  __int64 v40; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // [rsp+30h] [rbp-99h] BYREF
  int v55; // [rsp+34h] [rbp-95h] BYREF
  _DWORD v56[2]; // [rsp+38h] [rbp-91h] BYREF
  __int64 v57; // [rsp+40h] [rbp-89h]
  unsigned __int8 v58; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+60h] [rbp-69h] BYREF
  int *v61; // [rsp+80h] [rbp-49h]
  __int64 v62; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+90h] [rbp-39h] BYREF
  int *v64; // [rsp+B0h] [rbp-19h]
  __int64 v65; // [rsp+B8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD *v67; // [rsp+E0h] [rbp+17h]
  __int64 v68; // [rsp+E8h] [rbp+1Fh]

  v56[1] = a2;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v58 = 1;
    v43 = PsGetCurrentThreadWin32Thread();
    v57 = v43;
    if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v44, v45) )
        {
          v54 = v58;
          v62 = 4LL;
          v61 = &v54;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E87, (int)&ActivityId, 0, 3u, &v60);
        }
      }
    }
  }
  else
  {
    v57 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v57 && (*(_DWORD *)(v57 + 48) || *(int *)(v57 + 24) > 0) )
  {
    *(_DWORD *)(v57 + 44) = 1;
    *(GUID *)(v57 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v11) )
      {
        v55 = v58;
        v65 = 4LL;
        v64 = &v55;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E30, (int)&ActivityId, 0, 3u, &v63);
        v46 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v46 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v46, v47) )
      {
        v56[0] = v58;
        v68 = 4LL;
        v67 = v56;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E5D, (int)&ActivityId, 0, 3u, &v66);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v40 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v40),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, v16, v18, v19);
    if ( v15
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v15 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v15 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25, v26);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
        v48 = *(_QWORD *)i;
        *((_QWORD *)i + 2) = 0LL;
        if ( !*(_DWORD *)(v48 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
        v51 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v51 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
        ExReleaseResourceAndLeaveCriticalRegion(*v51);
        HMUnlockObject(*(_QWORD *)i);
        tagDomLock::LockExclusive((tagDomLock *)v51);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
    v36 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL) + 24LL) & 1;
  else
    v36 = 0;
  if ( v36 )
  {
    UserSetLastError(5LL);
  }
  else
  {
    ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
    v2 = xxxActivateKeyboardLayout(ProcessWindowStation);
  }
  UserSessionSwitchLeaveCrit(v38);
  return v2;
}
