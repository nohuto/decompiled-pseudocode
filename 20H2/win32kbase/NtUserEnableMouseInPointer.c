/*
 * XREFs of NtUserEnableMouseInPointer @ 0x1C00B2580
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
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(__int64 a1)
{
  int v1; // r14d
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
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
  __int64 *v35; // r15
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  __int64 v40; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v43; // rax
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  int v52; // [rsp+38h] [rbp-89h] BYREF
  int v53; // [rsp+3Ch] [rbp-85h] BYREF
  int v54; // [rsp+40h] [rbp-81h] BYREF
  int v55; // [rsp+44h] [rbp-7Dh]
  __int64 v56; // [rsp+48h] [rbp-79h]
  unsigned __int8 v57; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+68h] [rbp-59h] BYREF
  int *v60; // [rsp+88h] [rbp-39h]
  __int64 v61; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+98h] [rbp-29h] BYREF
  int *v63; // [rsp+B8h] [rbp-9h]
  __int64 v64; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+C8h] [rbp+7h] BYREF
  int *v66; // [rsp+E8h] [rbp+27h]
  __int64 v67; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v55 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v57 = 1;
    v43 = PsGetCurrentThreadWin32Thread(v3);
    v56 = v43;
    if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v52 = v57;
        v61 = 4LL;
        v60 = &v52;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v59);
      }
    }
  }
  else
  {
    v56 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
  {
    *(_DWORD *)(v56 + 44) = 1;
    *(GUID *)(v56 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v53 = v57;
        v64 = 4LL;
        v63 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v62);
        v44 = dword_1C0244A70;
      }
      if ( v44 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v54 = v57;
        v67 = 4LL;
        v66 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v65);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v40 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v40),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    if ( v15
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v15 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v15 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v19, v20, v21);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25, v26);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v35 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v35[2];
          v45 = *v35;
          v35[2] = 0LL;
          if ( !*(_DWORD *)(v45 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
          v48 = (PERESOURCE *)GetDomainLockRef(12LL, v31, v33, v34);
          if ( v48 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49, v50);
          ExReleaseResourceAndLeaveCriticalRegion(*v48);
          HMUnlockObject(*v35);
          tagDomLock::LockExclusive(v48);
          v35 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v55;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( (v1 != 0) != v1 )
  {
    v51 = 87LL;
LABEL_67:
    UserSetLastError(v51, v19);
    goto LABEL_35;
  }
  if ( v1 && (!qword_1C0250920 ? (v36 = 0LL) : (v36 = qword_1C0250920(gptiCurrent)), (v36 & 0x80000000000LL) != 0)
    || (v19 = *((_QWORD *)gptiCurrent + 53), v37 = *(_DWORD *)(v19 + 820), v1 != ((v37 >> 2) & 1)) && (v37 & 8) != 0 )
  {
    v51 = 5LL;
    goto LABEL_67;
  }
  v38 = v37 & 0xFFFFFFFB;
  v2 = 1LL;
  *(_DWORD *)(v19 + 820) = v38 | (4 * (v1 & 1 | 2));
LABEL_35:
  UserSessionSwitchLeaveCrit(v38, v19, v20, v21);
  return v2;
}
