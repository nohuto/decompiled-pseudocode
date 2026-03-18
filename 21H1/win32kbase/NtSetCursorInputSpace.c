/*
 * XREFs of NtSetCursorInputSpace @ 0x1C0137460
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
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C0133380 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01B59D4 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  PERESOURCE *v34; // rdi
  PVOID v35; // rax
  CInputConfig *v36; // rcx
  NTSTATUS v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v43; // [rsp+38h] [rbp-89h] BYREF
  int v44; // [rsp+3Ch] [rbp-85h] BYREF
  int v45; // [rsp+40h] [rbp-81h] BYREF
  struct _LUID v46; // [rsp+48h] [rbp-79h]
  __int64 v47; // [rsp+50h] [rbp-71h]
  unsigned __int8 v48; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+70h] [rbp-51h] BYREF
  int *v51; // [rsp+90h] [rbp-31h]
  __int64 v52; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+A0h] [rbp-21h] BYREF
  int *v54; // [rsp+C0h] [rbp-1h]
  __int64 v55; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+D0h] [rbp+Fh] BYREF
  int *v57; // [rsp+F0h] [rbp+2Fh]
  __int64 v58; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v46 = a1;
  v2 = 0LL;
  v4 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD))PsGetCurrentThreadWin32Thread)(a1);
  if ( v4 )
    v4[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v48 = 1;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3);
    v47 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v47 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v43 = v48;
        v52 = 4LL;
        v51 = &v43;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v50);
      }
    }
  }
  else
  {
    v47 = 0LL;
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
    if ( v47 )
    {
      v12 = *(unsigned int *)(v47 + 24);
      if ( *(_DWORD *)(v47 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v47 + 44) = 1;
        *(GUID *)(v47 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v44 = v48;
            v55 = 4LL;
            v54 = &v44;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v53);
            v13 = dword_1C024C960;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v45 = v48;
            v58 = 4LL;
            v57 = &v45;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v56);
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
          v16 = *(unsigned int *)(v23 + 1216);
          if ( (v16 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v31 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v31[2];
                v32 = *v31;
                v31[2] = 0LL;
                if ( !*(_DWORD *)(v32 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
                v34 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v34 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
                ExReleaseResourceAndLeaveCriticalRegion(*v34);
                HMUnlockObject(*v31);
                tagDomLock::LockExclusive(v34);
                v31 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v46;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v35 = (PVOID)PsGetCurrentProcess(v16, v21);
  if ( v35 && v35 == g_pepDwm )
  {
LABEL_60:
    v37 = CInputConfig::BindMouse(v36, v1);
    if ( v37 >= 0 )
    {
      v2 = 1LL;
      goto LABEL_62;
    }
    goto LABEL_56;
  }
  v37 = CheckCapability((const unsigned __int16 *)v36);
  if ( v37 >= 0 )
  {
    v36 = (CInputConfig *)*(unsigned int *)(PsGetCurrentProcessWin32Process(v38) + 820);
    if ( ((unsigned __int8)v36 & 0x30) == 0 )
    {
      v40 = 5LL;
      goto LABEL_57;
    }
    goto LABEL_60;
  }
LABEL_56:
  v40 = RtlNtStatusToDosError(v37);
LABEL_57:
  UserSetLastError(v40, v39);
LABEL_62:
  UserSessionSwitchLeaveCrit(v41);
  return v2;
}
