/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A2A5C
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A3040 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C004F9B0 (InternalMapVirtualKeyEx.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01A0648 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     xxxProcessKeyEvent @ 0x1C01ABC80 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C01C85C4 (ApiSetEditionSynthesizeMouseWheel.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // r14
  int v61; // [rsp+30h] [rbp-D0h] BYREF
  int v62; // [rsp+34h] [rbp-CCh] BYREF
  int v63; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v64[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v67; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  __int128 v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+98h] [rbp-68h] BYREF
  int *v72; // [rsp+B8h] [rbp-48h]
  __int64 v73; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+C8h] [rbp-38h] BYREF
  int *v75; // [rsp+E8h] [rbp-18h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+F8h] [rbp-8h] BYREF
  int *v78; // [rsp+118h] [rbp+18h]
  __int64 v79; // [rsp+120h] [rbp+20h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)gptiCurrent + 142);
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
      v13 = *((_QWORD *)gptiCurrent + 55);
      v14 = *((_DWORD *)a2 + 1) != 0;
      v64[0] = 0LL;
      v64[1] = v5;
      *(_DWORD *)((char *)v64 + 2) = (unsigned __int16)(v14 ? 16546 : -16222);
      v65 = 0LL;
      if ( v13 )
        LOBYTE(v64[0]) = InternalMapVirtualKeyEx(0xA2u, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 48) + 32LL));
      xxxProcessKeyEvent(v64, 0LL, 0LL, 0LL, 0LL, 0LL);
      return v2;
    }
LABEL_64:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v10, v11);
    return (unsigned int)-1073741811;
  }
  v70 = 0LL;
  v69 = 0LL;
  WORD1(v69) = 128;
  v15 = 1024;
  if ( (_DWORD)v12 )
    v15 = 2048;
  WORD2(v69) = v15;
  WORD3(v69) = *((_WORD *)a2 + 2);
  UserSessionSwitchLeaveCrit(v12, v9, v10, v11);
  ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v69, v6, LowPart, 1000);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v67 = 1;
    v19 = PsGetCurrentThreadWin32Thread(v17);
    v66 = v19;
    if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v61 = v67;
        v73 = 4LL;
        v72 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v71);
      }
    }
  }
  else
  {
    v66 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v66 && (*(_DWORD *)(v66 + 48) || *(int *)(v66 + 24) > 0) )
  {
    *(_DWORD *)(v66 + 44) = 1;
    *(GUID *)(v66 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v62 = v67;
        v76 = 4LL;
        v75 = &v62;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v74);
        v27 = dword_1C0244A70;
      }
      if ( v27 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v63 = v67;
        v79 = 4LL;
        v78 = &v63;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v77);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v20;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v30 = PsGetCurrentProcess(v29, v28),
        ProcessSessionId = PsGetProcessSessionIdEx(v30),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v34 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v34 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v35);
    if ( v34
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v34 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v34 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, 0x8000LL, v38, v39);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43, v44);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47, v48);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v59 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v53 = *v59;
        v59[2] = 0LL;
        if ( !*(_DWORD *)(v53 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
        v56 = (PERESOURCE *)GetDomainLockRef(12LL, v49, v51, v52);
        if ( v56 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57, v58);
        ExReleaseResourceAndLeaveCriticalRegion(*v56);
        HMUnlockObject(*v59);
        tagDomLock::LockExclusive(v56);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v2;
}
