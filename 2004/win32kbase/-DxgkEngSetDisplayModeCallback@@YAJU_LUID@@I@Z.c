/*
 * XREFs of ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0054F60
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00551E8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     IsUserResetPointerSupported @ 0x1C0055338 (IsUserResetPointerSupported.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DxgkEngSetDisplayModeCallback(struct _LUID a1, unsigned int a2)
{
  unsigned int v2; // r14d
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
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct tagKERNELHANDLETABLEENTRY *v32; // rsi
  __int64 v33; // rcx
  __int64 v35; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // [rsp+30h] [rbp-89h] BYREF
  int v50; // [rsp+34h] [rbp-85h] BYREF
  int v51; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-7Dh]
  struct _LUID v53; // [rsp+40h] [rbp-79h] BYREF
  __int64 v54; // [rsp+48h] [rbp-71h]
  unsigned __int8 v55; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+68h] [rbp-51h] BYREF
  int *v58; // [rsp+88h] [rbp-31h]
  int v59; // [rsp+90h] [rbp-29h]
  int v60; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+98h] [rbp-21h] BYREF
  int *v62; // [rsp+B8h] [rbp-1h]
  int v63; // [rsp+C0h] [rbp+7h]
  int v64; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+C8h] [rbp+Fh] BYREF
  int *v66; // [rsp+E8h] [rbp+2Fh]
  int v67; // [rsp+F0h] [rbp+37h]
  int v68; // [rsp+F4h] [rbp+3Bh]

  v2 = a2;
  v52 = a2;
  v53 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v55 = 1;
    v38 = PsGetCurrentThreadWin32Thread();
    v54 = v38;
    if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v54 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v39, v40) )
        {
          v60 = 0;
          v49 = v55;
          v59 = 4;
          v58 = &v49;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v57);
        }
      }
    }
  }
  else
  {
    v54 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v54 && (*(_DWORD *)(v54 + 48) || *(int *)(v54 + 24) > 0) )
  {
    *(_DWORD *)(v54 + 44) = 1;
    *(GUID *)(v54 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v11) )
      {
        v64 = 0;
        v50 = v55;
        v63 = 4;
        v62 = &v50;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v61);
        v41 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v41 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v41, v42) )
      {
        v68 = 0;
        v51 = v55;
        v67 = 4;
        v66 = &v51;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v65);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v35 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v35),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    if ( v15
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v15 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v15 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22, v23);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v32 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v32 + 2);
          v43 = *(_QWORD *)v32;
          *((_QWORD *)v32 + 2) = 0LL;
          if ( !*(_DWORD *)(v43 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
          v46 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v46 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v47, v48);
          ExReleaseResourceAndLeaveCriticalRegion(*v46);
          HMUnlockObject(*(_QWORD *)v32);
          tagDomLock::LockExclusive((tagDomLock *)v46);
          v32 = gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v52;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( (int)IsUserResetPointerSupported() >= 0 && qword_1C0250F38 )
    qword_1C0250F38();
  DrvUpdatePDevForWDDMVidPnSource(&v53, v2);
  UserSessionSwitchLeaveCrit(v33);
  return 0LL;
}
