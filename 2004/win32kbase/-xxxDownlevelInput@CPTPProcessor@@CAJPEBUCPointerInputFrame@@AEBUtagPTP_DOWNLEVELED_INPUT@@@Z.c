/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A4DDC
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A53C0 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     InternalMapVirtualKeyEx @ 0x1C0077600 (InternalMapVirtualKeyEx.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01A29C8 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C01CA944 (ApiSetEditionSynthesizeMouseWheel.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // cf
  __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v19; // rax
  struct tagTHREADINFO *v20; // rbx
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  PERESOURCE *v58; // rdi
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 *v61; // r14
  int v63; // [rsp+30h] [rbp-D0h] BYREF
  int v64; // [rsp+34h] [rbp-CCh] BYREF
  int v65; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v66[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v67; // [rsp+50h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v69; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  __int128 v71; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+98h] [rbp-68h] BYREF
  int *v74; // [rsp+B8h] [rbp-48h]
  __int64 v75; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+C8h] [rbp-38h] BYREF
  int *v77; // [rsp+E8h] [rbp-18h]
  __int64 v78; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+F8h] [rbp-8h] BYREF
  int *v80; // [rsp+118h] [rbp+18h]
  __int64 v81; // [rsp+120h] [rbp+20h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)gptiCurrent + 141);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LowPart = PerformanceCounter.LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2, PerformanceCounter.QuadPart);
  v12 = *(unsigned int *)a2;
  if ( (int)v12 < 0 )
    goto LABEL_64;
  if ( (int)v12 > 1 )
  {
    if ( (_DWORD)v12 == 2 )
    {
      v13 = *((_QWORD *)gptiCurrent + 54);
      v14 = *((_DWORD *)a2 + 1) != 0;
      v66[0] = 0LL;
      v66[1] = v5;
      *(_DWORD *)((char *)v66 + 2) = (unsigned __int16)(v14 ? 16546 : -16222);
      v67 = 0LL;
      if ( v13 )
        LOBYTE(v66[0]) = InternalMapVirtualKeyEx(0xA2u, 0, *(_QWORD *)(*(_QWORD *)(v13 + 48) + 32LL));
      xxxProcessKeyEvent(v66, 0LL, 0LL, 0LL, 0LL, 0LL);
      return v2;
    }
LABEL_64:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v10, v11);
    return (unsigned int)-1073741811;
  }
  v72 = 0LL;
  v71 = 0LL;
  WORD1(v71) = 128;
  v15 = 1024;
  if ( (_DWORD)v12 )
    v15 = 2048;
  WORD2(v71) = v15;
  WORD3(v71) = *((_WORD *)a2 + 2);
  UserSessionSwitchLeaveCrit(v12, v9, v10, v11);
  ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v71, v6, LowPart, 1000);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v69 = 1;
    v19 = PsGetCurrentThreadWin32Thread(v17);
    v68 = v19;
    if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v63 = v69;
        v75 = 4LL;
        v74 = &v63;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v73);
      }
    }
  }
  else
  {
    v68 = 0LL;
  }
  v20 = 0LL;
  while ( 1 )
  {
    v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v21 )
      v20 = *v21;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v23, v22);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v26, v25) == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v20 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v68 )
    {
      v26 = *(unsigned int *)(v68 + 24);
      if ( *(_DWORD *)(v68 + 48) || (int)v26 > 0 )
      {
        *(_DWORD *)(v68 + 44) = 1;
        *(GUID *)(v68 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v64 = v69;
            v78 = 4LL;
            v77 = &v64;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v76);
            v27 = dword_1C0246A70;
          }
          if ( v27 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v65 = v69;
            v81 = 4LL;
            v80 = &v65;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v79);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v26);
  gptiCurrent = v20;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v28)
    || (v31 = PsGetCurrentProcess(v30, v29),
        ProcessSessionId = PsGetProcessSessionIdEx(v31),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v36 = 0LL;
    if ( !IsThreadCrossSessionAttached(v30) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v36 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37);
    if ( v36
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v36 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v36 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, 0x8000LL, v40, v41);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v61 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v55 = *v61;
        v61[2] = 0LL;
        if ( !*(_DWORD *)(v55 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53, v54);
        v58 = (PERESOURCE *)GetDomainLockRef(12LL, v51, v53, v54);
        if ( v58 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v59, v60);
        ExReleaseResourceAndLeaveCriticalRegion(*v58);
        HMUnlockObject(*v61);
        tagDomLock::LockExclusive(v58);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v2;
}
