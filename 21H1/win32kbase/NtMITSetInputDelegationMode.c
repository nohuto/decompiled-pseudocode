/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C0031550
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     SetInputDelegationModeImpl @ 0x1C0031834 (SetInputDelegationModeImpl.c)
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

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // r12d
  int v4; // r14d
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct tagKERNELHANDLETABLEENTRY *v26; // rsi
  CInputThread *v27; // rsi
  unsigned int CurrentThreadId; // eax
  int v29; // ebx
  unsigned int v30; // edi
  __int64 v31; // rcx
  __int64 v33; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 v44; // rcx
  int v45; // [rsp+30h] [rbp-99h] BYREF
  int v46; // [rsp+34h] [rbp-95h] BYREF
  int v47; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v48; // [rsp+3Ch] [rbp-8Dh]
  __int64 v49; // [rsp+40h] [rbp-89h]
  unsigned __int8 v50; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+60h] [rbp-69h] BYREF
  int *v53; // [rsp+80h] [rbp-49h]
  __int64 v54; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+90h] [rbp-39h] BYREF
  int *v56; // [rsp+B0h] [rbp-19h]
  __int64 v57; // [rsp+B8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+C0h] [rbp-9h] BYREF
  int *v59; // [rsp+E0h] [rbp+17h]
  __int64 v60; // [rsp+E8h] [rbp+1Fh]

  v2 = a2;
  v48 = a2;
  v3 = a1;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v50 = 1;
    v36 = PsGetCurrentThreadWin32Thread(v5);
    v49 = v36;
    if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v49 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v37, v38) )
        {
          v45 = v50;
          v54 = 4LL;
          v53 = &v45;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v52);
        }
      }
    }
  }
  else
  {
    v49 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v49 && (*(_DWORD *)(v49 + 48) || *(int *)(v49 + 24) > 0) )
  {
    *(_DWORD *)(v49 + 44) = 1;
    *(GUID *)(v49 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v14) )
      {
        v46 = v50;
        v57 = 4LL;
        v56 = &v46;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v55);
        v39 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v39 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v39, v40) )
      {
        v47 = v50;
        v60 = 4LL;
        v59 = &v47;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v58);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v33 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v33),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v26 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v26 + 2);
          v41 = *(_QWORD *)v26;
          *((_QWORD *)v26 + 2) = 0LL;
          if ( !*(_DWORD *)(v41 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
          v43 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v43 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42);
          ExReleaseResourceAndLeaveCriticalRegion(*v43);
          HMUnlockObject(*(_QWORD *)v26);
          tagDomLock::LockExclusive((tagDomLock *)v43);
          v26 = gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v48;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v27 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v27, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v29 = *((_DWORD *)v27 + 10);
  v30 = CurrentThreadId;
  ExReleasePushLockSharedEx(v27, 0LL);
  KeLeaveCriticalRegion();
  if ( v30 != v29 )
    goto LABEL_66;
  if ( v2 )
  {
    if ( !v3 || (v2 & 0xFFFFFFFC) != 0 || *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v44 = 87LL;
LABEL_60:
      UserSetLastError(v44);
      goto LABEL_31;
    }
    if ( gptiForeground && v3 == ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
      goto LABEL_30;
LABEL_66:
    v44 = 5LL;
    goto LABEL_60;
  }
LABEL_30:
  v4 = SetInputDelegationModeImpl(v3, v2);
LABEL_31:
  UserSessionSwitchLeaveCrit(v31);
  return v4;
}
