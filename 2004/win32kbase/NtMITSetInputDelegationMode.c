/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C0040110
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     SetInputDelegationModeImpl @ 0x1C00403F4 (SetInputDelegationModeImpl.c)
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

__int64 __fastcall NtMITSetInputDelegationMode(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r15d
  int v4; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct tagKERNELHANDLETABLEENTRY *v34; // rsi
  CInputThread *v35; // rsi
  unsigned int CurrentThreadId; // eax
  int v37; // ebx
  unsigned int v38; // edi
  __int64 v39; // rcx
  __int64 v41; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PERESOURCE *v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  int v56; // [rsp+30h] [rbp-99h] BYREF
  int v57; // [rsp+34h] [rbp-95h] BYREF
  int v58; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v59; // [rsp+3Ch] [rbp-8Dh]
  __int64 v60; // [rsp+40h] [rbp-89h]
  unsigned __int8 v61; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+60h] [rbp-69h] BYREF
  int *v64; // [rsp+80h] [rbp-49h]
  __int64 v65; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+90h] [rbp-39h] BYREF
  int *v67; // [rsp+B0h] [rbp-19h]
  __int64 v68; // [rsp+B8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C0h] [rbp-9h] BYREF
  int *v70; // [rsp+E0h] [rbp+17h]
  __int64 v71; // [rsp+E8h] [rbp+1Fh]

  v2 = a2;
  v59 = a2;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v61 = 1;
    v44 = PsGetCurrentThreadWin32Thread();
    v60 = v44;
    if ( v44 && (*(int *)(v44 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v45, v46) )
        {
          v56 = v61;
          v65 = 4LL;
          v64 = &v56;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v63);
        }
      }
    }
  }
  else
  {
    v60 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v60 && (*(_DWORD *)(v60 + 48) || *(int *)(v60 + 24) > 0) )
  {
    *(_DWORD *)(v60 + 44) = 1;
    *(GUID *)(v60 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v13) )
      {
        v57 = v61;
        v68 = 4LL;
        v67 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v66);
        v47 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v47 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v47, v48) )
      {
        v58 = v61;
        v71 = 4LL;
        v70 = &v58;
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
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v41 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v41),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24, v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v34 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v34 + 2);
          v49 = *(_QWORD *)v34;
          *((_QWORD *)v34 + 2) = 0LL;
          if ( !*(_DWORD *)(v49 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
          v52 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v52 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50, v53, v54);
          ExReleaseResourceAndLeaveCriticalRegion(*v52);
          HMUnlockObject(*(_QWORD *)v34);
          tagDomLock::LockExclusive((tagDomLock *)v52);
          v34 = gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v59;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v35 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v35, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v37 = *((_DWORD *)v35 + 10);
  v38 = CurrentThreadId;
  ExReleasePushLockSharedEx(v35, 0LL);
  KeLeaveCriticalRegion();
  if ( v38 != v37 )
    goto LABEL_66;
  if ( v2 )
  {
    if ( !a1 || (v2 & 0xFFFFFFFC) != 0 || *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v55 = 87LL;
LABEL_60:
      UserSetLastError(v55);
      goto LABEL_31;
    }
    if ( gptiForeground && a1 == ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
      goto LABEL_30;
LABEL_66:
    v55 = 5LL;
    goto LABEL_60;
  }
LABEL_30:
  v4 = SetInputDelegationModeImpl(a1, v2);
LABEL_31:
  UserSessionSwitchLeaveCrit(v39);
  return v4;
}
