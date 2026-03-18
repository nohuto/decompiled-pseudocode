/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00927E0
 * Callers:
 *     UserDeleteW32Process @ 0x1C003C960 (UserDeleteW32Process.c)
 *     UserGetDesktopDC @ 0x1C0040DE8 (UserGetDesktopDC.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C004C9B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00538E0 (ResetAccessibilityCountersOnMouseInput.c)
 *     GreCreateCompatibleDC @ 0x1C0091E80 (GreCreateCompatibleDC.c)
 *     UserDeleteW32Thread @ 0x1C0123370 (UserDeleteW32Thread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  ReEnterLeaveCrit *v1; // r14
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v3; // rcx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
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
  __int64 v39; // rax
  int ProcessSessionId; // ebx
  __int64 v41; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v43; // rax
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // [rsp+30h] [rbp-89h] BYREF
  int v52; // [rsp+34h] [rbp-85h] BYREF
  int v53; // [rsp+38h] [rbp-81h] BYREF
  ReEnterLeaveCrit *v54; // [rsp+40h] [rbp-79h]
  __int64 v55; // [rsp+48h] [rbp-71h]
  unsigned __int8 v56; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+68h] [rbp-51h] BYREF
  int *v59; // [rsp+88h] [rbp-31h]
  int v60; // [rsp+90h] [rbp-29h]
  int v61; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+98h] [rbp-21h] BYREF
  int *v63; // [rsp+B8h] [rbp-1h]
  int v64; // [rsp+C0h] [rbp+7h]
  int v65; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+C8h] [rbp+Fh] BYREF
  int *v67; // [rsp+E8h] [rbp+2Fh]
  int v68; // [rsp+F0h] [rbp+37h]
  int v69; // [rsp+F4h] [rbp+3Bh]

  v1 = this;
  v54 = this;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)v1 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v56 = 1;
      v43 = PsGetCurrentThreadWin32Thread(v4);
      v55 = v43;
      if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v55 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v61 = 0;
          v51 = v56;
          v60 = 4;
          v59 = &v51;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v58);
        }
      }
    }
    else
    {
      v55 = 0LL;
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
      if ( v55 )
      {
        v12 = *(unsigned int *)(v55 + 24);
        if ( *(_DWORD *)(v55 + 48) || (int)v12 > 0 )
        {
          *(_DWORD *)(v55 + 44) = 1;
          *(GUID *)(v55 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v65 = 0;
              v52 = v56;
              v64 = 4;
              v63 = &v52;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &ActivityId,
                0LL,
                3u,
                &v62);
              v44 = dword_1C0246A70;
            }
            if ( v44 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v69 = 0;
              v53 = v56;
              v68 = 4;
              v67 = &v53;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &ActivityId,
                0LL,
                3u,
                &v66);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v12);
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v13)
      || (v39 = PsGetCurrentProcess(v15, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(v39),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v41),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v17 = 0LL;
      if ( !IsThreadCrossSessionAttached(v15) )
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
            v45 = *v37;
            v37[2] = 0LL;
            if ( !*(_DWORD *)(v45 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
            v48 = (PERESOURCE *)GetDomainLockRef(12LL, v33, v35, v36);
            if ( v48 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49, v50);
            ExReleaseResourceAndLeaveCriticalRegion(*v48);
            HMUnlockObject(*v37);
            tagDomLock::LockExclusive((tagDomLock *)v48);
            v37 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v1 = v54;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  return v1;
}
