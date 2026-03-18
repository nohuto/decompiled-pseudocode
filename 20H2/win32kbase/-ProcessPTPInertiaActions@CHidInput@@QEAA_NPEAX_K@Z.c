/*
 * XREFs of ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01A5268
 * Callers:
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3190 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0023C90 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CHidInput::ProcessPTPInertiaActions(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  CBaseInput *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rsi
  int v53; // [rsp+38h] [rbp-79h] BYREF
  int v54; // [rsp+3Ch] [rbp-75h] BYREF
  int v55; // [rsp+40h] [rbp-71h] BYREF
  __int64 v56; // [rsp+48h] [rbp-69h]
  unsigned __int8 v57; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+68h] [rbp-49h] BYREF
  int *v60; // [rsp+88h] [rbp-29h]
  int v61; // [rsp+90h] [rbp-21h]
  int v62; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+98h] [rbp-19h] BYREF
  int *v64; // [rsp+B8h] [rbp+7h]
  int v65; // [rsp+C0h] [rbp+Fh]
  int v66; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+C8h] [rbp+17h] BYREF
  int *v68; // [rsp+E8h] [rbp+37h]
  int v69; // [rsp+F0h] [rbp+3Fh]
  int v70; // [rsp+F4h] [rbp+43h]

  v4 = gpHidInput;
  *((_QWORD *)gpHidInput + 170) = a2;
  *((_QWORD *)v4 + 171) = a3;
  UserSessionSwitchLeaveCrit((__int64)this, a2, a3, a4);
  CRIMBase::SensorDoWorkAndWait((__int64)v4, 16LL, v5, v6);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v57 = 1;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v56 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v62 = 0;
        v53 = v57;
        v61 = 4;
        v60 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v59);
      }
    }
  }
  else
  {
    v56 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
  {
    *(_DWORD *)(v56 + 44) = 1;
    *(GUID *)(v56 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v66 = 0;
        v54 = v57;
        v65 = 4;
        v64 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v63);
        v18 = dword_1C0244A70;
      }
      if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v70 = 0;
        v55 = v57;
        v69 = 4;
        v68 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v67);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v21 = PsGetCurrentProcess(v20, v19),
        ProcessSessionId = PsGetProcessSessionIdEx(v21),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v25 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v25 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
    if ( v25
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v25 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v25 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v29, v30, v31);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35, v36);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v51 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v45 = *v51;
        v51[2] = 0LL;
        if ( !*(_DWORD *)(v45 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
        v48 = (PERESOURCE *)GetDomainLockRef(12LL, v41, v43, v44);
        if ( v48 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49, v50);
        ExReleaseResourceAndLeaveCriticalRegion(*v48);
        HMUnlockObject(*v51);
        tagDomLock::LockExclusive(v48);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return 1;
}
