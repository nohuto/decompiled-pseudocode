/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C00A25F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     SetInputDelegationModeImpl @ 0x1C00A28D4 (SetInputDelegationModeImpl.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rsi
  CInputThread *v38; // rsi
  unsigned int CurrentThreadId; // eax
  int v40; // ebx
  unsigned int v41; // edi
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v48; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v51; // rax
  unsigned int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  int v60; // [rsp+30h] [rbp-99h] BYREF
  int v61; // [rsp+34h] [rbp-95h] BYREF
  int v62; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v63; // [rsp+3Ch] [rbp-8Dh]
  __int64 v64; // [rsp+40h] [rbp-89h]
  unsigned __int8 v65; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+60h] [rbp-69h] BYREF
  int *v68; // [rsp+80h] [rbp-49h]
  __int64 v69; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+90h] [rbp-39h] BYREF
  int *v71; // [rsp+B0h] [rbp-19h]
  __int64 v72; // [rsp+B8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+C0h] [rbp-9h] BYREF
  int *v74; // [rsp+E0h] [rbp+17h]
  __int64 v75; // [rsp+E8h] [rbp+1Fh]

  v2 = a2;
  v63 = a2;
  v3 = a1;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v65 = 1;
    v51 = PsGetCurrentThreadWin32Thread(v5);
    v64 = v51;
    if ( v51 && (*(int *)(v51 + 24) > 0 || *(_DWORD *)(v64 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = v65;
        v69 = 4LL;
        v68 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v67);
      }
    }
  }
  else
  {
    v64 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v64 && (*(_DWORD *)(v64 + 48) || *(int *)(v64 + 24) > 0) )
  {
    *(_DWORD *)(v64 + 44) = 1;
    *(GUID *)(v64 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v61 = v65;
        v72 = 4LL;
        v71 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v70);
        v52 = dword_1C0244A70;
      }
      if ( v52 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v62 = v65;
        v75 = 4LL;
        v74 = &v62;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v73);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v48 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v48),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v21, v22, v23);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v27, v28);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v37 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v37[2];
          v53 = *v37;
          v37[2] = 0LL;
          if ( !*(_DWORD *)(v53 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
          v56 = (PERESOURCE *)GetDomainLockRef(12LL, v33, v35, v36);
          if ( v56 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57, v58);
          ExReleaseResourceAndLeaveCriticalRegion(*v56);
          HMUnlockObject(*v37);
          tagDomLock::LockExclusive(v56);
          v37 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v63;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v38 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v38, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v40 = *((_DWORD *)v38 + 10);
  v41 = CurrentThreadId;
  ExReleasePushLockSharedEx(v38, 0LL);
  KeLeaveCriticalRegion();
  if ( v41 != v40 )
    goto LABEL_66;
  if ( v2 )
  {
    if ( !v3 || (v2 & 0xFFFFFFFC) != 0 || *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v59 = 87LL;
LABEL_60:
      UserSetLastError(v59, v42);
      goto LABEL_31;
    }
    if ( gptiForeground && v3 == ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
      goto LABEL_30;
LABEL_66:
    v59 = 5LL;
    goto LABEL_60;
  }
LABEL_30:
  v4 = SetInputDelegationModeImpl(v3, v2);
LABEL_31:
  UserSessionSwitchLeaveCrit(v44, v43, v45, v46);
  return v4;
}
