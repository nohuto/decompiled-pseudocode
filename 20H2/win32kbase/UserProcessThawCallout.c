/*
 * XREFs of UserProcessThawCallout @ 0x1C0028FA4
 * Callers:
 *     W32CalloutDispatch @ 0x1C00297E0 (W32CalloutDispatch.c)
 * Callees:
 *     IsFreezeThawTimersSupported @ 0x1C00297B4 (IsFreezeThawTimersSupported.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessThawCallout(__int64 a1)
{
  __int64 v1; // r14
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rcx
  __int64 ProcessWin32Process; // rdi
  __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  int v25; // eax
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct tagKERNELHANDLETABLEENTRY *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PERESOURCE *v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // [rsp+30h] [rbp-89h] BYREF
  int v56; // [rsp+34h] [rbp-85h] BYREF
  int v57; // [rsp+38h] [rbp-81h] BYREF
  __int64 v58; // [rsp+40h] [rbp-79h]
  __int64 v59; // [rsp+48h] [rbp-71h]
  unsigned __int8 v60; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+68h] [rbp-51h] BYREF
  int *v63; // [rsp+88h] [rbp-31h]
  int v64; // [rsp+90h] [rbp-29h]
  int v65; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+98h] [rbp-21h] BYREF
  int *v67; // [rsp+B8h] [rbp-1h]
  int v68; // [rsp+C0h] [rbp+7h]
  int v69; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+C8h] [rbp+Fh] BYREF
  int *v71; // [rsp+E8h] [rbp+2Fh]
  int v72; // [rsp+F0h] [rbp+37h]
  int v73; // [rsp+F4h] [rbp+3Bh]

  v1 = a1;
  v58 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v60 = 1;
    v30 = PsGetCurrentThreadWin32Thread();
    v59 = v30;
    if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v31, v32) )
        {
          v65 = 0;
          v55 = v60;
          v64 = 4;
          v63 = &v55;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&ActivityId, 0, 3u, &v62);
        }
      }
    }
  }
  else
  {
    v59 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v59 && (*(_DWORD *)(v59 + 48) || *(int *)(v59 + 24) > 0) )
  {
    *(_DWORD *)(v59 + 44) = 1;
    *(GUID *)(v59 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v10) )
      {
        v69 = 0;
        v56 = v60;
        v68 = 4;
        v67 = &v56;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&ActivityId, 0, 3u, &v66);
        v33 = (unsigned int)dword_1C0244A70;
      }
      if ( (unsigned int)v33 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v33, v34) )
      {
        v73 = 0;
        v57 = v60;
        v72 = 4;
        v71 = &v57;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&ActivityId, 0, 3u, &v70);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v27 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v27),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16, v15, v17, v18);
    if ( v14
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v14 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v14 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38, v39);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v48 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v48 + 2);
          v49 = *(_QWORD *)v48;
          *((_QWORD *)v48 + 2) = 0LL;
          if ( !*(_DWORD *)(v49 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
          v52 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v52 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50, v53, v54);
          ExReleaseResourceAndLeaveCriticalRegion(*v52);
          HMUnlockObject(*(_QWORD *)v48);
          tagDomLock::LockExclusive((tagDomLock *)v52);
          v48 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v58;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  ProcessWin32Process = PsGetProcessWin32Process(v1);
  if ( ProcessWin32Process )
  {
    v23 = *(_QWORD *)(ProcessWin32Process + 320);
    v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v23 )
    {
      if ( qword_1C02502A0 )
        v25 = qword_1C02502A0();
      else
        v25 = -1073741637;
      if ( v25 >= 0 )
      {
        if ( qword_1C02502A8 )
          qword_1C02502A8(v23, (unsigned int)v24);
      }
      v23 = *(_QWORD *)(v23 + 664);
    }
    *(_DWORD *)(ProcessWin32Process + 820) &= ~0x400u;
    if ( (int)IsFreezeThawTimersSupported() >= 0 )
    {
      if ( qword_1C024FF70 )
        qword_1C024FF70();
    }
  }
  UserSessionSwitchLeaveCrit(v21);
  return 0LL;
}
