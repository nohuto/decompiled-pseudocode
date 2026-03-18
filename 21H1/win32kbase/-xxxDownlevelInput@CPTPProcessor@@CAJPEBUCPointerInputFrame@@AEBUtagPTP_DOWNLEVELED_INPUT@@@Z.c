/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01AAB3C
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01AB120 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     InternalMapVirtualKeyEx @ 0x1C006F8A0 (InternalMapVirtualKeyEx.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01A8728 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     xxxProcessKeyEvent @ 0x1C01B3D60 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C01D08C4 (ApiSetEditionSynthesizeMouseWheel.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbx
  __int64 v6; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD LowPart; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // cf
  __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v16; // rax
  struct tagTHREADINFO *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 *v44; // r14
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v49[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v52; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  __int128 v54; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+98h] [rbp-68h] BYREF
  int *v57; // [rsp+B8h] [rbp-48h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+C8h] [rbp-38h] BYREF
  int *v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+F8h] [rbp-8h] BYREF
  int *v63; // [rsp+118h] [rbp+18h]
  __int64 v64; // [rsp+120h] [rbp+20h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)gptiCurrent + 140);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LowPart = PerformanceCounter.LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2, PerformanceCounter.QuadPart);
  v9 = *(unsigned int *)a2;
  if ( (int)v9 < 0 )
    goto LABEL_64;
  if ( (int)v9 > 1 )
  {
    if ( (_DWORD)v9 == 2 )
    {
      v10 = *((_QWORD *)gptiCurrent + 54);
      v11 = *((_DWORD *)a2 + 1) != 0;
      v49[0] = 0LL;
      v49[1] = v5;
      *(_DWORD *)((char *)v49 + 2) = (unsigned __int16)(v11 ? 16546 : -16222);
      v50 = 0LL;
      if ( v10 )
        LOBYTE(v49[0]) = InternalMapVirtualKeyEx(0xA2u, 0, *(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL));
      xxxProcessKeyEvent(v49, 0LL, 0LL, 0LL, 0LL, 0LL);
      return v2;
    }
LABEL_64:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    return (unsigned int)-1073741811;
  }
  v55 = 0LL;
  v54 = 0LL;
  WORD1(v54) = 128;
  v12 = 1024;
  if ( (_DWORD)v9 )
    v12 = 2048;
  WORD2(v54) = v12;
  WORD3(v54) = *((_WORD *)a2 + 2);
  UserSessionSwitchLeaveCrit(v9);
  ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v54, v6, LowPart, 1000);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v52 = 1;
    v16 = PsGetCurrentThreadWin32Thread(v14);
    v51 = v16;
    if ( v16 && (*(int *)(v16 + 24) > 0 || *(_DWORD *)(v51 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v46 = v52;
        v58 = 4LL;
        v57 = &v46;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v56);
      }
    }
  }
  else
  {
    v51 = 0LL;
  }
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v18 )
      v17 = *v18;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v17 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v51 )
    {
      v23 = *(unsigned int *)(v51 + 24);
      if ( *(_DWORD *)(v51 + 48) || (int)v23 > 0 )
      {
        *(_DWORD *)(v51 + 44) = 1;
        *(GUID *)(v51 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v47 = v52;
            v61 = 4LL;
            v60 = &v47;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v59);
            v24 = dword_1C024C960;
          }
          if ( v24 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v48 = v52;
            v64 = 4LL;
            v63 = &v48;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v62);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v23);
  gptiCurrent = v17;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v25)
    || (v28 = PsGetCurrentProcess(v27, v26),
        ProcessSessionId = PsGetProcessSessionIdEx(v28),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v33 = 0LL;
    if ( !IsThreadCrossSessionAttached(v27) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v33 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
    if ( v33
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v33 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v33 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v44 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v41 = *v44;
        v44[2] = 0LL;
        if ( !*(_DWORD *)(v41 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
        v43 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v43 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42);
        ExReleaseResourceAndLeaveCriticalRegion(*v43);
        HMUnlockObject(*v44);
        tagDomLock::LockExclusive(v43);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v2;
}
