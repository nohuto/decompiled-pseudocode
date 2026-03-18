/*
 * XREFs of InitSystemThread @ 0x1C00349E0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ClearAppStarting @ 0x1C0034D80 (ClearAppStarting.c)
 *     InitClientInfo @ 0x1C00669B0 (InitClientInfo.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  const void **v1; // r15
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct tagKERNELHANDLETABLEENTRY *v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v34; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  PERESOURCE *v44; // rdi
  int v45; // [rsp+38h] [rbp-89h] BYREF
  int v46; // [rsp+3Ch] [rbp-85h] BYREF
  int v47; // [rsp+40h] [rbp-81h] BYREF
  const void **v48; // [rsp+48h] [rbp-79h]
  _BYTE ActivityId[28]; // [rsp+50h] [rbp-71h] BYREF
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
  v48 = a1;
  PsGetThreadProcess(KeGetCurrentThread());
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_OWORD *)&ActivityId[12] = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId[8] = 1;
    v37 = PsGetCurrentThreadWin32Thread(v4);
    *(_QWORD *)ActivityId = v37;
    if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(*(_QWORD *)ActivityId + 48LL)) )
    {
      EtwActivityIdControl(3u, (LPGUID)&ActivityId[12]);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v38, v39) )
        {
          v45 = ActivityId[8];
          v52 = 4LL;
          v51 = &v45;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            (const GUID *)&ActivityId[12],
            0LL,
            3u,
            &v50);
        }
      }
    }
  }
  else
  {
    *(_QWORD *)ActivityId = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
    && *(_QWORD *)ActivityId
    && (*(_DWORD *)(*(_QWORD *)ActivityId + 48LL) || *(int *)(*(_QWORD *)ActivityId + 24LL) > 0) )
  {
    *(_DWORD *)(*(_QWORD *)ActivityId + 44LL) = 1;
    *(_OWORD *)(*(_QWORD *)ActivityId + 28LL) = *(_OWORD *)&ActivityId[12];
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v13) )
      {
        v46 = ActivityId[8];
        v55 = 4LL;
        v54 = &v46;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          (const GUID *)&ActivityId[12],
          0LL,
          3u,
          &v53);
        v40 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v40 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v40, v41) )
      {
        v47 = ActivityId[8];
        v58 = 4LL;
        v57 = &v47;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          (const GUID *)&ActivityId[12],
          0LL,
          3u,
          &v56);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v34 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v34),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v25 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v25 + 2);
          v42 = *(_QWORD *)v25;
          *((_QWORD *)v25 + 2) = 0LL;
          if ( !*(_DWORD *)(v42 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
          v44 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v44 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v43);
          ExReleaseResourceAndLeaveCriticalRegion(*v44);
          HMUnlockObject(*(_QWORD *)v25);
          tagDomLock::LockExclusive((tagDomLock *)v44);
          v25 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v48;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v26 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v27 = Win32AllocPoolWithQuota(272LL, 1768125269LL);
  *(_QWORD *)(v26 + 472) = v27;
  if ( v27 )
  {
    v29 = *(_OWORD *)(v26 + 384);
    v30 = *(_QWORD *)(v26 + 400);
    *(_DWORD *)(v26 + 480) = *(_DWORD *)(v26 + 480) & 0xFFFFFFF3 | 4;
    *(_OWORD *)ActivityId = v29;
    *(_QWORD *)&ActivityId[16] = v30;
    if ( (unsigned int)InitClientInfo(v26) )
    {
      if ( v1 )
      {
        v31 = *(_QWORD *)(v26 + 488);
        if ( v31 )
          Win32FreePool(v31);
        v32 = Win32AllocPoolWithQuota(*(unsigned __int16 *)v1 + 18LL, 2020897621LL);
        *(_QWORD *)(v26 + 488) = v32;
        if ( v32 )
        {
          *(_QWORD *)(v32 + 8) = v32 + 16;
          memmove(*(void **)(*(_QWORD *)(v26 + 488) + 8LL), v1[1], *(unsigned __int16 *)v1);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 488) + 8LL) + 2 * ((unsigned __int64)*(unsigned __int16 *)v1 >> 1)) = 0;
          *(_WORD *)(*(_QWORD *)(v26 + 488) + 2LL) = *(_WORD *)v1 + 2;
          **(_WORD **)(v26 + 488) = *(_WORD *)v1;
        }
      }
      v28 = *(_QWORD *)(v26 + 416);
      if ( v28 && (*(_DWORD *)(v28 + 12) & 0x40) != 0 )
        ClearAppStarting();
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = -1073741801;
  }
  UserSessionSwitchLeaveCrit(v28);
  return v3;
}
