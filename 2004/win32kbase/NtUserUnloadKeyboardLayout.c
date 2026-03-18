/*
 * XREFs of NtUserUnloadKeyboardLayout @ 0x1C013AD50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0077098 (ApiSetEditionGetProcessWindowStation.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     xxxUnloadKeyboardLayout @ 0x1C01A80F0 (xxxUnloadKeyboardLayout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserUnloadKeyboardLayout(__int64 a1)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *i; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // r9
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v54; // [rsp+30h] [rbp-89h] BYREF
  int v55; // [rsp+34h] [rbp-85h] BYREF
  int v56; // [rsp+38h] [rbp-81h] BYREF
  __int64 v57; // [rsp+40h] [rbp-79h]
  __int64 v58; // [rsp+48h] [rbp-71h]
  unsigned __int8 v59; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+68h] [rbp-51h] BYREF
  int *v62; // [rsp+88h] [rbp-31h]
  int v63; // [rsp+90h] [rbp-29h]
  int v64; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+98h] [rbp-21h] BYREF
  int *v66; // [rsp+B8h] [rbp-1h]
  int v67; // [rsp+C0h] [rbp+7h]
  int v68; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C8h] [rbp+Fh] BYREF
  int *v70; // [rsp+E8h] [rbp+2Fh]
  int v71; // [rsp+F0h] [rbp+37h]
  int v72; // [rsp+F4h] [rbp+3Bh]

  v57 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v59 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v58 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v64 = 0;
        v54 = v59;
        v63 = 4;
        v62 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
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
    if ( v58 )
    {
      v10 = *(unsigned int *)(v58 + 24);
      if ( *(_DWORD *)(v58 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v58 + 44) = 1;
        *(GUID *)(v58 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v68 = 0;
            v55 = v59;
            v67 = 4;
            v66 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v65);
            v11 = dword_1C0246A70;
          }
          if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v72 = 0;
            v56 = v59;
            v71 = 4;
            v70 = &v56;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v69);
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
      && (*(_DWORD *)(v20 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v24, v25, v26);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30, v31);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
        v41 = *i;
        i[2] = 0LL;
        if ( !*(_DWORD *)(v41 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
        v44 = (PERESOURCE *)GetDomainLockRef(12LL, v36, v38, v39);
        if ( v44 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
        ExReleaseResourceAndLeaveCriticalRegion(*v44);
        HMUnlockObject(*i);
        tagDomLock::LockExclusive(v44);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  v48 = (int)xxxUnloadKeyboardLayout(ProcessWindowStation);
  UserSessionSwitchLeaveCrit(v50, v49, v51, v52);
  return v48;
}
