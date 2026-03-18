/*
 * XREFs of NtUserEnableMouseInPointer @ 0x1C00444F0
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
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct tagKERNELHANDLETABLEENTRY *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  __int64 v41; // rcx
  int v42; // [rsp+38h] [rbp-89h] BYREF
  int v43; // [rsp+3Ch] [rbp-85h] BYREF
  int v44; // [rsp+40h] [rbp-81h] BYREF
  int v45; // [rsp+44h] [rbp-7Dh]
  __int64 v46; // [rsp+48h] [rbp-79h]
  unsigned __int8 v47; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+68h] [rbp-59h] BYREF
  int *v50; // [rsp+88h] [rbp-39h]
  __int64 v51; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+98h] [rbp-29h] BYREF
  int *v53; // [rsp+B8h] [rbp-9h]
  __int64 v54; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+C8h] [rbp+7h] BYREF
  int *v56; // [rsp+E8h] [rbp+27h]
  __int64 v57; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v45 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    v33 = PsGetCurrentThreadWin32Thread(v3);
    v46 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v34, v35) )
        {
          v42 = v47;
          v51 = 4LL;
          v50 = &v42;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v49);
        }
      }
    }
  }
  else
  {
    v46 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v46 && (*(_DWORD *)(v46 + 48) || *(int *)(v46 + 24) > 0) )
  {
    *(_DWORD *)(v46 + 44) = 1;
    *(GUID *)(v46 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v12) )
      {
        v43 = v47;
        v54 = 4LL;
        v53 = &v43;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v52);
        v36 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v36 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v36, v37) )
      {
        v44 = v47;
        v57 = 4LL;
        v56 = &v44;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v55);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v30 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v30),
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
      v24 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v24 + 2);
          v38 = *(_QWORD *)v24;
          *((_QWORD *)v24 + 2) = 0LL;
          if ( !*(_DWORD *)(v38 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
          v40 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v40 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
          ExReleaseResourceAndLeaveCriticalRegion(*v40);
          HMUnlockObject(*(_QWORD *)v24);
          tagDomLock::LockExclusive((tagDomLock *)v40);
          v24 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v45;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( (v1 != 0) != v1 )
  {
    v41 = 87LL;
LABEL_67:
    UserSetLastError(v41);
    goto LABEL_35;
  }
  if ( v1 && (!qword_1C02588E0 ? (v25 = 0LL) : (v25 = qword_1C02588E0(gptiCurrent)), (v25 & 0x80000000000LL) != 0)
    || (v26 = *((_QWORD *)gptiCurrent + 52), v27 = *(_DWORD *)(v26 + 820), v1 != ((v27 >> 2) & 1)) && (v27 & 8) != 0 )
  {
    v41 = 5LL;
    goto LABEL_67;
  }
  v28 = v27 & 0xFFFFFFFB;
  v2 = 1LL;
  *(_DWORD *)(v26 + 820) = v28 | (4 * (v1 & 1 | 2));
LABEL_35:
  UserSessionSwitchLeaveCrit(v28);
  return v2;
}
