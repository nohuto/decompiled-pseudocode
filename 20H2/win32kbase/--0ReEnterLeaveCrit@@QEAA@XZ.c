/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004CB60
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C004DB90 (GreCreateCompatibleDC.c)
 *     UserDeleteW32Process @ 0x1C009BD60 (UserDeleteW32Process.c)
 *     UserGetDesktopDC @ 0x1C00A3358 (UserGetDesktopDC.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00AD910 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00B3CB0 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserDeleteW32Thread @ 0x1C0121020 (UserDeleteW32Thread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  ReEnterLeaveCrit *v1; // r14
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rsi
  __int64 v40; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // [rsp+30h] [rbp-89h] BYREF
  int v55; // [rsp+34h] [rbp-85h] BYREF
  int v56; // [rsp+38h] [rbp-81h] BYREF
  ReEnterLeaveCrit *v57; // [rsp+40h] [rbp-79h]
  __int64 v58; // [rsp+48h] [rbp-71h]
  unsigned __int8 v59; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+68h] [rbp-51h] BYREF
  int *v62; // [rsp+88h] [rbp-31h]
  int v63; // [rsp+90h] [rbp-29h]
  int v64; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+98h] [rbp-21h] BYREF
  int *v66; // [rsp+B8h] [rbp-1h]
  int v67; // [rsp+C0h] [rbp+7h]
  int v68; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C8h] [rbp+Fh] BYREF
  int *v70; // [rsp+E8h] [rbp+2Fh]
  int v71; // [rsp+F0h] [rbp+37h]
  int v72; // [rsp+F4h] [rbp+3Bh]

  v1 = this;
  v57 = this;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)v1 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v59 = 1;
      v43 = PsGetCurrentThreadWin32Thread();
      v58 = v43;
      if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v44, v45) )
          {
            v64 = 0;
            v54 = v59;
            v63 = 4;
            v62 = &v54;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E87,
              (int)&ActivityId,
              0,
              3u,
              &v61);
          }
        }
      }
    }
    else
    {
      v58 = 0LL;
    }
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v5 )
        v4 = *v5;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v4 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v58 && (*(_DWORD *)(v58 + 48) || *(int *)(v58 + 24) > 0) )
    {
      *(_DWORD *)(v58 + 44) = 1;
      *(GUID *)(v58 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v11) )
        {
          v68 = 0;
          v55 = v59;
          v67 = 4;
          v66 = &v55;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&ActivityId, 0, 3u, &v65);
          v46 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v46 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v46, v47) )
        {
          v72 = 0;
          v56 = v59;
          v71 = 4;
          v70 = &v56;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&ActivityId, 0, 3u, &v69);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v4;
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
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, v16, v18, v19);
      if ( v15
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v15 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v15 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v22, v23, v24);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28, v29);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v38 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v38[2];
            v48 = *v38;
            v38[2] = 0LL;
            if ( !*(_DWORD *)(v48 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
            v51 = (PERESOURCE *)GetDomainLockRef(12LL, v34, v36, v37);
            if ( v51 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
            ExReleaseResourceAndLeaveCriticalRegion(*v51);
            HMUnlockObject(*v38);
            tagDomLock::LockExclusive((tagDomLock *)v51);
            v38 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v1 = v57;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  return v1;
}
