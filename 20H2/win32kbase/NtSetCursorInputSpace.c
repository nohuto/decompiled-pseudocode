/*
 * XREFs of NtSetCursorInputSpace @ 0x1C012F120
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
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C012B040 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01AD8F4 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
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
  __int64 *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  PVOID v48; // rax
  CInputConfig *v49; // rcx
  NTSTATUS v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v59; // [rsp+38h] [rbp-89h] BYREF
  int v60; // [rsp+3Ch] [rbp-85h] BYREF
  int v61; // [rsp+40h] [rbp-81h] BYREF
  struct _LUID v62; // [rsp+48h] [rbp-79h]
  __int64 v63; // [rsp+50h] [rbp-71h]
  unsigned __int8 v64; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+70h] [rbp-51h] BYREF
  int *v67; // [rsp+90h] [rbp-31h]
  __int64 v68; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+A0h] [rbp-21h] BYREF
  int *v70; // [rsp+C0h] [rbp-1h]
  __int64 v71; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+D0h] [rbp+Fh] BYREF
  int *v73; // [rsp+F0h] [rbp+2Fh]
  __int64 v74; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v62 = a1;
  v2 = 0LL;
  v4 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD))PsGetCurrentThreadWin32Thread)(a1);
  if ( v4 )
    v4[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v64 = 1;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3);
    v63 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v63 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v59 = v64;
        v68 = 4LL;
        v67 = &v59;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v66);
      }
    }
  }
  else
  {
    v63 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v63 && (*(_DWORD *)(v63 + 48) || *(int *)(v63 + 24) > 0) )
  {
    *(_DWORD *)(v63 + 44) = 1;
    *(GUID *)(v63 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = v64;
        v71 = 4LL;
        v70 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v69);
        v13 = dword_1C0244A70;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v61 = v64;
        v74 = 4LL;
        v73 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v72);
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
    v22 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( v22 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v22 + 488) & 0x1000000) != 0 )
        {
          v20 = *(unsigned int *)(v22 + 1232);
          if ( (v20 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v19, v26, v27);
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
              v1 = v62;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v48 = (PVOID)PsGetCurrentProcess(v20, v19);
  if ( v48 && v48 == g_pepDwm )
  {
LABEL_60:
    v50 = CInputConfig::BindMouse(v49, v1);
    if ( v50 >= 0 )
    {
      v2 = 1LL;
      goto LABEL_62;
    }
    goto LABEL_56;
  }
  v50 = CheckCapability((const unsigned __int16 *)v49);
  if ( v50 >= 0 )
  {
    v49 = (CInputConfig *)*(unsigned int *)(PsGetCurrentProcessWin32Process(v51) + 820);
    if ( ((unsigned __int8)v49 & 0x30) == 0 )
    {
      v53 = 5LL;
      goto LABEL_57;
    }
    goto LABEL_60;
  }
LABEL_56:
  v53 = RtlNtStatusToDosError(v50);
LABEL_57:
  UserSetLastError(v53, v52);
LABEL_62:
  UserSessionSwitchLeaveCrit(v55, v54, v56, v57);
  return v2;
}
