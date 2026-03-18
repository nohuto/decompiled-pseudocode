/*
 * XREFs of InitSystemThread @ 0x1C00B8540
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     InitClientInfo @ 0x1C004FDA8 (InitClientInfo.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     ClearAppStarting @ 0x1C0063520 (ClearAppStarting.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int128 v43; // xmm0
  __int64 v44; // xmm1_8
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v48; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v51; // rax
  unsigned int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // [rsp+38h] [rbp-89h] BYREF
  int v60; // [rsp+3Ch] [rbp-85h] BYREF
  int v61; // [rsp+40h] [rbp-81h] BYREF
  const void **v62; // [rsp+48h] [rbp-79h]
  _BYTE ActivityId[28]; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+70h] [rbp-51h] BYREF
  int *v65; // [rsp+90h] [rbp-31h]
  __int64 v66; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+A0h] [rbp-21h] BYREF
  int *v68; // [rsp+C0h] [rbp-1h]
  __int64 v69; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+D0h] [rbp+Fh] BYREF
  int *v71; // [rsp+F0h] [rbp+2Fh]
  __int64 v72; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v62 = a1;
  PsGetThreadProcess(KeGetCurrentThread());
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_OWORD *)&ActivityId[12] = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId[8] = 1;
    v51 = PsGetCurrentThreadWin32Thread(v4);
    *(_QWORD *)ActivityId = v51;
    if ( v51 && (*(int *)(v51 + 24) > 0 || *(_DWORD *)(*(_QWORD *)ActivityId + 48LL)) )
    {
      EtwActivityIdControl(3u, (LPGUID)&ActivityId[12]);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v59 = ActivityId[8];
        v66 = 4LL;
        v65 = &v59;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          (const GUID *)&ActivityId[12],
          0LL,
          3u,
          &v64);
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
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = ActivityId[8];
        v69 = 4LL;
        v68 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          (const GUID *)&ActivityId[12],
          0LL,
          3u,
          &v67);
        v52 = dword_1C0244A70;
      }
      if ( v52 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v61 = ActivityId[8];
        v72 = 4LL;
        v71 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          (const GUID *)&ActivityId[12],
          0LL,
          3u,
          &v70);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v48 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v48),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v20, v21, v22);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v36 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v36[2];
          v53 = *v36;
          v36[2] = 0LL;
          if ( !*(_DWORD *)(v53 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
          v56 = (PERESOURCE *)GetDomainLockRef(12LL, v32, v34, v35);
          if ( v56 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57, v58);
          ExReleaseResourceAndLeaveCriticalRegion(*v56);
          HMUnlockObject(*v36);
          tagDomLock::LockExclusive(v56);
          v36 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v62;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v38 = Win32AllocPoolWithQuota(272LL, 0x69637355u);
  *(_QWORD *)(v37 + 480) = v38;
  if ( v38 )
  {
    v43 = *(_OWORD *)(v37 + 392);
    v44 = *(_QWORD *)(v37 + 408);
    *(_DWORD *)(v37 + 488) = *(_DWORD *)(v37 + 488) & 0xFFFFFFF3 | 4;
    *(_OWORD *)ActivityId = v43;
    *(_QWORD *)&ActivityId[16] = v44;
    if ( (unsigned int)InitClientInfo(v37) )
    {
      if ( v1 )
      {
        v45 = *(_QWORD *)(v37 + 496);
        if ( v45 )
          Win32FreePool(v45);
        v46 = Win32AllocPoolWithQuota(*(unsigned __int16 *)v1 + 18LL, 0x78747355u);
        *(_QWORD *)(v37 + 496) = v46;
        if ( v46 )
        {
          *(_QWORD *)(v46 + 8) = v46 + 16;
          memmove(*(void **)(*(_QWORD *)(v37 + 496) + 8LL), v1[1], *(unsigned __int16 *)v1);
          v39 = (unsigned __int64)*(unsigned __int16 *)v1 >> 1;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 496) + 8LL) + 2 * v39) = 0;
          *(_WORD *)(*(_QWORD *)(v37 + 496) + 2LL) = *(_WORD *)v1 + 2;
          **(_WORD **)(v37 + 496) = *(_WORD *)v1;
        }
      }
      v40 = *(_QWORD *)(v37 + 424);
      if ( v40 )
      {
        v39 = *(unsigned int *)(v40 + 12);
        if ( (v39 & 0x40) != 0 )
          ClearAppStarting(v40);
      }
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
  UserSessionSwitchLeaveCrit(v40, v39, v41, v42);
  return v3;
}
