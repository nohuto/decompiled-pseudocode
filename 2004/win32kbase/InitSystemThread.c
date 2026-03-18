/*
 * XREFs of InitSystemThread @ 0x1C0030EE0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 * Callees:
 *     InitClientInfo @ 0x1C0031274 (InitClientInfo.c)
 *     ClearAppStarting @ 0x1C0031440 (ClearAppStarting.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  const void **v1; // r15
  unsigned int v2; // esi
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
  struct tagKERNELHANDLETABLEENTRY *v35; // r14
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int128 v39; // xmm0
  __int64 v40; // xmm1_8
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v44; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  PERESOURCE *v55; // rdi
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // [rsp+38h] [rbp-89h] BYREF
  int v59; // [rsp+3Ch] [rbp-85h] BYREF
  int v60; // [rsp+40h] [rbp-81h] BYREF
  const void **v61; // [rsp+48h] [rbp-79h]
  _BYTE ActivityId[28]; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+70h] [rbp-51h] BYREF
  int *v64; // [rsp+90h] [rbp-31h]
  __int64 v65; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+A0h] [rbp-21h] BYREF
  int *v67; // [rsp+C0h] [rbp-1h]
  __int64 v68; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+D0h] [rbp+Fh] BYREF
  int *v70; // [rsp+F0h] [rbp+2Fh]
  __int64 v71; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v61 = a1;
  PsGetThreadProcess(KeGetCurrentThread());
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_OWORD *)&ActivityId[12] = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId[8] = 1;
    v47 = PsGetCurrentThreadWin32Thread();
    *(_QWORD *)ActivityId = v47;
    if ( v47 && (*(int *)(v47 + 24) > 0 || *(_DWORD *)(*(_QWORD *)ActivityId + 48LL)) )
    {
      EtwActivityIdControl(3u, (LPGUID)&ActivityId[12]);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v48, v49) )
        {
          v58 = ActivityId[8];
          v65 = 4LL;
          v64 = &v58;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0246A70,
            (int)&dword_1C0213E87,
            (int)&ActivityId[12],
            0,
            3u,
            &v63);
        }
      }
    }
  }
  else
  {
    *(_QWORD *)ActivityId = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
    && *(_QWORD *)ActivityId
    && (*(_DWORD *)(*(_QWORD *)ActivityId + 48LL) || *(int *)(*(_QWORD *)ActivityId + 24LL) > 0) )
  {
    *(_DWORD *)(*(_QWORD *)ActivityId + 44LL) = 1;
    *(_OWORD *)(*(_QWORD *)ActivityId + 28LL) = *(_OWORD *)&ActivityId[12];
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v11) )
      {
        v59 = ActivityId[8];
        v68 = 4LL;
        v67 = &v59;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C0246A70,
          (int)&dword_1C0213E30,
          (int)&ActivityId[12],
          0,
          3u,
          &v66);
        v50 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v50 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v50, v51) )
      {
        v60 = ActivityId[8];
        v71 = 4LL;
        v70 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C0246A70,
          (int)&dword_1C0213E5D,
          (int)&ActivityId[12],
          0,
          3u,
          &v69);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v44 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v44),
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
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, v16, v18, v19);
    if ( v15
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v15 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v15 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25, v26);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v35 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v35 + 2);
          v52 = *(_QWORD *)v35;
          *((_QWORD *)v35 + 2) = 0LL;
          if ( !*(_DWORD *)(v52 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
          v55 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v55 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v56, v57);
          ExReleaseResourceAndLeaveCriticalRegion(*v55);
          HMUnlockObject(*(_QWORD *)v35);
          tagDomLock::LockExclusive((tagDomLock *)v55);
          v35 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v61;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v36 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v37 = Win32AllocPoolWithQuota(272LL, 1768125269LL);
  *(_QWORD *)(v36 + 472) = v37;
  if ( v37 )
  {
    v39 = *(_OWORD *)(v36 + 384);
    v40 = *(_QWORD *)(v36 + 400);
    *(_DWORD *)(v36 + 480) = *(_DWORD *)(v36 + 480) & 0xFFFFFFF3 | 4;
    *(_OWORD *)ActivityId = v39;
    *(_QWORD *)&ActivityId[16] = v40;
    if ( (unsigned int)InitClientInfo(v36) )
    {
      if ( v1 )
      {
        v41 = *(_QWORD *)(v36 + 488);
        if ( v41 )
          Win32FreePool(v41);
        v42 = Win32AllocPoolWithQuota(*(unsigned __int16 *)v1 + 18LL, 2020897621LL);
        *(_QWORD *)(v36 + 488) = v42;
        if ( v42 )
        {
          *(_QWORD *)(v42 + 8) = v42 + 16;
          memmove(*(void **)(*(_QWORD *)(v36 + 488) + 8LL), v1[1], *(unsigned __int16 *)v1);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 488) + 8LL) + 2 * ((unsigned __int64)*(unsigned __int16 *)v1 >> 1)) = 0;
          *(_WORD *)(*(_QWORD *)(v36 + 488) + 2LL) = *(_WORD *)v1 + 2;
          **(_WORD **)(v36 + 488) = *(_WORD *)v1;
        }
      }
      v38 = *(_QWORD *)(v36 + 416);
      if ( v38 && (*(_DWORD *)(v38 + 12) & 0x40) != 0 )
        ClearAppStarting();
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    v2 = -1073741801;
  }
  UserSessionSwitchLeaveCrit(v38);
  return v2;
}
