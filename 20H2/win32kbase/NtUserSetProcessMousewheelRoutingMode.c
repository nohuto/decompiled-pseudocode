/*
 * XREFs of NtUserSetProcessMousewheelRoutingMode @ 0x1C0136E00
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
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessMousewheelRoutingMode(__int64 a1)
{
  int v1; // r15d
  __int64 v2; // rsi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  int v53; // r15d
  unsigned int v54; // eax
  int v56; // [rsp+38h] [rbp-89h] BYREF
  int v57; // [rsp+3Ch] [rbp-85h] BYREF
  int v58; // [rsp+40h] [rbp-81h] BYREF
  int v59; // [rsp+44h] [rbp-7Dh]
  __int64 v60; // [rsp+48h] [rbp-79h]
  unsigned __int8 v61; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+68h] [rbp-59h] BYREF
  int *v64; // [rsp+88h] [rbp-39h]
  __int64 v65; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+98h] [rbp-29h] BYREF
  int *v67; // [rsp+B8h] [rbp-9h]
  __int64 v68; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C8h] [rbp+7h] BYREF
  int *v70; // [rsp+E8h] [rbp+27h]
  __int64 v71; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v59 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v61 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v60 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v56 = v61;
        v65 = 4LL;
        v64 = &v56;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v63);
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
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v57 = v61;
        v68 = 4LL;
        v67 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v66);
        v13 = dword_1C0244A70;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v58 = v61;
        v71 = 4LL;
        v70 = &v58;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
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
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v21 + 488) & 0x1000000) != 0 )
        {
          v19 = *(unsigned int *)(v21 + 1232);
          if ( (v19 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v26, v27);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v41 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v41[2];
                v42 = *v41;
                v41[2] = 0LL;
                if ( !*(_DWORD *)(v42 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
                v45 = (PERESOURCE *)GetDomainLockRef(12LL, v37, v39, v40);
                if ( v45 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
                ExReleaseResourceAndLeaveCriticalRegion(*v45);
                HMUnlockObject(*v41);
                tagDomLock::LockExclusive(v45);
                v41 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v59;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v48 = PsGetCurrentProcessWin32Process(v19);
  v52 = v48;
  if ( !v48 )
    goto LABEL_61;
  if ( !v1 )
  {
    v54 = *(_DWORD *)(v48 + 820) & 0xFFFE7FFF;
    goto LABEL_60;
  }
  v53 = v1 - 1;
  if ( !v53 )
  {
    v54 = *(_DWORD *)(v48 + 820) & 0xFFFE7FFF | 0x8000;
    goto LABEL_60;
  }
  if ( v53 != 1 )
  {
LABEL_61:
    UserSetLastError(87LL, v48);
    goto LABEL_62;
  }
  v54 = *(_DWORD *)(v48 + 820) & 0xFFFE7FFF | 0x10000;
LABEL_60:
  *(_DWORD *)(v52 + 820) = v54;
  v2 = 1LL;
LABEL_62:
  UserSessionSwitchLeaveCrit(v49, v52, v50, v51);
  return v2;
}
