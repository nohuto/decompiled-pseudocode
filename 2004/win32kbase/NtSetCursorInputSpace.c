/*
 * XREFs of NtSetCursorInputSpace @ 0x1C0131470
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C012D390 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01AFC74 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtSetCursorInputSpace(struct _LUID a1)
{
  struct _LUID v1; // rsi
  __int64 v2; // r14
  __int64 v3; // rcx
  LARGE_INTEGER *v4; // rbx
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 v19; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v21; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  PVOID v49; // rax
  CInputConfig *v50; // rcx
  NTSTATUS v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v60; // [rsp+38h] [rbp-89h] BYREF
  int v61; // [rsp+3Ch] [rbp-85h] BYREF
  int v62; // [rsp+40h] [rbp-81h] BYREF
  struct _LUID v63; // [rsp+48h] [rbp-79h]
  __int64 v64; // [rsp+50h] [rbp-71h]
  unsigned __int8 v65; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+70h] [rbp-51h] BYREF
  int *v68; // [rsp+90h] [rbp-31h]
  __int64 v69; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+A0h] [rbp-21h] BYREF
  int *v71; // [rsp+C0h] [rbp-1h]
  __int64 v72; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+D0h] [rbp+Fh] BYREF
  int *v74; // [rsp+F0h] [rbp+2Fh]
  __int64 v75; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v63 = a1;
  v2 = 0LL;
  v4 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD))PsGetCurrentThreadWin32Thread)(a1);
  if ( v4 )
    v4[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v65 = 1;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3);
    v64 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v64 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v60 = v65;
        v69 = 4LL;
        v68 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v64 )
    {
      v12 = *(unsigned int *)(v64 + 24);
      if ( *(_DWORD *)(v64 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v64 + 44) = 1;
        *(GUID *)(v64 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v61 = v65;
            v72 = 4LL;
            v71 = &v61;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v70);
            v13 = dword_1C0246A70;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v62 = v65;
            v75 = 4LL;
            v74 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v73);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v12);
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v17 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v17),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v19),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v23 = 0LL;
    if ( !IsThreadCrossSessionAttached(v16) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v23 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( v23 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v23 + 480) & 0x1000000) != 0 )
        {
          v16 = *(unsigned int *)(v23 + 1224);
          if ( (v16 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v21, v27, v28);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32, v33);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v42 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v42[2];
                v43 = *v42;
                v42[2] = 0LL;
                if ( !*(_DWORD *)(v43 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
                v46 = (PERESOURCE *)GetDomainLockRef(12LL, v38, v40, v41);
                if ( v46 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v47, v48);
                ExReleaseResourceAndLeaveCriticalRegion(*v46);
                HMUnlockObject(*v42);
                tagDomLock::LockExclusive(v46);
                v42 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v63;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v49 = (PVOID)PsGetCurrentProcess(v16, v21);
  if ( v49 && v49 == g_pepDwm )
  {
LABEL_60:
    v51 = CInputConfig::BindMouse(v50, v1);
    if ( v51 >= 0 )
    {
      v2 = 1LL;
      goto LABEL_62;
    }
    goto LABEL_56;
  }
  v51 = CheckCapability((const unsigned __int16 *)v50);
  if ( v51 >= 0 )
  {
    v50 = (CInputConfig *)*(unsigned int *)(PsGetCurrentProcessWin32Process(v52) + 820);
    if ( ((unsigned __int8)v50 & 0x30) == 0 )
    {
      v54 = 5LL;
      goto LABEL_57;
    }
    goto LABEL_60;
  }
LABEL_56:
  v54 = RtlNtStatusToDosError(v51);
LABEL_57:
  UserSetLastError(v54, v53);
LABEL_62:
  UserSessionSwitchLeaveCrit(v56, v55, v57, v58);
  return v2;
}
